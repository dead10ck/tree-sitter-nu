#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  sym_literal_date = 18,
  sym__comment = 19,
  sym_nu_script = 20,
  sym_shebang = 21,
  aux_sym__block_body = 22,
  sym__expression = 23,
  sym__literal = 24,
  sym_literal_bool = 25,
  sym_literal_binary = 26,
  sym_line_comment = 27,
  aux_sym_nu_script_repeat1 = 28,
  aux_sym__block_body_repeat1 = 29,
  aux_sym_line_comment_repeat1 = 30,
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
  [sym_literal_date] = "literal_date",
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
  [sym_literal_date] = sym_literal_date,
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
  [sym_literal_date] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(53);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == ' ') SKIP(49)
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == ']') ADVANCE(137);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(4);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '!') ADVANCE(55);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 11:
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 12:
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(150);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      if (eof) ADVANCE(53);
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 50:
      if (eof) ADVANCE(53);
      if (lookahead == '\t') SKIP(51)
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == ' ') SKIP(50)
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_nu_script_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(139);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(132);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_literal_float);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == ',') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == ',') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(114);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_literal_date);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(40);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(40);
      END_STATE();
    case 154:
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
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 51},
  [10] = {.lex_state = 51},
  [11] = {.lex_state = 51},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 51},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 147},
  [22] = {.lex_state = 142},
  [23] = {.lex_state = 135},
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
    [sym_literal_date] = ACTIONS(1),
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
    [sym_literal_date] = ACTIONS(9),
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
    [sym_literal_date] = ACTIONS(9),
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
    [sym_literal_date] = ACTIONS(9),
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
    [sym_literal_date] = ACTIONS(9),
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
    [sym_literal_date] = ACTIONS(29),
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
    [sym_literal_date] = ACTIONS(29),
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
    [sym_literal_date] = ACTIONS(45),
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
    [sym_literal_date] = ACTIONS(29),
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
    ACTIONS(43), 10,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__comment,
  [22] = 4,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(74), 1,
      sym_literal_int,
    STATE(9), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(70), 10,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__comment,
  [44] = 3,
    ACTIONS(78), 1,
      sym_literal_int,
    STATE(13), 1,
      aux_sym_line_comment_repeat1,
    ACTIONS(76), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__comment,
  [64] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      aux_sym_nu_script_token1,
    STATE(12), 1,
      aux_sym_nu_script_repeat1,
    ACTIONS(85), 10,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_int,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__comment,
  [86] = 4,
    ACTIONS(89), 1,
      sym_literal_int,
    ACTIONS(91), 1,
      sym__comment,
    STATE(13), 1,
      aux_sym_line_comment_repeat1,
    ACTIONS(87), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
  [108] = 4,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      sym_literal_int,
    STATE(14), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(94), 10,
      ts_builtin_sym_end,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__comment,
  [130] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      aux_sym_nu_script_token1,
    ACTIONS(103), 10,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_int,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__comment,
  [147] = 2,
    ACTIONS(107), 1,
      sym_literal_int,
    ACTIONS(105), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__comment,
  [164] = 2,
    ACTIONS(111), 1,
      sym_literal_int,
    ACTIONS(109), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__comment,
  [181] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [185] = 1,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
  [189] = 1,
    ACTIONS(117), 1,
      aux_sym_shebang_token1,
  [193] = 1,
    ACTIONS(119), 1,
      aux_sym_literal_binary_token3,
  [197] = 1,
    ACTIONS(119), 1,
      aux_sym_literal_binary_token2,
  [201] = 1,
    ACTIONS(119), 1,
      aux_sym_literal_binary_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 22,
  [SMALL_STATE(11)] = 44,
  [SMALL_STATE(12)] = 64,
  [SMALL_STATE(13)] = 86,
  [SMALL_STATE(14)] = 108,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 147,
  [SMALL_STATE(17)] = 164,
  [SMALL_STATE(18)] = 181,
  [SMALL_STATE(19)] = 185,
  [SMALL_STATE(20)] = 189,
  [SMALL_STATE(21)] = 193,
  [SMALL_STATE(22)] = 197,
  [SMALL_STATE(23)] = 201,
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
