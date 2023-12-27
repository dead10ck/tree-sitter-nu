const _SIGN = /[+-]/;

const _DIGIT_DECIMAL = /[0-9]/;
const _DIGIT_HEX = /[0-9a-fA-F]/;
const _DIGIT_OCTAL = /[0-7]/;
const _DIGIT_BINARY = /[01]/;

const _LITERAL_DECIMAL = token(
  seq(/_*/, _DIGIT_DECIMAL, repeat(choice("_", _DIGIT_DECIMAL))),
);

const _LITERAL_HEX = token(
  seq(/_*/, _DIGIT_HEX, repeat(choice("_", _DIGIT_HEX))),
);

const _LITERAL_OCTAL = token(
  seq(/_*/, _DIGIT_OCTAL, repeat(choice("_", _DIGIT_OCTAL))),
);

const _LITERAL_BINARY = token(
  seq(/_*/, _DIGIT_BINARY, repeat(choice("_", _DIGIT_BINARY))),
);

const _FLOAT_EXPONENT = token(seq(/[eE]/, optional(_SIGN), _LITERAL_DECIMAL));

function _binary_rule(prefix, digit) {
  return seq(
    prefix + "[",
    field("bytes", token(repeat(seq(digit, /[ ]*,?[ ]*/)))),
    "]",
  );
}

/*
/// operator precedence
/// taken from `nu_protocol::`
const PREC = {
  range: 15,
  power: 14,
  multiplicative: 13,
  additive: 12,
  bit_shift: 11,
  comparative: 10,
  membership: 9,
  regex: 8,
  bit_and: 7,
  bit_xor: 6,
  bit_or: 5,
  and: 4,
  xor: 3,
  or: 2,
  assignment: 1,
};

/// map of operators and their precedence
function TABLE() {
  const multiplicatives = choice(
    OPR().times,
    OPR().divide,
    OPR().modulo,
    OPR().floor,
  );

  const comparatives = choice(
    OPR().equal,
    OPR().not_equal,
    OPR().less_than,
    OPR().less_than_equal,
    OPR().greater_than,
    OPR().greater_than_equal,
  );

  const memberships = choice(
    OPR().in,
    OPR().not_in,
    OPR().starts_with,
    OPR().ends_with,
  );

  // `range` is not included here and is handled separately
  return [
    [PREC().power, choice(OPR().power, OPR().append)],
    [PREC().multiplicative, multiplicatives],
    [PREC().additive, choice(OPR().plus, OPR().minus)],
    [PREC().bit_shift, choice(OPR().bit_shl, OPR().bit_shr)],
    [PREC().comparative, comparatives],
    [PREC().membership, memberships],
    [PREC().regex, choice(OPR().regex_match, OPR().regex_not_match)],
    [PREC().bit_and, OPR().bit_and],
    [PREC().bit_xor, OPR().bit_xor],
    [PREC().bit_or, OPR().bit_or],
    [PREC().and, OPR().and],
    [PREC().xor, OPR().xor],
    [PREC().or, OPR().or],
  ];
}

/// nushell flat types

/// taken from `nu_parser::parser::parse_shape_name()`
// i.e not composite types like list<int> or record<name: string>
// prettier-ignore
const FLAT_TYPES = [
  "any", "binary", "block", "bool", "cell-path", "closure", "cond",
  "datetime", "directory", "duration", "directory", "duration",
  "error", "expr", "float", "decimal", "filesize", "full-cell-path",
  "glob", "int", "import-pattern", "keyword", "math", "nothing",
  "number", "one-of", "operator", "path", "range", "signature",
  "string", "table", "variable", "var-with-opt-type", "record", "list",
];
*/

/// duration units, are case sensitive
/// taken from `nu_parser::parse_duration_bytes()`
// prettier-ignore
const DURATION_UNIT = ["ns", "µs", "us", "ms", "sec", "min", "hr", "day", "wk"]

/// filesize units, are case insensitive
/// taken from `nu_parser::parse_filesize_bytes()`
// prettier-ignore
const FILESIZE_UNIT = [
  "b", "B",

  "kb", "kB", "Kb", "KB",
  "mb", "mB", "Mb", "MB",
  "gb", "gB", "Gb", "GB",
  "tb", "tB", "Tb", "TB",
  "pb", "pB", "Pb", "PB",
  "eb", "eB", "Eb", "EB",
  "zb", "zB", "Zb", "ZB",

  "kib", "kiB", "kIB", "kIb", "Kib", "KIb", "KIB",
  "mib", "miB", "mIB", "mIb", "Mib", "MIb", "MIB",
  "gib", "giB", "gIB", "gIb", "Gib", "GIb", "GIB",
  "tib", "tiB", "tIB", "tIb", "Tib", "TIb", "TIB",
  "pib", "piB", "pIB", "pIb", "Pib", "PIb", "PIB",
  "eib", "eiB", "eIB", "eIb", "Eib", "EIb", "EIB",
  "zib", "ziB", "zIB", "zIb", "Zib", "ZIb", "ZIB",
]

