#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 190
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 1
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym__token = 1,
  anon_sym_POUND_BANG = 2,
  aux_sym_shebang_token1 = 3,
  aux_sym__terminator_lf_token1 = 4,
  anon_sym_SEMI = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LPAREN2 = 8,
  sym_literal_null = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
  aux_sym_literal_int_token1 = 12,
  aux_sym_literal_int_token2 = 13,
  aux_sym_literal_int_token3 = 14,
  anon_sym_0x = 15,
  aux_sym_literal_int_token4 = 16,
  aux_sym_literal_int_token5 = 17,
  anon_sym_0o = 18,
  aux_sym_literal_int_token6 = 19,
  anon_sym_0b = 20,
  aux_sym_literal_int_token7 = 21,
  anon_sym_0x2 = 22,
  anon_sym_0o2 = 23,
  anon_sym_0b2 = 24,
  aux_sym__float_complete_token1 = 25,
  aux_sym__float_complete_token2 = 26,
  anon_sym_DOT = 27,
  aux_sym__float_complete_token3 = 28,
  anon_sym_0x_LBRACK = 29,
  aux_sym_literal_binary_token1 = 30,
  anon_sym_COMMA = 31,
  anon_sym_RBRACK = 32,
  anon_sym_0o_LBRACK = 33,
  aux_sym_literal_binary_token2 = 34,
  anon_sym_0b_LBRACK = 35,
  aux_sym_literal_binary_token3 = 36,
  sym_literal_date = 37,
  sym__str_single_quotes = 38,
  sym__str_back_ticks = 39,
  anon_sym_DQUOTE = 40,
  anon_sym_DOLLAR_DQUOTE = 41,
  sym__str_content = 42,
  sym__str_interpolation_content = 43,
  sym_escape_sequence = 44,
  anon_sym_DOT_DOT = 45,
  anon_sym_EQ = 46,
  sym_range_op_right_exclusive = 47,
  sym_line_comment = 48,
  sym_nu_script = 49,
  sym_shebang = 50,
  sym__block_body_lf = 51,
  sym__block_body_sub = 52,
  sym_pipeline = 53,
  sym__terminator_lf = 54,
  sym__terminator_sub = 55,
  sym__pipeline_element = 56,
  sym__expression = 57,
  sym_subexpression = 58,
  sym__subexpression_immediate = 59,
  sym__literal = 60,
  sym_literal_bool = 61,
  sym_literal_int = 62,
  sym__literal_int_immediate = 63,
  sym_literal_float = 64,
  sym__literal_float_immediate = 65,
  sym__float_complete = 66,
  sym__float_complete_immediate = 67,
  sym__float_short = 68,
  sym__float_short_immediate = 69,
  sym_literal_binary = 70,
  sym_string = 71,
  sym__str_double_quotes = 72,
  sym__str_interpolation = 73,
  sym_range = 74,
  sym__range_element_from = 75,
  sym__range_element_next = 76,
  sym__range_element_to = 77,
  sym__range_op_inclusive = 78,
  aux_sym__block_body_lf_repeat1 = 79,
  aux_sym__block_body_sub_repeat1 = 80,
  aux_sym_literal_binary_repeat1 = 81,
  aux_sym_literal_binary_repeat2 = 82,
  aux_sym_literal_binary_repeat3 = 83,
  aux_sym__str_double_quotes_repeat1 = 84,
  aux_sym__str_interpolation_repeat1 = 85,
  alias_sym_range_op_inclusive = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__token] = "_token",
  [anon_sym_POUND_BANG] = "#!",
  [aux_sym_shebang_token1] = "shebang_token1",
  [aux_sym__terminator_lf_token1] = "_terminator_lf_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN2] = "(",
  [sym_literal_null] = "literal_null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_literal_int_token1] = "literal_int_token1",
  [aux_sym_literal_int_token2] = "literal_int_token2",
  [aux_sym_literal_int_token3] = "literal_int_token3",
  [anon_sym_0x] = "0x",
  [aux_sym_literal_int_token4] = "literal_int_token4",
  [aux_sym_literal_int_token5] = "literal_int_token5",
  [anon_sym_0o] = "0o",
  [aux_sym_literal_int_token6] = "literal_int_token6",
  [anon_sym_0b] = "0b",
  [aux_sym_literal_int_token7] = "literal_int_token7",
  [anon_sym_0x2] = "literal_int",
  [anon_sym_0o2] = "literal_int",
  [anon_sym_0b2] = "literal_int",
  [aux_sym__float_complete_token1] = "_float_complete_token1",
  [aux_sym__float_complete_token2] = "_float_complete_token2",
  [anon_sym_DOT] = ".",
  [aux_sym__float_complete_token3] = "_float_complete_token3",
  [anon_sym_0x_LBRACK] = "0x[",
  [aux_sym_literal_binary_token1] = "literal_binary_token1",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_EQ] = "=",
  [sym_range_op_right_exclusive] = "range_op_right_exclusive",
  [sym_line_comment] = "line_comment",
  [sym_nu_script] = "nu_script",
  [sym_shebang] = "shebang",
  [sym__block_body_lf] = "_block_body_lf",
  [sym__block_body_sub] = "block",
  [sym_pipeline] = "pipeline",
  [sym__terminator_lf] = "_terminator_lf",
  [sym__terminator_sub] = "_terminator_sub",
  [sym__pipeline_element] = "_pipeline_element",
  [sym__expression] = "_expression",
  [sym_subexpression] = "subexpression",
  [sym__subexpression_immediate] = "subexpression",
  [sym__literal] = "_literal",
  [sym_literal_bool] = "literal_bool",
  [sym_literal_int] = "literal_int",
  [sym__literal_int_immediate] = "_literal_int_immediate",
  [sym_literal_float] = "literal_float",
  [sym__literal_float_immediate] = "_literal_float_immediate",
  [sym__float_complete] = "_float_complete",
  [sym__float_complete_immediate] = "literal_float",
  [sym__float_short] = "_float_short",
  [sym__float_short_immediate] = "literal_float",
  [sym_literal_binary] = "literal_binary",
  [sym_string] = "string",
  [sym__str_double_quotes] = "_str_double_quotes",
  [sym__str_interpolation] = "_str_interpolation",
  [sym_range] = "range",
  [sym__range_element_from] = "_range_element_from",
  [sym__range_element_next] = "_range_element_next",
  [sym__range_element_to] = "_range_element_to",
  [sym__range_op_inclusive] = "_range_op_inclusive",
  [aux_sym__block_body_lf_repeat1] = "_block_body_lf_repeat1",
  [aux_sym__block_body_sub_repeat1] = "_block_body_sub_repeat1",
  [aux_sym_literal_binary_repeat1] = "literal_binary_repeat1",
  [aux_sym_literal_binary_repeat2] = "literal_binary_repeat2",
  [aux_sym_literal_binary_repeat3] = "literal_binary_repeat3",
  [aux_sym__str_double_quotes_repeat1] = "_str_double_quotes_repeat1",
  [aux_sym__str_interpolation_repeat1] = "_str_interpolation_repeat1",
  [alias_sym_range_op_inclusive] = "range_op_inclusive",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__token] = sym__token,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [aux_sym_shebang_token1] = aux_sym_shebang_token1,
  [aux_sym__terminator_lf_token1] = aux_sym__terminator_lf_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [sym_literal_null] = sym_literal_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_literal_int_token1] = aux_sym_literal_int_token1,
  [aux_sym_literal_int_token2] = aux_sym_literal_int_token2,
  [aux_sym_literal_int_token3] = aux_sym_literal_int_token3,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_literal_int_token4] = aux_sym_literal_int_token4,
  [aux_sym_literal_int_token5] = aux_sym_literal_int_token5,
  [anon_sym_0o] = anon_sym_0o,
  [aux_sym_literal_int_token6] = aux_sym_literal_int_token6,
  [anon_sym_0b] = anon_sym_0b,
  [aux_sym_literal_int_token7] = aux_sym_literal_int_token7,
  [anon_sym_0x2] = sym_literal_int,
  [anon_sym_0o2] = sym_literal_int,
  [anon_sym_0b2] = sym_literal_int,
  [aux_sym__float_complete_token1] = aux_sym__float_complete_token1,
  [aux_sym__float_complete_token2] = aux_sym__float_complete_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__float_complete_token3] = aux_sym__float_complete_token3,
  [anon_sym_0x_LBRACK] = anon_sym_0x_LBRACK,
  [aux_sym_literal_binary_token1] = aux_sym_literal_binary_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_range_op_right_exclusive] = sym_range_op_right_exclusive,
  [sym_line_comment] = sym_line_comment,
  [sym_nu_script] = sym_nu_script,
  [sym_shebang] = sym_shebang,
  [sym__block_body_lf] = sym__block_body_lf,
  [sym__block_body_sub] = sym__block_body_sub,
  [sym_pipeline] = sym_pipeline,
  [sym__terminator_lf] = sym__terminator_lf,
  [sym__terminator_sub] = sym__terminator_sub,
  [sym__pipeline_element] = sym__pipeline_element,
  [sym__expression] = sym__expression,
  [sym_subexpression] = sym_subexpression,
  [sym__subexpression_immediate] = sym_subexpression,
  [sym__literal] = sym__literal,
  [sym_literal_bool] = sym_literal_bool,
  [sym_literal_int] = sym_literal_int,
  [sym__literal_int_immediate] = sym__literal_int_immediate,
  [sym_literal_float] = sym_literal_float,
  [sym__literal_float_immediate] = sym__literal_float_immediate,
  [sym__float_complete] = sym__float_complete,
  [sym__float_complete_immediate] = sym_literal_float,
  [sym__float_short] = sym__float_short,
  [sym__float_short_immediate] = sym_literal_float,
  [sym_literal_binary] = sym_literal_binary,
  [sym_string] = sym_string,
  [sym__str_double_quotes] = sym__str_double_quotes,
  [sym__str_interpolation] = sym__str_interpolation,
  [sym_range] = sym_range,
  [sym__range_element_from] = sym__range_element_from,
  [sym__range_element_next] = sym__range_element_next,
  [sym__range_element_to] = sym__range_element_to,
  [sym__range_op_inclusive] = sym__range_op_inclusive,
  [aux_sym__block_body_lf_repeat1] = aux_sym__block_body_lf_repeat1,
  [aux_sym__block_body_sub_repeat1] = aux_sym__block_body_sub_repeat1,
  [aux_sym_literal_binary_repeat1] = aux_sym_literal_binary_repeat1,
  [aux_sym_literal_binary_repeat2] = aux_sym_literal_binary_repeat2,
  [aux_sym_literal_binary_repeat3] = aux_sym_literal_binary_repeat3,
  [aux_sym__str_double_quotes_repeat1] = aux_sym__str_double_quotes_repeat1,
  [aux_sym__str_interpolation_repeat1] = aux_sym__str_interpolation_repeat1,
  [alias_sym_range_op_inclusive] = alias_sym_range_op_inclusive,
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
  [aux_sym__terminator_lf_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
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
  [aux_sym_literal_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_int_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_int_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_int_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_int_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0o] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_int_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0b] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_int_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0o2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0b2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__float_complete_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_complete_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__float_complete_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x_LBRACK] = {
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_range_op_right_exclusive] = {
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
  [sym__terminator_lf] = {
    .visible = false,
    .named = true,
  },
  [sym__terminator_sub] = {
    .visible = false,
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
  [sym__subexpression_immediate] = {
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
  [sym_literal_int] = {
    .visible = true,
    .named = true,
  },
  [sym__literal_int_immediate] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_float] = {
    .visible = true,
    .named = true,
  },
  [sym__literal_float_immediate] = {
    .visible = false,
    .named = true,
  },
  [sym__float_complete] = {
    .visible = false,
    .named = true,
  },
  [sym__float_complete_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym__float_short] = {
    .visible = false,
    .named = true,
  },
  [sym__float_short_immediate] = {
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
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym__range_element_from] = {
    .visible = false,
    .named = true,
  },
  [sym__range_element_next] = {
    .visible = false,
    .named = true,
  },
  [sym__range_element_to] = {
    .visible = false,
    .named = true,
  },
  [sym__range_op_inclusive] = {
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
  [alias_sym_range_op_inclusive] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_from = 1,
  field_next = 2,
  field_op = 3,
  field_to = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_from] = "from",
  [field_next] = "next",
  [field_op] = "op",
  [field_to] = "to",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [4] = {.index = 0, .length = 3},
  [5] = {.index = 0, .length = 3},
  [8] = {.index = 3, .length = 4},
  [9] = {.index = 3, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_from, 0},
    {field_op, 1},
    {field_to, 2},
  [3] =
    {field_from, 0},
    {field_next, 2},
    {field_op, 3},
    {field_to, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_literal_float,
  },
  [2] = {
    [0] = sym__block_body_sub,
  },
  [3] = {
    [0] = sym_literal_int,
  },
  [5] = {
    [1] = alias_sym_range_op_inclusive,
  },
  [6] = {
    [0] = sym_literal_int,
    [1] = sym_literal_int,
  },
  [7] = {
    [0] = sym_literal_int,
    [1] = sym_literal_int,
    [2] = sym_literal_int,
  },
  [9] = {
    [3] = alias_sym_range_op_inclusive,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__float_complete, 2,
    sym__float_complete,
    sym_literal_float,
  sym__range_op_inclusive, 2,
    sym__range_op_inclusive,
    alias_sym_range_op_inclusive,
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
  [8] = 5,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 19,
  [20] = 19,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 28,
  [40] = 29,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 45,
  [53] = 44,
  [54] = 50,
  [55] = 49,
  [56] = 48,
  [57] = 42,
  [58] = 47,
  [59] = 59,
  [60] = 60,
  [61] = 51,
  [62] = 62,
  [63] = 38,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 59,
  [82] = 82,
  [83] = 36,
  [84] = 84,
  [85] = 85,
  [86] = 35,
  [87] = 37,
  [88] = 88,
  [89] = 89,
  [90] = 77,
  [91] = 91,
  [92] = 92,
  [93] = 75,
  [94] = 94,
  [95] = 74,
  [96] = 59,
  [97] = 80,
  [98] = 73,
  [99] = 91,
  [100] = 79,
  [101] = 71,
  [102] = 67,
  [103] = 66,
  [104] = 104,
  [105] = 65,
  [106] = 82,
  [107] = 107,
  [108] = 88,
  [109] = 60,
  [110] = 78,
  [111] = 41,
  [112] = 43,
  [113] = 89,
  [114] = 114,
  [115] = 76,
  [116] = 84,
  [117] = 64,
  [118] = 94,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 92,
  [141] = 125,
  [142] = 142,
  [143] = 138,
  [144] = 104,
  [145] = 145,
  [146] = 146,
  [147] = 114,
  [148] = 134,
  [149] = 149,
  [150] = 149,
  [151] = 124,
  [152] = 130,
  [153] = 142,
  [154] = 107,
  [155] = 126,
  [156] = 128,
  [157] = 157,
  [158] = 127,
  [159] = 159,
  [160] = 122,
  [161] = 121,
  [162] = 136,
  [163] = 129,
  [164] = 133,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 170,
  [171] = 166,
  [172] = 172,
  [173] = 173,
  [174] = 132,
  [175] = 131,
  [176] = 168,
  [177] = 135,
  [178] = 146,
  [179] = 145,
  [180] = 180,
  [181] = 172,
  [182] = 182,
  [183] = 183,
  [184] = 180,
  [185] = 165,
  [186] = 183,
  [187] = 182,
  [188] = 165,
  [189] = 139,
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
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == '1') ADVANCE(103);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == 'N') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == '`') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 't') ADVANCE(201);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(105);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '_') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '#') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'N') ADVANCE(47);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'N') ADVANCE(47);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(167);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ';') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == ']') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == ']') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(145);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(55);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 33:
      if (lookahead == '`') ADVANCE(163);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(45);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(175);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == '{') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 50:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(153);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 70:
      if (eof) ADVANCE(73);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(47);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(47);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'N') ADVANCE(209);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == '_') ADVANCE(193);
      if (lookahead == '`') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 't') ADVANCE(201);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(94);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '#') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__terminator_lf_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__terminator_lf_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ';') ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(93);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(95);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(93);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(95);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '_') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '_') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_literal_int_token2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_literal_int_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(123);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(103);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(104);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(103);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(104);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(108);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(107);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (lookahead == 'b') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_0x);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_0x);
      if (lookahead == '[') ADVANCE(136);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_literal_int_token4);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_literal_int_token4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_literal_int_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_0o);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_0o);
      if (lookahead == '[') ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_literal_int_token6);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_0b);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_0b);
      if (lookahead == '[') ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_literal_int_token7);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_0x2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_0x2);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_0o2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_0o2);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_0b2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_0b2);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__float_complete_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__float_complete_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__float_complete_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__float_complete_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(178);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__float_complete_token3);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__float_complete_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_literal_date);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(187);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(60);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(187);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(60);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__str_single_quotes);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__str_single_quotes);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__str_back_ticks);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__str_back_ticks);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DQUOTE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead == '#') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead == '#') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '<') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '<') ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_range_op_right_exclusive);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_range_op_right_exclusive);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(206);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '\'') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(21);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '2') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(108);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '`') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(33);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(200);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(200);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '}') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(231);
      END_STATE();
    case 232:
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
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 70},
  [3] = {.lex_state = 70},
  [4] = {.lex_state = 70},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 70},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 70},
  [34] = {.lex_state = 70},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 70},
  [40] = {.lex_state = 70},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 70},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 70},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 70},
  [87] = {.lex_state = 70},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 70},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 70},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 70},
  [96] = {.lex_state = 70},
  [97] = {.lex_state = 70},
  [98] = {.lex_state = 70},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 70},
  [101] = {.lex_state = 70},
  [102] = {.lex_state = 70},
  [103] = {.lex_state = 70},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 70},
  [106] = {.lex_state = 70},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 70},
  [109] = {.lex_state = 70},
  [110] = {.lex_state = 70},
  [111] = {.lex_state = 70},
  [112] = {.lex_state = 70},
  [113] = {.lex_state = 70},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 70},
  [116] = {.lex_state = 70},
  [117] = {.lex_state = 70},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 70},
  [138] = {.lex_state = 18},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 18},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 18},
  [152] = {.lex_state = 17},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 70},
  [156] = {.lex_state = 70},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 70},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 70},
  [161] = {.lex_state = 70},
  [162] = {.lex_state = 70},
  [163] = {.lex_state = 70},
  [164] = {.lex_state = 70},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 18},
  [167] = {.lex_state = 17},
  [168] = {.lex_state = 19},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 18},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 70},
  [175] = {.lex_state = 70},
  [176] = {.lex_state = 19},
  [177] = {.lex_state = 70},
  [178] = {.lex_state = 70},
  [179] = {.lex_state = 70},
  [180] = {.lex_state = 19},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 18},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 70},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__token] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [sym_literal_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_literal_int_token1] = ACTIONS(1),
    [aux_sym_literal_int_token2] = ACTIONS(1),
    [aux_sym_literal_int_token3] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [aux_sym_literal_int_token4] = ACTIONS(1),
    [anon_sym_0o] = ACTIONS(1),
    [aux_sym_literal_int_token6] = ACTIONS(1),
    [anon_sym_0b] = ACTIONS(1),
    [aux_sym_literal_int_token7] = ACTIONS(1),
    [anon_sym_0x2] = ACTIONS(1),
    [anon_sym_0o2] = ACTIONS(1),
    [anon_sym_0b2] = ACTIONS(1),
    [aux_sym__float_complete_token1] = ACTIONS(1),
    [aux_sym__float_complete_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym__float_complete_token3] = ACTIONS(1),
    [anon_sym_0x_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_0o_LBRACK] = ACTIONS(1),
    [aux_sym_literal_binary_token2] = ACTIONS(1),
    [anon_sym_0b_LBRACK] = ACTIONS(1),
    [aux_sym_literal_binary_token3] = ACTIONS(1),
    [sym_literal_date] = ACTIONS(1),
    [sym__str_single_quotes] = ACTIONS(1),
    [sym__str_back_ticks] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_range_op_right_exclusive] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_nu_script] = STATE(157),
    [sym_shebang] = STATE(2),
    [sym__block_body_lf] = STATE(173),
    [sym_pipeline] = STATE(137),
    [sym__terminator_lf] = STATE(12),
    [sym__pipeline_element] = STATE(175),
    [sym__expression] = STATE(175),
    [sym_subexpression] = STATE(116),
    [sym__literal] = STATE(175),
    [sym_literal_bool] = STATE(175),
    [sym_literal_int] = STATE(108),
    [sym_literal_float] = STATE(175),
    [sym__float_complete] = STATE(113),
    [sym__float_short] = STATE(155),
    [sym_literal_binary] = STATE(175),
    [sym_string] = STATE(175),
    [sym__str_double_quotes] = STATE(164),
    [sym__str_interpolation] = STATE(164),
    [sym_range] = STATE(175),
    [sym__range_element_from] = STATE(118),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [anon_sym_POUND_BANG] = ACTIONS(5),
    [aux_sym__terminator_lf_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_literal_null] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [aux_sym_literal_int_token1] = ACTIONS(15),
    [aux_sym_literal_int_token2] = ACTIONS(17),
    [anon_sym_0x] = ACTIONS(19),
    [anon_sym_0o] = ACTIONS(21),
    [anon_sym_0b] = ACTIONS(23),
    [aux_sym__float_complete_token3] = ACTIONS(25),
    [anon_sym_0x_LBRACK] = ACTIONS(27),
    [anon_sym_0o_LBRACK] = ACTIONS(29),
    [anon_sym_0b_LBRACK] = ACTIONS(31),
    [sym_literal_date] = ACTIONS(11),
    [sym__str_single_quotes] = ACTIONS(33),
    [sym__str_back_ticks] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(37),
    [sym_line_comment] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(7), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_literal_int_token1,
    ACTIONS(17), 1,
      aux_sym_literal_int_token2,
    ACTIONS(19), 1,
      anon_sym_0x,
    ACTIONS(21), 1,
      anon_sym_0o,
    ACTIONS(23), 1,
      anon_sym_0b,
    ACTIONS(25), 1,
      aux_sym__float_complete_token3,
    ACTIONS(27), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(29), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(31), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DQUOTE,
    ACTIONS(39), 1,
      sym_line_comment,
    STATE(4), 1,
      aux_sym__block_body_lf_repeat1,
    STATE(12), 1,
      sym__terminator_lf,
    STATE(108), 1,
      sym_literal_int,
    STATE(113), 1,
      sym__float_complete,
    STATE(116), 1,
      sym_subexpression,
    STATE(118), 1,
      sym__range_element_from,
    STATE(137), 1,
      sym_pipeline,
    STATE(155), 1,
      sym__float_short,
    STATE(170), 1,
      sym__block_body_lf,
    ACTIONS(11), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(164), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(175), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [96] = 28,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_literal_int_token1,
    ACTIONS(58), 1,
      aux_sym_literal_int_token2,
    ACTIONS(61), 1,
      anon_sym_0x,
    ACTIONS(64), 1,
      anon_sym_0o,
    ACTIONS(67), 1,
      anon_sym_0b,
    ACTIONS(70), 1,
      aux_sym__float_complete_token3,
    ACTIONS(73), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(76), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(79), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(3), 1,
      aux_sym__block_body_lf_repeat1,
    STATE(12), 1,
      sym__terminator_lf,
    STATE(108), 1,
      sym_literal_int,
    STATE(113), 1,
      sym__float_complete,
    STATE(116), 1,
      sym_subexpression,
    STATE(118), 1,
      sym__range_element_from,
    STATE(137), 1,
      sym_pipeline,
    STATE(155), 1,
      sym__float_short,
    ACTIONS(49), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(52), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(164), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(175), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [192] = 28,
    ACTIONS(7), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_literal_int_token1,
    ACTIONS(17), 1,
      aux_sym_literal_int_token2,
    ACTIONS(19), 1,
      anon_sym_0x,
    ACTIONS(21), 1,
      anon_sym_0o,
    ACTIONS(23), 1,
      anon_sym_0b,
    ACTIONS(25), 1,
      aux_sym__float_complete_token3,
    ACTIONS(27), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(29), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(31), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_DQUOTE,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym__block_body_lf_repeat1,
    STATE(12), 1,
      sym__terminator_lf,
    STATE(108), 1,
      sym_literal_int,
    STATE(113), 1,
      sym__float_complete,
    STATE(116), 1,
      sym_subexpression,
    STATE(118), 1,
      sym__range_element_from,
    STATE(137), 1,
      sym_pipeline,
    STATE(155), 1,
      sym__float_short,
    ACTIONS(11), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(164), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(175), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [288] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      aux_sym_literal_int_token1,
    ACTIONS(101), 1,
      aux_sym_literal_int_token2,
    ACTIONS(103), 1,
      anon_sym_0x,
    ACTIONS(105), 1,
      anon_sym_0o,
    ACTIONS(107), 1,
      anon_sym_0b,
    ACTIONS(109), 1,
      aux_sym__float_complete_token3,
    ACTIONS(111), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(113), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(115), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(46), 1,
      sym_pipeline,
    STATE(84), 1,
      sym_subexpression,
    STATE(88), 1,
      sym_literal_int,
    STATE(89), 1,
      sym__float_complete,
    STATE(94), 1,
      sym__range_element_from,
    STATE(126), 1,
      sym__float_short,
    STATE(185), 1,
      sym__block_body_sub,
    ACTIONS(95), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(133), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(131), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [375] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      aux_sym_literal_int_token1,
    ACTIONS(101), 1,
      aux_sym_literal_int_token2,
    ACTIONS(103), 1,
      anon_sym_0x,
    ACTIONS(105), 1,
      anon_sym_0o,
    ACTIONS(107), 1,
      anon_sym_0b,
    ACTIONS(109), 1,
      aux_sym__float_complete_token3,
    ACTIONS(111), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(113), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(115), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(46), 1,
      sym_pipeline,
    STATE(84), 1,
      sym_subexpression,
    STATE(88), 1,
      sym_literal_int,
    STATE(89), 1,
      sym__float_complete,
    STATE(94), 1,
      sym__range_element_from,
    STATE(126), 1,
      sym__float_short,
    STATE(188), 1,
      sym__block_body_sub,
    ACTIONS(95), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(133), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(131), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [462] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      aux_sym_literal_int_token1,
    ACTIONS(101), 1,
      aux_sym_literal_int_token2,
    ACTIONS(103), 1,
      anon_sym_0x,
    ACTIONS(105), 1,
      anon_sym_0o,
    ACTIONS(107), 1,
      anon_sym_0b,
    ACTIONS(109), 1,
      aux_sym__float_complete_token3,
    ACTIONS(111), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(113), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(115), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(46), 1,
      sym_pipeline,
    STATE(84), 1,
      sym_subexpression,
    STATE(88), 1,
      sym_literal_int,
    STATE(89), 1,
      sym__float_complete,
    STATE(94), 1,
      sym__range_element_from,
    STATE(126), 1,
      sym__float_short,
    STATE(181), 1,
      sym__block_body_sub,
    ACTIONS(95), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(133), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(131), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [549] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      aux_sym_literal_int_token1,
    ACTIONS(101), 1,
      aux_sym_literal_int_token2,
    ACTIONS(103), 1,
      anon_sym_0x,
    ACTIONS(105), 1,
      anon_sym_0o,
    ACTIONS(107), 1,
      anon_sym_0b,
    ACTIONS(109), 1,
      aux_sym__float_complete_token3,
    ACTIONS(111), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(113), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(115), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(46), 1,
      sym_pipeline,
    STATE(84), 1,
      sym_subexpression,
    STATE(88), 1,
      sym_literal_int,
    STATE(89), 1,
      sym__float_complete,
    STATE(94), 1,
      sym__range_element_from,
    STATE(126), 1,
      sym__float_short,
    STATE(165), 1,
      sym__block_body_sub,
    ACTIONS(95), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(133), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(131), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [636] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      aux_sym_literal_int_token1,
    ACTIONS(101), 1,
      aux_sym_literal_int_token2,
    ACTIONS(103), 1,
      anon_sym_0x,
    ACTIONS(105), 1,
      anon_sym_0o,
    ACTIONS(107), 1,
      anon_sym_0b,
    ACTIONS(109), 1,
      aux_sym__float_complete_token3,
    ACTIONS(111), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(113), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(115), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(46), 1,
      sym_pipeline,
    STATE(84), 1,
      sym_subexpression,
    STATE(88), 1,
      sym_literal_int,
    STATE(89), 1,
      sym__float_complete,
    STATE(94), 1,
      sym__range_element_from,
    STATE(126), 1,
      sym__float_short,
    STATE(172), 1,
      sym__block_body_sub,
    ACTIONS(95), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(133), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(131), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [723] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      aux_sym_literal_int_token1,
    ACTIONS(101), 1,
      aux_sym_literal_int_token2,
    ACTIONS(103), 1,
      anon_sym_0x,
    ACTIONS(105), 1,
      anon_sym_0o,
    ACTIONS(107), 1,
      anon_sym_0b,
    ACTIONS(109), 1,
      aux_sym__float_complete_token3,
    ACTIONS(111), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(113), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(115), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(84), 1,
      sym_subexpression,
    STATE(88), 1,
      sym_literal_int,
    STATE(89), 1,
      sym__float_complete,
    STATE(94), 1,
      sym__range_element_from,
    STATE(123), 1,
      sym_pipeline,
    STATE(126), 1,
      sym__float_short,
    ACTIONS(95), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(133), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(131), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [807] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_lf_token1,
    ACTIONS(123), 18,
      anon_sym_LPAREN,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      aux_sym_literal_int_token1,
      aux_sym_literal_int_token2,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      aux_sym__float_complete_token3,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__str_single_quotes,
      sym__str_back_ticks,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DQUOTE,
  [835] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_lf_token1,
    ACTIONS(127), 18,
      anon_sym_LPAREN,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      aux_sym_literal_int_token1,
      aux_sym_literal_int_token2,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      aux_sym__float_complete_token3,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__str_single_quotes,
      sym__str_back_ticks,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DQUOTE,
  [863] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(131), 18,
      anon_sym_LPAREN,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      aux_sym_literal_int_token1,
      aux_sym_literal_int_token2,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      aux_sym__float_complete_token3,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__str_single_quotes,
      sym__str_back_ticks,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DQUOTE,
  [890] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN2,
    ACTIONS(135), 1,
      aux_sym_literal_int_token3,
    ACTIONS(137), 1,
      aux_sym_literal_int_token4,
    ACTIONS(139), 1,
      anon_sym_0x2,
    ACTIONS(141), 1,
      anon_sym_0o2,
    ACTIONS(143), 1,
      anon_sym_0b2,
    ACTIONS(145), 1,
      aux_sym__float_complete_token1,
    STATE(76), 1,
      sym__float_complete_immediate,
    STATE(99), 1,
      sym__range_element_next,
    STATE(77), 2,
      sym__subexpression_immediate,
      sym__literal_int_immediate,
    STATE(135), 3,
      sym__literal_float_immediate,
      sym__float_short_immediate,
      sym__range_element_to,
  [930] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN2,
    ACTIONS(149), 1,
      aux_sym_literal_int_token3,
    ACTIONS(151), 1,
      aux_sym_literal_int_token4,
    ACTIONS(153), 1,
      anon_sym_0x2,
    ACTIONS(155), 1,
      anon_sym_0o2,
    ACTIONS(157), 1,
      anon_sym_0b2,
    ACTIONS(159), 1,
      aux_sym__float_complete_token1,
    STATE(91), 1,
      sym__range_element_next,
    STATE(115), 1,
      sym__float_complete_immediate,
    STATE(90), 2,
      sym__subexpression_immediate,
      sym__literal_int_immediate,
    STATE(177), 3,
      sym__literal_float_immediate,
      sym__float_short_immediate,
      sym__range_element_to,
  [970] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN2,
    ACTIONS(135), 1,
      aux_sym_literal_int_token3,
    ACTIONS(137), 1,
      aux_sym_literal_int_token4,
    ACTIONS(139), 1,
      anon_sym_0x2,
    ACTIONS(141), 1,
      anon_sym_0o2,
    ACTIONS(143), 1,
      anon_sym_0b2,
    ACTIONS(145), 1,
      aux_sym__float_complete_token1,
    STATE(132), 6,
      sym__subexpression_immediate,
      sym__literal_int_immediate,
      sym__literal_float_immediate,
      sym__float_complete_immediate,
      sym__float_short_immediate,
      sym__range_element_to,
  [1003] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN2,
    ACTIONS(149), 1,
      aux_sym_literal_int_token3,
    ACTIONS(151), 1,
      aux_sym_literal_int_token4,
    ACTIONS(153), 1,
      anon_sym_0x2,
    ACTIONS(155), 1,
      anon_sym_0o2,
    ACTIONS(157), 1,
      anon_sym_0b2,
    ACTIONS(159), 1,
      aux_sym__float_complete_token1,
    STATE(178), 6,
      sym__subexpression_immediate,
      sym__literal_int_immediate,
      sym__literal_float_immediate,
      sym__float_complete_immediate,
      sym__float_short_immediate,
      sym__range_element_to,
  [1036] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN2,
    ACTIONS(149), 1,
      aux_sym_literal_int_token3,
    ACTIONS(151), 1,
      aux_sym_literal_int_token4,
    ACTIONS(153), 1,
      anon_sym_0x2,
    ACTIONS(155), 1,
      anon_sym_0o2,
    ACTIONS(157), 1,
      anon_sym_0b2,
    ACTIONS(159), 1,
      aux_sym__float_complete_token1,
    STATE(174), 6,
      sym__subexpression_immediate,
      sym__literal_int_immediate,
      sym__literal_float_immediate,
      sym__float_complete_immediate,
      sym__float_short_immediate,
      sym__range_element_to,
  [1069] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN2,
    ACTIONS(149), 1,
      aux_sym_literal_int_token3,
    ACTIONS(151), 1,
      aux_sym_literal_int_token4,
    ACTIONS(153), 1,
      anon_sym_0x2,
    ACTIONS(155), 1,
      anon_sym_0o2,
    ACTIONS(157), 1,
      anon_sym_0b2,
    ACTIONS(159), 1,
      aux_sym__float_complete_token1,
    STATE(179), 6,
      sym__subexpression_immediate,
      sym__literal_int_immediate,
      sym__literal_float_immediate,
      sym__float_complete_immediate,
      sym__float_short_immediate,
      sym__range_element_to,
  [1102] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN2,
    ACTIONS(135), 1,
      aux_sym_literal_int_token3,
    ACTIONS(137), 1,
      aux_sym_literal_int_token4,
    ACTIONS(139), 1,
      anon_sym_0x2,
    ACTIONS(141), 1,
      anon_sym_0o2,
    ACTIONS(143), 1,
      anon_sym_0b2,
    ACTIONS(145), 1,
      aux_sym__float_complete_token1,
    STATE(145), 6,
      sym__subexpression_immediate,
      sym__literal_int_immediate,
      sym__literal_float_immediate,
      sym__float_complete_immediate,
      sym__float_short_immediate,
      sym__range_element_to,
  [1135] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN2,
    ACTIONS(135), 1,
      aux_sym_literal_int_token3,
    ACTIONS(137), 1,
      aux_sym_literal_int_token4,
    ACTIONS(139), 1,
      anon_sym_0x2,
    ACTIONS(141), 1,
      anon_sym_0o2,
    ACTIONS(143), 1,
      anon_sym_0b2,
    ACTIONS(145), 1,
      aux_sym__float_complete_token1,
    STATE(146), 6,
      sym__subexpression_immediate,
      sym__literal_int_immediate,
      sym__literal_float_immediate,
      sym__float_complete_immediate,
      sym__float_short_immediate,
      sym__range_element_to,
  [1168] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      aux_sym_literal_int_token3,
    ACTIONS(165), 1,
      anon_sym_EQ,
    ACTIONS(161), 6,
      anon_sym_LPAREN2,
      aux_sym_literal_int_token4,
      anon_sym_0x2,
      anon_sym_0o2,
      anon_sym_0b2,
      aux_sym__float_complete_token1,
  [1186] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      aux_sym_literal_int_token3,
    ACTIONS(167), 6,
      anon_sym_LPAREN2,
      aux_sym_literal_int_token4,
      anon_sym_0x2,
      anon_sym_0o2,
      anon_sym_0b2,
      aux_sym__float_complete_token1,
  [1201] = 6,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym__str_interpolation_content,
    ACTIONS(177), 1,
      sym_escape_sequence,
    STATE(32), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [1221] = 6,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym__str_interpolation_content,
    ACTIONS(177), 1,
      sym_escape_sequence,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(32), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [1241] = 6,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym__str_interpolation_content,
    ACTIONS(185), 1,
      sym_escape_sequence,
    STATE(25), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [1261] = 6,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym__str_interpolation_content,
    ACTIONS(191), 1,
      sym_escape_sequence,
    STATE(24), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [1281] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 1,
      aux_sym__float_complete_token2,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_DOT_DOT,
    ACTIONS(193), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1299] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      aux_sym__float_complete_token2,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(207), 1,
      anon_sym_DOT_DOT,
    ACTIONS(201), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1317] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      aux_sym__float_complete_token2,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(215), 1,
      anon_sym_DOT_DOT,
    ACTIONS(209), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1335] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      aux_sym__float_complete_token2,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(223), 1,
      anon_sym_DOT_DOT,
    ACTIONS(217), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1353] = 6,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym__str_interpolation_content,
    ACTIONS(233), 1,
      sym_escape_sequence,
    STATE(32), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [1373] = 5,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      anon_sym_DOT_DOT,
    ACTIONS(236), 1,
      aux_sym__float_complete_token2,
    ACTIONS(238), 1,
      anon_sym_DOT,
    ACTIONS(209), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [1390] = 5,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      anon_sym_DOT_DOT,
    ACTIONS(240), 1,
      aux_sym__float_complete_token2,
    ACTIONS(242), 1,
      anon_sym_DOT,
    ACTIONS(217), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [1407] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      aux_sym__float_complete_token2,
    ACTIONS(248), 1,
      anon_sym_DOT_DOT,
    ACTIONS(244), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1422] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      aux_sym__float_complete_token2,
    ACTIONS(254), 1,
      anon_sym_DOT_DOT,
    ACTIONS(250), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1437] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 1,
      aux_sym__float_complete_token2,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1452] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      aux_sym__float_complete_token2,
    ACTIONS(266), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1467] = 5,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_DOT_DOT,
    ACTIONS(268), 1,
      aux_sym__float_complete_token2,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(193), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [1484] = 5,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(207), 1,
      anon_sym_DOT_DOT,
    ACTIONS(272), 1,
      aux_sym__float_complete_token2,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(201), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [1501] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1513] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(280), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [1527] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(284), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1539] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [1553] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [1567] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym__terminator_sub,
    STATE(62), 1,
      aux_sym__block_body_sub_repeat1,
  [1583] = 5,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym__str_content,
    ACTIONS(300), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym__str_double_quotes_repeat1,
  [1599] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [1613] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [1627] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(308), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [1641] = 5,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      sym__str_content,
    ACTIONS(314), 1,
      sym_escape_sequence,
    STATE(47), 1,
      aux_sym__str_double_quotes_repeat1,
  [1657] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [1671] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [1685] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(308), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [1699] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [1713] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [1727] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(324), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [1741] = 5,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      sym__str_content,
    ACTIONS(300), 1,
      sym_escape_sequence,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__str_double_quotes_repeat1,
  [1757] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      sym_escape_sequence,
    ACTIONS(328), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__str_interpolation_content,
  [1769] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      anon_sym_DOT_DOT,
    ACTIONS(332), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1781] = 5,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym__str_content,
    ACTIONS(340), 1,
      sym_escape_sequence,
    STATE(58), 1,
      aux_sym__str_double_quotes_repeat1,
  [1797] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym__terminator_sub,
    STATE(85), 1,
      aux_sym__block_body_sub_repeat1,
  [1813] = 4,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      aux_sym__float_complete_token2,
    ACTIONS(262), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [1827] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_DOT_DOT,
    ACTIONS(244), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1839] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(348), 1,
      anon_sym_DOT_DOT,
    ACTIONS(346), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1851] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      anon_sym_DOT_DOT,
    ACTIONS(250), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1863] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      anon_sym_DOT_DOT,
    ACTIONS(350), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1875] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(354), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [1889] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [1903] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [1917] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(371), 1,
      anon_sym_DOT_DOT,
    ACTIONS(369), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1929] = 5,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 1,
      sym__str_content,
    ACTIONS(378), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym__str_double_quotes_repeat1,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_DOT_DOT,
    ACTIONS(193), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1957] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(383), 1,
      anon_sym_DOT_DOT,
    ACTIONS(381), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1969] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [1981] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      sym_range_op_right_exclusive,
    ACTIONS(385), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1995] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      sym_range_op_right_exclusive,
    ACTIONS(391), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2009] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 1,
      anon_sym_DOT_DOT,
    ACTIONS(393), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [2021] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(399), 1,
      anon_sym_DOT_DOT,
    ACTIONS(397), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [2033] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [2045] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT_DOT,
    ACTIONS(330), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [2057] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      anon_sym_DOT_DOT,
    ACTIONS(209), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op_right_exclusive,
  [2069] = 4,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      anon_sym_DOT_DOT,
    ACTIONS(401), 1,
      aux_sym__float_complete_token2,
    ACTIONS(250), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2083] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 1,
      anon_sym_DOT_DOT,
    ACTIONS(407), 1,
      sym_range_op_right_exclusive,
    ACTIONS(403), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2097] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym__terminator_sub,
    STATE(85), 1,
      aux_sym__block_body_sub_repeat1,
  [2113] = 4,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_DOT_DOT,
    ACTIONS(414), 1,
      aux_sym__float_complete_token2,
    ACTIONS(244), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2127] = 4,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(416), 1,
      aux_sym__float_complete_token2,
    ACTIONS(256), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2141] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 1,
      anon_sym_DOT_DOT,
    ACTIONS(407), 1,
      sym_range_op_right_exclusive,
    ACTIONS(418), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2155] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(422), 1,
      anon_sym_DOT_DOT,
    ACTIONS(424), 1,
      sym_range_op_right_exclusive,
    ACTIONS(420), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2169] = 4,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      sym_range_op_right_exclusive,
    ACTIONS(391), 1,
      aux_sym__terminator_lf_token1,
  [2182] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 1,
      anon_sym_DOT_DOT,
    ACTIONS(428), 1,
      sym_range_op_right_exclusive,
    STATE(17), 1,
      sym__range_op_inclusive,
  [2195] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      aux_sym_literal_int_token3,
    ACTIONS(430), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2206] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(256), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2217] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 1,
      anon_sym_DOT_DOT,
    ACTIONS(434), 1,
      sym_range_op_right_exclusive,
    STATE(14), 1,
      sym__range_op_inclusive,
  [2230] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(383), 1,
      anon_sym_DOT_DOT,
    ACTIONS(381), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2241] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT_DOT,
    ACTIONS(330), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2252] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2263] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_DOT_DOT,
    ACTIONS(193), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2274] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 1,
      anon_sym_DOT_DOT,
    ACTIONS(436), 1,
      sym_range_op_right_exclusive,
    STATE(21), 1,
      sym__range_op_inclusive,
  [2287] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(399), 1,
      anon_sym_DOT_DOT,
    ACTIONS(397), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2298] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(371), 1,
      anon_sym_DOT_DOT,
    ACTIONS(369), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2309] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      anon_sym_DOT_DOT,
    ACTIONS(350), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2320] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      anon_sym_DOT_DOT,
    ACTIONS(250), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2331] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      aux_sym_literal_int_token3,
    ACTIONS(438), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2342] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(348), 1,
      anon_sym_DOT_DOT,
    ACTIONS(346), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2353] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      anon_sym_DOT_DOT,
    ACTIONS(209), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2364] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      aux_sym_literal_int_token3,
    ACTIONS(442), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2375] = 4,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(405), 1,
      anon_sym_DOT_DOT,
    ACTIONS(407), 1,
      sym_range_op_right_exclusive,
    ACTIONS(418), 1,
      aux_sym__terminator_lf_token1,
  [2388] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      anon_sym_DOT_DOT,
    ACTIONS(332), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2399] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(395), 1,
      anon_sym_DOT_DOT,
    ACTIONS(393), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2410] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2421] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(284), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2432] = 4,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(422), 1,
      anon_sym_DOT_DOT,
    ACTIONS(424), 1,
      sym_range_op_right_exclusive,
  [2445] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      aux_sym_literal_int_token3,
    ACTIONS(446), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2456] = 4,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(385), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(387), 1,
      anon_sym_DOT_DOT,
    ACTIONS(389), 1,
      sym_range_op_right_exclusive,
  [2469] = 4,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(403), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(405), 1,
      anon_sym_DOT_DOT,
    ACTIONS(407), 1,
      sym_range_op_right_exclusive,
  [2482] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_DOT_DOT,
    ACTIONS(244), 2,
      aux_sym__terminator_lf_token1,
      sym_range_op_right_exclusive,
  [2493] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 1,
      anon_sym_DOT_DOT,
    ACTIONS(450), 1,
      sym_range_op_right_exclusive,
    STATE(15), 1,
      sym__range_op_inclusive,
  [2506] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(452), 1,
      aux_sym_literal_int_token4,
    ACTIONS(454), 1,
      aux_sym_literal_int_token6,
  [2516] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      aux_sym_literal_int_token4,
    ACTIONS(458), 1,
      aux_sym_literal_int_token6,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(460), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2534] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2542] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2550] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(464), 1,
      aux_sym_literal_int_token4,
    ACTIONS(466), 1,
      aux_sym_literal_int_token5,
  [2560] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      aux_sym__float_complete_token1,
    ACTIONS(468), 1,
      aux_sym_literal_int_token3,
  [2570] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2578] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(470), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2586] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2594] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2602] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      aux_sym_literal_int_token6,
    ACTIONS(476), 1,
      aux_sym_literal_int_token4,
  [2612] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2620] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2628] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2636] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 1,
      aux_sym_literal_int_token7,
    ACTIONS(484), 1,
      aux_sym_literal_int_token4,
  [2646] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2654] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2662] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      aux_sym__terminator_lf_token1,
    STATE(11), 1,
      sym__terminator_lf,
  [2672] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 1,
      aux_sym_literal_int_token5,
    ACTIONS(492), 1,
      aux_sym_literal_int_token4,
  [2682] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2690] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(496), 1,
      aux_sym_literal_int_token3,
  [2700] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      aux_sym__float_complete_token1,
    ACTIONS(498), 1,
      aux_sym_literal_int_token3,
  [2710] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      aux_sym_literal_int_token7,
    ACTIONS(500), 1,
      aux_sym_literal_int_token4,
  [2720] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      aux_sym_literal_int_token5,
    ACTIONS(502), 1,
      aux_sym_literal_int_token4,
  [2730] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(504), 1,
      aux_sym_literal_int_token3,
  [2740] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(506), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2748] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(508), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2756] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(446), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(510), 1,
      aux_sym_literal_int_token3,
  [2766] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      aux_sym_literal_int_token7,
    ACTIONS(512), 1,
      aux_sym_literal_int_token4,
  [2776] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 1,
      aux_sym__float_complete_token1,
    ACTIONS(514), 1,
      aux_sym_literal_int_token3,
  [2786] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      aux_sym__float_complete_token1,
    ACTIONS(516), 1,
      aux_sym_literal_int_token3,
  [2796] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(518), 1,
      aux_sym_literal_int_token4,
    ACTIONS(520), 1,
      aux_sym_literal_int_token5,
  [2806] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      aux_sym_literal_int_token6,
    ACTIONS(522), 1,
      aux_sym_literal_int_token4,
  [2816] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      aux_sym_literal_int_token7,
    ACTIONS(524), 1,
      aux_sym_literal_int_token4,
  [2826] = 3,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      aux_sym__terminator_lf_token1,
    ACTIONS(526), 1,
      aux_sym_literal_int_token3,
  [2836] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      aux_sym__terminator_lf_token1,
  [2843] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      aux_sym__terminator_lf_token1,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
  [2857] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(470), 1,
      aux_sym__terminator_lf_token1,
  [2864] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      aux_sym_shebang_token1,
  [2871] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(462), 1,
      aux_sym__terminator_lf_token1,
  [2878] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(460), 1,
      aux_sym__terminator_lf_token1,
  [2885] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      aux_sym__terminator_lf_token1,
  [2892] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(474), 1,
      aux_sym__terminator_lf_token1,
  [2899] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(482), 1,
      aux_sym__terminator_lf_token1,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      aux_sym_literal_int_token5,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      aux_sym_literal_int_token6,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      aux_sym_literal_int_token7,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      aux_sym_literal_int_token6,
  [2941] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      aux_sym_literal_int_token5,
  [2955] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
  [2969] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      aux_sym__terminator_lf_token1,
  [2976] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      aux_sym__terminator_lf_token1,
  [2983] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      aux_sym_literal_int_token7,
  [2990] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(486), 1,
      aux_sym__terminator_lf_token1,
  [2997] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(508), 1,
      aux_sym__terminator_lf_token1,
  [3004] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(506), 1,
      aux_sym__terminator_lf_token1,
  [3011] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      aux_sym_literal_int_token7,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      aux_sym_literal_int_token5,
  [3032] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      aux_sym_literal_int_token6,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      aux_sym_literal_int_token7,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
  [3053] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      aux_sym_literal_int_token6,
  [3060] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      aux_sym_literal_int_token5,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [3074] = 2,
    ACTIONS(39), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      aux_sym__terminator_lf_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 96,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 288,
  [SMALL_STATE(6)] = 375,
  [SMALL_STATE(7)] = 462,
  [SMALL_STATE(8)] = 549,
  [SMALL_STATE(9)] = 636,
  [SMALL_STATE(10)] = 723,
  [SMALL_STATE(11)] = 807,
  [SMALL_STATE(12)] = 835,
  [SMALL_STATE(13)] = 863,
  [SMALL_STATE(14)] = 890,
  [SMALL_STATE(15)] = 930,
  [SMALL_STATE(16)] = 970,
  [SMALL_STATE(17)] = 1003,
  [SMALL_STATE(18)] = 1036,
  [SMALL_STATE(19)] = 1069,
  [SMALL_STATE(20)] = 1102,
  [SMALL_STATE(21)] = 1135,
  [SMALL_STATE(22)] = 1168,
  [SMALL_STATE(23)] = 1186,
  [SMALL_STATE(24)] = 1201,
  [SMALL_STATE(25)] = 1221,
  [SMALL_STATE(26)] = 1241,
  [SMALL_STATE(27)] = 1261,
  [SMALL_STATE(28)] = 1281,
  [SMALL_STATE(29)] = 1299,
  [SMALL_STATE(30)] = 1317,
  [SMALL_STATE(31)] = 1335,
  [SMALL_STATE(32)] = 1353,
  [SMALL_STATE(33)] = 1373,
  [SMALL_STATE(34)] = 1390,
  [SMALL_STATE(35)] = 1407,
  [SMALL_STATE(36)] = 1422,
  [SMALL_STATE(37)] = 1437,
  [SMALL_STATE(38)] = 1452,
  [SMALL_STATE(39)] = 1467,
  [SMALL_STATE(40)] = 1484,
  [SMALL_STATE(41)] = 1501,
  [SMALL_STATE(42)] = 1513,
  [SMALL_STATE(43)] = 1527,
  [SMALL_STATE(44)] = 1539,
  [SMALL_STATE(45)] = 1553,
  [SMALL_STATE(46)] = 1567,
  [SMALL_STATE(47)] = 1583,
  [SMALL_STATE(48)] = 1599,
  [SMALL_STATE(49)] = 1613,
  [SMALL_STATE(50)] = 1627,
  [SMALL_STATE(51)] = 1641,
  [SMALL_STATE(52)] = 1657,
  [SMALL_STATE(53)] = 1671,
  [SMALL_STATE(54)] = 1685,
  [SMALL_STATE(55)] = 1699,
  [SMALL_STATE(56)] = 1713,
  [SMALL_STATE(57)] = 1727,
  [SMALL_STATE(58)] = 1741,
  [SMALL_STATE(59)] = 1757,
  [SMALL_STATE(60)] = 1769,
  [SMALL_STATE(61)] = 1781,
  [SMALL_STATE(62)] = 1797,
  [SMALL_STATE(63)] = 1813,
  [SMALL_STATE(64)] = 1827,
  [SMALL_STATE(65)] = 1839,
  [SMALL_STATE(66)] = 1851,
  [SMALL_STATE(67)] = 1863,
  [SMALL_STATE(68)] = 1875,
  [SMALL_STATE(69)] = 1889,
  [SMALL_STATE(70)] = 1903,
  [SMALL_STATE(71)] = 1917,
  [SMALL_STATE(72)] = 1929,
  [SMALL_STATE(73)] = 1945,
  [SMALL_STATE(74)] = 1957,
  [SMALL_STATE(75)] = 1969,
  [SMALL_STATE(76)] = 1981,
  [SMALL_STATE(77)] = 1995,
  [SMALL_STATE(78)] = 2009,
  [SMALL_STATE(79)] = 2021,
  [SMALL_STATE(80)] = 2033,
  [SMALL_STATE(81)] = 2045,
  [SMALL_STATE(82)] = 2057,
  [SMALL_STATE(83)] = 2069,
  [SMALL_STATE(84)] = 2083,
  [SMALL_STATE(85)] = 2097,
  [SMALL_STATE(86)] = 2113,
  [SMALL_STATE(87)] = 2127,
  [SMALL_STATE(88)] = 2141,
  [SMALL_STATE(89)] = 2155,
  [SMALL_STATE(90)] = 2169,
  [SMALL_STATE(91)] = 2182,
  [SMALL_STATE(92)] = 2195,
  [SMALL_STATE(93)] = 2206,
  [SMALL_STATE(94)] = 2217,
  [SMALL_STATE(95)] = 2230,
  [SMALL_STATE(96)] = 2241,
  [SMALL_STATE(97)] = 2252,
  [SMALL_STATE(98)] = 2263,
  [SMALL_STATE(99)] = 2274,
  [SMALL_STATE(100)] = 2287,
  [SMALL_STATE(101)] = 2298,
  [SMALL_STATE(102)] = 2309,
  [SMALL_STATE(103)] = 2320,
  [SMALL_STATE(104)] = 2331,
  [SMALL_STATE(105)] = 2342,
  [SMALL_STATE(106)] = 2353,
  [SMALL_STATE(107)] = 2364,
  [SMALL_STATE(108)] = 2375,
  [SMALL_STATE(109)] = 2388,
  [SMALL_STATE(110)] = 2399,
  [SMALL_STATE(111)] = 2410,
  [SMALL_STATE(112)] = 2421,
  [SMALL_STATE(113)] = 2432,
  [SMALL_STATE(114)] = 2445,
  [SMALL_STATE(115)] = 2456,
  [SMALL_STATE(116)] = 2469,
  [SMALL_STATE(117)] = 2482,
  [SMALL_STATE(118)] = 2493,
  [SMALL_STATE(119)] = 2506,
  [SMALL_STATE(120)] = 2516,
  [SMALL_STATE(121)] = 2526,
  [SMALL_STATE(122)] = 2534,
  [SMALL_STATE(123)] = 2542,
  [SMALL_STATE(124)] = 2550,
  [SMALL_STATE(125)] = 2560,
  [SMALL_STATE(126)] = 2570,
  [SMALL_STATE(127)] = 2578,
  [SMALL_STATE(128)] = 2586,
  [SMALL_STATE(129)] = 2594,
  [SMALL_STATE(130)] = 2602,
  [SMALL_STATE(131)] = 2612,
  [SMALL_STATE(132)] = 2620,
  [SMALL_STATE(133)] = 2628,
  [SMALL_STATE(134)] = 2636,
  [SMALL_STATE(135)] = 2646,
  [SMALL_STATE(136)] = 2654,
  [SMALL_STATE(137)] = 2662,
  [SMALL_STATE(138)] = 2672,
  [SMALL_STATE(139)] = 2682,
  [SMALL_STATE(140)] = 2690,
  [SMALL_STATE(141)] = 2700,
  [SMALL_STATE(142)] = 2710,
  [SMALL_STATE(143)] = 2720,
  [SMALL_STATE(144)] = 2730,
  [SMALL_STATE(145)] = 2740,
  [SMALL_STATE(146)] = 2748,
  [SMALL_STATE(147)] = 2756,
  [SMALL_STATE(148)] = 2766,
  [SMALL_STATE(149)] = 2776,
  [SMALL_STATE(150)] = 2786,
  [SMALL_STATE(151)] = 2796,
  [SMALL_STATE(152)] = 2806,
  [SMALL_STATE(153)] = 2816,
  [SMALL_STATE(154)] = 2826,
  [SMALL_STATE(155)] = 2836,
  [SMALL_STATE(156)] = 2843,
  [SMALL_STATE(157)] = 2850,
  [SMALL_STATE(158)] = 2857,
  [SMALL_STATE(159)] = 2864,
  [SMALL_STATE(160)] = 2871,
  [SMALL_STATE(161)] = 2878,
  [SMALL_STATE(162)] = 2885,
  [SMALL_STATE(163)] = 2892,
  [SMALL_STATE(164)] = 2899,
  [SMALL_STATE(165)] = 2906,
  [SMALL_STATE(166)] = 2913,
  [SMALL_STATE(167)] = 2920,
  [SMALL_STATE(168)] = 2927,
  [SMALL_STATE(169)] = 2934,
  [SMALL_STATE(170)] = 2941,
  [SMALL_STATE(171)] = 2948,
  [SMALL_STATE(172)] = 2955,
  [SMALL_STATE(173)] = 2962,
  [SMALL_STATE(174)] = 2969,
  [SMALL_STATE(175)] = 2976,
  [SMALL_STATE(176)] = 2983,
  [SMALL_STATE(177)] = 2990,
  [SMALL_STATE(178)] = 2997,
  [SMALL_STATE(179)] = 3004,
  [SMALL_STATE(180)] = 3011,
  [SMALL_STATE(181)] = 3018,
  [SMALL_STATE(182)] = 3025,
  [SMALL_STATE(183)] = 3032,
  [SMALL_STATE(184)] = 3039,
  [SMALL_STATE(185)] = 3046,
  [SMALL_STATE(186)] = 3053,
  [SMALL_STATE(187)] = 3060,
  [SMALL_STATE(188)] = 3067,
  [SMALL_STATE(189)] = 3074,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(175),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(189),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(34),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(149),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(124),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(130),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(142),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(111),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(42),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(44),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(45),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(164),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(61),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(27),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_lf, 1, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_op_inclusive, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_op_inclusive, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_op_inclusive, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_op_inclusive, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_int_immediate, 2, .production_id = 6),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_int_immediate, 2, .production_id = 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_int_immediate, 1, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_int_immediate, 1, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 1),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(32),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(32),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete_immediate, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete_immediate, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete_immediate, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete_immediate, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subexpression, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subexpression, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete_immediate, 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete_immediate, 5),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_int_immediate, 3, .production_id = 7),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_int_immediate, 3, .production_id = 7),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subexpression_immediate, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subexpression_immediate, 3),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat1, 2), SHIFT_REPEAT(68),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat2, 2), SHIFT_REPEAT(69),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat2, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat3, 2), SHIFT_REPEAT(70),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat3, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete, 5),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete, 5),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2), SHIFT_REPEAT(72),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2), SHIFT_REPEAT(72),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete_immediate, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete_immediate, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_float_immediate, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_element_next, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_element_next, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_element_to, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete_immediate, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete_immediate, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_element_from, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_element_from, 1),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2), SHIFT_REPEAT(10),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_element_from, 1, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_element_from, 1, .production_id = 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_short, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_short_immediate, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_short_immediate, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_short, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_double_quotes, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_interpolation, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_double_quotes, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_interpolation, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, .production_id = 8),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, .production_id = 9),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [528] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nu() {
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
