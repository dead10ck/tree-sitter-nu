#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym__token = 1,
  aux_sym_nu_script_token1 = 2,
  anon_sym_POUND_BANG = 3,
  aux_sym_shebang_token1 = 4,
  sym_identifier = 5,
  sym__comment = 6,
  sym__terminator = 7,
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
  sym_nu_script = 21,
  sym_shebang = 22,
  sym_line_comment = 23,
  sym__block_body = 24,
  sym_pipeline = 25,
  sym__pipeline_element = 26,
  sym__expression = 27,
  sym__literal = 28,
  sym_literal_bool = 29,
  sym_literal_binary = 30,
  aux_sym_nu_script_repeat1 = 31,
  aux_sym_pipeline_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__token] = "_token",
  [aux_sym_nu_script_token1] = "nu_script_token1",
  [anon_sym_POUND_BANG] = "#!",
  [aux_sym_shebang_token1] = "shebang_token1",
  [sym_identifier] = "identifier",
  [sym__comment] = "_comment",
  [sym__terminator] = "_terminator",
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
  [sym_nu_script] = "nu_script",
  [sym_shebang] = "shebang",
  [sym_line_comment] = "line_comment",
  [sym__block_body] = "_block_body",
  [sym_pipeline] = "pipeline",
  [sym__pipeline_element] = "_pipeline_element",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_literal_bool] = "literal_bool",
  [sym_literal_binary] = "literal_binary",
  [aux_sym_nu_script_repeat1] = "nu_script_repeat1",
  [aux_sym_pipeline_repeat1] = "pipeline_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__token] = sym__token,
  [aux_sym_nu_script_token1] = aux_sym_nu_script_token1,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [aux_sym_shebang_token1] = aux_sym_shebang_token1,
  [sym_identifier] = sym_identifier,
  [sym__comment] = sym__comment,
  [sym__terminator] = sym__terminator,
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
  [sym_nu_script] = sym_nu_script,
  [sym_shebang] = sym_shebang,
  [sym_line_comment] = sym_line_comment,
  [sym__block_body] = sym__block_body,
  [sym_pipeline] = sym_pipeline,
  [sym__pipeline_element] = sym__pipeline_element,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_literal_bool] = sym_literal_bool,
  [sym_literal_binary] = sym_literal_binary,
  [aux_sym_nu_script_repeat1] = aux_sym_nu_script_repeat1,
  [aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
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
  [sym_nu_script] = {
    .visible = true,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__block_body] = {
    .visible = false,
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
  [aux_sym_nu_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == ' ') SKIP(49)
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == ']') ADVANCE(154);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '\n' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(126);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(4);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '!') ADVANCE(55);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(5);
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
      if (lookahead == '[') ADVANCE(160);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      END_STATE();
    case 11:
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 12:
      if (lookahead == '[') ADVANCE(148);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(132);
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
          lookahead == 'f') ADVANCE(144);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(167);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
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
      if (lookahead == '\t') SKIP(52)
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == ';') ADVANCE(131);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == ' ') SKIP(50)
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_nu_script_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '2') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(161);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '[') ADVANCE(149);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 102:
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
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(104);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(108);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__terminator);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('&' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ';') ADVANCE(126);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_literal_float);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_literal_float);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_literal_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(150);
      if (lookahead == ',') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (lookahead == ' ') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == ',') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (lookahead == ' ') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(129);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == ' ') ADVANCE(163);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_literal_date);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(40);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(40);
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
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 51},
  [3] = {.lex_state = 51},
  [4] = {.lex_state = 51},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 164},
  [18] = {.lex_state = 159},
  [19] = {.lex_state = 152},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__token] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [sym__terminator] = ACTIONS(1),
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
  },
  [1] = {
    [sym_nu_script] = STATE(14),
    [sym_shebang] = STATE(4),
    [sym_line_comment] = STATE(6),
    [sym__block_body] = STATE(11),
    [sym_pipeline] = STATE(11),
    [sym__pipeline_element] = STATE(12),
    [sym__expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_literal_bool] = STATE(12),
    [sym_literal_binary] = STATE(12),
    [aux_sym_nu_script_repeat1] = STATE(2),
    [aux_sym_pipeline_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_nu_script_token1] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [sym__comment] = ACTIONS(11),
    [sym__terminator] = ACTIONS(13),
    [sym_literal_null] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(15),
    [anon_sym_0x_LBRACK] = ACTIONS(19),
    [anon_sym_0o_LBRACK] = ACTIONS(21),
    [anon_sym_0b_LBRACK] = ACTIONS(23),
    [sym_literal_date] = ACTIONS(15),
  },
  [2] = {
    [sym_line_comment] = STATE(6),
    [sym__block_body] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym__pipeline_element] = STATE(12),
    [sym__expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_literal_bool] = STATE(12),
    [sym_literal_binary] = STATE(12),
    [aux_sym_nu_script_repeat1] = STATE(7),
    [aux_sym_pipeline_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_nu_script_token1] = ACTIONS(27),
    [sym__comment] = ACTIONS(11),
    [sym__terminator] = ACTIONS(13),
    [sym_literal_null] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(15),
    [anon_sym_0x_LBRACK] = ACTIONS(19),
    [anon_sym_0o_LBRACK] = ACTIONS(21),
    [anon_sym_0b_LBRACK] = ACTIONS(23),
    [sym_literal_date] = ACTIONS(15),
  },
  [3] = {
    [sym_line_comment] = STATE(6),
    [sym__block_body] = STATE(22),
    [sym_pipeline] = STATE(22),
    [sym__pipeline_element] = STATE(12),
    [sym__expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_literal_bool] = STATE(12),
    [sym_literal_binary] = STATE(12),
    [aux_sym_nu_script_repeat1] = STATE(7),
    [aux_sym_pipeline_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_nu_script_token1] = ACTIONS(27),
    [sym__comment] = ACTIONS(11),
    [sym__terminator] = ACTIONS(13),
    [sym_literal_null] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(15),
    [anon_sym_0x_LBRACK] = ACTIONS(19),
    [anon_sym_0o_LBRACK] = ACTIONS(21),
    [anon_sym_0b_LBRACK] = ACTIONS(23),
    [sym_literal_date] = ACTIONS(15),
  },
  [4] = {
    [sym_line_comment] = STATE(6),
    [sym__block_body] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym__pipeline_element] = STATE(12),
    [sym__expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_literal_bool] = STATE(12),
    [sym_literal_binary] = STATE(12),
    [aux_sym_nu_script_repeat1] = STATE(3),
    [aux_sym_pipeline_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_nu_script_token1] = ACTIONS(31),
    [sym__comment] = ACTIONS(11),
    [sym__terminator] = ACTIONS(13),
    [sym_literal_null] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(15),
    [anon_sym_0x_LBRACK] = ACTIONS(19),
    [anon_sym_0o_LBRACK] = ACTIONS(21),
    [anon_sym_0b_LBRACK] = ACTIONS(23),
    [sym_literal_date] = ACTIONS(15),
  },
  [5] = {
    [sym_line_comment] = STATE(5),
    [sym__pipeline_element] = STATE(12),
    [sym__expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_literal_bool] = STATE(12),
    [sym_literal_binary] = STATE(12),
    [aux_sym_pipeline_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__comment] = ACTIONS(35),
    [sym__terminator] = ACTIONS(38),
    [sym_literal_null] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(44),
    [anon_sym_false] = ACTIONS(44),
    [sym_literal_int] = ACTIONS(47),
    [sym_literal_float] = ACTIONS(41),
    [anon_sym_0x_LBRACK] = ACTIONS(50),
    [anon_sym_0o_LBRACK] = ACTIONS(53),
    [anon_sym_0b_LBRACK] = ACTIONS(56),
    [sym_literal_date] = ACTIONS(41),
  },
  [6] = {
    [sym_line_comment] = STATE(5),
    [sym__pipeline_element] = STATE(12),
    [sym__expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_literal_bool] = STATE(12),
    [sym_literal_binary] = STATE(12),
    [aux_sym_pipeline_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym__comment] = ACTIONS(61),
    [sym__terminator] = ACTIONS(63),
    [sym_literal_null] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_literal_int] = ACTIONS(15),
    [sym_literal_float] = ACTIONS(65),
    [anon_sym_0x_LBRACK] = ACTIONS(69),
    [anon_sym_0o_LBRACK] = ACTIONS(71),
    [anon_sym_0b_LBRACK] = ACTIONS(73),
    [sym_literal_date] = ACTIONS(65),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_nu_script_token1,
    STATE(7), 1,
      aux_sym_nu_script_repeat1,
    ACTIONS(80), 11,
      sym__comment,
      sym__terminator,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_int,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
  [23] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      aux_sym_nu_script_token1,
    ACTIONS(84), 11,
      sym__comment,
      sym__terminator,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_int,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
  [41] = 2,
    ACTIONS(88), 1,
      sym_literal_int,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      sym__comment,
      sym__terminator,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
  [58] = 2,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(33), 11,
      ts_builtin_sym_end,
      sym__comment,
      sym__terminator,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      sym_literal_float,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
  [75] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [82] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(92), 1,
      sym__terminator,
  [89] = 2,
    ACTIONS(94), 1,
      aux_sym_shebang_token1,
    ACTIONS(96), 1,
      sym__comment,
  [96] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [103] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
  [110] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [117] = 2,
    ACTIONS(96), 1,
      sym__comment,
    ACTIONS(102), 1,
      aux_sym_literal_binary_token3,
  [124] = 2,
    ACTIONS(96), 1,
      sym__comment,
    ACTIONS(102), 1,
      aux_sym_literal_binary_token2,
  [131] = 2,
    ACTIONS(96), 1,
      sym__comment,
    ACTIONS(102), 1,
      aux_sym_literal_binary_token1,
  [138] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(104), 1,
      sym__terminator,
  [145] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(106), 1,
      sym__terminator,
  [152] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 23,
  [SMALL_STATE(9)] = 41,
  [SMALL_STATE(10)] = 58,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 82,
  [SMALL_STATE(13)] = 89,
  [SMALL_STATE(14)] = 96,
  [SMALL_STATE(15)] = 103,
  [SMALL_STATE(16)] = 110,
  [SMALL_STATE(17)] = 117,
  [SMALL_STATE(18)] = 124,
  [SMALL_STATE(19)] = 131,
  [SMALL_STATE(20)] = 138,
  [SMALL_STATE(21)] = 145,
  [SMALL_STATE(22)] = 152,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(20),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(12),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(19),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(18),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nu_script_repeat1, 2), SHIFT_REPEAT(7),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nu_script_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 3, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 3),
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
