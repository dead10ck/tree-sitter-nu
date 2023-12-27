#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym__token = 1,
  aux_sym_nu_script_token1 = 2,
  anon_sym_POUND_BANG = 3,
  aux_sym_shebang_token1 = 4,
  anon_sym_LF = 5,
  sym_literal_null = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_literal_int = 9,
  sym_literal_float = 10,
  anon_sym_0x_LBRACK = 11,
  aux_sym_literal_binary_token1 = 12,
  anon_sym_RBRACK = 13,
  anon_sym_0o_LBRACK = 14,
  aux_sym_literal_binary_token2 = 15,
  anon_sym_0b_LBRACK = 16,
  aux_sym_literal_binary_token3 = 17,
  sym__comment = 18,
  sym_nu_script = 19,
  sym_shebang = 20,
  aux_sym__block_body = 21,
  sym__expression = 22,
  sym__literal = 23,
  sym_literal_bool = 24,
  sym_literal_binary = 25,
  sym_line_comment = 26,
  aux_sym_nu_script_repeat1 = 27,
  aux_sym__block_body_repeat1 = 28,
  aux_sym_line_comment_repeat1 = 29,
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
  [sym_literal_int] = "literal_int",
  [sym_literal_float] = "literal_float",
  [anon_sym_0x_LBRACK] = "0x[",
  [aux_sym_literal_binary_token1] = "literal_binary_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_0o_LBRACK] = "0o[",
  [aux_sym_literal_binary_token2] = "literal_binary_token2",
  [anon_sym_0b_LBRACK] = "0b[",
  [aux_sym_literal_binary_token3] = "literal_binary_token3",
  [sym__comment] = "_comment",
  [sym_nu_script] = "nu_script",
  [sym_shebang] = "shebang",
  [aux_sym__block_body] = "_block_body",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_literal_bool] = "literal_bool",
  [sym_literal_binary] = "literal_binary",
  [sym_line_comment] = "line_comment",
  [aux_sym_nu_script_repeat1] = "nu_script_repeat1",
  [aux_sym__block_body_repeat1] = "_block_body_repeat1",
  [aux_sym_line_comment_repeat1] = "line_comment_repeat1",
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
  [sym_literal_int] = sym_literal_int,
  [sym_literal_float] = sym_literal_float,
  [anon_sym_0x_LBRACK] = anon_sym_0x_LBRACK,
  [aux_sym_literal_binary_token1] = aux_sym_literal_binary_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_0o_LBRACK] = anon_sym_0o_LBRACK,
  [aux_sym_literal_binary_token2] = aux_sym_literal_binary_token2,
  [anon_sym_0b_LBRACK] = anon_sym_0b_LBRACK,
  [aux_sym_literal_binary_token3] = aux_sym_literal_binary_token3,
  [sym__comment] = sym__comment,
  [sym_nu_script] = sym_nu_script,
  [sym_shebang] = sym_shebang,
  [aux_sym__block_body] = aux_sym__block_body,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_literal_bool] = sym_literal_bool,
  [sym_literal_binary] = sym_literal_binary,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_nu_script_repeat1] = aux_sym_nu_script_repeat1,
  [aux_sym__block_body_repeat1] = aux_sym__block_body_repeat1,
  [aux_sym_line_comment_repeat1] = aux_sym_line_comment_repeat1,
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
  [sym__comment] = {
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
  [sym_literal_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
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
  [aux_sym_line_comment_repeat1] = {
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
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_bytes, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') SKIP(31)
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(4);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      END_STATE();
    case 8:
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 29:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 31:
      if (eof) ADVANCE(35);
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 32:
      if (eof) ADVANCE(35);
      if (lookahead == '\t') SKIP(33)
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') SKIP(32)
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_nu_script_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_literal_float);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ',') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == ',') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(72);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(102);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__comment);
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
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 104},
  [22] = {.lex_state = 99},
  [23] = {.lex_state = 92},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__token] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_literal_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_literal_int] = ACTIONS(1),
    [sym_literal_float] = ACTIONS(1),
    [anon_sym_0x_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_0o_LBRACK] = ACTIONS(1),
    [anon_sym_0b_LBRACK] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
  },
  [1] = {
    [sym_nu_script] = STATE(18),
    [sym_shebang] = STATE(4),
    [aux_sym__block_body] = STATE(5),
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_literal_bool] = STATE(10),
    [sym_literal_binary] = STATE(10),
    [sym_line_comment] = STATE(10),
    [aux_sym_nu_script_repeat1] = STATE(3),
    [aux_sym_line_comment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_nu_script_token1] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [sym_literal_null] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_literal_int] = ACTIONS(9),
    [sym_literal_float] = ACTIONS(9),
    [anon_sym_0x_LBRACK] = ACTIONS(13),
    [anon_sym_0o_LBRACK] = ACTIONS(15),
    [anon_sym_0b_LBRACK] = ACTIONS(17),
    [sym__comment] = ACTIONS(19),
  },
  [2] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_literal_bool] = STATE(10),
    [sym_literal_binary] = STATE(10),
    [sym_line_comment] = STATE(10),
    [aux_sym_nu_script_repeat1] = STATE(12),
    [aux_sym_line_comment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_nu_script_token1] = ACTIONS(23),
    [sym_literal_null] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_literal_int] = ACTIONS(9),
    [sym_literal_float] = ACTIONS(9),
    [anon_sym_0x_LBRACK] = ACTIONS(13),
    [anon_sym_0o_LBRACK] = ACTIONS(15),
    [anon_sym_0b_LBRACK] = ACTIONS(17),
    [sym__comment] = ACTIONS(19),
  },
  [3] = {
    [aux_sym__block_body] = STATE(8),
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_literal_bool] = STATE(10),
    [sym_literal_binary] = STATE(10),
    [sym_line_comment] = STATE(10),
    [aux_sym_nu_script_repeat1] = STATE(12),
    [aux_sym_line_comment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_nu_script_token1] = ACTIONS(23),
    [sym_literal_null] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_literal_int] = ACTIONS(9),
    [sym_literal_float] = ACTIONS(9),
    [anon_sym_0x_LBRACK] = ACTIONS(13),
    [anon_sym_0o_LBRACK] = ACTIONS(15),
    [anon_sym_0b_LBRACK] = ACTIONS(17),
    [sym__comment] = ACTIONS(19),
  },
  [4] = {
    [aux_sym__block_body] = STATE(8),
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_literal_bool] = STATE(10),
    [sym_literal_binary] = STATE(10),
    [sym_line_comment] = STATE(10),
    [aux_sym_nu_script_repeat1] = STATE(2),
    [aux_sym_line_comment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_nu_script_token1] = ACTIONS(27),
    [sym_literal_null] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_literal_int] = ACTIONS(9),
    [sym_literal_float] = ACTIONS(9),
    [anon_sym_0x_LBRACK] = ACTIONS(13),
    [anon_sym_0o_LBRACK] = ACTIONS(15),
    [anon_sym_0b_LBRACK] = ACTIONS(17),
    [sym__comment] = ACTIONS(19),
  },
  [5] = {
    [aux_sym__block_body] = STATE(7),
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_literal_bool] = STATE(10),
    [sym_literal_binary] = STATE(10),
    [sym_line_comment] = STATE(10),
    [aux_sym_line_comment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_literal_null] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_literal_int] = ACTIONS(9),
    [sym_literal_float] = ACTIONS(29),
    [anon_sym_0x_LBRACK] = ACTIONS(33),
    [anon_sym_0o_LBRACK] = ACTIONS(35),
    [anon_sym_0b_LBRACK] = ACTIONS(37),
    [sym__comment] = ACTIONS(39),
  },
  [6] = {
    [aux_sym__block_body] = STATE(7),
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_literal_bool] = STATE(10),
    [sym_literal_binary] = STATE(10),
    [sym_line_comment] = STATE(10),
    [aux_sym_line_comment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_literal_null] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_literal_int] = ACTIONS(9),
    [sym_literal_float] = ACTIONS(29),
    [anon_sym_0x_LBRACK] = ACTIONS(33),
    [anon_sym_0o_LBRACK] = ACTIONS(35),
    [anon_sym_0b_LBRACK] = ACTIONS(37),
    [sym__comment] = ACTIONS(39),
  },
  [7] = {
    [aux_sym__block_body] = STATE(7),
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_literal_bool] = STATE(10),
    [sym_literal_binary] = STATE(10),
    [sym_line_comment] = STATE(10),
    [aux_sym_line_comment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_literal_null] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
    [sym_literal_int] = ACTIONS(51),
    [sym_literal_float] = ACTIONS(45),
    [anon_sym_0x_LBRACK] = ACTIONS(54),
    [anon_sym_0o_LBRACK] = ACTIONS(57),
    [anon_sym_0b_LBRACK] = ACTIONS(60),
    [sym__comment] = ACTIONS(63),
  },
  [8] = {
    [aux_sym__block_body] = STATE(7),
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_literal_bool] = STATE(10),
    [sym_literal_binary] = STATE(10),
    [sym_line_comment] = STATE(10),
    [aux_sym_line_comment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_literal_null] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_literal_int] = ACTIONS(9),
    [sym_literal_float] = ACTIONS(29),
    [anon_sym_0x_LBRACK] = ACTIONS(33),
    [anon_sym_0o_LBRACK] = ACTIONS(35),
    [anon_sym_0b_LBRACK] = ACTIONS(37),
    [sym__comment] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(66), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      sym_literal_int,
    STATE(14), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__comment,
  [21] = 4,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(74), 1,
      sym_literal_int,
    STATE(9), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(70), 9,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__comment,
  [42] = 3,
    ACTIONS(78), 1,
      sym_literal_int,
    STATE(13), 1,
      aux_sym_line_comment_repeat1,
    ACTIONS(76), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__comment,
  [61] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      aux_sym_nu_script_token1,
    STATE(12), 1,
      aux_sym_nu_script_repeat1,
    ACTIONS(85), 9,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_int,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__comment,
  [82] = 4,
    ACTIONS(89), 1,
      sym_literal_int,
    ACTIONS(91), 1,
      sym__comment,
    STATE(13), 1,
      aux_sym_line_comment_repeat1,
    ACTIONS(87), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
  [103] = 4,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      sym_literal_int,
    STATE(14), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__comment,
  [124] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      aux_sym_nu_script_token1,
    ACTIONS(103), 9,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_int,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__comment,
  [140] = 2,
    ACTIONS(107), 1,
      sym_literal_int,
    ACTIONS(105), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__comment,
  [156] = 2,
    ACTIONS(111), 1,
      sym_literal_int,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__comment,
  [172] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [176] = 1,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
  [180] = 1,
    ACTIONS(117), 1,
      aux_sym_shebang_token1,
  [184] = 1,
    ACTIONS(119), 1,
      aux_sym_literal_binary_token3,
  [188] = 1,
    ACTIONS(119), 1,
      aux_sym_literal_binary_token2,
  [192] = 1,
    ACTIONS(119), 1,
      aux_sym_literal_binary_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 21,
  [SMALL_STATE(11)] = 42,
  [SMALL_STATE(12)] = 61,
  [SMALL_STATE(13)] = 82,
  [SMALL_STATE(14)] = 103,
  [SMALL_STATE(15)] = 124,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 156,
  [SMALL_STATE(18)] = 172,
  [SMALL_STATE(19)] = 176,
  [SMALL_STATE(20)] = 180,
  [SMALL_STATE(21)] = 184,
  [SMALL_STATE(22)] = 188,
  [SMALL_STATE(23)] = 192,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(10),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(17),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(10),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(23),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(22),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(21),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nu_script_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_comment_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_comment_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_comment_repeat1, 2), SHIFT_REPEAT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2), SHIFT_REPEAT(14),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 3, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_binary, 3, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_bool, 1),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
