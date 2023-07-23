#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ATproc = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_SEMI = 7,
  anon_sym_EQ = 8,
  sym_int_literal = 9,
  sym_identifier = 10,
  sym_intrinsic = 11,
  sym_source_file = 12,
  sym__declaration = 13,
  sym_procedure_declaration = 14,
  sym_parameter_list = 15,
  sym_argument_list = 16,
  sym_block = 17,
  sym_statement = 18,
  sym_expression_statement = 19,
  sym_assignment_statement = 20,
  sym__expression = 21,
  sym_call_expression = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_argument_list_repeat1 = 24,
  aux_sym_block_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATproc] = "@proc",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [sym_int_literal] = "int_literal",
  [sym_identifier] = "identifier",
  [sym_intrinsic] = "intrinsic",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_procedure_declaration] = "procedure_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_argument_list] = "argument_list",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_expression_statement] = "expression_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym__expression] = "_expression",
  [sym_call_expression] = "call_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATproc] = anon_sym_ATproc,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_int_literal] = sym_int_literal,
  [sym_identifier] = sym_identifier,
  [sym_intrinsic] = sym_intrinsic,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_procedure_declaration] = sym_procedure_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_argument_list] = sym_argument_list,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym__expression] = sym__expression,
  [sym_call_expression] = sym_call_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATproc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_intrinsic] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_procedure_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 6:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_ATproc);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_intrinsic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATproc] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym__declaration] = STATE(15),
    [sym_procedure_declaration] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATproc] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      sym_int_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_intrinsic,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(36), 2,
      sym_expression_statement,
      sym_assignment_statement,
    STATE(28), 3,
      sym_block,
      sym__expression,
      sym_call_expression,
  [29] = 8,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      sym_int_literal,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(28), 1,
      sym_intrinsic,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(36), 2,
      sym_expression_statement,
      sym_assignment_statement,
    STATE(33), 3,
      sym_block,
      sym__expression,
      sym_call_expression,
  [58] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_intrinsic,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_int_literal,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(36), 2,
      sym_expression_statement,
      sym_assignment_statement,
    STATE(26), 3,
      sym_block,
      sym__expression,
      sym_call_expression,
  [87] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      sym_int_literal,
    ACTIONS(15), 2,
      sym_identifier,
      sym_intrinsic,
    STATE(22), 3,
      sym_block,
      sym__expression,
      sym_call_expression,
  [106] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      sym_int_literal,
    ACTIONS(15), 2,
      sym_identifier,
      sym_intrinsic,
    STATE(31), 3,
      sym_block,
      sym__expression,
      sym_call_expression,
  [125] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_int_literal,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 2,
      sym_identifier,
      sym_intrinsic,
    STATE(31), 3,
      sym_block,
      sym__expression,
      sym_call_expression,
  [144] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_int_literal,
    ACTIONS(15), 2,
      sym_identifier,
      sym_intrinsic,
    STATE(31), 3,
      sym_block,
      sym__expression,
      sym_call_expression,
  [160] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(15), 2,
      sym_identifier,
      sym_intrinsic,
    STATE(34), 3,
      sym_block,
      sym__expression,
      sym_call_expression,
  [176] = 1,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_ATproc,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [185] = 1,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_ATproc,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [194] = 1,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_ATproc,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [203] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_ATproc,
    STATE(13), 3,
      sym__declaration,
      sym_procedure_declaration,
      aux_sym_source_file_repeat1,
  [215] = 1,
    ACTIONS(58), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_int_literal,
      sym_identifier,
      sym_intrinsic,
  [223] = 3,
    ACTIONS(5), 1,
      anon_sym_ATproc,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(13), 3,
      sym__declaration,
      sym_procedure_declaration,
      aux_sym_source_file_repeat1,
  [235] = 1,
    ACTIONS(62), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [242] = 1,
    ACTIONS(64), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [249] = 1,
    ACTIONS(66), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [256] = 1,
    ACTIONS(68), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [263] = 1,
    ACTIONS(70), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [270] = 3,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_argument_list_repeat1,
  [280] = 3,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_argument_list_repeat1,
  [290] = 3,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_EQ,
    STATE(19), 1,
      sym_argument_list,
  [300] = 3,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_argument_list_repeat1,
  [310] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
  [317] = 2,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      anon_sym_SEMI,
  [324] = 2,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_parameter_list,
  [331] = 2,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      anon_sym_SEMI,
  [338] = 2,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_argument_list,
  [345] = 1,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_ATproc,
  [350] = 1,
    ACTIONS(82), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [355] = 1,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
  [359] = 1,
    ACTIONS(89), 1,
      anon_sym_SEMI,
  [363] = 1,
    ACTIONS(97), 1,
      anon_sym_SEMI,
  [367] = 1,
    ACTIONS(99), 1,
      sym_identifier,
  [371] = 1,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [375] = 1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [379] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 215,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 242,
  [SMALL_STATE(18)] = 249,
  [SMALL_STATE(19)] = 256,
  [SMALL_STATE(20)] = 263,
  [SMALL_STATE(21)] = 270,
  [SMALL_STATE(22)] = 280,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 300,
  [SMALL_STATE(25)] = 310,
  [SMALL_STATE(26)] = 317,
  [SMALL_STATE(27)] = 324,
  [SMALL_STATE(28)] = 331,
  [SMALL_STATE(29)] = 338,
  [SMALL_STATE(30)] = 345,
  [SMALL_STATE(31)] = 350,
  [SMALL_STATE(32)] = 355,
  [SMALL_STATE(33)] = 359,
  [SMALL_STATE(34)] = 363,
  [SMALL_STATE(35)] = 367,
  [SMALL_STATE(36)] = 371,
  [SMALL_STATE(37)] = 375,
  [SMALL_STATE(38)] = 379,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(23),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Hat(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
