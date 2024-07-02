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

(parameter_list (identifier) @variable.parameter)
(call function:(identifier) @function.call)
((call function:(identifier) @function.builtin)
(#match? @function.builtin "^puts|len|first|last|rest|push$"))

; Special
["(" ")" "{" "}" "[" "]"] @punctuation.bracket
[";" "," ":"] @punctuation.delimiter
["+" "-" "*" "/" "==" "!=" "<" ">" "!" "="] @operator
