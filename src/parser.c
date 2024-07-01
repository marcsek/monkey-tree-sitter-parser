#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_return = 2,
  anon_sym_let = 3,
  anon_sym_EQ = 4,
  anon_sym_if = 5,
  anon_sym_else = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_fn = 9,
  anon_sym_COMMA = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  sym_identifier = 13,
  sym_number = 14,
  sym_true = 15,
  sym_false = 16,
  sym_source_file = 17,
  sym__statements = 18,
  sym_expression_statement = 19,
  sym__expression = 20,
  sym_return_statement = 21,
  sym_let_statement = 22,
  sym_if_expression = 23,
  sym_condition = 24,
  sym_function_declaration = 25,
  sym_parameters = 26,
  sym_block = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_parameters_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_fn] = "fn",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__statements] = "_statements",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_return_statement] = "return_statement",
  [sym_let_statement] = "let_statement",
  [sym_if_expression] = "if_expression",
  [sym_condition] = "condition",
  [sym_function_declaration] = "function_declaration",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_source_file] = sym_source_file,
  [sym__statements] = sym__statements,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_return_statement] = sym_return_statement,
  [sym_let_statement] = sym_let_statement,
  [sym_if_expression] = sym_if_expression,
  [sym_condition] = sym_condition,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameters] = sym_parameters,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [anon_sym_fn] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_body = 2,
  field_consequence = 3,
  field_left = 4,
  field_parameters = 5,
  field_right = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_parameters] = "parameters",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_consequence, 2},
  [1] =
    {field_body, 2},
    {field_parameters, 1},
  [3] =
    {field_left, 1},
    {field_right, 3},
  [5] =
    {field_alternative, 4},
    {field_consequence, 2},
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
  [5] = 3,
  [6] = 6,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 9,
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
  [29] = 28,
  [30] = 30,
  [31] = 27,
  [32] = 32,
  [33] = 12,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 30,
  [38] = 38,
  [39] = 32,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        '(', 11,
        ')', 12,
        ',', 14,
        ';', 5,
        '=', 8,
        'e', 24,
        'f', 17,
        'i', 23,
        'l', 18,
        'r', 22,
        't', 27,
        '{', 15,
        '}', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 't') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        ')', 12,
        ';', 5,
        'f', 17,
        'i', 23,
        'l', 18,
        'r', 22,
        't', 27,
        '}', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_return);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_let);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_if);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_else);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(13);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
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
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__statements] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym__expression] = STATE(15),
    [sym_return_statement] = STATE(6),
    [sym_let_statement] = STATE(6),
    [sym_if_expression] = STATE(15),
    [sym_function_declaration] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_return] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
  },
  [2] = {
    [sym__statements] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(15),
    [sym_return_statement] = STATE(2),
    [sym_let_statement] = STATE(2),
    [sym_if_expression] = STATE(15),
    [sym_function_declaration] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(22),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_fn] = ACTIONS(28),
    [anon_sym_RBRACE] = ACTIONS(17),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(34),
    [sym_true] = ACTIONS(31),
    [sym_false] = ACTIONS(31),
  },
  [3] = {
    [sym__statements] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(15),
    [sym_return_statement] = STATE(2),
    [sym_let_statement] = STATE(2),
    [sym_if_expression] = STATE(15),
    [sym_function_declaration] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_return] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
  },
  [4] = {
    [sym__statements] = STATE(3),
    [sym_expression_statement] = STATE(3),
    [sym__expression] = STATE(15),
    [sym_return_statement] = STATE(3),
    [sym_let_statement] = STATE(3),
    [sym_if_expression] = STATE(15),
    [sym_function_declaration] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_return] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
  },
  [5] = {
    [sym__statements] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(15),
    [sym_return_statement] = STATE(2),
    [sym_let_statement] = STATE(2),
    [sym_if_expression] = STATE(15),
    [sym_function_declaration] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_return] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
  },
  [6] = {
    [sym__statements] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(15),
    [sym_return_statement] = STATE(2),
    [sym_let_statement] = STATE(2),
    [sym_if_expression] = STATE(15),
    [sym_function_declaration] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
  },
  [7] = {
    [sym__statements] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym__expression] = STATE(15),
    [sym_return_statement] = STATE(5),
    [sym_let_statement] = STATE(5),
    [sym_if_expression] = STATE(15),
    [sym_function_declaration] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_return] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(49), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [18] = 2,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(53), 8,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [36] = 2,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(57), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [53] = 2,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(61), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [70] = 3,
    ACTIONS(67), 1,
      anon_sym_else,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(65), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [89] = 2,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(49), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [105] = 3,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(73), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [123] = 3,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(79), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [141] = 3,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(85), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [159] = 2,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(53), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [175] = 2,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(89), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [190] = 2,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(93), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [205] = 2,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(97), 7,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_fn,
      sym_identifier,
      sym_true,
      sym_false,
  [220] = 5,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(99), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym__expression,
      sym_if_expression,
      sym_function_declaration,
  [240] = 5,
    ACTIONS(103), 1,
      anon_sym_if,
    ACTIONS(105), 1,
      anon_sym_fn,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(107), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(44), 3,
      sym__expression,
      sym_if_expression,
      sym_function_declaration,
  [260] = 5,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(113), 1,
      sym_number,
    ACTIONS(111), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(16), 3,
      sym__expression,
      sym_if_expression,
      sym_function_declaration,
  [280] = 3,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_parameters_repeat1,
  [290] = 3,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_parameters_repeat1,
  [300] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_parameters_repeat1,
  [310] = 2,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [317] = 2,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [324] = 2,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [331] = 2,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_condition,
  [338] = 2,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
  [345] = 2,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_parameters,
  [352] = 2,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 1,
      anon_sym_else,
  [359] = 2,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_block,
  [366] = 2,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_block,
  [373] = 1,
    ACTIONS(115), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [378] = 2,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_condition,
  [385] = 2,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      sym_identifier,
  [392] = 2,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_parameters,
  [399] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [403] = 1,
    ACTIONS(142), 1,
      anon_sym_EQ,
  [407] = 1,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
  [411] = 1,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
  [415] = 1,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
  [419] = 1,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
  [423] = 1,
    ACTIONS(152), 1,
      sym_identifier,
  [427] = 1,
    ACTIONS(154), 1,
      sym_identifier,
  [431] = 1,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 18,
  [SMALL_STATE(10)] = 36,
  [SMALL_STATE(11)] = 53,
  [SMALL_STATE(12)] = 70,
  [SMALL_STATE(13)] = 89,
  [SMALL_STATE(14)] = 105,
  [SMALL_STATE(15)] = 123,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 159,
  [SMALL_STATE(18)] = 175,
  [SMALL_STATE(19)] = 190,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 220,
  [SMALL_STATE(22)] = 240,
  [SMALL_STATE(23)] = 260,
  [SMALL_STATE(24)] = 280,
  [SMALL_STATE(25)] = 290,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 310,
  [SMALL_STATE(28)] = 317,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 331,
  [SMALL_STATE(31)] = 338,
  [SMALL_STATE(32)] = 345,
  [SMALL_STATE(33)] = 352,
  [SMALL_STATE(34)] = 359,
  [SMALL_STATE(35)] = 366,
  [SMALL_STATE(36)] = 373,
  [SMALL_STATE(37)] = 378,
  [SMALL_STATE(38)] = 385,
  [SMALL_STATE(39)] = 392,
  [SMALL_STATE(40)] = 399,
  [SMALL_STATE(41)] = 403,
  [SMALL_STATE(42)] = 407,
  [SMALL_STATE(43)] = 411,
  [SMALL_STATE(44)] = 415,
  [SMALL_STATE(45)] = 419,
  [SMALL_STATE(46)] = 423,
  [SMALL_STATE(47)] = 427,
  [SMALL_STATE(48)] = 431,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 5, 0, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 5, 0, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, 0, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3, 0, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3, 0, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, 0, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5, 0, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 5, 0, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_monkey(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
