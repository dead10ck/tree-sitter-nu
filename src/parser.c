#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
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
  sym__line_comment = 18,
  sym_nu_script = 19,
  sym_shebang = 20,
  aux_sym__block_body = 21,
  sym__expression = 22,
  sym__literal = 23,
  sym_literal_bool = 24,
  sym_literal_binary = 25,
  sym_comment = 26,
  aux_sym_nu_script_repeat1 = 27,
  aux_sym__block_body_repeat1 = 28,
  aux_sym_comment_repeat1 = 29,
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
  [sym__line_comment] = "_line_comment",
  [sym_nu_script] = "nu_script",
  [sym_shebang] = "shebang",
  [aux_sym__block_body] = "_block_body",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_literal_bool] = "literal_bool",
  [sym_literal_binary] = "literal_binary",
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
  [sym_literal_int] = sym_literal_int,
  [sym_literal_float] = sym_literal_float,
  [anon_sym_0x_LBRACK] = anon_sym_0x_LBRACK,
  [aux_sym_literal_binary_token1] = aux_sym_literal_binary_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_0o_LBRACK] = anon_sym_0o_LBRACK,
  [aux_sym_literal_binary_token2] = aux_sym_literal_binary_token2,
  [anon_sym_0b_LBRACK] = anon_sym_0b_LBRACK,
  [aux_sym_literal_binary_token3] = aux_sym_literal_binary_token3,
  [sym__line_comment] = sym__line_comment,
  [sym_nu_script] = sym_nu_script,
  [sym_shebang] = sym_shebang,
  [aux_sym__block_body] = aux_sym__block_body,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_literal_bool] = sym_literal_bool,
  [sym_literal_binary] = sym_literal_binary,
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
  [sym_literal_binary] = {
    .visible = true,
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') SKIP(28)
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(24);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(24);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(24);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_nu_script_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_nu_script_token1);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '_') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_literal_float);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == ',') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ',') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(99);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
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
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 89},
  [24] = {.lex_state = 96},
  [25] = {.lex_state = 101},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 1},
  [29] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [aux_sym_comment_repeat1] = STATE(29),
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
    [sym__line_comment] = ACTIONS(1),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [1] = {
    [sym_nu_script] = STATE(26),
    [sym_shebang] = STATE(2),
    [aux_sym__block_body] = STATE(8),
    [sym__expression] = STATE(9),
    [sym__literal] = STATE(16),
    [sym_literal_bool] = STATE(19),
    [sym_literal_binary] = STATE(19),
    [sym_comment] = STATE(1),
    [aux_sym_nu_script_repeat1] = STATE(4),
    [aux_sym_comment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_literal_int] = ACTIONS(11),
    [sym_literal_float] = ACTIONS(11),
    [anon_sym_0x_LBRACK] = ACTIONS(15),
    [anon_sym_0o_LBRACK] = ACTIONS(17),
    [anon_sym_0b_LBRACK] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(21),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [2] = {
    [aux_sym__block_body] = STATE(7),
    [sym__expression] = STATE(9),
    [sym__literal] = STATE(16),
    [sym_literal_bool] = STATE(19),
    [sym_literal_binary] = STATE(19),
    [sym_comment] = STATE(2),
    [aux_sym_nu_script_repeat1] = STATE(3),
    [aux_sym_comment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_literal_int] = ACTIONS(11),
    [sym_literal_float] = ACTIONS(11),
    [anon_sym_0x_LBRACK] = ACTIONS(15),
    [anon_sym_0o_LBRACK] = ACTIONS(17),
    [anon_sym_0b_LBRACK] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(21),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [3] = {
    [aux_sym__block_body] = STATE(5),
    [sym__expression] = STATE(9),
    [sym__literal] = STATE(16),
    [sym_literal_bool] = STATE(19),
    [sym_literal_binary] = STATE(19),
    [sym_comment] = STATE(3),
    [aux_sym_nu_script_repeat1] = STATE(12),
    [aux_sym_comment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_literal_int] = ACTIONS(11),
    [sym_literal_float] = ACTIONS(11),
    [anon_sym_0x_LBRACK] = ACTIONS(15),
    [anon_sym_0o_LBRACK] = ACTIONS(17),
    [anon_sym_0b_LBRACK] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(21),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__block_body] = STATE(7),
    [sym__expression] = STATE(9),
    [sym__literal] = STATE(16),
    [sym_literal_bool] = STATE(19),
    [sym_literal_binary] = STATE(19),
    [sym_comment] = STATE(4),
    [aux_sym_nu_script_repeat1] = STATE(12),
    [aux_sym_comment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_literal_int] = ACTIONS(11),
    [sym_literal_float] = ACTIONS(11),
    [anon_sym_0x_LBRACK] = ACTIONS(15),
    [anon_sym_0o_LBRACK] = ACTIONS(17),
    [anon_sym_0b_LBRACK] = ACTIONS(19),
    [sym__line_comment] = ACTIONS(21),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [5] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(9),
    [sym__literal] = STATE(16),
    [sym_literal_bool] = STATE(19),
    [sym_literal_binary] = STATE(19),
    [sym_comment] = STATE(5),
    [aux_sym_comment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_literal_null] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_literal_int] = ACTIONS(11),
    [sym_literal_float] = ACTIONS(29),
    [anon_sym_0x_LBRACK] = ACTIONS(33),
    [anon_sym_0o_LBRACK] = ACTIONS(35),
    [anon_sym_0b_LBRACK] = ACTIONS(37),
    [sym__line_comment] = ACTIONS(39),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [6] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(9),
    [sym__literal] = STATE(16),
    [sym_literal_bool] = STATE(19),
    [sym_literal_binary] = STATE(19),
    [sym_comment] = STATE(6),
    [aux_sym_comment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_literal_null] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(46),
    [anon_sym_false] = ACTIONS(46),
    [sym_literal_int] = ACTIONS(49),
    [sym_literal_float] = ACTIONS(43),
    [anon_sym_0x_LBRACK] = ACTIONS(52),
    [anon_sym_0o_LBRACK] = ACTIONS(55),
    [anon_sym_0b_LBRACK] = ACTIONS(58),
    [sym__line_comment] = ACTIONS(61),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(9),
    [sym__literal] = STATE(16),
    [sym_literal_bool] = STATE(19),
    [sym_literal_binary] = STATE(19),
    [sym_comment] = STATE(7),
    [aux_sym_comment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_literal_null] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_literal_int] = ACTIONS(11),
    [sym_literal_float] = ACTIONS(29),
    [anon_sym_0x_LBRACK] = ACTIONS(33),
    [anon_sym_0o_LBRACK] = ACTIONS(35),
    [anon_sym_0b_LBRACK] = ACTIONS(37),
    [sym__line_comment] = ACTIONS(39),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__block_body] = STATE(6),
    [sym__expression] = STATE(9),
    [sym__literal] = STATE(16),
    [sym_literal_bool] = STATE(19),
    [sym_literal_binary] = STATE(19),
    [sym_comment] = STATE(8),
    [aux_sym_comment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_literal_null] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_literal_int] = ACTIONS(11),
    [sym_literal_float] = ACTIONS(29),
    [anon_sym_0x_LBRACK] = ACTIONS(33),
    [anon_sym_0o_LBRACK] = ACTIONS(35),
    [anon_sym_0b_LBRACK] = ACTIONS(37),
    [sym__line_comment] = ACTIONS(39),
    [aux_sym_comment_repeat1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(66), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      sym_literal_int,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__block_body_repeat1,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(64), 9,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [30] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(72), 1,
      sym_literal_int,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_comment_repeat1,
    ACTIONS(70), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [55] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(66), 1,
      anon_sym_LF,
    ACTIONS(74), 1,
      sym_literal_int,
    STATE(11), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__block_body_repeat1,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(41), 9,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [85] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      aux_sym_nu_script_token1,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    STATE(12), 2,
      sym_comment,
      aux_sym_nu_script_repeat1,
    ACTIONS(81), 9,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_int,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [113] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(85), 1,
      sym_literal_int,
    ACTIONS(87), 1,
      sym__line_comment,
    STATE(13), 2,
      sym_comment,
      aux_sym_comment_repeat1,
    ACTIONS(83), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
  [138] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym_literal_int,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    STATE(14), 2,
      sym_comment,
      aux_sym__block_body_repeat1,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [166] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(99), 1,
      sym_literal_int,
    STATE(15), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(97), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [191] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(103), 1,
      sym_literal_int,
    STATE(16), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(101), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [216] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(107), 10,
      aux_sym_nu_script_token1,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_int,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [241] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(111), 1,
      sym_literal_int,
    STATE(18), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
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
      sym__line_comment,
  [266] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(115), 1,
      sym_literal_int,
    STATE(19), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [291] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(119), 1,
      sym_literal_int,
    STATE(20), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(117), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [316] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(123), 1,
      sym_literal_int,
    STATE(21), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(121), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [341] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(127), 10,
      aux_sym_nu_script_token1,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_int,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym__line_comment,
  [366] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(129), 1,
      aux_sym_literal_binary_token1,
    STATE(23), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
  [379] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(129), 1,
      aux_sym_literal_binary_token2,
    STATE(24), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
  [392] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(129), 1,
      aux_sym_literal_binary_token3,
    STATE(25), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
  [405] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
  [418] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
  [431] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_repeat1,
    ACTIONS(135), 1,
      aux_sym_shebang_token1,
    STATE(28), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_comment_repeat1,
  [444] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 30,
  [SMALL_STATE(11)] = 55,
  [SMALL_STATE(12)] = 85,
  [SMALL_STATE(13)] = 113,
  [SMALL_STATE(14)] = 138,
  [SMALL_STATE(15)] = 166,
  [SMALL_STATE(16)] = 191,
  [SMALL_STATE(17)] = 216,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 266,
  [SMALL_STATE(20)] = 291,
  [SMALL_STATE(21)] = 316,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 366,
  [SMALL_STATE(24)] = 379,
  [SMALL_STATE(25)] = 392,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 418,
  [SMALL_STATE(28)] = 431,
  [SMALL_STATE(29)] = 444,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(19),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(18),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(19),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(23),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(24),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(25),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body, 2), SHIFT_REPEAT(15),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nu_script_repeat1, 2), SHIFT_REPEAT(22),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nu_script_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2), SHIFT_REPEAT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_bool, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 3, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_binary, 3, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nu_script_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