module.exports = grammar({
  name: "nu",

  word: ($) => $._token,

  extras: ($) => [/ \t/],

  // externals: ($) => [],

  // conflicts: ($) => [],

  // supertypes: ($) => [],

  // inline: ($) => [],

  rules: {
    /// File

    nu_script: ($) =>
      seq(optional($.shebang), repeat(/\s/), optional($._block_body)),

    shebang: ($) => seq("#!", /.*\n/),

    /*
      pub enum Expr {
          Nothing,
          Bool(bool),
          Int(i64),
          Float(f64),
          Binary(Vec<u8>),
          DateTime(chrono::DateTime<FixedOffset>),
          Filepath(String),
          Directory(String),
          GlobPattern(String),
          String(String),

          Range(
              Option<Box<Expression>>, // from
              Option<Box<Expression>>, // next value after "from"
              Option<Box<Expression>>, // to
              RangeOperator,
          ),

          ValueWithUnit(Box<Expression>, Spanned<Unit>),

          StringInterpolation(Vec<Expression>),
          CellPath(CellPath),
          FullCellPath(Box<FullCellPath>),
          List(Vec<Expression>),
          Record(Vec<RecordItem>),
          Table(Vec<Expression>, Vec<Vec<Expression>>),

          Spread(Box<Expression>),
          ImportPattern(ImportPattern),
          Subexpression(BlockId),
          Block(BlockId),
          Closure(BlockId),
          MatchBlock(Vec<(MatchPattern, Expression)>),
          MatchPattern(Box<MatchPattern>),
          Overlay(Option<BlockId>), // block ID of the overlay's origin module

          Var(VarId),
          VarDecl(VarId),
          Signature(Box<Signature>),
          Call(Box<Call>),
          ExternalCall(Box<Expression>, Vec<Expression>, bool), // head, args, is_subexpression
          Operator(Operator),
          RowCondition(BlockId),
          UnaryNot(Box<Expression>),
          BinaryOp(Box<Expression>, Box<Expression>, Box<Expression>), //lhs, op, rhs

          Keyword(Vec<u8>, Span, Box<Expression>),
          Garbage,
      }
    */

    _block_body: ($) =>
      repeat1(seq(choice($._expression, $.line_comment), repeat("\n"))),

    /// Identifiers

    // from combination of parser.rs::is_identifier_byte and lex.rs::lex_item {
    _token: (_) => /[^;#\s\r\n\t]+/,
    identifier: (_) => /[^.\[\]{}()+\-*^\/\\=!<>&|"'`;#\s\r\n\t]+/,

    // _terminator: ($) => choice(PUNC().semicolon, "\n"),

    _expression: ($) => $._literal,

    _literal: ($) =>
      choice(
        $.literal_null,
        $.literal_bool,
        $.literal_int,
        $.literal_float,
        $.literal_binary,
        $.literal_date,
      ),

    literal_null: (_) => "null",

    literal_bool: (_) => choice("true", "false"),

    // unlike Rust, leading _ is allowed, but the token must contain at least
    // one digit
    //
    // also, we cannot use standalone rules for individual digits to avoid the
    // repetition because they all have to be parsed as a single token to avoid
    // conflicts, and you cannot use the token() function on a non-terminal rule
    //
    // yes, as of this writing, the sign can come *after* the radix prefix
    literal_int: (_) =>
      token(
        choice(
          seq(optional(_SIGN), _LITERAL_DECIMAL),
          seq("0x", optional(_SIGN), _LITERAL_HEX),
          seq("0o", optional(_SIGN), _LITERAL_OCTAL),
          seq("0b", optional(_SIGN), _LITERAL_BINARY),
        ),
      ),

    // Taken from the Rust reference, since the underlying nu parser just parses
    // Rust floats, except we don't need the suffix parts, and, unlike Rust, in
    // nu, the sign is actually tokenized into the AST's expression for numeric
    // values.
    //
    // FLOAT_LITERAL :
    //   DEC_LITERAL . (not immediately followed by ., _ or an XID_Start character)
    //    | DEC_LITERAL . DEC_LITERAL SUFFIX_NO_E?
    //    | DEC_LITERAL (. DEC_LITERAL)? FLOAT_EXPONENT SUFFIX?
    //
    // FLOAT_EXPONENT :
    //    (e|E) (+|-)? (DEC_DIGIT|_)* DEC_DIGIT (DEC_DIGIT|_)*
    literal_float: ($) =>
      token(
        seq(
          optional(_SIGN),
          choice(
            /inf|nan/i,
            seq(_LITERAL_DECIMAL, _FLOAT_EXPONENT),
            prec(
              1,
              seq(
                _LITERAL_DECIMAL,
                ".",
                _LITERAL_DECIMAL,
                optional(_FLOAT_EXPONENT),
              ),
            ),
            seq(_LITERAL_DECIMAL, "."),
          ),
        ),
      ),

    literal_binary: (_) =>
      choice(
        _binary_rule("0x", repeat1(_DIGIT_HEX)),
        _binary_rule("0o", repeat1(_DIGIT_OCTAL)),
        _binary_rule("0b", repeat1(_DIGIT_BINARY)),
      ),

    literal_date: (_) =>
      token(
        choice(
          /[0-9]+-[0-9]{2}-[0-9]{2}/,
          /[0-9]+-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}(\.[0-9]+)?([Zz]|([-+])([01]\d|2[0-3]):?([0-5]\d)?)?/,
        ),
      ),

    /// Controls

    // Standalone Controls

    // ctrl_for: ($) =>
    // ctrl_loop: ($) => seq(KEYWORD().loop, field("body", $.block)),
    // ctrl_error: ($) =>
    // ctrl_while: ($) =>
    //   seq(
    //     KEYWORD().while,
    //     field("condition", $._expression),
    //     field("body", $.block),
    //   ),

    // Nestable Controls

    // ctrl_do: ($) =>

    // ctrl_if: ($) =>

    // ctrl_match: ($) =>

    // match_arm: ($) =>

    // default_arm: ($) =>

    // match_pattern: ($) =>

    // match_guard: ($) => seq(KEYWORD().if, $._expression),

    // ctrl_try: ($) =>

    // ctrl_return: ($) =>

    /// Pipelines

    // pipe_element: ($) =>

    /// Scope Statements

    // stmt_source: ($) =>

    // stmt_register: ($) =>

    // hide_mod: ($) =>

    // hide_env: ($) =>

    // overlay_hide: ($) =>

    // overlay_new: ($) =>

    // overlay_use: ($) =>

    /// Assignment Statement

    // assignment: ($) => {
    //   const opr = [
    //     PUNC().eq,
    //     OPR().assign_add,
    //     OPR().assign_sub,
    //     OPR().assign_mul,
    //     OPR().assign_div,
    //     OPR().assign_append,
    //   ];

    //   return prec.left(
    //     PREC().assignment,
    //     seq(
    //       field("lhs", $.val_variable),
    //       field("opr", choice(...opr)),
    //       field("rhs", $._expression),
    //     ),
    //   );
    // },

    /// Block

    // block: ($) =>
    //   seq(BRACK().open_brace, optional($._block_body), BRACK().close_brace),

    // the where command has a unique argument pattern that breaks the
    // general command parsing, so we handle it separately
    // where_command: ($) => seq("where", $._where_predicate),

    // _where_predicate: ($) =>

    /// Expressions

    // val_range: ($) => {

    /// Simple Expressions

    // range??
    //
    // value: ($) =>
    //   choice(
    //     $.val_variable,
    //     $.val_nothing,
    //     $.val_bool,
    //     $.val_number,
    //     $.val_duration,
    //     $.val_filesize,
    //     $.val_binary,
    //     $.val_string,
    //     $.val_interpolated,
    //     $.val_date,
    //     $.val_list,
    //     $.val_record,
    //     $.val_table,
    //     $.val_closure,
    //   ),

    /// Literals
    // val_variable: ($) => choice($._var, seq($._var, $.cell_path)),

    // _var: ($) =>
    //   seq(
    //     PUNC().dollar,
    //     field("name", choice("nu", "in", "env", "nothing", $.identifier)),
    //   ),

    // separating floats from integers does not end well
    // especially when it comes to incorporation with ranges.
    // val_number: ($) =>
    //   choice(
    //     /[+-]?([0-9]+[.])?[0-9]+([eE][-+]?\d+)?/,
    //     /0x[0-9a-fA-F_]+/,
    //     /0b[01_]+/,
    //     /0o[0-7_]+/,
    //     SPECIAL().pos_infinity,
    //     SPECIAL().neg_infinity,
    //     SPECIAL().not_a_number,
    //   ),

    // val_duration: ($) =>

    // val_filesize: ($) =>
    // seq(field("value", $.val_number), field("unit", FILESIZE_UNIT())),

    // val_binary: ($) =>
    //   seq(
    //     choice("0b", "0o", "0x"),
    //     token.immediate(BRACK().open_brack),
    //     repeat(field("digit", seq($.hex_digit, optional(PUNC().comma)))),
    //     BRACK().close_brack,
    //   ),

    // val_date: ($) =>
    //   token(
    //     choice(
    //       /[0-9]{4}-[0-9]{2}-[0-9]{2}/i,
    //       /[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}(\.[0-9]+)?([Zz]|([\+-])([01]\d|2[0-3]):?([0-5]\d)?)?/,
    //     ),
    //   ),

    // val_string: ($) =>

    // _str_double_quotes: ($) =>
    //   seq(
    //     '"',
    //     repeat(
    //       choice(
    //         $._escaped_str_content,
    //         // double quoted strings accept escapes
    //         $.escape_sequence,
    //       ),
    //     ),
    //     '"',
    //   ),

    // _escaped_str_content: ($) => token.immediate(prec(1, /[^"\\]+/)),

    // _str_single_quotes: ($) => /'[^']*'/,

    // _str_back_ticks: ($) => /`[^`]*`/,

    // escape_sequence: ($) =>
    //   token.immediate(
    //     seq(
    //       "\\",
    //       choice(
    //         /[^xu]/,
    //         /u[0-9a-fA-F]{4}/,
    //         /u{[0-9a-fA-F]+}/,
    //         /x[0-9a-fA-F]{2}/,
    //       ),
    //     ),
    //   ),

    /// String Interpolation

    // inter_escape_sequence: ($) =>
    //   token.immediate(
    //     seq(
    //       "\\",
    //       choice(
    //         /[^xu]/,
    //         /u[0-9a-fA-F]{4}/,
    //         /u{[0-9a-fA-F]+}/,
    //         /x[0-9a-fA-F]{2}/,
    //         "(",
    //       ),
    //     ),
    //   ),

    /// Collections

    // val_list: ($) =>

    // val_record: ($) =>
    //   seq(
    //     BRACK().open_brace,
    //     repeat(field("entry", $.record_entry)),
    //     BRACK().close_brace,
    //   ),

    // record_entry: ($) =>

    // val_closure: ($) =>

    /// CellPaths

    // cell_path: ($) => prec.right(1, seq($.path, repeat($.path))),

    // path: ($) => {
    //   const quoted = choice(
    //     $._str_double_quotes,
    //     $._str_single_quotes,
    //     $._str_back_ticks,
    //   );

    //   const path = choice(prec.right(2, token(/[0-9a-zA-Z_]+/)), quoted);

    //   return seq(
    //     PUNC().dot,
    //     choice(
    //       field("raw_path", path),
    //       field("protected_path", seq(path, PUNC().question)),
    //     ),
    //   );
    // },

    /// Commands

    // command: ($) =>
    //   seq(
    //     field("head", seq(optional(PUNC().caret), $.cmd_identifier)),
    //     prec.dynamic(10, repeat(seq(optional("\n"), $._cmd_arg))),
    //   ),

    // _cmd_arg: ($) =>

    // redirection: ($) =>

    // _flag: ($) => prec.right(5, choice($.short_flag, $.long_flag)),

    // short_flag: ($) => token(/-[_\p{XID_Continue}]+/),

    // long_flag: ($) =>
    //   prec.right(
    //     10,
    //     choice("--", seq("--", token.immediate(/[_\p{XID_Continue}]+/))),
    //   ),

    // because this catches almost anything, we want to ensure it is
    // picked as the a last resort after everything else has failed.
    // so we give it a ridiculously low precedence and place it at the
    // very end
    // unquoted: ($) =>
    //   prec.left(
    //     -69,
    //     token(/[^-$\s\n\t\r{}()\[\]"`';][^\s\n\t\r{}()\[\]"`';]+/),
    //   ),

    /// Comments

    line_comment: ($) => prec(1, repeat1($._comment)),
    _comment: (_) => /#.*\n/,
  },
});
