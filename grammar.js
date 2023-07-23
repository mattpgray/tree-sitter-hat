module.exports = grammar({
  name: 'Hat',

    // not possible to differentiate between block statements and block expressions in the grammar
  conflicts: [
      ['expression_statement', '_expression']
  ],

  rules: {
    source_file: $ => repeat($._declaration),

    _declaration: $ => choice(
        $.procedure_declaration
    ),

    procedure_declaration: $ => seq(
        '@proc',
        $.identifier,
        $.parameter_list,
        $.block
    ),

    parameter_list: $ => seq(
        '(',
        // TODO: Parameters
        ')',
    ),

    argument_list: $ => seq(
        '(',
        optional(
            seq(
                $._expression,
                repeat(seq(',',$._expression)),
                optional(',')
            )
        ),
        ')',
    ),

    block: $ => seq(
        '{',
            seq(
                repeat(
                   $.statement,
                ),
                optional($._expression)
            ),
        '}'
    ),

    statement: $ => choice(
        seq($._pure_statement, ';'),
        $.expression_statement,
    ),

    _pure_statement: $ => choice(
        $.assignment_statement,
    ),

    assignment_statement: $ => seq(
        $.identifier,
        '=',
        $._expression
    ),

    expression_statement: $ => choice(
      seq($._pure_expression, ';'),
      $._block_expression,
    ),

    _expression: $ => choice(
      $._pure_expression,
      $._block_expression,
    ),

    _pure_expression: $ => choice(
      $.int_literal,
      $.call_expression
    ),

    _block_expression: $ => choice(
      $.block,
    ),

    call_expression: $ => seq(
        choice($.identifier, $.intrinsic),
        $.argument_list
    ),

    int_literal: $ => /\d+/,

    identifier: $ => /[a-zA-Z_][a-z-A-Z0-9_]*/,
    intrinsic: $ => /@[a-zA-Z_][a-z-A-Z0-9_]*/,
  }
});

