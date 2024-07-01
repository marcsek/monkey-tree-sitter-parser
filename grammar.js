module.exports = grammar({
  name: "monkey",

  rules: {
    source_file: ($) => repeat($._statements),

    _statements: ($) =>
      choice($.return_statement, $.expression_statement, $.let_statement),

    expression_statement: ($) => seq($._expression, optional(";")),

    _expression: ($) =>
      choice(
        $.identifier,
        $.number,
        $.function_declaration,
        $.if_expression,
        $.true,
        $.false,
      ),

    return_statement: ($) => seq("return", $._expression, optional(";")),

    let_statement: ($) =>
      seq(
        "let",
        field("left", $.identifier),
        "=",
        field("right", $._expression),
        optional(";"),
      ),

    if_expression: ($) =>
      seq(
        "if",
        $.condition,
        field("consequence", $.block),
        optional(seq("else", field("alternative", $.block))),
      ),

    condition: ($) => seq("(", $._expression, ")"),

    function_declaration: ($) =>
      seq("fn", field("parameters", $.parameters), field("body", $.block)),

    parameters: ($) =>
      seq(
        "(",
        optional(seq($.identifier, repeat(seq(",", $.identifier)))),
        ")",
      ),

    block: ($) => seq("{", repeat($._statements), "}"),

    identifier: ($) => /[a-z]+/,
    number: ($) => /\d+/,
    true: ($) => "true",
    false: ($) => "false",
  },
});
