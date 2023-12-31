#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_0x = 13,
  anon_sym_LBRACK = 14,
  aux_sym_literal_binary_token1 = 15,
  anon_sym_COMMA = 16,
  anon_sym_RBRACK = 17,
  anon_sym_0o = 18,
  aux_sym_literal_binary_token2 = 19,
  anon_sym_0b = 20,
  aux_sym_literal_binary_token3 = 21,
  sym_literal_date = 22,
  sym__str_single_quotes = 23,
  sym__str_back_ticks = 24,
  anon_sym_DQUOTE = 25,
  anon_sym_DOLLAR_DQUOTE = 26,
  sym__str_content = 27,
  sym__str_interpolation_content = 28,
  sym_escape_sequence = 29,
  sym_line_comment = 30,
  sym_nu_script = 31,
  sym_shebang = 32,
  sym__block_body_lf = 33,
  sym__block_body_sub = 34,
  sym_pipeline = 35,
  sym__pipeline_element = 36,
  sym__expression = 37,
  sym_subexpression = 38,
  sym__literal = 39,
  sym_literal_bool = 40,
  sym_literal_binary = 41,
  sym_string = 42,
  sym__str_double_quotes = 43,
  sym__str_interpolation = 44,
  aux_sym__block_body_lf_repeat1 = 45,
  aux_sym__block_body_sub_repeat1 = 46,
  aux_sym_literal_binary_repeat1 = 47,
  aux_sym_literal_binary_repeat2 = 48,
  aux_sym_literal_binary_repeat3 = 49,
  aux_sym__str_double_quotes_repeat1 = 50,
  aux_sym__str_interpolation_repeat1 = 51,
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
  [anon_sym_0x] = "0x",
  [anon_sym_LBRACK] = "[",
  [aux_sym_literal_binary_token1] = "literal_binary_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_0o] = "0o",
  [aux_sym_literal_binary_token2] = "literal_binary_token2",
  [anon_sym_0b] = "0b",
  [aux_sym_literal_binary_token3] = "literal_binary_token3",
  [sym_literal_date] = "literal_date",
  [sym__str_single_quotes] = "_str_single_quotes",
  [sym__str_back_ticks] = "_str_back_ticks",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOLLAR_DQUOTE] = "$\"",
  [sym__str_content] = "_str_content",
  [sym__str_interpolation_content] = "_str_interpolation_content",
  [sym_escape_sequence] = "escape_sequence",
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
  [aux_sym_literal_binary_repeat1] = "literal_binary_repeat1",
  [aux_sym_literal_binary_repeat2] = "literal_binary_repeat2",
  [aux_sym_literal_binary_repeat3] = "literal_binary_repeat3",
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
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_literal_binary_token1] = aux_sym_literal_binary_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_0o] = anon_sym_0o,
  [aux_sym_literal_binary_token2] = aux_sym_literal_binary_token2,
  [anon_sym_0b] = anon_sym_0b,
  [aux_sym_literal_binary_token3] = aux_sym_literal_binary_token3,
  [sym_literal_date] = sym_literal_date,
  [sym__str_single_quotes] = sym__str_single_quotes,
  [sym__str_back_ticks] = sym__str_back_ticks,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOLLAR_DQUOTE] = anon_sym_DOLLAR_DQUOTE,
  [sym__str_content] = sym__str_content,
  [sym__str_interpolation_content] = sym__str_interpolation_content,
  [sym_escape_sequence] = sym_escape_sequence,
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
  [aux_sym_literal_binary_repeat1] = aux_sym_literal_binary_repeat1,
  [aux_sym_literal_binary_repeat2] = aux_sym_literal_binary_repeat2,
  [aux_sym_literal_binary_repeat3] = aux_sym_literal_binary_repeat3,
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
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_binary_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0o] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_binary_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0b] = {
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
  [aux_sym_literal_binary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_binary_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_binary_repeat3] = {
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
  [13] = 13,
  [14] = 12,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 17,
  [22] = 22,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 33,
  [36] = 19,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 25,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 49,
  [53] = 25,
  [54] = 44,
  [55] = 45,
  [56] = 40,
  [57] = 57,
  [58] = 41,
  [59] = 50,
  [60] = 60,
  [61] = 60,
  [62] = 43,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 48,
  [67] = 67,
  [68] = 68,
  [69] = 60,
  [70] = 70,
  [71] = 70,
  [72] = 68,
  [73] = 67,
  [74] = 47,
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
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '`') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 't') ADVANCE(169);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '!') ADVANCE(62);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '#') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(139);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == ']') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == ']') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(43);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
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
      if (lookahead == '`') ADVANCE(135);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(72);
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
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(147);
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
      if (lookahead == '}') ADVANCE(147);
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
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(125);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
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
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '`') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 't') ADVANCE(169);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 59:
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(39);
      if (lookahead == '[') ADVANCE(104);
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
          lookahead == ' ') SKIP(60)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 60:
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(39);
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
          lookahead == ' ') SKIP(60)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '#') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__terminator_lf);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__terminator_lf);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__terminator_sub);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(81);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(81);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '_') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '_') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(90);
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
          lookahead != ';') ADVANCE(194);
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
      if (lookahead == '_') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
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
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_0x);
      if (lookahead == '_') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_0x);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == 'a') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == 'l') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_0o);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_0o);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_0b);
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_0b);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_literal_date);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(121);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(48);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(48);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__str_single_quotes);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__str_single_quotes);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__str_back_ticks);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__str_back_ticks);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DQUOTE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead == '#') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead == '#') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'u') ADVANCE(173);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '\'') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(12);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '2') ADVANCE(179);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '`') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(25);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '}') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(194);
      END_STATE();
    case 195:
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
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 59},
  [38] = {.lex_state = 59},
  [39] = {.lex_state = 59},
  [40] = {.lex_state = 59},
  [41] = {.lex_state = 59},
  [42] = {.lex_state = 59},
  [43] = {.lex_state = 59},
  [44] = {.lex_state = 59},
  [45] = {.lex_state = 59},
  [46] = {.lex_state = 59},
  [47] = {.lex_state = 59},
  [48] = {.lex_state = 59},
  [49] = {.lex_state = 59},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 59},
  [61] = {.lex_state = 59},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 59},
  [68] = {.lex_state = 59},
  [69] = {.lex_state = 59},
  [70] = {.lex_state = 59},
  [71] = {.lex_state = 59},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 59},
  [74] = {.lex_state = 3},
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
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_literal_binary_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_0o] = ACTIONS(1),
    [aux_sym_literal_binary_token2] = ACTIONS(1),
    [anon_sym_0b] = ACTIONS(1),
    [aux_sym_literal_binary_token3] = ACTIONS(1),
    [sym_literal_date] = ACTIONS(1),
    [sym__str_single_quotes] = ACTIONS(1),
    [sym__str_back_ticks] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_nu_script] = STATE(65),
    [sym_shebang] = STATE(2),
    [sym__block_body_lf] = STATE(64),
    [sym_pipeline] = STATE(63),
    [sym__pipeline_element] = STATE(52),
    [sym__expression] = STATE(52),
    [sym_subexpression] = STATE(52),
    [sym__literal] = STATE(52),
    [sym_literal_bool] = STATE(52),
    [sym_literal_binary] = STATE(52),
    [sym_string] = STATE(52),
    [sym__str_double_quotes] = STATE(66),
    [sym__str_interpolation] = STATE(66),
    [aux_sym__block_body_lf_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(11),
    [anon_sym_0x] = ACTIONS(17),
    [anon_sym_0o] = ACTIONS(19),
    [anon_sym_0b] = ACTIONS(21),
    [sym_literal_date] = ACTIONS(11),
    [sym__str_single_quotes] = ACTIONS(23),
    [sym__str_back_ticks] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__block_body_lf] = STATE(51),
    [sym_pipeline] = STATE(63),
    [sym__pipeline_element] = STATE(52),
    [sym__expression] = STATE(52),
    [sym_subexpression] = STATE(52),
    [sym__literal] = STATE(52),
    [sym_literal_bool] = STATE(52),
    [sym_literal_binary] = STATE(52),
    [sym_string] = STATE(52),
    [sym__str_double_quotes] = STATE(66),
    [sym__str_interpolation] = STATE(66),
    [aux_sym__block_body_lf_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(11),
    [anon_sym_0x] = ACTIONS(17),
    [anon_sym_0o] = ACTIONS(19),
    [anon_sym_0b] = ACTIONS(21),
    [sym_literal_date] = ACTIONS(11),
    [sym__str_single_quotes] = ACTIONS(23),
    [sym__str_back_ticks] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_pipeline] = STATE(63),
    [sym__pipeline_element] = STATE(52),
    [sym__expression] = STATE(52),
    [sym_subexpression] = STATE(52),
    [sym__literal] = STATE(52),
    [sym_literal_bool] = STATE(52),
    [sym_literal_binary] = STATE(52),
    [sym_string] = STATE(52),
    [sym__str_double_quotes] = STATE(66),
    [sym__str_interpolation] = STATE(66),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(11),
    [anon_sym_0x] = ACTIONS(17),
    [anon_sym_0o] = ACTIONS(19),
    [anon_sym_0b] = ACTIONS(21),
    [sym_literal_date] = ACTIONS(11),
    [sym__str_single_quotes] = ACTIONS(23),
    [sym__str_back_ticks] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_pipeline] = STATE(63),
    [sym__pipeline_element] = STATE(52),
    [sym__expression] = STATE(52),
    [sym_subexpression] = STATE(52),
    [sym__literal] = STATE(52),
    [sym_literal_bool] = STATE(52),
    [sym_literal_binary] = STATE(52),
    [sym_string] = STATE(52),
    [sym__str_double_quotes] = STATE(66),
    [sym__str_interpolation] = STATE(66),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym_literal_null] = ACTIONS(38),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_literal_int] = ACTIONS(44),
    [sym_literal_float] = ACTIONS(38),
    [anon_sym_0x] = ACTIONS(47),
    [anon_sym_0o] = ACTIONS(50),
    [anon_sym_0b] = ACTIONS(53),
    [sym_literal_date] = ACTIONS(38),
    [sym__str_single_quotes] = ACTIONS(56),
    [sym__str_back_ticks] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(62),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_literal_int,
    ACTIONS(73), 1,
      anon_sym_0x,
    ACTIONS(75), 1,
      anon_sym_0o,
    ACTIONS(77), 1,
      anon_sym_0b,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(37), 1,
      sym_pipeline,
    STATE(69), 1,
      sym__block_body_sub,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(48), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    ACTIONS(67), 3,
      sym_literal_null,
      sym_literal_float,
      sym_literal_date,
    STATE(49), 7,
      sym__pipeline_element,
      sym__expression,
      sym_subexpression,
      sym__literal,
      sym_literal_bool,
      sym_literal_binary,
      sym_string,
  [57] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_literal_int,
    ACTIONS(73), 1,
      anon_sym_0x,
    ACTIONS(75), 1,
      anon_sym_0o,
    ACTIONS(77), 1,
      anon_sym_0b,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(37), 1,
      sym_pipeline,
    STATE(61), 1,
      sym__block_body_sub,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(48), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    ACTIONS(67), 3,
      sym_literal_null,
      sym_literal_float,
      sym_literal_date,
    STATE(49), 7,
      sym__pipeline_element,
      sym__expression,
      sym_subexpression,
      sym__literal,
      sym_literal_bool,
      sym_literal_binary,
      sym_string,
  [114] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_literal_int,
    ACTIONS(73), 1,
      anon_sym_0x,
    ACTIONS(75), 1,
      anon_sym_0o,
    ACTIONS(77), 1,
      anon_sym_0b,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(37), 1,
      sym_pipeline,
    STATE(60), 1,
      sym__block_body_sub,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(48), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    ACTIONS(67), 3,
      sym_literal_null,
      sym_literal_float,
      sym_literal_date,
    STATE(49), 7,
      sym__pipeline_element,
      sym__expression,
      sym_subexpression,
      sym__literal,
      sym_literal_bool,
      sym_literal_binary,
      sym_string,
  [171] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_literal_int,
    ACTIONS(73), 1,
      anon_sym_0x,
    ACTIONS(75), 1,
      anon_sym_0o,
    ACTIONS(77), 1,
      anon_sym_0b,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(42), 1,
      sym_pipeline,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(48), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    ACTIONS(67), 3,
      sym_literal_null,
      sym_literal_float,
      sym_literal_date,
    STATE(49), 7,
      sym__pipeline_element,
      sym__expression,
      sym_subexpression,
      sym__literal,
      sym_literal_bool,
      sym_literal_binary,
      sym_string,
  [225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 4,
      sym_literal_int,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(33), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      sym_literal_date,
      sym__str_single_quotes,
      sym__str_back_ticks,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DQUOTE,
  [248] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(89), 4,
      sym_literal_int,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      sym_literal_date,
      sym__str_single_quotes,
      sym__str_back_ticks,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DQUOTE,
  [271] = 6,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym__str_interpolation_content,
    ACTIONS(99), 1,
      sym_escape_sequence,
    ACTIONS(102), 1,
      sym_line_comment,
    STATE(11), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [291] = 6,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      sym__str_interpolation_content,
    ACTIONS(110), 1,
      sym_escape_sequence,
    STATE(11), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [311] = 6,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      sym__str_interpolation_content,
    ACTIONS(116), 1,
      sym_escape_sequence,
    STATE(14), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [331] = 6,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym__str_interpolation_content,
    ACTIONS(110), 1,
      sym_escape_sequence,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    STATE(11), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [351] = 6,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym__str_interpolation_content,
    ACTIONS(124), 1,
      sym_escape_sequence,
    STATE(12), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [371] = 5,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym__str_content,
    ACTIONS(130), 1,
      sym_escape_sequence,
    STATE(24), 1,
      aux_sym__str_double_quotes_repeat1,
  [387] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [401] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(136), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [415] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [429] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(142), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [443] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [457] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [471] = 5,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym__str_content,
    ACTIONS(154), 1,
      sym_escape_sequence,
    STATE(28), 1,
      aux_sym__str_double_quotes_repeat1,
  [487] = 5,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      sym__str_content,
    ACTIONS(160), 1,
      sym_escape_sequence,
    STATE(29), 1,
      aux_sym__str_double_quotes_repeat1,
  [503] = 3,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_escape_sequence,
    ACTIONS(162), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__str_interpolation_content,
  [515] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [529] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [543] = 5,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      sym__str_content,
    ACTIONS(160), 1,
      sym_escape_sequence,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym__str_double_quotes_repeat1,
  [559] = 5,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym__str_content,
    ACTIONS(180), 1,
      sym_escape_sequence,
    STATE(29), 1,
      aux_sym__str_double_quotes_repeat1,
  [575] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [589] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(188), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [603] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(190), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [617] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [631] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(188), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [645] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [659] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [673] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym__terminator_sub,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym__block_body_sub_repeat1,
  [686] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      sym__terminator_sub,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym__block_body_sub_repeat1,
  [699] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym__terminator_sub,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym__block_body_sub_repeat1,
  [712] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [720] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [728] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [736] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [744] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(216), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [752] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [760] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [768] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [776] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(222), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [784] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [792] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [800] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [807] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym__terminator_lf,
  [814] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym__terminator_lf,
  [821] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(216), 1,
      sym__terminator_lf,
  [828] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(218), 1,
      sym__terminator_lf,
  [835] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      sym__terminator_lf,
  [842] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(230), 1,
      aux_sym_shebang_token1,
  [849] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(212), 1,
      sym__terminator_lf,
  [856] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      sym__terminator_lf,
  [863] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
  [870] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
  [877] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym__terminator_lf,
  [884] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(236), 1,
      sym__terminator_lf,
  [891] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [898] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
  [905] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(222), 1,
      sym__terminator_lf,
  [912] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
  [919] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
  [926] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
  [933] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
  [940] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
  [947] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
  [954] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
  [961] = 2,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(220), 1,
      sym__terminator_lf,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 225,
  [SMALL_STATE(10)] = 248,
  [SMALL_STATE(11)] = 271,
  [SMALL_STATE(12)] = 291,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 331,
  [SMALL_STATE(15)] = 351,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 387,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 415,
  [SMALL_STATE(20)] = 429,
  [SMALL_STATE(21)] = 443,
  [SMALL_STATE(22)] = 457,
  [SMALL_STATE(23)] = 471,
  [SMALL_STATE(24)] = 487,
  [SMALL_STATE(25)] = 503,
  [SMALL_STATE(26)] = 515,
  [SMALL_STATE(27)] = 529,
  [SMALL_STATE(28)] = 543,
  [SMALL_STATE(29)] = 559,
  [SMALL_STATE(30)] = 575,
  [SMALL_STATE(31)] = 589,
  [SMALL_STATE(32)] = 603,
  [SMALL_STATE(33)] = 617,
  [SMALL_STATE(34)] = 631,
  [SMALL_STATE(35)] = 645,
  [SMALL_STATE(36)] = 659,
  [SMALL_STATE(37)] = 673,
  [SMALL_STATE(38)] = 686,
  [SMALL_STATE(39)] = 699,
  [SMALL_STATE(40)] = 712,
  [SMALL_STATE(41)] = 720,
  [SMALL_STATE(42)] = 728,
  [SMALL_STATE(43)] = 736,
  [SMALL_STATE(44)] = 744,
  [SMALL_STATE(45)] = 752,
  [SMALL_STATE(46)] = 760,
  [SMALL_STATE(47)] = 768,
  [SMALL_STATE(48)] = 776,
  [SMALL_STATE(49)] = 784,
  [SMALL_STATE(50)] = 792,
  [SMALL_STATE(51)] = 800,
  [SMALL_STATE(52)] = 807,
  [SMALL_STATE(53)] = 814,
  [SMALL_STATE(54)] = 821,
  [SMALL_STATE(55)] = 828,
  [SMALL_STATE(56)] = 835,
  [SMALL_STATE(57)] = 842,
  [SMALL_STATE(58)] = 849,
  [SMALL_STATE(59)] = 856,
  [SMALL_STATE(60)] = 863,
  [SMALL_STATE(61)] = 870,
  [SMALL_STATE(62)] = 877,
  [SMALL_STATE(63)] = 884,
  [SMALL_STATE(64)] = 891,
  [SMALL_STATE(65)] = 898,
  [SMALL_STATE(66)] = 905,
  [SMALL_STATE(67)] = 912,
  [SMALL_STATE(68)] = 919,
  [SMALL_STATE(69)] = 926,
  [SMALL_STATE(70)] = 933,
  [SMALL_STATE(71)] = 940,
  [SMALL_STATE(72)] = 947,
  [SMALL_STATE(73)] = 954,
  [SMALL_STATE(74)] = 961,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_lf, 1, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(52),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(74),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(52),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(70),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(68),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(67),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(66),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(16),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(11),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(11),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subexpression, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subexpression, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat3, 2), SHIFT_REPEAT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat3, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2), SHIFT_REPEAT(29),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2), SHIFT_REPEAT(29),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat2, 2), SHIFT_REPEAT(30),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat2, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat1, 2), SHIFT_REPEAT(32),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 1),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2), SHIFT_REPEAT(8),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_interpolation, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_interpolation, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_double_quotes, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_double_quotes, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
