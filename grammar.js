module.exports = grammar({
  name: 'mdx',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  conflicts: $ => [
    [$.jsx_attribute, $.jsx_spread_attribute],
    [$.document, $.paragraph],
    [$.blockquote],
    [$.heading],
    [$.ordered_list],
    [$.unordered_list],
    [$.ordered_list_item],
    [$.unordered_list_item],
    [$.parameter, $.primary_expression],
    [$.function_declaration, $.primary_expression],
    [$.jsx_expression, $.mdx_expression],
    [$.block_statement, $.object_literal],
    [$.return_statement],
    [$.if_statement],
  ],

  rules: {
    document: $ => repeat(
      choice(
        prec(3, $.frontmatter),
        prec(2, $.esm_statement),
        prec(2, $.jsx_element),
        prec(2, $.jsx_self_closing_element),
        prec(2, $.mdx_expression),
        prec(2, $.heading),
        prec(2, $.code_block),
        prec(2, $.blockquote),
        prec(2, $.list),
        prec(2, $.thematic_break),
        prec(1, $.paragraph),
        prec(0, $.text),
      )
    ),

    // Frontmatter
    frontmatter: $ => seq(
      '---',
      repeat($.frontmatter_entry),
      '---',
    ),

    frontmatter_entry: $ => seq(
      $.identifier,
      ':',
      choice(
        $.string_literal,
        $.number_literal,
        $.boolean_literal,
        $.identifier,
      ),
    ),

    // ESM statements
    esm_statement: $ => choice(
      $.import_statement,
      $.export_statement,
    ),

    import_statement: $ => seq(
      'import',
      optional($.import_clause),
      'from',
      $.string_literal,
      optional(';'),
    ),

    import_clause: $ => choice(
      $.identifier,
      seq('{', commaSep($.import_specifier), '}'),
      seq($.identifier, ',', '{', commaSep($.import_specifier), '}'),
    ),

    import_specifier: $ => choice(
      $.identifier,
      seq($.identifier, 'as', $.identifier),
    ),

    export_statement: $ => seq(
      'export',
      choice(
        seq('default', $.export_default_declaration),
        seq('const', $.variable_declarator),
        seq('function', $.function_declaration),
        seq('{', commaSep($.export_specifier), '}'),
      ),
      optional(';'),
    ),

    export_default_declaration: $ => choice(
      $.function_declaration,
      $.expression,
    ),

    export_specifier: $ => choice(
      $.identifier,
      seq($.identifier, 'as', $.identifier),
    ),

    variable_declarator: $ => seq(
      $.identifier,
      optional(seq('=', $.expression)),
    ),

    function_declaration: $ => seq(
      $.identifier,
      '(',
      commaSep($.parameter),
      ')',
      $.block_statement,
    ),

    parameter: $ => $.identifier,

    block_statement: $ => seq(
      '{',
      repeat($.statement),
      '}',
    ),

    statement: $ => choice(
      $.expression_statement,
      $.return_statement,
      $.if_statement,
      $.variable_declaration,
      $.block_statement,
    ),

    expression_statement: $ => seq(
      $.expression,
      optional(';'),
    ),

    return_statement: $ => seq(
      'return',
      optional($.expression),
      optional(';'),
    ),

    if_statement: $ => prec.right(seq(
      'if',
      '(',
      $.expression,
      ')',
      $.statement,
      optional(seq('else', $.statement)),
    )),

    variable_declaration: $ => seq(
      'const',
      $.variable_declarator,
      optional(';'),
    ),

    // JSX elements
    jsx_element: $ => seq(
      $.jsx_opening_element,
      repeat(choice(
        $.jsx_text,
        $.jsx_element,
        $.jsx_self_closing_element,
        $.jsx_expression,
        $.mdx_expression,
        $.text,
      )),
      $.jsx_closing_element,
    ),

    jsx_opening_element: $ => seq(
      '<',
      $.jsx_element_name,
      repeat(choice(
        $.jsx_attribute,
        $.jsx_spread_attribute,
      )),
      '>',
    ),

    jsx_closing_element: $ => seq(
      '</',
      $.jsx_element_name,
      '>',
    ),

    jsx_self_closing_element: $ => seq(
      '<',
      $.jsx_element_name,
      repeat(choice(
        $.jsx_attribute,
        $.jsx_spread_attribute,
      )),
      '/>',
    ),

    jsx_element_name: $ => choice(
      $.identifier,
      $.jsx_member_expression,
    ),

    jsx_member_expression: $ => seq(
      $.jsx_element_name,
      '.',
      $.identifier,
    ),

    jsx_attribute: $ => seq(
      $.jsx_attribute_name,
      optional(seq('=', $.jsx_attribute_value)),
    ),

    jsx_attribute_name: $ => $.identifier,

    jsx_attribute_value: $ => choice(
      $.string_literal,
      $.jsx_expression,
    ),

    jsx_spread_attribute: $ => seq(
      '{',
      '...',
      $.expression,
      '}',
    ),

    jsx_expression: $ => seq(
      '{',
      optional(choice(
        $.expression,
        $.jsx_comment,
      )),
      '}',
    ),

    jsx_comment: $ => seq(
      '/*',
      repeat(choice(
        /[^*]+/,
        seq('*', /[^/]/),
      )),
      '*/',
    ),

    jsx_text: $ => token(prec(-1, /[^<{}\n]+/)),

    // MDX expressions
    mdx_expression: $ => seq(
      '{',
      choice(
        $.expression,
        $.jsx_comment,
      ),
      '}',
    ),

    // Markdown blocks
    heading: $ => prec.left(seq(
      /#{1,6}/,
      repeat1(choice(
        $.text,
        $.jsx_text,
        $.mdx_expression,
        $.inline_element,
      )),
    )),

    paragraph: $ => prec.left(repeat1(choice(
      $.text,
      $.jsx_text,
      $.mdx_expression,
      $.inline_element,
      $.jsx_element,
      $.jsx_self_closing_element,
    ))),

    inline_element: $ => choice(
      $.emphasis,
      $.strong,
      $.code_span,
      $.link,
      $.image,
    ),

    emphasis: $ => seq(
      '*',
      repeat1(choice($.text, $.jsx_text, $.mdx_expression)),
      '*',
    ),

    strong: $ => seq(
      '**',
      repeat1(choice($.text, $.jsx_text, $.mdx_expression)),
      '**',
    ),

    code_span: $ => seq(
      '`',
      repeat1(/[^`\n]/),
      '`',
    ),

    link: $ => seq(
      '[',
      repeat(choice($.text, $.jsx_text, $.mdx_expression)),
      ']',
      '(',
      $.url,
      ')',
    ),

    image: $ => seq(
      '![',
      repeat(choice($.text, $.jsx_text, $.mdx_expression)),
      ']',
      '(',
      $.url,
      ')',
    ),

    url: $ => /[^\s)]+/,

    code_block: $ => seq(
      '```',
      optional($.language),
      /\n/,
      repeat($.code_line),
      '```',
    ),

    language: $ => /[a-zA-Z0-9_+-]+/,

    code_line: $ => /[^\n]+/,

    blockquote: $ => prec.left(seq(
      '>',
      repeat1(choice(
        $.text,
        $.jsx_text,
        $.mdx_expression,
        $.inline_element,
      )),
    )),

    list: $ => choice(
      $.ordered_list,
      $.unordered_list,
    ),

    ordered_list: $ => prec.left(repeat1($.ordered_list_item)),

    unordered_list: $ => prec.left(repeat1($.unordered_list_item)),

    ordered_list_item: $ => prec.left(seq(
      /[0-9]+\./,
      repeat1(choice(
        $.text,
        $.jsx_text,
        $.mdx_expression,
        $.inline_element,
      )),
    )),

    unordered_list_item: $ => prec.left(seq(
      /[-*+]/,
      repeat1(choice(
        $.text,
        $.jsx_text,
        $.mdx_expression,
        $.inline_element,
      )),
    )),

    thematic_break: $ => /(\*{3,}|-{3,}|_{3,})/,

    // JavaScript expressions
    expression: $ => choice(
      $.primary_expression,
      $.binary_expression,
      $.unary_expression,
      $.assignment_expression,
      $.conditional_expression,
      $.call_expression,
      $.member_expression,
      $.function_expression,
      $.arrow_function,
    ),

    primary_expression: $ => choice(
      $.identifier,
      $.string_literal,
      $.number_literal,
      $.boolean_literal,
      $.null_literal,
      $.undefined_literal,
      $.array_literal,
      $.object_literal,
      $.parenthesized_expression,
      $.jsx_element,
      $.jsx_self_closing_element,
    ),

    parenthesized_expression: $ => seq(
      '(',
      $.expression,
      ')',
    ),

    binary_expression: $ => choice(
      prec.left(11, seq($.expression, '*', $.expression)),
      prec.left(11, seq($.expression, '/', $.expression)),
      prec.left(10, seq($.expression, '+', $.expression)),
      prec.left(10, seq($.expression, '-', $.expression)),
      prec.left(6, seq($.expression, '===', $.expression)),
      prec.left(6, seq($.expression, '!==', $.expression)),
      prec.left(6, seq($.expression, '>', $.expression)),
      prec.left(6, seq($.expression, '<', $.expression)),
      prec.left(3, seq($.expression, '&&', $.expression)),
      prec.left(2, seq($.expression, '||', $.expression)),
    ),

    unary_expression: $ => prec.right(14, seq(
      choice('!', '-', '+', 'typeof'),
      $.expression,
    )),

    assignment_expression: $ => prec.right(1, seq(
      $.expression,
      '=',
      $.expression,
    )),

    conditional_expression: $ => prec.right(0, seq(
      $.expression,
      '?',
      $.expression,
      ':',
      $.expression,
    )),

    call_expression: $ => prec.left(18, seq(
      $.expression,
      '(',
      commaSep($.expression),
      ')',
    )),

    member_expression: $ => prec.left(17, seq(
      $.expression,
      choice(
        seq('.', $.identifier),
        seq('[', $.expression, ']'),
      ),
    )),

    function_expression: $ => seq(
      'function',
      optional($.identifier),
      '(',
      commaSep($.parameter),
      ')',
      $.block_statement,
    ),

    arrow_function: $ => prec.right(seq(
      choice(
        $.identifier,
        seq('(', commaSep($.parameter), ')'),
      ),
      '=>',
      choice(
        $.expression,
        $.block_statement,
      ),
    )),

    array_literal: $ => seq(
      '[',
      commaSep(optional($.expression)),
      ']',
    ),

    object_literal: $ => seq(
      '{',
      commaSep($.property),
      '}',
    ),

    property: $ => choice(
      seq($.identifier, ':', $.expression),
      seq($.string_literal, ':', $.expression),
      seq('...', $.expression),
    ),

    // Literals
    identifier: $ => /[a-zA-Z_$][a-zA-Z0-9_$]*/,

    string_literal: $ => choice(
      seq('"', repeat(choice(/[^"\\]/, /\\./)), '"'),
      seq("'", repeat(choice(/[^'\\]/, /\\./)), "'"),
      seq('`', repeat(choice(/[^`\\]/, /\\./, $.template_substitution)), '`'),
    ),

    template_substitution: $ => seq(
      '${',
      $.expression,
      '}',
    ),

    number_literal: $ => /[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?/,

    boolean_literal: $ => choice('true', 'false'),

    null_literal: $ => 'null',

    undefined_literal: $ => 'undefined',

    // Basic text content
    text: $ => token(prec(-2, /[^\n\r<>{}#`*_\[\]!-]+/)),

    // Comments
    comment: $ => choice(
      seq('//', /[^\n\r]*/),
      seq('/*', repeat(choice(/[^*]+/, seq('*', /[^/]/))), '*/'),
    ),
  }
});

function commaSep(rule) {
  return optional(seq(rule, repeat(seq(',', rule))));
}