#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym__token = 1,
  anon_sym_POUND_BANG = 2,
  aux_sym_shebang_token1 = 3,
  sym__terminator_lf = 4,
  sym__terminator_sub = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_literal_null = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_literal_int = 11,
  sym_literal_float = 12,
  anon_sym_0x_LBRACK = 13,
  aux_sym_literal_binary_token1 = 14,
  anon_sym_RBRACK = 15,
  anon_sym_0o_LBRACK = 16,
  aux_sym_literal_binary_token2 = 17,
  anon_sym_0b_LBRACK = 18,
  aux_sym_literal_binary_token3 = 19,
  sym_literal_date = 20,
  sym__str_single_quotes = 21,
  sym__str_back_ticks = 22,
  anon_sym_DQUOTE = 23,
  sym__str_content = 24,
  sym_escape_sequence = 25,
  sym_identifier = 26,
  sym_line_comment = 27,
  sym_nu_script = 28,
  sym_shebang = 29,
  sym__block_body_lf = 30,
  sym__block_body_sub = 31,
  sym_pipeline = 32,
  sym__pipeline_element = 33,
  sym__expression = 34,
  sym_subexpression = 35,
  sym__literal = 36,
  sym_literal_bool = 37,
  sym_literal_binary = 38,
  sym_string = 39,
  sym__str_double_quotes = 40,
  aux_sym__block_body_lf_repeat1 = 41,
  aux_sym__block_body_sub_repeat1 = 42,
  aux_sym__str_double_quotes_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__token] = "_token",
  [anon_sym_POUND_BANG] = "#!",
  [aux_sym_shebang_token1] = "shebang_token1",
  [sym__terminator_lf] = "_terminator_lf",
  [sym__terminator_sub] = "_terminator_sub",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_literal_null] = "literal_null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_literal_int] = "literal_int",
  [sym_literal_float] = "literal_float",
  [anon_sym_0x_LBRACK] = "0x[",
  [aux_sym_literal_binary_token1] = "literal_binary_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_0o_LBRACK] = "0o[",
  [aux_sym_literal_binary_token2] = "literal_binary_token2",
  [anon_sym_0b_LBRACK] = "0b[",
  [aux_sym_literal_binary_token3] = "literal_binary_token3",
  [sym_literal_date] = "literal_date",
  [sym__str_single_quotes] = "_str_single_quotes",
  [sym__str_back_ticks] = "_str_back_ticks",
  [anon_sym_DQUOTE] = "\"",
  [sym__str_content] = "_str_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym_line_comment] = "line_comment",
  [sym_nu_script] = "nu_script",
  [sym_shebang] = "shebang",
  [sym__block_body_lf] = "_block_body_lf",
  [sym__block_body_sub] = "block",
  [sym_pipeline] = "pipeline",
  [sym__pipeline_element] = "_pipeline_element",
  [sym__expression] = "_expression",
  [sym_subexpression] = "subexpression",
  [sym__literal] = "_literal",
  [sym_literal_bool] = "literal_bool",
  [sym_literal_binary] = "literal_binary",
  [sym_string] = "string",
  [sym__str_double_quotes] = "_str_double_quotes",
  [aux_sym__block_body_lf_repeat1] = "_block_body_lf_repeat1",
  [aux_sym__block_body_sub_repeat1] = "_block_body_sub_repeat1",
  [aux_sym__str_double_quotes_repeat1] = "_str_double_quotes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__token] = sym__token,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [aux_sym_shebang_token1] = aux_sym_shebang_token1,
  [sym__terminator_lf] = sym__terminator_lf,
  [sym__terminator_sub] = sym__terminator_sub,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_literal_null] = sym_literal_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_literal_int] = sym_literal_int,
  [sym_literal_float] = sym_literal_float,
  [anon_sym_0x_LBRACK] = anon_sym_0x_LBRACK,
  [aux_sym_literal_binary_token1] = aux_sym_literal_binary_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_0o_LBRACK] = anon_sym_0o_LBRACK,
  [aux_sym_literal_binary_token2] = aux_sym_literal_binary_token2,
  [anon_sym_0b_LBRACK] = anon_sym_0b_LBRACK,
  [aux_sym_literal_binary_token3] = aux_sym_literal_binary_token3,
  [sym_literal_date] = sym_literal_date,
  [sym__str_single_quotes] = sym__str_single_quotes,
  [sym__str_back_ticks] = sym__str_back_ticks,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__str_content] = sym__str_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym_line_comment] = sym_line_comment,
  [sym_nu_script] = sym_nu_script,
  [sym_shebang] = sym_shebang,
  [sym__block_body_lf] = sym__block_body_lf,
  [sym__block_body_sub] = sym__block_body_sub,
  [sym_pipeline] = sym_pipeline,
  [sym__pipeline_element] = sym__pipeline_element,
  [sym__expression] = sym__expression,
  [sym_subexpression] = sym_subexpression,
  [sym__literal] = sym__literal,
  [sym_literal_bool] = sym_literal_bool,
  [sym_literal_binary] = sym_literal_binary,
  [sym_string] = sym_string,
  [sym__str_double_quotes] = sym__str_double_quotes,
  [aux_sym__block_body_lf_repeat1] = aux_sym__block_body_lf_repeat1,
  [aux_sym__block_body_sub_repeat1] = aux_sym__block_body_sub_repeat1,
  [aux_sym__str_double_quotes_repeat1] = aux_sym__str_double_quotes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shebang_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__terminator_lf] = {
    .visible = false,
    .named = true,
  },
  [sym__terminator_sub] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_literal_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_literal_int] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0x_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_binary_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0o_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_binary_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0b_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_binary_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_literal_date] = {
    .visible = true,
    .named = true,
  },
  [sym__str_single_quotes] = {
    .visible = false,
    .named = true,
  },
  [sym__str_back_ticks] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__str_content] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_nu_script] = {
    .visible = true,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym__block_body_lf] = {
    .visible = false,
    .named = true,
  },
  [sym__block_body_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym__pipeline_element] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_subexpression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__str_double_quotes] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__block_body_lf_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_body_sub_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__str_double_quotes_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_bytes = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bytes] = "bytes",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_bytes, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym__block_body_sub,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__block_body_lf_repeat1, 2,
    aux_sym__block_body_lf_repeat1,
    sym__block_body_sub,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 10,
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
  [28] = 21,
  [29] = 20,
  [30] = 30,
  [31] = 31,
  [32] = 24,
  [33] = 33,
  [34] = 22,
  [35] = 23,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 18,
  [40] = 40,
  [41] = 33,
  [42] = 31,
  [43] = 43,
  [44] = 25,
  [45] = 43,
  [46] = 40,
  [47] = 36,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < '/'
      ? (c < '\''
        ? (c >= '"' && c <= '$')
        : c <= ')')
      : (c <= '/' || (c < '^'
        ? c == '\\'
        : c <= '^')))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? (c >= 'e' && c <= 'f')
        : c <= 'n')
      : (c <= 'r' || (c < '{'
        ? c == 't'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(141);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '`') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '#') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '#') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(132);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(35);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '{') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(122);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '`') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '#') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__terminator_lf);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__terminator_lf);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ';') ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__terminator_sub);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_literal_float);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == ',') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == ',') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_literal_date);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(46);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(46);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__str_single_quotes);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__str_single_quotes);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__str_back_ticks);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__str_back_ticks);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead == '#') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(175);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '\'') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '2') ADVANCE(185);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(114);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '_') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '`') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '{') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '}') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 57},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 57},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 117},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 112},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 105},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 105},
  [46] = {.lex_state = 112},
  [47] = {.lex_state = 117},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__token] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [sym__terminator_sub] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_literal_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_literal_int] = ACTIONS(1),
    [sym_literal_float] = ACTIONS(1),
    [anon_sym_0x_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_0o_LBRACK] = ACTIONS(1),
    [anon_sym_0b_LBRACK] = ACTIONS(1),
    [sym_literal_date] = ACTIONS(1),
    [sym__str_single_quotes] = ACTIONS(1),
    [sym__str_back_ticks] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_nu_script] = STATE(30),
    [sym_shebang] = STATE(2),
    [sym__block_body_lf] = STATE(37),
    [sym_pipeline] = STATE(26),
    [sym__pipeline_element] = STATE(35),
    [sym__expression] = STATE(35),
    [sym_subexpression] = STATE(35),
    [sym__literal] = STATE(35),
    [sym_literal_bool] = STATE(35),
    [sym_literal_binary] = STATE(35),
    [sym_string] = STATE(35),
    [sym__str_double_quotes] = STATE(32),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(11),
    [anon_sym_0x_LBRACK] = ACTIONS(17),
    [anon_sym_0o_LBRACK] = ACTIONS(19),
    [anon_sym_0b_LBRACK] = ACTIONS(21),
    [sym_literal_date] = ACTIONS(11),
    [sym__str_single_quotes] = ACTIONS(23),
    [sym__str_back_ticks] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__block_body_lf] = STATE(38),
    [sym_pipeline] = STATE(26),
    [sym__pipeline_element] = STATE(35),
    [sym__expression] = STATE(35),
    [sym_subexpression] = STATE(35),
    [sym__literal] = STATE(35),
    [sym_literal_bool] = STATE(35),
    [sym_literal_binary] = STATE(35),
    [sym_string] = STATE(35),
    [sym__str_double_quotes] = STATE(32),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(11),
    [anon_sym_0x_LBRACK] = ACTIONS(17),
    [anon_sym_0o_LBRACK] = ACTIONS(19),
    [anon_sym_0b_LBRACK] = ACTIONS(21),
    [sym_literal_date] = ACTIONS(11),
    [sym__str_single_quotes] = ACTIONS(23),
    [sym__str_back_ticks] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_pipeline] = STATE(26),
    [sym__pipeline_element] = STATE(35),
    [sym__expression] = STATE(35),
    [sym_subexpression] = STATE(35),
    [sym__literal] = STATE(35),
    [sym_literal_bool] = STATE(35),
    [sym_literal_binary] = STATE(35),
    [sym_string] = STATE(35),
    [sym__str_double_quotes] = STATE(32),
    [aux_sym__block_body_lf_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_literal_null] = ACTIONS(34),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_literal_int] = ACTIONS(40),
    [sym_literal_float] = ACTIONS(34),
    [anon_sym_0x_LBRACK] = ACTIONS(43),
    [anon_sym_0o_LBRACK] = ACTIONS(46),
    [anon_sym_0b_LBRACK] = ACTIONS(49),
    [sym_literal_date] = ACTIONS(34),
    [sym__str_single_quotes] = ACTIONS(52),
    [sym__str_back_ticks] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_pipeline] = STATE(26),
    [sym__pipeline_element] = STATE(35),
    [sym__expression] = STATE(35),
    [sym_subexpression] = STATE(35),
    [sym__literal] = STATE(35),
    [sym_literal_bool] = STATE(35),
    [sym_literal_binary] = STATE(35),
    [sym_string] = STATE(35),
    [sym__str_double_quotes] = STATE(32),
    [aux_sym__block_body_lf_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(11),
    [anon_sym_0x_LBRACK] = ACTIONS(17),
    [anon_sym_0o_LBRACK] = ACTIONS(19),
    [anon_sym_0b_LBRACK] = ACTIONS(21),
    [sym_literal_date] = ACTIONS(11),
    [sym__str_single_quotes] = ACTIONS(23),
    [sym__str_back_ticks] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__block_body_sub] = STATE(41),
    [sym_pipeline] = STATE(15),
    [sym__pipeline_element] = STATE(23),
    [sym__expression] = STATE(23),
    [sym_subexpression] = STATE(23),
    [sym__literal] = STATE(23),
    [sym_literal_bool] = STATE(23),
    [sym_literal_binary] = STATE(23),
    [sym_string] = STATE(23),
    [sym__str_double_quotes] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_literal_null] = ACTIONS(62),
    [anon_sym_true] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(64),
    [sym_literal_int] = ACTIONS(66),
    [sym_literal_float] = ACTIONS(62),
    [anon_sym_0x_LBRACK] = ACTIONS(68),
    [anon_sym_0o_LBRACK] = ACTIONS(70),
    [anon_sym_0b_LBRACK] = ACTIONS(72),
    [sym_literal_date] = ACTIONS(62),
    [sym__str_single_quotes] = ACTIONS(74),
    [sym__str_back_ticks] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__block_body_sub] = STATE(33),
    [sym_pipeline] = STATE(15),
    [sym__pipeline_element] = STATE(23),
    [sym__expression] = STATE(23),
    [sym_subexpression] = STATE(23),
    [sym__literal] = STATE(23),
    [sym_literal_bool] = STATE(23),
    [sym_literal_binary] = STATE(23),
    [sym_string] = STATE(23),
    [sym__str_double_quotes] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_literal_null] = ACTIONS(62),
    [anon_sym_true] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(64),
    [sym_literal_int] = ACTIONS(66),
    [sym_literal_float] = ACTIONS(62),
    [anon_sym_0x_LBRACK] = ACTIONS(68),
    [anon_sym_0o_LBRACK] = ACTIONS(70),
    [anon_sym_0b_LBRACK] = ACTIONS(72),
    [sym_literal_date] = ACTIONS(62),
    [sym__str_single_quotes] = ACTIONS(74),
    [sym__str_back_ticks] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_pipeline] = STATE(19),
    [sym__pipeline_element] = STATE(23),
    [sym__expression] = STATE(23),
    [sym_subexpression] = STATE(23),
    [sym__literal] = STATE(23),
    [sym_literal_bool] = STATE(23),
    [sym_literal_binary] = STATE(23),
    [sym_string] = STATE(23),
    [sym__str_double_quotes] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_literal_null] = ACTIONS(62),
    [anon_sym_true] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(64),
    [sym_literal_int] = ACTIONS(66),
    [sym_literal_float] = ACTIONS(62),
    [anon_sym_0x_LBRACK] = ACTIONS(68),
    [anon_sym_0o_LBRACK] = ACTIONS(70),
    [anon_sym_0b_LBRACK] = ACTIONS(72),
    [sym_literal_date] = ACTIONS(62),
    [sym__str_single_quotes] = ACTIONS(74),
    [sym__str_back_ticks] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 1,
      sym_literal_int,
    ACTIONS(29), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__str_single_quotes,
      sym__str_back_ticks,
      anon_sym_DQUOTE,
  [22] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      sym_literal_int,
    ACTIONS(80), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__str_single_quotes,
      sym__str_back_ticks,
      anon_sym_DQUOTE,
  [44] = 5,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym__str_content,
    ACTIONS(88), 1,
      sym_escape_sequence,
    ACTIONS(90), 1,
      sym_line_comment,
    STATE(12), 1,
      aux_sym__str_double_quotes_repeat1,
  [60] = 5,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym__str_content,
    ACTIONS(96), 1,
      sym_escape_sequence,
    STATE(10), 1,
      aux_sym__str_double_quotes_repeat1,
  [76] = 5,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      sym__str_content,
    ACTIONS(103), 1,
      sym_escape_sequence,
    STATE(12), 1,
      aux_sym__str_double_quotes_repeat1,
  [92] = 5,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      sym__str_content,
    ACTIONS(110), 1,
      sym_escape_sequence,
    STATE(14), 1,
      aux_sym__str_double_quotes_repeat1,
  [108] = 5,
    ACTIONS(86), 1,
      sym__str_content,
    ACTIONS(88), 1,
      sym_escape_sequence,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      aux_sym__str_double_quotes_repeat1,
  [124] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 1,
      sym__terminator_sub,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym__block_body_sub_repeat1,
  [137] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      sym__terminator_sub,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym__block_body_sub_repeat1,
  [150] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 1,
      sym__terminator_sub,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym__block_body_sub_repeat1,
  [163] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(125), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [171] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [179] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(127), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [187] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [195] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [203] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [211] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [219] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(137), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [227] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      sym__terminator_lf,
  [234] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      aux_sym_shebang_token1,
  [241] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      sym__terminator_lf,
  [248] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      sym__terminator_lf,
  [255] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [262] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
  [269] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym__terminator_lf,
  [276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
  [283] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      sym__terminator_lf,
  [290] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      sym__terminator_lf,
  [297] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(149), 1,
      aux_sym_literal_binary_token3,
  [304] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [311] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [318] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      sym__terminator_lf,
  [325] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(149), 1,
      aux_sym_literal_binary_token2,
  [332] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
  [339] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
  [346] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(149), 1,
      aux_sym_literal_binary_token1,
  [353] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(137), 1,
      sym__terminator_lf,
  [360] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      aux_sym_literal_binary_token1,
  [367] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      aux_sym_literal_binary_token2,
  [374] = 2,
    ACTIONS(90), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      aux_sym_literal_binary_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 22,
  [SMALL_STATE(10)] = 44,
  [SMALL_STATE(11)] = 60,
  [SMALL_STATE(12)] = 76,
  [SMALL_STATE(13)] = 92,
  [SMALL_STATE(14)] = 108,
  [SMALL_STATE(15)] = 124,
  [SMALL_STATE(16)] = 137,
  [SMALL_STATE(17)] = 150,
  [SMALL_STATE(18)] = 163,
  [SMALL_STATE(19)] = 171,
  [SMALL_STATE(20)] = 179,
  [SMALL_STATE(21)] = 187,
  [SMALL_STATE(22)] = 195,
  [SMALL_STATE(23)] = 203,
  [SMALL_STATE(24)] = 211,
  [SMALL_STATE(25)] = 219,
  [SMALL_STATE(26)] = 227,
  [SMALL_STATE(27)] = 234,
  [SMALL_STATE(28)] = 241,
  [SMALL_STATE(29)] = 248,
  [SMALL_STATE(30)] = 255,
  [SMALL_STATE(31)] = 262,
  [SMALL_STATE(32)] = 269,
  [SMALL_STATE(33)] = 276,
  [SMALL_STATE(34)] = 283,
  [SMALL_STATE(35)] = 290,
  [SMALL_STATE(36)] = 297,
  [SMALL_STATE(37)] = 304,
  [SMALL_STATE(38)] = 311,
  [SMALL_STATE(39)] = 318,
  [SMALL_STATE(40)] = 325,
  [SMALL_STATE(41)] = 332,
  [SMALL_STATE(42)] = 339,
  [SMALL_STATE(43)] = 346,
  [SMALL_STATE(44)] = 353,
  [SMALL_STATE(45)] = 360,
  [SMALL_STATE(46)] = 367,
  [SMALL_STATE(47)] = 374,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(35),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(44),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(35),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(43),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(40),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(36),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(32),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(13),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_lf, 1, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2), SHIFT_REPEAT(12),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2), SHIFT_REPEAT(12),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 1),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2), SHIFT_REPEAT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_double_quotes, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_double_quotes, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 3, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subexpression, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nu(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__token,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
