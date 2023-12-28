#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym_identifier = 21,
  sym_line_comment = 22,
  sym_nu_script = 23,
  sym_shebang = 24,
  sym__block_body_lf = 25,
  sym__block_body_sub = 26,
  sym_pipeline = 27,
  sym__pipeline_element = 28,
  sym__expression = 29,
  sym_subexpression = 30,
  sym__literal = 31,
  sym_literal_bool = 32,
  sym_literal_binary = 33,
  aux_sym__block_body_lf_repeat1 = 34,
  aux_sym__block_body_sub_repeat1 = 35,
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
  [aux_sym__block_body_lf_repeat1] = "_block_body_lf_repeat1",
  [aux_sym__block_body_sub_repeat1] = "_block_body_sub_repeat1",
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
  [aux_sym__block_body_lf_repeat1] = aux_sym__block_body_lf_repeat1,
  [aux_sym__block_body_sub_repeat1] = aux_sym__block_body_sub_repeat1,
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
  [aux_sym__block_body_lf_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_body_sub_repeat1] = {
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 16,
  [22] = 22,
  [23] = 23,
  [24] = 15,
  [25] = 17,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 29,
  [33] = 13,
  [34] = 27,
  [35] = 26,
  [36] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(153);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(130);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
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
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(61);
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
          lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(114);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
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
      if (eof) ADVANCE(50);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__terminator_lf);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__terminator_lf);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == ';') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__terminator_sub);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'b') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
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
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_literal_float);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == ',') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == ',') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(102);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(107);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_literal_date);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(123);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(40);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(123);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(40);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '2') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == '_') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(133);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(132);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(133);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(176);
      END_STATE();
    case 177:
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
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 109},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 104},
  [27] = {.lex_state = 97},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 49},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 97},
  [35] = {.lex_state = 104},
  [36] = {.lex_state = 109},
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
    [sym_identifier] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_nu_script] = STATE(22),
    [sym_shebang] = STATE(2),
    [sym__block_body_lf] = STATE(20),
    [sym_pipeline] = STATE(19),
    [sym__pipeline_element] = STATE(25),
    [sym__expression] = STATE(25),
    [sym_subexpression] = STATE(25),
    [sym__literal] = STATE(25),
    [sym_literal_bool] = STATE(25),
    [sym_literal_binary] = STATE(25),
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
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__block_body_lf] = STATE(28),
    [sym_pipeline] = STATE(19),
    [sym__pipeline_element] = STATE(25),
    [sym__expression] = STATE(25),
    [sym_subexpression] = STATE(25),
    [sym__literal] = STATE(25),
    [sym_literal_bool] = STATE(25),
    [sym_literal_binary] = STATE(25),
    [aux_sym__block_body_lf_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
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
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_pipeline] = STATE(19),
    [sym__pipeline_element] = STATE(25),
    [sym__expression] = STATE(25),
    [sym_subexpression] = STATE(25),
    [sym__literal] = STATE(25),
    [sym_literal_bool] = STATE(25),
    [sym_literal_binary] = STATE(25),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(25),
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
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_pipeline] = STATE(19),
    [sym__pipeline_element] = STATE(25),
    [sym__expression] = STATE(25),
    [sym_subexpression] = STATE(25),
    [sym__literal] = STATE(25),
    [sym_literal_bool] = STATE(25),
    [sym_literal_binary] = STATE(25),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_literal_null] = ACTIONS(32),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_literal_int] = ACTIONS(38),
    [sym_literal_float] = ACTIONS(32),
    [anon_sym_0x_LBRACK] = ACTIONS(41),
    [anon_sym_0o_LBRACK] = ACTIONS(44),
    [anon_sym_0b_LBRACK] = ACTIONS(47),
    [sym_literal_date] = ACTIONS(32),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__block_body_sub] = STATE(31),
    [sym_pipeline] = STATE(12),
    [sym__pipeline_element] = STATE(17),
    [sym__expression] = STATE(17),
    [sym_subexpression] = STATE(17),
    [sym__literal] = STATE(17),
    [sym_literal_bool] = STATE(17),
    [sym_literal_binary] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_literal_null] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(54),
    [anon_sym_false] = ACTIONS(54),
    [sym_literal_int] = ACTIONS(56),
    [sym_literal_float] = ACTIONS(52),
    [anon_sym_0x_LBRACK] = ACTIONS(58),
    [anon_sym_0o_LBRACK] = ACTIONS(60),
    [anon_sym_0b_LBRACK] = ACTIONS(62),
    [sym_literal_date] = ACTIONS(52),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__block_body_sub] = STATE(30),
    [sym_pipeline] = STATE(12),
    [sym__pipeline_element] = STATE(17),
    [sym__expression] = STATE(17),
    [sym_subexpression] = STATE(17),
    [sym__literal] = STATE(17),
    [sym_literal_bool] = STATE(17),
    [sym_literal_binary] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_literal_null] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(54),
    [anon_sym_false] = ACTIONS(54),
    [sym_literal_int] = ACTIONS(56),
    [sym_literal_float] = ACTIONS(52),
    [anon_sym_0x_LBRACK] = ACTIONS(58),
    [anon_sym_0o_LBRACK] = ACTIONS(60),
    [anon_sym_0b_LBRACK] = ACTIONS(62),
    [sym_literal_date] = ACTIONS(52),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      sym_literal_int,
    ACTIONS(58), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(60), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(62), 1,
      anon_sym_0b_LBRACK,
    STATE(14), 1,
      sym_pipeline,
    ACTIONS(54), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(52), 3,
      sym_literal_null,
      sym_literal_float,
      sym_literal_date,
    STATE(17), 6,
      sym__pipeline_element,
      sym__expression,
      sym_subexpression,
      sym__literal,
      sym_literal_bool,
      sym_literal_binary,
  [39] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(64), 1,
      sym_literal_int,
    ACTIONS(27), 10,
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
  [58] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(68), 1,
      sym_literal_int,
    ACTIONS(66), 10,
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
  [77] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      sym__terminator_sub,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym__block_body_sub_repeat1,
  [90] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      sym__terminator_sub,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym__block_body_sub_repeat1,
  [103] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      sym__terminator_sub,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym__block_body_sub_repeat1,
  [116] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [124] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [132] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [140] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [148] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [156] = 2,
    ACTIONS(89), 1,
      aux_sym_shebang_token1,
    ACTIONS(91), 1,
      sym_line_comment,
  [163] = 2,
    ACTIONS(91), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      sym__terminator_lf,
  [170] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
  [177] = 2,
    ACTIONS(85), 1,
      sym__terminator_lf,
    ACTIONS(91), 1,
      sym_line_comment,
  [184] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
  [191] = 2,
    ACTIONS(91), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      aux_sym_literal_binary_token3,
  [198] = 2,
    ACTIONS(83), 1,
      sym__terminator_lf,
    ACTIONS(91), 1,
      sym_line_comment,
  [205] = 2,
    ACTIONS(87), 1,
      sym__terminator_lf,
    ACTIONS(91), 1,
      sym_line_comment,
  [212] = 2,
    ACTIONS(91), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      aux_sym_literal_binary_token2,
  [219] = 2,
    ACTIONS(91), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      aux_sym_literal_binary_token1,
  [226] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [233] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
  [240] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [247] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
  [254] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
  [261] = 2,
    ACTIONS(81), 1,
      sym__terminator_lf,
    ACTIONS(91), 1,
      sym_line_comment,
  [268] = 2,
    ACTIONS(91), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      aux_sym_literal_binary_token1,
  [275] = 2,
    ACTIONS(91), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      aux_sym_literal_binary_token2,
  [282] = 2,
    ACTIONS(91), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      aux_sym_literal_binary_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 39,
  [SMALL_STATE(9)] = 58,
  [SMALL_STATE(10)] = 77,
  [SMALL_STATE(11)] = 90,
  [SMALL_STATE(12)] = 103,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 132,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 148,
  [SMALL_STATE(18)] = 156,
  [SMALL_STATE(19)] = 163,
  [SMALL_STATE(20)] = 170,
  [SMALL_STATE(21)] = 177,
  [SMALL_STATE(22)] = 184,
  [SMALL_STATE(23)] = 191,
  [SMALL_STATE(24)] = 198,
  [SMALL_STATE(25)] = 205,
  [SMALL_STATE(26)] = 212,
  [SMALL_STATE(27)] = 219,
  [SMALL_STATE(28)] = 226,
  [SMALL_STATE(29)] = 233,
  [SMALL_STATE(30)] = 240,
  [SMALL_STATE(31)] = 247,
  [SMALL_STATE(32)] = 254,
  [SMALL_STATE(33)] = 261,
  [SMALL_STATE(34)] = 268,
  [SMALL_STATE(35)] = 275,
  [SMALL_STATE(36)] = 282,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_lf, 1, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(25),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(33),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(27),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(26),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(23),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2), SHIFT_REPEAT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 3, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subexpression, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
