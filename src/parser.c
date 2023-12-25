#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  sym_literal_null = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  anon_sym_0x = 9,
  anon_sym_0o = 10,
  anon_sym_0b = 11,
  sym__sign = 12,
  sym__digit_decimal = 13,
  sym__digit_hex = 14,
  sym__digit_octal = 15,
  sym__digit_binary = 16,
  aux_sym_literal_float_token1 = 17,
  anon_sym_DOT = 18,
  aux_sym__float_exponent_token1 = 19,
  sym__line_comment = 20,
  sym_nu_script = 21,
  sym_shebang = 22,
  aux_sym__block_body = 23,
  sym__expression = 24,
  sym__literal = 25,
  sym_literal_bool = 26,
  sym_literal_int = 27,
  sym_literal_float = 28,
  sym__float_exponent = 29,
  sym_comment = 30,
  aux_sym_nu_script_repeat1 = 31,
  aux_sym__block_body_repeat1 = 32,
  aux_sym_comment_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__token] = "_token",
  [aux_sym_nu_script_token1] = "nu_script_token1",
  [anon_sym_POUND_BANG] = "#!",
  [aux_sym_shebang_token1] = "shebang_token1",
  [anon_sym_LF] = "\n",
  [sym_literal_null] = "literal_null",
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
  [sym_literal_null] = sym_literal_null,
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
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(46);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') SKIP(20)
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_nu_script_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_nu_script_token1);
      if (lookahead == ' ') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(55);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(44);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(44);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_0x);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_0o);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_0b);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__sign);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__digit_decimal);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__digit_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__digit_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__digit_octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__digit_binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_literal_float_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(47);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__float_exponent_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
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
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 5},
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
    [sym_literal_null] = ACTIONS(1),
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
    [sym__literal] = STATE(34),
    [sym_literal_bool] = STATE(29),
    [sym_literal_int] = STATE(29),
    [sym_literal_float] = STATE(29),
    [sym_comment] = STATE(1),
    [aux_sym_nu_script_repeat1] = STATE(2),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_0x] = ACTIONS(15),
    [anon_sym_0o] = ACTIONS(17),
    [anon_sym_0b] = ACTIONS(19),
    [sym__sign] = ACTIONS(21),
    [sym__digit_decimal] = ACTIONS(23),
    [aux_sym_literal_float_token1] = ACTIONS(25),
    [sym__line_comment] = ACTIONS(27),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [2] = {
    [aux_sym__block_body] = STATE(7),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(34),
    [sym_literal_bool] = STATE(29),
    [sym_literal_int] = STATE(29),
    [sym_literal_float] = STATE(29),
    [sym_comment] = STATE(2),
    [aux_sym_nu_script_repeat1] = STATE(15),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_0x] = ACTIONS(15),
    [anon_sym_0o] = ACTIONS(17),
    [anon_sym_0b] = ACTIONS(19),
    [sym__sign] = ACTIONS(21),
    [sym__digit_decimal] = ACTIONS(23),
    [aux_sym_literal_float_token1] = ACTIONS(25),
    [sym__line_comment] = ACTIONS(27),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [3] = {
    [aux_sym__block_body] = STATE(5),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(34),
    [sym_literal_bool] = STATE(29),
    [sym_literal_int] = STATE(29),
    [sym_literal_float] = STATE(29),
    [sym_comment] = STATE(3),
    [aux_sym_nu_script_repeat1] = STATE(15),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_0x] = ACTIONS(15),
    [anon_sym_0o] = ACTIONS(17),
    [anon_sym_0b] = ACTIONS(19),
    [sym__sign] = ACTIONS(21),
    [sym__digit_decimal] = ACTIONS(23),
    [aux_sym_literal_float_token1] = ACTIONS(25),
    [sym__line_comment] = ACTIONS(27),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__block_body] = STATE(7),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(34),
    [sym_literal_bool] = STATE(29),
    [sym_literal_int] = STATE(29),
    [sym_literal_float] = STATE(29),
    [sym_comment] = STATE(4),
    [aux_sym_nu_script_repeat1] = STATE(3),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_0x] = ACTIONS(15),
    [anon_sym_0o] = ACTIONS(17),
    [anon_sym_0b] = ACTIONS(19),
    [sym__sign] = ACTIONS(21),
    [sym__digit_decimal] = ACTIONS(23),
    [aux_sym_literal_float_token1] = ACTIONS(25),
    [sym__line_comment] = ACTIONS(27),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [5] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(34),
    [sym_literal_bool] = STATE(29),
    [sym_literal_int] = STATE(29),
    [sym_literal_float] = STATE(29),
    [sym_comment] = STATE(5),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_literal_null] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_0x] = ACTIONS(39),
    [anon_sym_0o] = ACTIONS(41),
    [anon_sym_0b] = ACTIONS(43),
    [sym__sign] = ACTIONS(45),
    [sym__digit_decimal] = ACTIONS(23),
    [aux_sym_literal_float_token1] = ACTIONS(47),
    [sym__line_comment] = ACTIONS(49),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [6] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(34),
    [sym_literal_bool] = STATE(29),
    [sym_literal_int] = STATE(29),
    [sym_literal_float] = STATE(29),
    [sym_comment] = STATE(6),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_literal_null] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(56),
    [anon_sym_false] = ACTIONS(56),
    [anon_sym_0x] = ACTIONS(59),
    [anon_sym_0o] = ACTIONS(62),
    [anon_sym_0b] = ACTIONS(65),
    [sym__sign] = ACTIONS(68),
    [sym__digit_decimal] = ACTIONS(71),
    [aux_sym_literal_float_token1] = ACTIONS(74),
    [sym__line_comment] = ACTIONS(77),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(34),
    [sym_literal_bool] = STATE(29),
    [sym_literal_int] = STATE(29),
    [sym_literal_float] = STATE(29),
    [sym_comment] = STATE(7),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_literal_null] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_0x] = ACTIONS(39),
    [anon_sym_0o] = ACTIONS(41),
    [anon_sym_0b] = ACTIONS(43),
    [sym__sign] = ACTIONS(45),
    [sym__digit_decimal] = ACTIONS(23),
    [aux_sym_literal_float_token1] = ACTIONS(47),
    [sym__line_comment] = ACTIONS(49),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(17),
    [sym__literal] = STATE(34),
    [sym_literal_bool] = STATE(29),
    [sym_literal_int] = STATE(29),
    [sym_literal_float] = STATE(29),
    [sym_comment] = STATE(8),
    [aux_sym_comment_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_literal_null] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_0x] = ACTIONS(39),
    [anon_sym_0o] = ACTIONS(41),
    [anon_sym_0b] = ACTIONS(43),
    [sym__sign] = ACTIONS(45),
    [sym__digit_decimal] = ACTIONS(23),
    [aux_sym_literal_float_token1] = ACTIONS(47),
    [sym__line_comment] = ACTIONS(49),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [9] = {
    [sym__float_exponent] = STATE(27),
    [sym_comment] = STATE(9),
    [aux_sym_comment_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_LF] = ACTIONS(80),
    [sym_literal_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_0x] = ACTIONS(80),
    [anon_sym_0o] = ACTIONS(80),
    [anon_sym_0b] = ACTIONS(80),
    [sym__sign] = ACTIONS(80),
    [sym__digit_decimal] = ACTIONS(82),
    [aux_sym_literal_float_token1] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [aux_sym__float_exponent_token1] = ACTIONS(86),
    [sym__line_comment] = ACTIONS(80),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [10] = {
    [sym__float_exponent] = STATE(20),
    [sym_comment] = STATE(10),
    [aux_sym_comment_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_LF] = ACTIONS(88),
    [sym_literal_null] = ACTIONS(88),
    [anon_sym_true] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(88),
    [anon_sym_0x] = ACTIONS(88),
    [anon_sym_0o] = ACTIONS(88),
    [anon_sym_0b] = ACTIONS(88),
    [sym__sign] = ACTIONS(88),
    [sym__digit_decimal] = ACTIONS(90),
    [aux_sym_literal_float_token1] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(92),
    [aux_sym__float_exponent_token1] = ACTIONS(86),
    [sym__line_comment] = ACTIONS(88),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(86), 1,
      aux_sym__float_exponent_token1,
    ACTIONS(96), 1,
      sym__digit_decimal,
    STATE(11), 1,
      sym_comment,
    STATE(22), 1,
      sym__float_exponent,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [32] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(86), 1,
      aux_sym__float_exponent_token1,
    ACTIONS(100), 1,
      sym__digit_decimal,
    STATE(12), 1,
      sym_comment,
    STATE(25), 1,
      sym__float_exponent,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(98), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [64] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(107), 1,
      sym__digit_decimal,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    STATE(13), 2,
      sym_comment,
      aux_sym__block_body_repeat1,
    ACTIONS(102), 10,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [93] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(111), 1,
      sym__digit_decimal,
    ACTIONS(113), 1,
      sym__line_comment,
    STATE(14), 2,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
  [119] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      aux_sym_nu_script_token1,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    STATE(15), 2,
      sym_comment,
      aux_sym_nu_script_repeat1,
    ACTIONS(121), 10,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      sym__digit_decimal,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [148] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      sym__digit_decimal,
    STATE(13), 1,
      aux_sym__block_body_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(51), 10,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [179] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(129), 1,
      sym__digit_decimal,
    STATE(16), 1,
      aux_sym__block_body_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(127), 10,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [210] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(133), 1,
      sym__digit_decimal,
    STATE(14), 1,
      aux_sym_comment_repeat1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(131), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [236] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(137), 1,
      sym__digit_decimal,
    STATE(19), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(135), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [262] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(100), 1,
      sym__digit_decimal,
    STATE(20), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(98), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [288] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      aux_sym_nu_script_token1,
    ACTIONS(141), 10,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      sym__digit_decimal,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [314] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(145), 1,
      sym__digit_decimal,
    STATE(22), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(143), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [340] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(90), 1,
      sym__digit_decimal,
    STATE(23), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(88), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [366] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(149), 1,
      sym__digit_decimal,
    STATE(24), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(147), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [392] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(96), 1,
      sym__digit_decimal,
    STATE(25), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [418] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      aux_sym_nu_script_token1,
    ACTIONS(153), 10,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      sym__digit_decimal,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [444] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(157), 1,
      sym__digit_decimal,
    STATE(27), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(155), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [470] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(159), 1,
      sym__digit_decimal,
    STATE(28), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(155), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [496] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(163), 1,
      sym__digit_decimal,
    STATE(29), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(161), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [522] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(167), 1,
      sym__digit_decimal,
    STATE(30), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(165), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [548] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(171), 1,
      sym__digit_decimal,
    STATE(31), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(169), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [574] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(175), 1,
      sym__digit_decimal,
    STATE(32), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(173), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [600] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(179), 1,
      sym__digit_decimal,
    STATE(33), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(177), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [626] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(183), 1,
      sym__digit_decimal,
    STATE(34), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(181), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [652] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(187), 1,
      sym__digit_decimal,
    STATE(35), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(185), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
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
    ACTIONS(189), 1,
      sym__digit_decimal,
    STATE(36), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
    ACTIONS(98), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      sym__sign,
      aux_sym_literal_float_token1,
      sym__line_comment,
  [704] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(191), 1,
      sym__sign,
    ACTIONS(193), 1,
      sym__digit_binary,
    STATE(37), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [720] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(193), 1,
      sym__digit_hex,
    ACTIONS(195), 1,
      sym__sign,
    STATE(38), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [736] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(193), 1,
      sym__digit_octal,
    ACTIONS(197), 1,
      sym__sign,
    STATE(39), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [752] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(199), 1,
      sym__digit_decimal,
    ACTIONS(201), 1,
      aux_sym_literal_float_token1,
    STATE(40), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [768] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(203), 1,
      sym__sign,
    ACTIONS(205), 1,
      sym__digit_decimal,
    STATE(41), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(207), 1,
      sym__digit_hex,
    STATE(42), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [797] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(209), 1,
      sym__digit_decimal,
    STATE(43), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [810] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [823] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(213), 1,
      aux_sym_shebang_token1,
    STATE(45), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [836] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(207), 1,
      sym__digit_binary,
    STATE(46), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [849] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(207), 1,
      sym__digit_octal,
    STATE(47), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_comment_repeat1,
  [862] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 32,
  [SMALL_STATE(13)] = 64,
  [SMALL_STATE(14)] = 93,
  [SMALL_STATE(15)] = 119,
  [SMALL_STATE(16)] = 148,
  [SMALL_STATE(17)] = 179,
  [SMALL_STATE(18)] = 210,
  [SMALL_STATE(19)] = 236,
  [SMALL_STATE(20)] = 262,
  [SMALL_STATE(21)] = 288,
  [SMALL_STATE(22)] = 314,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 366,
  [SMALL_STATE(25)] = 392,
  [SMALL_STATE(26)] = 418,
  [SMALL_STATE(27)] = 444,
  [SMALL_STATE(28)] = 470,
  [SMALL_STATE(29)] = 496,
  [SMALL_STATE(30)] = 522,
  [SMALL_STATE(31)] = 548,
  [SMALL_STATE(32)] = 574,
  [SMALL_STATE(33)] = 600,
  [SMALL_STATE(34)] = 626,
  [SMALL_STATE(35)] = 652,
  [SMALL_STATE(36)] = 678,
  [SMALL_STATE(37)] = 704,
  [SMALL_STATE(38)] = 720,
  [SMALL_STATE(39)] = 736,
  [SMALL_STATE(40)] = 752,
  [SMALL_STATE(41)] = 768,
  [SMALL_STATE(42)] = 784,
  [SMALL_STATE(43)] = 797,
  [SMALL_STATE(44)] = 810,
  [SMALL_STATE(45)] = 823,
  [SMALL_STATE(46)] = 836,
  [SMALL_STATE(47)] = 849,
  [SMALL_STATE(48)] = 862,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(29),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(32),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(38),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(39),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(37),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(40),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(19),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(31),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2), SHIFT_REPEAT(33),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 2), SHIFT_REPEAT(26),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nu_script_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_exponent, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_exponent, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nu_script_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_exponent, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_exponent, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_bool, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
