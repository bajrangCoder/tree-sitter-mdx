/** * @file tree-sitter grammar for mdx
 * @author Raunak Raj
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "mdx",

  rules: {
    // The root node
    source_file: ($) =>
      repeat(
        choice(
          $.text,
          $.jsx_element,
          $.jsx_expression,
          $.import_statement,
          $.export_statement,
        )
    ),

    // text content (anything that's not JSX)
    text: ($) => /[^<{]+/,
    
    import_statement: ($) => seq("import", /[^;]+/, ";"),
    export_statement: ($) => seq("export", /[^;]+/, ";"),

    // JSX Elements
    jsx_element: ($) =>
      choice(
        $.self_closing_element,
        seq($.opening_element, optional($.jsx_content), $.closing_element),
      ),

    jsx_content: ($) =>
      repeat1(choice($.text, $.jsx_element, $.jsx_expression)),

    opening_element: ($) => seq("<", $.identifier, optional($.attributes), ">"),

    closing_element: ($) => seq("</", $.identifier, ">"),

    self_closing_element: ($) =>
      seq("<", $.identifier, optional($.attributes), "/>"),

    // Attributes for JSX elements
    attributes: ($) => repeat1($.attribute),

    attribute: ($) =>
      seq($.identifier, optional(seq("=", choice($.string, $.jsx_expression)))),

    // JSX expressions (code within curly braces)
    jsx_expression: ($) => seq("{", /[^}]*/, "}"),
    //jsx_expression: ($) =>
     // seq("{", repeat(choice($.text, $.jsx_element, $.jsx_expression, /[^{}<>]+/)), "}"),

    identifier: ($) => /[a-zA-Z][a-zA-Z0-9_-]*/,

    string: ($) =>
      choice(
        seq('"', repeat(choice(/[^"\\]/, $.escape_sequence)), '"'),
        seq("'", repeat(choice(/[^'\\]/, $.escape_sequence)), "'")
      ),

    // Escape sequences for strings
    escape_sequence: ($) => /\\./,
  },
});
