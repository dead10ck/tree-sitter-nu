#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 155
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

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
  aux_sym_literal_int_token1 = 11,
  aux_sym_literal_int_token2 = 12,
  aux_sym_literal_int_token3 = 13,
  anon_sym_0x = 14,
  aux_sym_literal_int_token4 = 15,
  aux_sym_literal_int_token5 = 16,
  anon_sym_0o = 17,
  aux_sym_literal_int_token6 = 18,
  anon_sym_0b = 19,
  aux_sym_literal_int_token7 = 20,
  aux_sym__float_complete_token1 = 21,
  aux_sym__float_complete_token2 = 22,
  anon_sym_DOT = 23,
  aux_sym__float_complete_token3 = 24,
  anon_sym_0x_LBRACK = 25,
  aux_sym_literal_binary_token1 = 26,
  anon_sym_COMMA = 27,
  anon_sym_RBRACK = 28,
  anon_sym_0o_LBRACK = 29,
  aux_sym_literal_binary_token2 = 30,
  anon_sym_0b_LBRACK = 31,
  aux_sym_literal_binary_token3 = 32,
  sym_literal_date = 33,
  sym__str_single_quotes = 34,
  sym__str_back_ticks = 35,
  anon_sym_DQUOTE = 36,
  anon_sym_DOLLAR_DQUOTE = 37,
  sym__str_content = 38,
  sym__str_interpolation_content = 39,
  sym_escape_sequence = 40,
  anon_sym_DOT_DOT = 41,
  aux_sym_range_token1 = 42,
  sym_line_comment = 43,
  sym_nu_script = 44,
  sym_shebang = 45,
  sym__block_body_lf = 46,
  sym__block_body_sub = 47,
  sym_pipeline = 48,
  sym__pipeline_element = 49,
  sym__expression = 50,
  sym_subexpression = 51,
  sym__literal = 52,
  sym_literal_bool = 53,
  sym_literal_int = 54,
  sym_literal_float = 55,
  sym__float_complete = 56,
  sym__float_short = 57,
  sym_literal_binary = 58,
  sym_string = 59,
  sym__str_double_quotes = 60,
  sym__str_interpolation = 61,
  sym_range = 62,
  sym__range_element_left = 63,
  sym__range_element_right = 64,
  aux_sym__block_body_lf_repeat1 = 65,
  aux_sym__block_body_sub_repeat1 = 66,
  aux_sym_literal_binary_repeat1 = 67,
  aux_sym_literal_binary_repeat2 = 68,
  aux_sym_literal_binary_repeat3 = 69,
  aux_sym__str_double_quotes_repeat1 = 70,
  aux_sym__str_interpolation_repeat1 = 71,
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
  [aux_sym_range_token1] = "range_token1",
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
  [sym_literal_int] = "literal_int",
  [sym_literal_float] = "literal_float",
  [sym__float_complete] = "_float_complete",
  [sym__float_short] = "_float_short",
  [sym_literal_binary] = "literal_binary",
  [sym_string] = "string",
  [sym__str_double_quotes] = "_str_double_quotes",
  [sym__str_interpolation] = "_str_interpolation",
  [sym_range] = "range",
  [sym__range_element_left] = "_range_element_left",
  [sym__range_element_right] = "_range_element_right",
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
  [aux_sym_range_token1] = aux_sym_range_token1,
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
  [sym_literal_int] = sym_literal_int,
  [sym_literal_float] = sym_literal_float,
  [sym__float_complete] = sym__float_complete,
  [sym__float_short] = sym__float_short,
  [sym_literal_binary] = sym_literal_binary,
  [sym_string] = sym_string,
  [sym__str_double_quotes] = sym__str_double_quotes,
  [sym__str_interpolation] = sym__str_interpolation,
  [sym_range] = sym_range,
  [sym__range_element_left] = sym__range_element_left,
  [sym__range_element_right] = sym__range_element_right,
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
  [aux_sym_range_token1] = {
    .visible = false,
    .named = false,
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
  [sym_literal_int] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_float] = {
    .visible = true,
    .named = true,
  },
  [sym__float_complete] = {
    .visible = false,
    .named = true,
  },
  [sym__float_short] = {
    .visible = false,
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
  [sym__range_element_left] = {
    .visible = false,
    .named = true,
  },
  [sym__range_element_right] = {
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
  [3] = {.index = 0, .length = 3},
  [4] = {.index = 3, .length = 4},
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__float_complete, 2,
    sym__float_complete,
    sym_literal_float,
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
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 20,
  [24] = 19,
  [25] = 25,
  [26] = 22,
  [27] = 21,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 31,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 44,
  [48] = 42,
  [49] = 49,
  [50] = 38,
  [51] = 37,
  [52] = 52,
  [53] = 53,
  [54] = 28,
  [55] = 25,
  [56] = 39,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 52,
  [63] = 30,
  [64] = 43,
  [65] = 65,
  [66] = 66,
  [67] = 29,
  [68] = 41,
  [69] = 49,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 33,
  [74] = 35,
  [75] = 34,
  [76] = 76,
  [77] = 77,
  [78] = 32,
  [79] = 40,
  [80] = 31,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 65,
  [85] = 25,
  [86] = 71,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 88,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 81,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 95,
  [106] = 82,
  [107] = 95,
  [108] = 82,
  [109] = 109,
  [110] = 97,
  [111] = 28,
  [112] = 112,
  [113] = 40,
  [114] = 30,
  [115] = 109,
  [116] = 116,
  [117] = 35,
  [118] = 34,
  [119] = 33,
  [120] = 49,
  [121] = 32,
  [122] = 31,
  [123] = 123,
  [124] = 124,
  [125] = 104,
  [126] = 126,
  [127] = 127,
  [128] = 103,
  [129] = 102,
  [130] = 101,
  [131] = 131,
  [132] = 94,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 112,
  [137] = 93,
  [138] = 92,
  [139] = 135,
  [140] = 134,
  [141] = 133,
  [142] = 126,
  [143] = 87,
  [144] = 83,
  [145] = 145,
  [146] = 133,
  [147] = 134,
  [148] = 135,
  [149] = 112,
  [150] = 133,
  [151] = 151,
  [152] = 152,
  [153] = 96,
  [154] = 89,
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
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(175);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == ']') ADVANCE(135);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == '`') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 't') ADVANCE(191);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(104);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '!') ADVANCE(75);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ';') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '#') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(160);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ';') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == ']') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == ']') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == ']') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(138);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(56);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 34:
      if (lookahead == '`') ADVANCE(156);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(46);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(168);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == '}') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 51:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 55:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(146);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(175);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(199);
      if (lookahead == ']') ADVANCE(135);
      if (lookahead == '_') ADVANCE(183);
      if (lookahead == '`') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 't') ADVANCE(191);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(48);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(48);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '#') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__terminator_lf);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__terminator_lf);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ';') ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__terminator_sub);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literal_null);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_literal_null);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(109);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(92);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(94);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(92);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(94);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '_') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '_') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_literal_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_literal_int_token2);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_literal_int_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '_') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(109);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(102);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(103);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '_') ADVANCE(105);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(102);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(103);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(105);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(107);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_literal_int_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_0x);
      if (lookahead == '[') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_0x);
      if (lookahead == '[') ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_literal_int_token4);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_literal_int_token4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_literal_int_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_0o);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_0o);
      if (lookahead == '[') ADVANCE(136);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_literal_int_token6);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_0b);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_0b);
      if (lookahead == '[') ADVANCE(139);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_literal_int_token7);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__float_complete_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__float_complete_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__float_complete_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__float_complete_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(170);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__float_complete_token3);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__float_complete_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_0x_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_literal_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_0o_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_literal_binary_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_0b_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_literal_binary_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_literal_date);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(177);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(24);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(142);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == ':') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(177);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(24);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_literal_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_literal_date);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__str_single_quotes);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__str_single_quotes);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__str_back_ticks);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__str_back_ticks);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DQUOTE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead == '#') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__str_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead == '#') ADVANCE(165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__str_interpolation_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_range_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(196);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '\'') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(21);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '2') ADVANCE(206);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(105);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(107);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '_') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '`') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(34);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(190);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'u') ADVANCE(190);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '}') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__token);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 222:
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
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 72},
  [33] = {.lex_state = 72},
  [34] = {.lex_state = 72},
  [35] = {.lex_state = 72},
  [36] = {.lex_state = 72},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 72},
  [41] = {.lex_state = 72},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 72},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 72},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 72},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 72},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 72},
  [88] = {.lex_state = 72},
  [89] = {.lex_state = 72},
  [90] = {.lex_state = 72},
  [91] = {.lex_state = 72},
  [92] = {.lex_state = 72},
  [93] = {.lex_state = 72},
  [94] = {.lex_state = 72},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 72},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 72},
  [102] = {.lex_state = 72},
  [103] = {.lex_state = 72},
  [104] = {.lex_state = 72},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 72},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 72},
  [134] = {.lex_state = 18},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 18},
  [141] = {.lex_state = 72},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 72},
  [147] = {.lex_state = 18},
  [148] = {.lex_state = 17},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 72},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
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
    [aux_sym_literal_int_token1] = ACTIONS(1),
    [aux_sym_literal_int_token2] = ACTIONS(1),
    [aux_sym_literal_int_token3] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [aux_sym_literal_int_token4] = ACTIONS(1),
    [anon_sym_0o] = ACTIONS(1),
    [aux_sym_literal_int_token6] = ACTIONS(1),
    [anon_sym_0b] = ACTIONS(1),
    [aux_sym_literal_int_token7] = ACTIONS(1),
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
    [aux_sym_range_token1] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_nu_script] = STATE(152),
    [sym_shebang] = STATE(2),
    [sym__block_body_lf] = STATE(151),
    [sym_pipeline] = STATE(145),
    [sym__pipeline_element] = STATE(144),
    [sym__expression] = STATE(144),
    [sym_subexpression] = STATE(64),
    [sym__literal] = STATE(144),
    [sym_literal_bool] = STATE(144),
    [sym_literal_int] = STATE(67),
    [sym_literal_float] = STATE(144),
    [sym__float_complete] = STATE(68),
    [sym__float_short] = STATE(143),
    [sym_literal_binary] = STATE(144),
    [sym_string] = STATE(144),
    [sym__str_double_quotes] = STATE(153),
    [sym__str_interpolation] = STATE(153),
    [sym_range] = STATE(144),
    [sym__range_element_left] = STATE(91),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
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
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__block_body_lf] = STATE(131),
    [sym_pipeline] = STATE(145),
    [sym__pipeline_element] = STATE(144),
    [sym__expression] = STATE(144),
    [sym_subexpression] = STATE(64),
    [sym__literal] = STATE(144),
    [sym_literal_bool] = STATE(144),
    [sym_literal_int] = STATE(67),
    [sym_literal_float] = STATE(144),
    [sym__float_complete] = STATE(68),
    [sym__float_short] = STATE(143),
    [sym_literal_binary] = STATE(144),
    [sym_string] = STATE(144),
    [sym__str_double_quotes] = STATE(153),
    [sym__str_interpolation] = STATE(153),
    [sym_range] = STATE(144),
    [sym__range_element_left] = STATE(91),
    [aux_sym__block_body_lf_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(39),
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
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_pipeline] = STATE(145),
    [sym__pipeline_element] = STATE(144),
    [sym__expression] = STATE(144),
    [sym_subexpression] = STATE(64),
    [sym__literal] = STATE(144),
    [sym_literal_bool] = STATE(144),
    [sym_literal_int] = STATE(67),
    [sym_literal_float] = STATE(144),
    [sym__float_complete] = STATE(68),
    [sym__float_short] = STATE(143),
    [sym_literal_binary] = STATE(144),
    [sym_string] = STATE(144),
    [sym__str_double_quotes] = STATE(153),
    [sym__str_interpolation] = STATE(153),
    [sym_range] = STATE(144),
    [sym__range_element_left] = STATE(91),
    [aux_sym__block_body_lf_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym_literal_null] = ACTIONS(46),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [aux_sym_literal_int_token1] = ACTIONS(52),
    [aux_sym_literal_int_token2] = ACTIONS(55),
    [anon_sym_0x] = ACTIONS(58),
    [anon_sym_0o] = ACTIONS(61),
    [anon_sym_0b] = ACTIONS(64),
    [aux_sym__float_complete_token3] = ACTIONS(67),
    [anon_sym_0x_LBRACK] = ACTIONS(70),
    [anon_sym_0o_LBRACK] = ACTIONS(73),
    [anon_sym_0b_LBRACK] = ACTIONS(76),
    [sym_literal_date] = ACTIONS(46),
    [sym__str_single_quotes] = ACTIONS(79),
    [sym__str_back_ticks] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_DOLLAR_DQUOTE] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_pipeline] = STATE(145),
    [sym__pipeline_element] = STATE(144),
    [sym__expression] = STATE(144),
    [sym_subexpression] = STATE(64),
    [sym__literal] = STATE(144),
    [sym_literal_bool] = STATE(144),
    [sym_literal_int] = STATE(67),
    [sym_literal_float] = STATE(144),
    [sym__float_complete] = STATE(68),
    [sym__float_short] = STATE(143),
    [sym_literal_binary] = STATE(144),
    [sym_string] = STATE(144),
    [sym__str_double_quotes] = STATE(153),
    [sym__str_interpolation] = STATE(153),
    [sym_range] = STATE(144),
    [sym__range_element_left] = STATE(91),
    [aux_sym__block_body_lf_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(88),
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
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_literal_int_token1,
    ACTIONS(98), 1,
      aux_sym_literal_int_token2,
    ACTIONS(100), 1,
      anon_sym_0x,
    ACTIONS(102), 1,
      anon_sym_0o,
    ACTIONS(104), 1,
      anon_sym_0b,
    ACTIONS(106), 1,
      aux_sym__float_complete_token3,
    ACTIONS(108), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(110), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(112), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(29), 1,
      sym_literal_int,
    STATE(41), 1,
      sym__float_complete,
    STATE(43), 1,
      sym_subexpression,
    STATE(70), 1,
      sym_pipeline,
    STATE(87), 1,
      sym__float_short,
    STATE(88), 1,
      sym__range_element_left,
    STATE(150), 1,
      sym__block_body_sub,
    ACTIONS(92), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(96), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(83), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [87] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_literal_int_token1,
    ACTIONS(98), 1,
      aux_sym_literal_int_token2,
    ACTIONS(100), 1,
      anon_sym_0x,
    ACTIONS(102), 1,
      anon_sym_0o,
    ACTIONS(104), 1,
      anon_sym_0b,
    ACTIONS(106), 1,
      aux_sym__float_complete_token3,
    ACTIONS(108), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(110), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(112), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(29), 1,
      sym_literal_int,
    STATE(41), 1,
      sym__float_complete,
    STATE(43), 1,
      sym_subexpression,
    STATE(70), 1,
      sym_pipeline,
    STATE(87), 1,
      sym__float_short,
    STATE(88), 1,
      sym__range_element_left,
    STATE(141), 1,
      sym__block_body_sub,
    ACTIONS(92), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(96), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(83), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [174] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_literal_int_token1,
    ACTIONS(98), 1,
      aux_sym_literal_int_token2,
    ACTIONS(100), 1,
      anon_sym_0x,
    ACTIONS(102), 1,
      anon_sym_0o,
    ACTIONS(104), 1,
      anon_sym_0b,
    ACTIONS(106), 1,
      aux_sym__float_complete_token3,
    ACTIONS(108), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(110), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(112), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(29), 1,
      sym_literal_int,
    STATE(41), 1,
      sym__float_complete,
    STATE(43), 1,
      sym_subexpression,
    STATE(70), 1,
      sym_pipeline,
    STATE(87), 1,
      sym__float_short,
    STATE(88), 1,
      sym__range_element_left,
    STATE(146), 1,
      sym__block_body_sub,
    ACTIONS(92), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(96), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(83), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [261] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_literal_int_token1,
    ACTIONS(98), 1,
      aux_sym_literal_int_token2,
    ACTIONS(100), 1,
      anon_sym_0x,
    ACTIONS(102), 1,
      anon_sym_0o,
    ACTIONS(104), 1,
      anon_sym_0b,
    ACTIONS(106), 1,
      aux_sym__float_complete_token3,
    ACTIONS(108), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(110), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(112), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(29), 1,
      sym_literal_int,
    STATE(41), 1,
      sym__float_complete,
    STATE(43), 1,
      sym_subexpression,
    STATE(70), 1,
      sym_pipeline,
    STATE(87), 1,
      sym__float_short,
    STATE(88), 1,
      sym__range_element_left,
    STATE(133), 1,
      sym__block_body_sub,
    ACTIONS(92), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(96), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(83), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [348] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_literal_int_token1,
    ACTIONS(98), 1,
      aux_sym_literal_int_token2,
    ACTIONS(100), 1,
      anon_sym_0x,
    ACTIONS(102), 1,
      anon_sym_0o,
    ACTIONS(104), 1,
      anon_sym_0b,
    ACTIONS(106), 1,
      aux_sym__float_complete_token3,
    ACTIONS(108), 1,
      anon_sym_0x_LBRACK,
    ACTIONS(110), 1,
      anon_sym_0o_LBRACK,
    ACTIONS(112), 1,
      anon_sym_0b_LBRACK,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DOLLAR_DQUOTE,
    STATE(29), 1,
      sym_literal_int,
    STATE(41), 1,
      sym__float_complete,
    STATE(43), 1,
      sym_subexpression,
    STATE(87), 1,
      sym__float_short,
    STATE(88), 1,
      sym__range_element_left,
    STATE(90), 1,
      sym_pipeline,
    ACTIONS(92), 2,
      sym_literal_null,
      sym_literal_date,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 2,
      sym__str_single_quotes,
      sym__str_back_ticks,
    STATE(96), 2,
      sym__str_double_quotes,
      sym__str_interpolation,
    STATE(83), 8,
      sym__pipeline_element,
      sym__expression,
      sym__literal,
      sym_literal_bool,
      sym_literal_float,
      sym_literal_binary,
      sym_string,
      sym_range,
  [432] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(122), 4,
      aux_sym_literal_int_token1,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(120), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      aux_sym_literal_int_token2,
      aux_sym__float_complete_token3,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__str_single_quotes,
      sym__str_back_ticks,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DQUOTE,
  [459] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 4,
      aux_sym_literal_int_token1,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(41), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literal_null,
      anon_sym_true,
      anon_sym_false,
      aux_sym_literal_int_token2,
      aux_sym__float_complete_token3,
      anon_sym_0x_LBRACK,
      anon_sym_0o_LBRACK,
      anon_sym_0b_LBRACK,
      sym_literal_date,
      sym__str_single_quotes,
      sym__str_back_ticks,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DQUOTE,
  [486] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_literal_int_token1,
    ACTIONS(98), 1,
      aux_sym_literal_int_token2,
    ACTIONS(106), 1,
      aux_sym__float_complete_token3,
    ACTIONS(126), 1,
      anon_sym_0x,
    ACTIONS(128), 1,
      anon_sym_0o,
    ACTIONS(130), 1,
      anon_sym_0b,
    STATE(87), 2,
      sym__float_complete,
      sym__float_short,
    STATE(109), 4,
      sym_subexpression,
      sym_literal_int,
      sym_literal_float,
      sym__range_element_right,
  [521] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_literal_int_token1,
    ACTIONS(17), 1,
      aux_sym_literal_int_token2,
    ACTIONS(25), 1,
      aux_sym__float_complete_token3,
    ACTIONS(132), 1,
      anon_sym_0x,
    ACTIONS(134), 1,
      anon_sym_0o,
    ACTIONS(136), 1,
      anon_sym_0b,
    STATE(143), 2,
      sym__float_complete,
      sym__float_short,
    STATE(115), 4,
      sym_subexpression,
      sym_literal_int,
      sym_literal_float,
      sym__range_element_right,
  [556] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_literal_int_token1,
    ACTIONS(17), 1,
      aux_sym_literal_int_token2,
    ACTIONS(25), 1,
      aux_sym__float_complete_token3,
    ACTIONS(132), 1,
      anon_sym_0x,
    ACTIONS(134), 1,
      anon_sym_0o,
    ACTIONS(136), 1,
      anon_sym_0b,
    STATE(143), 2,
      sym__float_complete,
      sym__float_short,
    STATE(125), 4,
      sym_subexpression,
      sym_literal_int,
      sym_literal_float,
      sym__range_element_right,
  [591] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_literal_int_token1,
    ACTIONS(98), 1,
      aux_sym_literal_int_token2,
    ACTIONS(106), 1,
      aux_sym__float_complete_token3,
    ACTIONS(126), 1,
      anon_sym_0x,
    ACTIONS(128), 1,
      anon_sym_0o,
    ACTIONS(130), 1,
      anon_sym_0b,
    STATE(87), 2,
      sym__float_complete,
      sym__float_short,
    STATE(104), 4,
      sym_subexpression,
      sym_literal_int,
      sym_literal_float,
      sym__range_element_right,
  [626] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      aux_sym_literal_int_token1,
    ACTIONS(142), 1,
      aux_sym_literal_int_token2,
    ACTIONS(144), 1,
      anon_sym_0x,
    ACTIONS(146), 1,
      anon_sym_0o,
    ACTIONS(148), 1,
      anon_sym_0b,
    ACTIONS(150), 1,
      aux_sym__float_complete_token3,
    STATE(127), 1,
      sym__float_complete,
    STATE(142), 3,
      sym_subexpression,
      sym_literal_int,
      sym__range_element_left,
  [659] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      aux_sym_literal_int_token1,
    ACTIONS(142), 1,
      aux_sym_literal_int_token2,
    ACTIONS(144), 1,
      anon_sym_0x,
    ACTIONS(146), 1,
      anon_sym_0o,
    ACTIONS(148), 1,
      anon_sym_0b,
    ACTIONS(150), 1,
      aux_sym__float_complete_token3,
    STATE(127), 1,
      sym__float_complete,
    STATE(126), 3,
      sym_subexpression,
      sym_literal_int,
      sym__range_element_left,
  [692] = 6,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym__str_interpolation_content,
    ACTIONS(160), 1,
      sym_escape_sequence,
    ACTIONS(163), 1,
      sym_line_comment,
    STATE(18), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [712] = 6,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym__str_interpolation_content,
    ACTIONS(171), 1,
      sym_escape_sequence,
    STATE(18), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [732] = 6,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym__str_interpolation_content,
    ACTIONS(177), 1,
      sym_escape_sequence,
    STATE(19), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [752] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      aux_sym__float_complete_token2,
    ACTIONS(183), 1,
      anon_sym_DOT,
    ACTIONS(179), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(185), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [770] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      aux_sym__float_complete_token2,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(187), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(193), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [788] = 6,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym__str_interpolation_content,
    ACTIONS(199), 1,
      sym_escape_sequence,
    STATE(24), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [808] = 6,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym__str_interpolation_content,
    ACTIONS(171), 1,
      sym_escape_sequence,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(18), 2,
      sym_subexpression,
      aux_sym__str_interpolation_repeat1,
  [828] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      aux_sym__float_complete_token2,
    ACTIONS(203), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(207), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [843] = 5,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym__terminator_lf,
    ACTIONS(209), 1,
      aux_sym__float_complete_token2,
    ACTIONS(211), 1,
      anon_sym_DOT,
    ACTIONS(193), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [860] = 5,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      sym__terminator_lf,
    ACTIONS(213), 1,
      aux_sym__float_complete_token2,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(185), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [877] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      aux_sym__float_complete_token2,
    ACTIONS(217), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(221), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [892] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(225), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [904] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(193), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [916] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(229), 1,
      sym_escape_sequence,
    ACTIONS(227), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__str_interpolation_content,
  [928] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(233), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [940] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(207), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [952] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(237), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [964] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(221), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [976] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
    ACTIONS(229), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [988] = 5,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      sym__str_content,
    ACTIONS(243), 1,
      sym_escape_sequence,
    STATE(50), 1,
      aux_sym__str_double_quotes_repeat1,
  [1004] = 5,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      sym__str_content,
    ACTIONS(249), 1,
      sym_escape_sequence,
    STATE(57), 1,
      aux_sym__str_double_quotes_repeat1,
  [1020] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(251), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [1034] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(257), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1046] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(261), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1058] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [1072] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
    ACTIONS(267), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1084] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [1098] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(271), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [1112] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(271), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [1126] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [1140] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [1154] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
    ACTIONS(277), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1166] = 5,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(247), 1,
      sym__str_content,
    ACTIONS(249), 1,
      sym_escape_sequence,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      aux_sym__str_double_quotes_repeat1,
  [1182] = 5,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym__str_content,
    ACTIONS(285), 1,
      sym_escape_sequence,
    STATE(38), 1,
      aux_sym__str_double_quotes_repeat1,
  [1198] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [1212] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [1226] = 4,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym__terminator_lf,
    ACTIONS(291), 1,
      aux_sym__float_complete_token2,
    ACTIONS(221), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1240] = 4,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      sym__terminator_lf,
    ACTIONS(293), 1,
      aux_sym__float_complete_token2,
    ACTIONS(207), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1254] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(295), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [1268] = 5,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      sym__str_content,
    ACTIONS(304), 1,
      sym_escape_sequence,
    STATE(57), 1,
      aux_sym__str_double_quotes_repeat1,
  [1284] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [1298] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_literal_binary_repeat1,
    ACTIONS(309), 2,
      aux_sym_literal_binary_token1,
      anon_sym_COMMA,
  [1312] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(314), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [1326] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_literal_binary_repeat3,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token3,
  [1340] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_literal_binary_repeat2,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      aux_sym_literal_binary_token2,
  [1354] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym__terminator_lf,
    ACTIONS(193), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1365] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      sym__terminator_lf,
    ACTIONS(225), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1376] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      aux_sym_literal_int_token3,
    ACTIONS(326), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1387] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      aux_sym_range_token1,
    ACTIONS(330), 1,
      aux_sym__float_complete_token2,
    ACTIONS(332), 1,
      anon_sym_DOT,
  [1400] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      sym__terminator_lf,
    ACTIONS(225), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1411] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(259), 1,
      sym__terminator_lf,
    ACTIONS(261), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1422] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      sym__terminator_lf,
    ACTIONS(277), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1433] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      sym__terminator_sub,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym__block_body_sub_repeat1,
  [1446] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 1,
      aux_sym_literal_int_token3,
    ACTIONS(338), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1457] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      sym__terminator_sub,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym__block_body_sub_repeat1,
  [1470] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      sym__terminator_lf,
    ACTIONS(207), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1481] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym__terminator_lf,
    ACTIONS(221), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1492] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(235), 1,
      sym__terminator_lf,
    ACTIONS(237), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1503] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      aux_sym_range_token1,
    ACTIONS(347), 1,
      aux_sym__float_complete_token2,
    ACTIONS(349), 1,
      anon_sym_DOT,
  [1516] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      sym__terminator_sub,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym__block_body_sub_repeat1,
  [1529] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(231), 1,
      sym__terminator_lf,
    ACTIONS(233), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1540] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(255), 1,
      sym__terminator_lf,
    ACTIONS(257), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1551] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(229), 1,
      sym__terminator_lf,
    ACTIONS(227), 2,
      anon_sym_DOT_DOT,
      aux_sym_range_token1,
  [1562] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      aux_sym__float_complete_token1,
    ACTIONS(353), 1,
      aux_sym_literal_int_token3,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 1,
      aux_sym_literal_int_token4,
    ACTIONS(357), 1,
      aux_sym_literal_int_token6,
  [1582] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1590] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(326), 1,
      sym__terminator_lf,
    ACTIONS(361), 1,
      aux_sym_literal_int_token3,
  [1600] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      aux_sym_range_token1,
    ACTIONS(363), 1,
      aux_sym__float_complete_token2,
  [1610] = 3,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      sym__terminator_lf,
    ACTIONS(365), 1,
      aux_sym_literal_int_token3,
  [1620] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1628] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 1,
      anon_sym_DOT_DOT,
    ACTIONS(369), 1,
      aux_sym_range_token1,
  [1638] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(371), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1646] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1654] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT_DOT,
    ACTIONS(375), 1,
      aux_sym_range_token1,
  [1664] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1672] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1680] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1688] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 1,
      aux_sym_literal_int_token5,
    ACTIONS(383), 1,
      aux_sym_literal_int_token4,
  [1698] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(385), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1706] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      aux_sym_literal_int_token4,
    ACTIONS(389), 1,
      aux_sym_literal_int_token7,
  [1716] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 1,
      aux_sym_literal_int_token7,
    ACTIONS(391), 1,
      aux_sym_literal_int_token4,
  [1726] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      aux_sym__float_complete_token1,
    ACTIONS(393), 1,
      aux_sym_literal_int_token3,
  [1736] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      aux_sym__float_complete_token1,
    ACTIONS(395), 1,
      aux_sym_literal_int_token3,
  [1746] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(397), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1754] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(399), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1762] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(401), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1770] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(403), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1778] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 1,
      aux_sym_literal_int_token4,
    ACTIONS(407), 1,
      aux_sym_literal_int_token5,
  [1788] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      aux_sym_literal_int_token6,
    ACTIONS(409), 1,
      aux_sym_literal_int_token4,
  [1798] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      aux_sym_literal_int_token5,
    ACTIONS(411), 1,
      aux_sym_literal_int_token4,
  [1808] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(407), 1,
      aux_sym_literal_int_token6,
    ACTIONS(413), 1,
      aux_sym_literal_int_token4,
  [1818] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(415), 2,
      sym__terminator_sub,
      anon_sym_RPAREN,
  [1826] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(407), 1,
      aux_sym_literal_int_token7,
    ACTIONS(417), 1,
      aux_sym_literal_int_token4,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      aux_sym_range_token1,
    ACTIONS(419), 1,
      aux_sym__float_complete_token2,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 1,
      aux_sym_literal_int_token7,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 1,
      aux_sym_range_token1,
  [1860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      aux_sym_range_token1,
  [1867] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      sym__terminator_lf,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      aux_sym_literal_int_token3,
  [1881] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      aux_sym_range_token1,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 1,
      aux_sym_range_token1,
  [1895] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      aux_sym_range_token1,
  [1902] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      aux_sym_range_token1,
  [1909] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 1,
      aux_sym_range_token1,
  [1916] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 1,
      aux_sym_range_token1,
  [1923] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      aux_sym_shebang_token1,
  [1930] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      aux_sym_literal_int_token3,
  [1937] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(403), 1,
      sym__terminator_lf,
  [1944] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 1,
      aux_sym_range_token1,
  [1951] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      aux_sym_range_token1,
  [1958] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(401), 1,
      sym__terminator_lf,
  [1965] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(399), 1,
      sym__terminator_lf,
  [1972] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(397), 1,
      sym__terminator_lf,
  [1979] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
  [1986] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(381), 1,
      sym__terminator_lf,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
  [2000] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      aux_sym_literal_int_token5,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      aux_sym_literal_int_token6,
  [2014] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      aux_sym_literal_int_token7,
  [2021] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(379), 1,
      sym__terminator_lf,
  [2028] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(377), 1,
      sym__terminator_lf,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 1,
      aux_sym_literal_int_token6,
  [2042] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 1,
      aux_sym_literal_int_token5,
  [2049] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [2056] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(441), 1,
      aux_sym_range_token1,
  [2063] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(259), 1,
      sym__terminator_lf,
  [2070] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(359), 1,
      sym__terminator_lf,
  [2077] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(443), 1,
      sym__terminator_lf,
  [2084] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
  [2091] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      aux_sym_literal_int_token5,
  [2098] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      aux_sym_literal_int_token6,
  [2105] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      aux_sym_literal_int_token7,
  [2112] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [2119] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [2126] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
  [2133] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(385), 1,
      sym__terminator_lf,
  [2140] = 2,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(371), 1,
      sym__terminator_lf,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 348,
  [SMALL_STATE(10)] = 432,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 486,
  [SMALL_STATE(13)] = 521,
  [SMALL_STATE(14)] = 556,
  [SMALL_STATE(15)] = 591,
  [SMALL_STATE(16)] = 626,
  [SMALL_STATE(17)] = 659,
  [SMALL_STATE(18)] = 692,
  [SMALL_STATE(19)] = 712,
  [SMALL_STATE(20)] = 732,
  [SMALL_STATE(21)] = 752,
  [SMALL_STATE(22)] = 770,
  [SMALL_STATE(23)] = 788,
  [SMALL_STATE(24)] = 808,
  [SMALL_STATE(25)] = 828,
  [SMALL_STATE(26)] = 843,
  [SMALL_STATE(27)] = 860,
  [SMALL_STATE(28)] = 877,
  [SMALL_STATE(29)] = 892,
  [SMALL_STATE(30)] = 904,
  [SMALL_STATE(31)] = 916,
  [SMALL_STATE(32)] = 928,
  [SMALL_STATE(33)] = 940,
  [SMALL_STATE(34)] = 952,
  [SMALL_STATE(35)] = 964,
  [SMALL_STATE(36)] = 976,
  [SMALL_STATE(37)] = 988,
  [SMALL_STATE(38)] = 1004,
  [SMALL_STATE(39)] = 1020,
  [SMALL_STATE(40)] = 1034,
  [SMALL_STATE(41)] = 1046,
  [SMALL_STATE(42)] = 1058,
  [SMALL_STATE(43)] = 1072,
  [SMALL_STATE(44)] = 1084,
  [SMALL_STATE(45)] = 1098,
  [SMALL_STATE(46)] = 1112,
  [SMALL_STATE(47)] = 1126,
  [SMALL_STATE(48)] = 1140,
  [SMALL_STATE(49)] = 1154,
  [SMALL_STATE(50)] = 1166,
  [SMALL_STATE(51)] = 1182,
  [SMALL_STATE(52)] = 1198,
  [SMALL_STATE(53)] = 1212,
  [SMALL_STATE(54)] = 1226,
  [SMALL_STATE(55)] = 1240,
  [SMALL_STATE(56)] = 1254,
  [SMALL_STATE(57)] = 1268,
  [SMALL_STATE(58)] = 1284,
  [SMALL_STATE(59)] = 1298,
  [SMALL_STATE(60)] = 1312,
  [SMALL_STATE(61)] = 1326,
  [SMALL_STATE(62)] = 1340,
  [SMALL_STATE(63)] = 1354,
  [SMALL_STATE(64)] = 1365,
  [SMALL_STATE(65)] = 1376,
  [SMALL_STATE(66)] = 1387,
  [SMALL_STATE(67)] = 1400,
  [SMALL_STATE(68)] = 1411,
  [SMALL_STATE(69)] = 1422,
  [SMALL_STATE(70)] = 1433,
  [SMALL_STATE(71)] = 1446,
  [SMALL_STATE(72)] = 1457,
  [SMALL_STATE(73)] = 1470,
  [SMALL_STATE(74)] = 1481,
  [SMALL_STATE(75)] = 1492,
  [SMALL_STATE(76)] = 1503,
  [SMALL_STATE(77)] = 1516,
  [SMALL_STATE(78)] = 1529,
  [SMALL_STATE(79)] = 1540,
  [SMALL_STATE(80)] = 1551,
  [SMALL_STATE(81)] = 1562,
  [SMALL_STATE(82)] = 1572,
  [SMALL_STATE(83)] = 1582,
  [SMALL_STATE(84)] = 1590,
  [SMALL_STATE(85)] = 1600,
  [SMALL_STATE(86)] = 1610,
  [SMALL_STATE(87)] = 1620,
  [SMALL_STATE(88)] = 1628,
  [SMALL_STATE(89)] = 1638,
  [SMALL_STATE(90)] = 1646,
  [SMALL_STATE(91)] = 1654,
  [SMALL_STATE(92)] = 1664,
  [SMALL_STATE(93)] = 1672,
  [SMALL_STATE(94)] = 1680,
  [SMALL_STATE(95)] = 1688,
  [SMALL_STATE(96)] = 1698,
  [SMALL_STATE(97)] = 1706,
  [SMALL_STATE(98)] = 1716,
  [SMALL_STATE(99)] = 1726,
  [SMALL_STATE(100)] = 1736,
  [SMALL_STATE(101)] = 1746,
  [SMALL_STATE(102)] = 1754,
  [SMALL_STATE(103)] = 1762,
  [SMALL_STATE(104)] = 1770,
  [SMALL_STATE(105)] = 1778,
  [SMALL_STATE(106)] = 1788,
  [SMALL_STATE(107)] = 1798,
  [SMALL_STATE(108)] = 1808,
  [SMALL_STATE(109)] = 1818,
  [SMALL_STATE(110)] = 1826,
  [SMALL_STATE(111)] = 1836,
  [SMALL_STATE(112)] = 1846,
  [SMALL_STATE(113)] = 1853,
  [SMALL_STATE(114)] = 1860,
  [SMALL_STATE(115)] = 1867,
  [SMALL_STATE(116)] = 1874,
  [SMALL_STATE(117)] = 1881,
  [SMALL_STATE(118)] = 1888,
  [SMALL_STATE(119)] = 1895,
  [SMALL_STATE(120)] = 1902,
  [SMALL_STATE(121)] = 1909,
  [SMALL_STATE(122)] = 1916,
  [SMALL_STATE(123)] = 1923,
  [SMALL_STATE(124)] = 1930,
  [SMALL_STATE(125)] = 1937,
  [SMALL_STATE(126)] = 1944,
  [SMALL_STATE(127)] = 1951,
  [SMALL_STATE(128)] = 1958,
  [SMALL_STATE(129)] = 1965,
  [SMALL_STATE(130)] = 1972,
  [SMALL_STATE(131)] = 1979,
  [SMALL_STATE(132)] = 1986,
  [SMALL_STATE(133)] = 1993,
  [SMALL_STATE(134)] = 2000,
  [SMALL_STATE(135)] = 2007,
  [SMALL_STATE(136)] = 2014,
  [SMALL_STATE(137)] = 2021,
  [SMALL_STATE(138)] = 2028,
  [SMALL_STATE(139)] = 2035,
  [SMALL_STATE(140)] = 2042,
  [SMALL_STATE(141)] = 2049,
  [SMALL_STATE(142)] = 2056,
  [SMALL_STATE(143)] = 2063,
  [SMALL_STATE(144)] = 2070,
  [SMALL_STATE(145)] = 2077,
  [SMALL_STATE(146)] = 2084,
  [SMALL_STATE(147)] = 2091,
  [SMALL_STATE(148)] = 2098,
  [SMALL_STATE(149)] = 2105,
  [SMALL_STATE(150)] = 2112,
  [SMALL_STATE(151)] = 2119,
  [SMALL_STATE(152)] = 2126,
  [SMALL_STATE(153)] = 2133,
  [SMALL_STATE(154)] = 2140,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(6),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(144),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(154),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(27),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(100),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(107),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(106),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(97),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(69),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(39),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(52),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(53),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(153),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(37),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_lf_repeat1, 2), SHIFT_REPEAT(20),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_lf, 1, .production_id = 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_lf_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(7),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(18),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__str_interpolation_repeat1, 2), SHIFT_REPEAT(18),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_element_left, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subexpression, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subexpression, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete, 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_int, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_int, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_element_left, 1, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_complete, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_complete, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2), SHIFT_REPEAT(57),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__str_double_quotes_repeat1, 2), SHIFT_REPEAT(57),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat1, 2), SHIFT_REPEAT(59),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat2, 2), SHIFT_REPEAT(60),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat2, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat3, 2), SHIFT_REPEAT(61),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_binary_repeat3, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_short, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_short, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2), SHIFT_REPEAT(9),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_sub_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body_sub, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_double_quotes, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_interpolation, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_binary, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_double_quotes, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_interpolation, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, .production_id = 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_element_left, 1, .production_id = 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nu_script, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [451] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
