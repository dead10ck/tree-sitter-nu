#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_DOLLAR_DQUOTE = 24,
  sym__str_content = 25,
  sym__str_interpolation_content = 26,
  sym_escape_sequence = 27,
  sym_identifier = 28,
  sym_line_comment = 29,
  sym_nu_script = 30,
  sym_shebang = 31,
  sym__block_body_lf = 32,
  sym__block_body_sub = 33,
  sym_pipeline = 34,
  sym__pipeline_element = 35,
  sym__expression = 36,
  sym_subexpression = 37,
  sym__literal = 38,
  sym_literal_bool = 39,
  sym_literal_binary = 40,
  sym_string = 41,
  sym__str_double_quotes = 42,
  sym__str_interpolation = 43,
  aux_sym__block_body_lf_repeat1 = 44,
  aux_sym__block_body_sub_repeat1 = 45,
  aux_sym__str_double_quotes_repeat1 = 46,
  aux_sym__str_interpolation_repeat1 = 47,
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
  [anon_sym_DOLLAR_DQUOTE] = "$\"",
  [sym__str_content] = "_str_content",
  [sym__str_interpolation_content] = "_str_interpolation_content",
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
  [sym__str_interpolation] = "_str_interpolation",
  [aux_sym__block_body_lf_repeat1] = "_block_body_lf_repeat1",
  [aux_sym__block_body_sub_repeat1] = "_block_body_sub_repeat1",
  [aux_sym__str_double_quotes_repeat1] = "_str_double_quotes_repeat1",
  [aux_sym__str_interpolation_repeat1] = "_str_interpolation_repeat1",
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
  [anon_sym_DOLLAR_DQUOTE] = anon_sym_DOLLAR_DQUOTE,
  [sym__str_content] = sym__str_content,
  [sym__str_interpolation_content] = sym__str_interpolation_content,
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
  [sym__str_interpolation] = sym__str_interpolation,
  [aux_sym__block_body_lf_repeat1] = aux_sym__block_body_lf_repeat1,
  [aux_sym__block_body_sub_repeat1] = aux_sym__block_body_sub_repeat1,
  [aux_sym__str_double_quotes_repeat1] = aux_sym__str_double_quotes_repeat1,
  [aux_sym__str_interpolation_repeat1] = aux_sym__str_interpolation_repeat1,
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
  [anon_sym_DOLLAR_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__str_content] = {
    .visible = false,
    .named = true,
  },
  [sym__str_interpolation_content] = {
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
  [sym__str_interpolation] = {
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
  [aux_sym__str_interpolation_repeat1] = {
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
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 19,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 27,
  [36] = 36,
  [37] = 32,
  [38] = 31,
  [39] = 39,
  [40] = 40,
  [41] = 25,
  [42] = 28,
  [43] = 19,
  [44] = 44,
  [45] = 45,
  [46] = 30,
  [47] = 47,
  [48] = 48,
  [49] = 33,
  [50] = 48,
  [51] = 39,
  [52] = 52,
  [53] = 53,
  [54] = 48,
  [55] = 55,
  [56] = 55,
  [57] = 53,
  [58] = 52,
  [59] = 34,
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
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '!') ADVANCE(61);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '#') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(43);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 16:
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(134);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(37);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == '{') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(124);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(185);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == '`') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(39);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '#') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__terminator_lf);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__terminator_lf);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ';') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__terminator_sub);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_literal_float);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(99);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == ',') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == ',') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_literal_date);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(48);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(48);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__str_single_quotes);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__str_single_quotes);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__str_back_ticks);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__str_back_ticks);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead == '#') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead == '#') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(183);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '\'') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(9);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '2') ADVANCE(193);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '_') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '`') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(25);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '}') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(209);
      END_STATE();
    case 210:
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
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 59},
  [5] = {.lex_state = 59},
  [6] = {.lex_state = 59},
  [7] = {.lex_state = 59},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 59},
  [10] = {.lex_state = 59},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 59},
  [23] = {.lex_state = 59},
  [24] = {.lex_state = 59},
  [25] = {.lex_state = 59},
  [26] = {.lex_state = 59},
  [27] = {.lex_state = 59},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 59},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 59},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 59},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 59},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 59},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 59},
  [52] = {.lex_state = 119},
  [53] = {.lex_state = 114},
  [54] = {.lex_state = 59},
  [55] = {.lex_state = 107},
  [56] = {.lex_state = 107},
  [57] = {.lex_state = 114},
  [58] = {.lex_state = 119},
  [59] = {.lex_state = 3},
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
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_nu_script] = STATE(36),
    [sym_shebang] = STATE(2),
    [sym__block_body_lf] = STATE(47),
    [sym_pipeline] = STATE(45),
    [sym__pipeline_element] = STATE(37),
    [sym__expression] = STATE(37),
    [sym_subexpression] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_literal_bool] = STATE(37),
    [sym_literal_binary] = STATE(37),
    [sym_string] = STATE(37),
    [sym__str_double_quotes] = STATE(49),
    [sym__str_interpolation] = STATE(49),
    [aux_sym__block_body_lf_repeat1] = STATE(3),
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
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__block_body_lf] = STATE(44),
    [sym_pipeline] = STATE(45),
    [sym__pipeline_element] = STATE(37),
    [sym__expression] = STATE(37),
    [sym_subexpression] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_literal_bool] = STATE(37),
    [sym_literal_binary] = STATE(37),
    [sym_string] = STATE(37),
    [sym__str_double_quotes] = STATE(49),
    [sym__str_interpolation] = STATE(49),
    [aux_sym__block_body_lf_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
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
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_pipeline] = STATE(45),
    [sym__pipeline_element] = STATE(37),
    [sym__expression] = STATE(37),
    [sym_subexpression] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_literal_bool] = STATE(37),
    [sym_literal_binary] = STATE(37),
    [sym_string] = STATE(37),
    [sym__str_double_quotes] = STATE(49),
    [sym__str_interpolation] = STATE(49),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(31),
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
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_pipeline] = STATE(45),
    [sym__pipeline_element] = STATE(37),
    [sym__expression] = STATE(37),
    [sym_subexpression] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_literal_bool] = STATE(37),
    [sym_literal_binary] = STATE(37),
    [sym_string] = STATE(37),
    [sym__str_double_quotes] = STATE(49),
    [sym__str_interpolation] = STATE(49),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym_literal_null] = ACTIONS(38),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_literal_int] = ACTIONS(44),
    [sym_literal_float] = ACTIONS(38),
    [anon_sym_0x_LBRACK] = ACTIONS(47),
    [anon_sym_0o_LBRACK] = ACTIONS(50),
    [anon_sym_0b_LBRACK] = ACTIONS(53),
    [sym_literal_date] = ACTIONS(38),
    [sym__str_single_quotes] = ACTIONS(56),
    [sym__str_back_ticks] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(62),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__block_body_sub] = STATE(54),
    [sym_pipeline] = STATE(22),
    [sym__pipeline_element] = STATE(32),
    [sym__expression] = STATE(32),
    [sym_subexpression] = STATE(32),
    [sym__literal] = STATE(32),
    [sym_literal_bool] = STATE(32),
    [sym_literal_binary] = STATE(32),
    [sym_string] = STATE(32),
    [sym__str_double_quotes] = STATE(33),
    [sym__str_interpolation] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_literal_null] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [sym_literal_int] = ACTIONS(71),
    [sym_literal_float] = ACTIONS(67),
    [anon_sym_0x_LBRACK] = ACTIONS(73),
    [anon_sym_0o_LBRACK] = ACTIONS(75),
    [anon_sym_0b_LBRACK] = ACTIONS(77),
    [sym_literal_date] = ACTIONS(67),
    [sym__str_single_quotes] = ACTIONS(79),
    [sym__str_back_ticks] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__block_body_sub] = STATE(48),
    [sym_pipeline] = STATE(22),
    [sym__pipeline_element] = STATE(32),
    [sym__expression] = STATE(32),
    [sym_subexpression] = STATE(32),
    [sym__literal] = STATE(32),
    [sym_literal_bool] = STATE(32),
    [sym_literal_binary] = STATE(32),
    [sym_string] = STATE(32),
    [sym__str_double_quotes] = STATE(33),
    [sym__str_interpolation] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_literal_null] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [sym_literal_int] = ACTIONS(71),
    [sym_literal_float] = ACTIONS(67),
    [anon_sym_0x_LBRACK] = ACTIONS(73),
    [anon_sym_0o_LBRACK] = ACTIONS(75),
    [anon_sym_0b_LBRACK] = ACTIONS(77),
    [sym_literal_date] = ACTIONS(67),
    [sym__str_single_quotes] = ACTIONS(79),
    [sym__str_back_ticks] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__block_body_sub] = STATE(50),
    [sym_pipeline] = STATE(22),
    [sym__pipeline_element] = STATE(32),
    [sym__expression] = STATE(32),
    [sym_subexpression] = STATE(32),
    [sym__literal] = STATE(32),
    [sym_literal_bool] = STATE(32),
    [sym_literal_binary] = STATE(32),
    [sym_string] = STATE(32),
    [sym__str_double_quotes] = STATE(33),
    [sym__str_interpolation] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_literal_null] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [sym_literal_int] = ACTIONS(71),
    [sym_literal_float] = ACTIONS(67),
    [anon_sym_0x_LBRACK] = ACTIONS(73),
    [anon_sym_0o_LBRACK] = ACTIONS(75),
    [anon_sym_0b_LBRACK] = ACTIONS(77),
    [sym_literal_date] = ACTIONS(67),
    [sym__str_single_quotes] = ACTIONS(79),
    [sym__str_back_ticks] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_pipeline] = STATE(26),
    [sym__pipeline_element] = STATE(32),
    [sym__expression] = STATE(32),
    [sym_subexpression] = STATE(32),
    [sym__literal] = STATE(32),
    [sym_literal_bool] = STATE(32),
    [sym_literal_binary] = STATE(32),
    [sym_string] = STATE(32),
    [sym__str_double_quotes] = STATE(33),
    [sym__str_interpolation] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_literal_null] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [sym_literal_int] = ACTIONS(71),
    [sym_literal_float] = ACTIONS(67),
    [anon_sym_0x_LBRACK] = ACTIONS(73),
    [anon_sym_0o_LBRACK] = ACTIONS(75),
    [anon_sym_0b_LBRACK] = ACTIONS(77),
    [sym_literal_date] = ACTIONS(67),
    [sym__str_single_quotes] = ACTIONS(79),
    [sym__str_back_ticks] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      sym_literal_int,
    ACTIONS(33), 14,
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
      anon_sym_DOLLAR_DQUOTE,
  [23] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(89), 1,
      sym_literal_int,
    ACTIONS(87), 14,
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
      anon_sym_DOLLAR_DQUOTE,
  [46] = 6,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__str_interpolation_content,
    ACTIONS(97), 1,
      sym_escape_sequence,
    ACTIONS(99), 1,
      sym_line_comment,
    STATE(15), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [66] = 6,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym__str_interpolation_content,
    ACTIONS(105), 1,
      sym_escape_sequence,
    STATE(11), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [86] = 6,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      sym__str_interpolation_content,
    ACTIONS(97), 1,
      sym_escape_sequence,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(15), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [106] = 6,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym__str_interpolation_content,
    ACTIONS(113), 1,
      sym_escape_sequence,
    STATE(13), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [126] = 6,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      sym__str_interpolation_content,
    ACTIONS(123), 1,
      sym_escape_sequence,
    STATE(15), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [146] = 5,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym__str_content,
    ACTIONS(130), 1,
      sym_escape_sequence,
    STATE(18), 1,
      aux_sym__str_double_quotes_repeat1,
  [162] = 5,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      sym__str_content,
    ACTIONS(136), 1,
      sym_escape_sequence,
    STATE(16), 1,
      aux_sym__str_double_quotes_repeat1,
  [178] = 5,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym__str_content,
    ACTIONS(143), 1,
      sym_escape_sequence,
    STATE(18), 1,
      aux_sym__str_double_quotes_repeat1,
  [194] = 3,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      sym_escape_sequence,
    ACTIONS(146), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__str_interpolation_content,
  [206] = 5,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      sym__str_content,
    ACTIONS(130), 1,
      sym_escape_sequence,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym__str_double_quotes_repeat1,
  [222] = 5,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      sym__str_content,
    ACTIONS(156), 1,
      sym_escape_sequence,
    STATE(20), 1,
      aux_sym__str_double_quotes_repeat1,
  [238] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      sym__terminator_sub,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym__block_body_sub_repeat1,
  [251] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 1,
      sym__terminator_sub,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym__block_body_sub_repeat1,
  [264] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      sym__terminator_sub,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym__block_body_sub_repeat1,
  [277] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [285] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [293] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(171), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [301] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [309] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [317] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(175), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [325] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [333] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(179), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [341] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [349] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [357] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      sym__terminator_lf,
  [364] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [371] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      sym__terminator_lf,
  [378] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      sym__terminator_lf,
  [385] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
  [392] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      aux_sym_shebang_token1,
  [399] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym__terminator_lf,
  [406] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym__terminator_lf,
  [413] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      sym__terminator_lf,
  [420] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [427] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym__terminator_lf,
  [434] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      sym__terminator_lf,
  [441] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [448] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
  [455] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      sym__terminator_lf,
  [462] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
  [469] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
  [476] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      aux_sym_literal_binary_token3,
  [483] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      aux_sym_literal_binary_token2,
  [490] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [497] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      aux_sym_literal_binary_token1,
  [504] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      aux_sym_literal_binary_token1,
  [511] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      aux_sym_literal_binary_token2,
  [518] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      aux_sym_literal_binary_token3,
  [525] = 2,
    ACTIONS(99), 1,
      sym_line_comment,
    ACTIONS(183), 1,
      sym__terminator_lf,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 23,
  [SMALL_STATE(11)] = 46,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 86,
  [SMALL_STATE(14)] = 106,
  [SMALL_STATE(15)] = 126,
  [SMALL_STATE(16)] = 146,
  [SMALL_STATE(17)] = 162,
  [SMALL_STATE(18)] = 178,
  [SMALL_STATE(19)] = 194,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 222,
  [SMALL_STATE(22)] = 238,
  [SMALL_STATE(23)] = 251,
  [SMALL_STATE(24)] = 264,
  [SMALL_STATE(25)] = 277,
  [SMALL_STATE(26)] = 285,
  [SMALL_STATE(27)] = 293,
  [SMALL_STATE(28)] = 301,
  [SMALL_STATE(29)] = 309,
  [SMALL_STATE(30)] = 317,
  [SMALL_STATE(31)] = 325,
  [SMALL_STATE(32)] = 333,
  [SMALL_STATE(33)] = 341,
  [SMALL_STATE(34)] = 349,
  [SMALL_STATE(35)] = 357,
  [SMALL_STATE(36)] = 364,
  [SMALL_STATE(37)] = 371,
  [SMALL_STATE(38)] = 378,
  [SMALL_STATE(39)] = 385,
  [SMALL_STATE(40)] = 392,
  [SMALL_STATE(41)] = 399,
  [SMALL_STATE(42)] = 406,
  [SMALL_STATE(43)] = 413,
  [SMALL_STATE(44)] = 420,
  [SMALL_STATE(45)] = 427,
  [SMALL_STATE(46)] = 434,
  [SMALL_STATE(47)] = 441,
  [SMALL_STATE(48)] = 448,
  [SMALL_STATE(49)] = 455,
  [SMALL_STATE(50)] = 462,
  [SMALL_STATE(51)] = 469,
  [SMALL_STATE(52)] = 476,
  [SMALL_STATE(53)] = 483,
  [SMALL_STATE(54)] = 490,
  [SMALL_STATE(55)] = 497,
  [SMALL_STATE(56)] = 504,
  [SMALL_STATE(57)] = 511,
  [SMALL_STATE(58)] = 518,
  [SMALL_STATE(59)] = 525,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_lf, 1, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(37),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(59),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(37),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(55),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(53),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(52),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(49),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(21),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(14),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(15),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(15),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2), SHIFT_REPEAT(18),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2), SHIFT_REPEAT(18),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subexpression, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subexpression, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 1),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2), SHIFT_REPEAT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_double_quotes, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_interpolation, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 3, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_interpolation, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_double_quotes, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
