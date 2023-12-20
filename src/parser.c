#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__token = 1,
  aux_sym_nu_script_token1 = 2,
  anon_sym_POUND_BANG = 3,
  aux_sym_shebang_token1 = 4,
  anon_sym_LF = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  anon_sym_0x = 8,
  anon_sym_0o = 9,
  anon_sym_0b = 10,
  sym__sign = 11,
  sym__digit_decimal = 12,
  sym__digit_hex = 13,
  sym__digit_octal = 14,
  sym__digit_binary = 15,
  aux_sym_literal_float_token1 = 16,
  anon_sym_DOT = 17,
  aux_sym__float_exponent_token1 = 18,
  sym__line_comment = 19,
  sym_nu_script = 20,
  sym_shebang = 21,
  aux_sym__block_body = 22,
  sym__expression = 23,
  sym__literal = 24,
  sym_literal_bool = 25,
  sym_literal_int = 26,
  sym_literal_float = 27,
  sym__float_exponent = 28,
  sym_comment = 29,
  aux_sym_nu_script_repeat1 = 30,
  aux_sym__block_body_repeat1 = 31,
  aux_sym_comment_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__token] = "_token",
  [aux_sym_nu_script_token1] = "nu_script_token1",
  [anon_sym_POUND_BANG] = "#!",
  [aux_sym_shebang_token1] = "shebang_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_0x] = "0x",
  [anon_sym_0o] = "0o",
  [anon_sym_0b] = "0b",
  [sym__sign] = "_sign",
  [sym__digit_decimal] = "_digit_decimal",
  [sym__digit_hex] = "_digit_hex",
  [sym__digit_octal] = "_digit_octal",
  [sym__digit_binary] = "_digit_binary",
  [aux_sym_literal_float_token1] = "literal_float_token1",
  [anon_sym_DOT] = ".",
  [aux_sym__float_exponent_token1] = "_float_exponent_token1",
  [sym__line_comment] = "_line_comment",
  [sym_nu_script] = "nu_script",
  [sym_shebang] = "shebang",
  [aux_sym__block_body] = "_block_body",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_literal_bool] = "literal_bool",
  [sym_literal_int] = "literal_int",
  [sym_literal_float] = "literal_float",
  [sym__float_exponent] = "_float_exponent",
  [sym_comment] = "comment",
  [aux_sym_nu_script_repeat1] = "nu_script_repeat1",
  [aux_sym__block_body_repeat1] = "_block_body_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__token] = sym__token,
  [aux_sym_nu_script_token1] = aux_sym_nu_script_token1,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [aux_sym_shebang_token1] = aux_sym_shebang_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_0o] = anon_sym_0o,
  [anon_sym_0b] = anon_sym_0b,
  [sym__sign] = sym__sign,
  [sym__digit_decimal] = sym__digit_decimal,
  [sym__digit_hex] = sym__digit_hex,
  [sym__digit_octal] = sym__digit_octal,
  [sym__digit_binary] = sym__digit_binary,
  [aux_sym_literal_float_token1] = aux_sym_literal_float_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__float_exponent_token1] = aux_sym__float_exponent_token1,
  [sym__line_comment] = sym__line_comment,
  [sym_nu_script] = sym_nu_script,
  [sym_shebang] = sym_shebang,
  [aux_sym__block_body] = aux_sym__block_body,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_literal_bool] = sym_literal_bool,
  [sym_literal_int] = sym_literal_int,
  [sym_literal_float] = sym_literal_float,
  [sym__float_exponent] = sym__float_exponent,
  [sym_comment] = sym_comment,
  [aux_sym_nu_script_repeat1] = aux_sym_nu_script_repeat1,
  [aux_sym__block_body_repeat1] = aux_sym__block_body_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
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
  [aux_sym_nu_script_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shebang_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0b] = {
    .visible = true,
    .named = false,
  },
  [sym__sign] = {
    .visible = false,
    .named = true,
  },
  [sym__digit_decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__digit_hex] = {
    .visible = false,
    .named = true,
  },
  [sym__digit_octal] = {
    .visible = false,
    .named = true,
  },
  [sym__digit_binary] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_literal_float_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__float_exponent_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line_comment] = {
    .visible = false,
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
  [aux_sym__block_body] = {
    .visible = false,
    .named = false,
  },
  [sym__expression] = {
    .visible = false,
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
  [sym_literal_int] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_float] = {
    .visible = true,
    .named = true,
  },
  [sym__float_exponent] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_nu_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
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
  [39] = 39,
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
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(40);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 17:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_nu_script_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_nu_script_token1);
      if (lookahead == ' ') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(38);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(38);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_0x);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_0o);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_0b);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__sign);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__digit_decimal);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__digit_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__digit_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__digit_octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__digit_binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_literal_float_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(41);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__float_exponent_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
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
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 3},
  [48] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [aux_sym_comment_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__token] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_0o] = ACTIONS(1),
    [anon_sym_0b] = ACTIONS(1),
    [sym__sign] = ACTIONS(1),
    [sym__digit_decimal] = ACTIONS(1),
    [sym__digit_octal] = ACTIONS(1),
    [sym__digit_binary] = ACTIONS(1),
    [aux_sym_literal_float_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym__float_exponent_token1] = ACTIONS(1),
    [sym__line_comment] = ACTIONS(1),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [1] = {
    [sym_nu_script] = STATE(44),
    [sym_shebang] = STATE(4),
    [aux_sym__block_body] = STATE(8),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(30),
    [sym_literal_bool] = STATE(34),
    [sym_literal_int] = STATE(34),
    [sym_literal_float] = STATE(34),
    [sym_comment] = STATE(1),
    [aux_sym_nu_script_repeat1] = STATE(2),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_0x] = ACTIONS(13),
    [anon_sym_0o] = ACTIONS(15),
    [anon_sym_0b] = ACTIONS(17),
    [sym__sign] = ACTIONS(19),
    [sym__digit_decimal] = ACTIONS(21),
    [aux_sym_literal_float_token1] = ACTIONS(23),
    [sym__line_comment] = ACTIONS(25),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [2] = {
    [aux_sym__block_body] = STATE(7),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(30),
    [sym_literal_bool] = STATE(34),
    [sym_literal_int] = STATE(34),
    [sym_literal_float] = STATE(34),
    [sym_comment] = STATE(2),
    [aux_sym_nu_script_repeat1] = STATE(15),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_0x] = ACTIONS(13),
    [anon_sym_0o] = ACTIONS(15),
    [anon_sym_0b] = ACTIONS(17),
    [sym__sign] = ACTIONS(19),
    [sym__digit_decimal] = ACTIONS(21),
    [aux_sym_literal_float_token1] = ACTIONS(23),
    [sym__line_comment] = ACTIONS(25),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [3] = {
    [aux_sym__block_body] = STATE(5),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(30),
    [sym_literal_bool] = STATE(34),
    [sym_literal_int] = STATE(34),
    [sym_literal_float] = STATE(34),
    [sym_comment] = STATE(3),
    [aux_sym_nu_script_repeat1] = STATE(15),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_0x] = ACTIONS(13),
    [anon_sym_0o] = ACTIONS(15),
    [anon_sym_0b] = ACTIONS(17),
    [sym__sign] = ACTIONS(19),
    [sym__digit_decimal] = ACTIONS(21),
    [aux_sym_literal_float_token1] = ACTIONS(23),
    [sym__line_comment] = ACTIONS(25),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__block_body] = STATE(7),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(30),
    [sym_literal_bool] = STATE(34),
    [sym_literal_int] = STATE(34),
    [sym_literal_float] = STATE(34),
    [sym_comment] = STATE(4),
    [aux_sym_nu_script_repeat1] = STATE(3),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_0x] = ACTIONS(13),
    [anon_sym_0o] = ACTIONS(15),
    [anon_sym_0b] = ACTIONS(17),
    [sym__sign] = ACTIONS(19),
    [sym__digit_decimal] = ACTIONS(21),
    [aux_sym_literal_float_token1] = ACTIONS(23),
    [sym__line_comment] = ACTIONS(25),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [5] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(30),
    [sym_literal_bool] = STATE(34),
    [sym_literal_int] = STATE(34),
    [sym_literal_float] = STATE(34),
    [sym_comment] = STATE(5),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_0x] = ACTIONS(35),
    [anon_sym_0o] = ACTIONS(37),
    [anon_sym_0b] = ACTIONS(39),
    [sym__sign] = ACTIONS(41),
    [sym__digit_decimal] = ACTIONS(21),
    [aux_sym_literal_float_token1] = ACTIONS(43),
    [sym__line_comment] = ACTIONS(45),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [6] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(30),
    [sym_literal_bool] = STATE(34),
    [sym_literal_int] = STATE(34),
    [sym_literal_float] = STATE(34),
    [sym_comment] = STATE(6),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(52),
    [anon_sym_0o] = ACTIONS(55),
    [anon_sym_0b] = ACTIONS(58),
    [sym__sign] = ACTIONS(61),
    [sym__digit_decimal] = ACTIONS(64),
    [aux_sym_literal_float_token1] = ACTIONS(67),
    [sym__line_comment] = ACTIONS(70),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(30),
    [sym_literal_bool] = STATE(34),
    [sym_literal_int] = STATE(34),
    [sym_literal_float] = STATE(34),
    [sym_comment] = STATE(7),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_0x] = ACTIONS(35),
    [anon_sym_0o] = ACTIONS(37),
    [anon_sym_0b] = ACTIONS(39),
    [sym__sign] = ACTIONS(41),
    [sym__digit_decimal] = ACTIONS(21),
    [aux_sym_literal_float_token1] = ACTIONS(43),
    [sym__line_comment] = ACTIONS(45),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(30),
    [sym_literal_bool] = STATE(34),
    [sym_literal_int] = STATE(34),
    [sym_literal_float] = STATE(34),
    [sym_comment] = STATE(8),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_0x] = ACTIONS(35),
    [anon_sym_0o] = ACTIONS(37),
    [anon_sym_0b] = ACTIONS(39),
    [sym__sign] = ACTIONS(41),
    [sym__digit_decimal] = ACTIONS(21),
    [aux_sym_literal_float_token1] = ACTIONS(43),
    [sym__line_comment] = ACTIONS(45),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [9] = {
    [sym__float_exponent] = STATE(27),
    [sym_comment] = STATE(9),
    [aux_sym_comment_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_0x] = ACTIONS(73),
    [anon_sym_0o] = ACTIONS(73),
    [anon_sym_0b] = ACTIONS(73),
    [sym__sign] = ACTIONS(73),
    [sym__digit_decimal] = ACTIONS(75),
    [aux_sym_literal_float_token1] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(77),
    [aux_sym__float_exponent_token1] = ACTIONS(79),
    [sym__line_comment] = ACTIONS(73),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [10] = {
    [sym__float_exponent] = STATE(20),
    [sym_comment] = STATE(10),
    [aux_sym_comment_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LF] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_0x] = ACTIONS(81),
    [anon_sym_0o] = ACTIONS(81),
    [anon_sym_0b] = ACTIONS(81),
    [sym__sign] = ACTIONS(81),
    [sym__digit_decimal] = ACTIONS(83),
    [aux_sym_literal_float_token1] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(85),
    [aux_sym__float_exponent_token1] = ACTIONS(79),
    [sym__line_comment] = ACTIONS(81),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(79), 1,
      aux_sym__float_exponent_token1,
    ACTIONS(89), 1,
      sym__digit_decimal,
    STATE(11), 1,
      sym_comment,
    STATE(22), 1,
      sym__float_exponent,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(87), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [31] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(79), 1,
      aux_sym__float_exponent_token1,
    ACTIONS(93), 1,
      sym__digit_decimal,
    STATE(12), 1,
      sym_comment,
    STATE(25), 1,
      sym__float_exponent,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [62] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(100), 1,
      sym__digit_decimal,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    STATE(13), 2,
      sym_comment,
      aux_sym__block_body_repeat1,
    ACTIONS(95), 9,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [90] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(104), 1,
      sym__digit_decimal,
    ACTIONS(106), 1,
      sym__line_comment,
    STATE(14), 2,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
  [115] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_nu_script_token1,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    STATE(15), 2,
      sym_comment,
      aux_sym_nu_script_repeat1,
    ACTIONS(114), 9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      sym__digit_decimal,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [143] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      sym__digit_decimal,
    STATE(13), 1,
      aux_sym__block_body_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(47), 9,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [173] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(122), 1,
      sym__digit_decimal,
    STATE(16), 1,
      aux_sym__block_body_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [203] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(126), 1,
      sym__digit_decimal,
    STATE(14), 1,
      aux_sym_comment_repeat1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(124), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [228] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(130), 1,
      sym__digit_decimal,
    STATE(19), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(128), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [253] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(93), 1,
      sym__digit_decimal,
    STATE(20), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [278] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      aux_sym_nu_script_token1,
    ACTIONS(134), 9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      sym__digit_decimal,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [303] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(138), 1,
      sym__digit_decimal,
    STATE(22), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(136), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [328] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(83), 1,
      sym__digit_decimal,
    STATE(23), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(81), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [353] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(142), 1,
      sym__digit_decimal,
    STATE(24), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(140), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [378] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(89), 1,
      sym__digit_decimal,
    STATE(25), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(87), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [403] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      aux_sym_nu_script_token1,
    ACTIONS(146), 9,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      sym__digit_decimal,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [428] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(150), 1,
      sym__digit_decimal,
    STATE(27), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(148), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [453] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(152), 1,
      sym__digit_decimal,
    STATE(28), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(148), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [478] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(156), 1,
      sym__digit_decimal,
    STATE(29), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(154), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [503] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(160), 1,
      sym__digit_decimal,
    STATE(30), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(158), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [528] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(164), 1,
      sym__digit_decimal,
    STATE(31), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(162), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [553] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(168), 1,
      sym__digit_decimal,
    STATE(32), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [578] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(172), 1,
      sym__digit_decimal,
    STATE(33), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [603] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(176), 1,
      sym__digit_decimal,
    STATE(34), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [628] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(180), 1,
      sym__digit_decimal,
    STATE(35), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(178), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [653] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(182), 1,
      sym__digit_decimal,
    STATE(36), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [678] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(184), 1,
      sym__digit_decimal,
    ACTIONS(186), 1,
      aux_sym_literal_float_token1,
    STATE(37), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [694] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(188), 1,
      sym__sign,
    ACTIONS(190), 1,
      sym__digit_octal,
    STATE(38), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [710] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(190), 1,
      sym__digit_binary,
    ACTIONS(192), 1,
      sym__sign,
    STATE(39), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [726] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(190), 1,
      sym__digit_hex,
    ACTIONS(194), 1,
      sym__sign,
    STATE(40), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [742] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(196), 1,
      sym__sign,
    ACTIONS(198), 1,
      sym__digit_decimal,
    STATE(41), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [758] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(200), 1,
      sym__digit_decimal,
    STATE(42), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [771] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(202), 1,
      sym__digit_hex,
    STATE(43), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [797] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(206), 1,
      aux_sym_shebang_token1,
    STATE(45), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [810] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(202), 1,
      sym__digit_binary,
    STATE(46), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [823] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(202), 1,
      sym__digit_octal,
    STATE(47), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [836] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 31,
  [SMALL_STATE(13)] = 62,
  [SMALL_STATE(14)] = 90,
  [SMALL_STATE(15)] = 115,
  [SMALL_STATE(16)] = 143,
  [SMALL_STATE(17)] = 173,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 253,
  [SMALL_STATE(21)] = 278,
  [SMALL_STATE(22)] = 303,
  [SMALL_STATE(23)] = 328,
  [SMALL_STATE(24)] = 353,
  [SMALL_STATE(25)] = 378,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 428,
  [SMALL_STATE(28)] = 453,
  [SMALL_STATE(29)] = 478,
  [SMALL_STATE(30)] = 503,
  [SMALL_STATE(31)] = 528,
  [SMALL_STATE(32)] = 553,
  [SMALL_STATE(33)] = 578,
  [SMALL_STATE(34)] = 603,
  [SMALL_STATE(35)] = 628,
  [SMALL_STATE(36)] = 653,
  [SMALL_STATE(37)] = 678,
  [SMALL_STATE(38)] = 694,
  [SMALL_STATE(39)] = 710,
  [SMALL_STATE(40)] = 726,
  [SMALL_STATE(41)] = 742,
  [SMALL_STATE(42)] = 758,
  [SMALL_STATE(43)] = 771,
  [SMALL_STATE(44)] = 784,
  [SMALL_STATE(45)] = 797,
  [SMALL_STATE(46)] = 810,
  [SMALL_STATE(47)] = 823,
  [SMALL_STATE(48)] = 836,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(29),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(40),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(38),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(37),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(9),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(32),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2), SHIFT_REPEAT(33),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(19),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 2), SHIFT_REPEAT(26),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nu_script_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_exponent, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_exponent, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nu_script_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_bool, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_exponent, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_exponent, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
