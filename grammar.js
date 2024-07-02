const precedence = {
  lowest: 0,
  equals: 1,
  lessgreater: 2,
  sum: 3,
  product: 4,
  prefix: 5,
  call: 7,
  index: 8,
};

module.exports = grammar({
  name: "monkey",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      seq(
        choice($.return_statement, $.expression_statement, $.let_statement),
        choice(";", "\n"),
      ),

    expression_statement: ($) => choice($._expression),

    _expression: ($) =>
      choice(
        $.identifier,
        $.number,
        $.function_declaration,
        $.if_expression,
        $.true,
        $.false,
        $.string,
        $.infix_expression,
        $.prefix_expression,
        $.grouped_expression,
        $.array_expression,
        $.hash_expression,
        $.index,
        $.call,
      ),

    return_statement: ($) => seq("return", $._expression),

    prefix_expression: ($) =>
      prec(
        precedence.prefix,
        seq(choice("-", "!"), field("operand", $._expression)),
      ),

    infix_expression: ($) =>
      choice(
        prec.left(
          precedence.sum,
          seq(
            field("left", $._expression),
            field("operator", "+"),
            field("right", $._expression),
          ),
        ),
        prec.left(
          precedence.sum,
          seq(
            field("left", $._expression),
            field("operator", "-"),
            field("right", $._expression),
          ),
        ),
        prec.left(
          precedence.product,
          seq(
            field("left", $._expression),
            field("operator", "*"),
            field("right", $._expression),
          ),
        ),
        prec.left(
          precedence.product,
          seq(
            field("left", $._expression),
            field("operator", "/"),
            field("right", $._expression),
          ),
        ),
        prec.left(
          precedence.equals,
          seq(
            field("left", $._expression),
            field("operator", "=="),
            field("right", $._expression),
          ),
        ),
        prec.left(
          precedence.equals,
          seq(
            field("left", $._expression),
            field("operator", "!="),
            field("right", $._expression),
          ),
        ),
        prec.left(
          precedence.lessgreater,
          seq(
            field("left", $._expression),
            field("operator", "<"),
            field("right", $._expression),
          ),
        ),
        prec.left(
          precedence.lessgreater,
          seq(
            field("left", $._expression),
            field("operator", ">"),
            field("right", $._expression),
          ),
        ),
      ),

    grouped_expression: ($) =>
      prec(precedence.call, seq("(", $._expression, ")")),

    // LET
    let_statement: ($) =>
      seq(
        "let",
        field("left", $.identifier),
        "=",
        field("right", $._expression),
      ),
    // ---

    // IF
    if_expression: ($) =>
      seq(
        "if",
        "(",
        field("condition", $._expression),
        ")",
        field("consequence", $.block),
        optional(seq("else", field("alternative", $.block))),
      ),
    // ---

    // FUNCTION
    function_declaration: ($) =>
      seq("fn", field("parameters", $.parameter_list), field("body", $.block)),

    parameters: ($) =>
      seq(
        "(",
        optional(seq($.identifier, repeat(seq(",", $.identifier)))),
        ")",
      ),

    block: ($) => seq("{", repeat($._statement), "}"),

    parameter_list: ($) =>
      seq(
        "(",
        optional(seq($.identifier, repeat(seq(",", $.identifier)))),
        ")",
      ),

    call: ($) =>
      prec.left(
        precedence.call,
        seq(
          field("function", $._expression),
          field("arguments", $.argument_list),
        ),
      ),

    argument_list: ($) =>
      seq(
        "(",
        optional(seq($._expression, repeat(seq(",", $._expression)))),
        ")",
      ),
    // ---

    // ARRAY
    array_expression: ($) =>
      seq(
        "[",
        optional(seq($._expression, repeat(seq(",", $._expression)))),
        "]",
      ),
    // --

    // HASH
    hash_expression: ($) =>
      seq("{", optional(seq($.pair, repeat(seq(",", $.pair)))), "}"),

    pair: ($) =>
      seq(field("key", $._expression), ":", field("value", $._expression)),
    // --

    index: ($) =>
      prec.left(
        precedence.index,
        seq(
          field("operand", $._expression),
          "[",
          field("index", $._expression),
          "]",
        ),
      ),

    identifier: ($) => /[a-zA-Z]+/,
    number: ($) => /\d+/,
    string: ($) => seq('"', repeat(/[^\"]/), '"'),
    true: ($) => "true",
    false: ($) => "false",
  },
});
