; highlights.scm

; Keywords
"fn" @keyword.function
"let" @keyword
"return" @keyword
"if" @keyword.conditional
"else" @keyword.conditional
(true) @constant.builtin
(false) @constant.builtin

; Primitives
(number) @number
(identifier) @variable
(string) @string

(parameters (identifier) @variable.parameter)
(call (identifier) @function.call)


; Special
["(" ")" "{" "}" "[" "]"] @punctuation.bracket
[";" "," ":"] @punctuation.delimiter
["+" "-" "*" "/" "==" "!=" "<" ">" "!" "="] @operator
