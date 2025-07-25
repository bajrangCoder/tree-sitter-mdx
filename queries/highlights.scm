; Keywords
"import" @keyword
"from" @keyword
"export" @keyword
"default" @keyword

; Operators
"+" @operator
"-" @operator
"*" @operator
"/" @operator
"===" @operator
"!==" @operator

; Punctuation
"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"," @punctuation.delimiter
";" @punctuation.delimiter
"." @punctuation.delimiter

; JSX
(jsx_element_name) @tag
"<" @tag
">" @tag
"</" @tag
"/>" @tag

; Markdown
(heading (text) @markup.heading)
(language) @label
(code_line) @string

; Literals
(string_literal) @string
(number_literal) @number
(identifier) @variable

; Functions
(call_expression
  (expression
    (primary_expression
      (identifier) @function.call)))