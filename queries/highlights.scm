; highlights.scm

; Keywords
"fn" @keyword.function
"let" @keyword
"return" @keyword
"if" @keyword.conditional
"else" @keyword.conditional

; Primitives
(number) @number
(identifier) @variable

(parameters (identifier) @variable.parameter)

; Special
["(" ")" "{" "}"] @punctuation.bracket
