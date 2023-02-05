#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  sym_identifier = 1,
  sym_boolean_literal = 2,
  anon_sym_SQUOTE = 3,
  aux_sym_char_literal_token1 = 4,
  anon_sym_SQUOTE2 = 5,
  sym__backslash_literal = 6,
  sym__char_escape_sequence = 7,
  aux_sym_integer_literal_token1 = 8,
  aux_sym_float_literal_token1 = 9,
  sym__numeric_literal = 10,
  sym__decimal_float_literal = 11,
  sym_nil_literal = 12,
  anon_sym_DQUOTE = 13,
  aux_sym__interpreted_string_literal_token1 = 14,
  anon_sym_DQUOTE2 = 15,
  anon_sym_BSLASHp = 16,
  aux_sym__string_escape_sequence_token1 = 17,
  sym__raw_string_content = 18,
  anon_sym_r_DQUOTE = 19,
  aux_sym__long_string_literal_token1 = 20,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 21,
  aux_sym__long_string_content_token1 = 22,
  aux_sym__identifier_imm_token1 = 23,
  sym__long_string_quote = 24,
  sym__terminator = 25,
  sym_source_file = 26,
  sym__literals = 27,
  sym_char_literal = 28,
  sym_integer_literal = 29,
  sym_float_literal = 30,
  sym_custom_numeric_literal = 31,
  sym_string_literal = 32,
  sym__interpreted_string_literal = 33,
  sym__string_escape_sequence = 34,
  sym__raw_string_literal = 35,
  sym__long_string_literal = 36,
  aux_sym__long_string_content = 37,
  sym_generalized_string_literal = 38,
  sym__generalized_short_string = 39,
  sym__generalized_long_string = 40,
  sym__identifier_imm = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym__interpreted_string_literal_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_boolean_literal] = "boolean_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_SQUOTE2] = "'",
  [sym__backslash_literal] = "_backslash_literal",
  [sym__char_escape_sequence] = "_char_escape_sequence",
  [aux_sym_integer_literal_token1] = "integer_literal_token1",
  [aux_sym_float_literal_token1] = "float_literal_token1",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__decimal_float_literal] = "_decimal_float_literal",
  [sym_nil_literal] = "nil_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__interpreted_string_literal_token1] = "_interpreted_string_literal_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_BSLASHp] = "\\p",
  [aux_sym__string_escape_sequence_token1] = "_string_escape_sequence_token1",
  [sym__raw_string_content] = "_raw_string_content",
  [anon_sym_r_DQUOTE] = "r\"",
  [aux_sym__long_string_literal_token1] = "_long_string_literal_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym__long_string_content_token1] = "_long_string_content_token1",
  [aux_sym__identifier_imm_token1] = "identifier",
  [sym__long_string_quote] = "\"",
  [sym__terminator] = "_terminator",
  [sym_source_file] = "source_file",
  [sym__literals] = "_literals",
  [sym_char_literal] = "char_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [sym_custom_numeric_literal] = "custom_numeric_literal",
  [sym_string_literal] = "string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym__string_escape_sequence] = "escape_sequence",
  [sym__raw_string_literal] = "_raw_string_literal",
  [sym__long_string_literal] = "_long_string_literal",
  [aux_sym__long_string_content] = "_long_string_content",
  [sym_generalized_string_literal] = "generalized_string_literal",
  [sym__generalized_short_string] = "_generalized_short_string",
  [sym__generalized_long_string] = "_generalized_long_string",
  [sym__identifier_imm] = "_identifier_imm",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_boolean_literal] = sym_boolean_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym__backslash_literal] = sym__backslash_literal,
  [sym__char_escape_sequence] = sym__char_escape_sequence,
  [aux_sym_integer_literal_token1] = aux_sym_integer_literal_token1,
  [aux_sym_float_literal_token1] = aux_sym_float_literal_token1,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__decimal_float_literal] = sym__decimal_float_literal,
  [sym_nil_literal] = sym_nil_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__interpreted_string_literal_token1] = aux_sym__interpreted_string_literal_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_BSLASHp] = anon_sym_BSLASHp,
  [aux_sym__string_escape_sequence_token1] = aux_sym__string_escape_sequence_token1,
  [sym__raw_string_content] = sym__raw_string_content,
  [anon_sym_r_DQUOTE] = anon_sym_r_DQUOTE,
  [aux_sym__long_string_literal_token1] = aux_sym__long_string_literal_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym__long_string_content_token1] = aux_sym__long_string_content_token1,
  [aux_sym__identifier_imm_token1] = sym_identifier,
  [sym__long_string_quote] = anon_sym_DQUOTE,
  [sym__terminator] = sym__terminator,
  [sym_source_file] = sym_source_file,
  [sym__literals] = sym__literals,
  [sym_char_literal] = sym_char_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_custom_numeric_literal] = sym_custom_numeric_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [sym__string_escape_sequence] = sym__string_escape_sequence,
  [sym__raw_string_literal] = sym__raw_string_literal,
  [sym__long_string_literal] = sym__long_string_literal,
  [aux_sym__long_string_content] = aux_sym__long_string_content,
  [sym_generalized_string_literal] = sym_generalized_string_literal,
  [sym__generalized_short_string] = sym__generalized_short_string,
  [sym__generalized_long_string] = sym__generalized_long_string,
  [sym__identifier_imm] = sym__identifier_imm,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__backslash_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__char_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_integer_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal_float_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_nil_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__interpreted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__raw_string_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_r_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__long_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__long_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_imm_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__long_string_quote] = {
    .visible = true,
    .named = false,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__interpreted_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__string_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__long_string_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__long_string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_generalized_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__generalized_short_string] = {
    .visible = false,
    .named = true,
  },
  [sym__generalized_long_string] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_imm] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_function = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0, .inherited = true},
  [1] =
    {field_function, 1},
    {field_function, 2},
  [3] =
    {field_function, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = sym__string_escape_sequence,
  },
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
};

static inline bool sym__char_escape_sequence_character_set_1(int32_t c) {
  return (c < 'l'
    ? (c < 'a'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= 'c' || (c >= 'e' && c <= 'f')))
    : (c <= 'l' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static inline bool sym__char_escape_sequence_character_set_2(int32_t c) {
  return (c < 'e'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'c')))
    : (c <= 'f' || (c < 'r'
      ? (c < 'n'
        ? c == 'l'
        : c <= 'n')
      : (c <= 'r' || (c >= 't' && c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(41);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(41);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'l' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (sym__char_escape_sequence_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead > 31) ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (sym__char_escape_sequence_character_set_2(lookahead)) ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(74);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(79);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(78);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(78);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__backslash_literal);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__char_escape_sequence);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__char_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '3') ADVANCE(67);
      if (lookahead == '6') ADVANCE(70);
      if (lookahead == '8') ADVANCE(42);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(74);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '3') ADVANCE(69);
      if (lookahead == '6') ADVANCE(71);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(74);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__numeric_literal);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__numeric_literal);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__numeric_literal);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__numeric_literal);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__numeric_literal);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__decimal_float_literal);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__decimal_float_literal);
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BSLASHp);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__string_escape_sequence_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__raw_string_content);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_r_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_r_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__long_string_literal_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__long_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '3') ADVANCE(67);
      if (lookahead == '6') ADVANCE(70);
      if (lookahead == '8') ADVANCE(42);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '2') ADVANCE(44);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '4') ADVANCE(42);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '4') ADVANCE(44);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '6') ADVANCE(42);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '8') ADVANCE(44);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__identifier_imm_token1);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(79);
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
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 'o') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(5);
      if (lookahead == '_') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(7);
      if (lookahead == '_') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(9);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(10);
      if (lookahead == '_') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(16);
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(10);
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 11:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(9);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_nil_literal);
      END_STATE();
    case 17:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 4, .external_lex_state = 2},
  [10] = {.lex_state = 8, .external_lex_state = 3},
  [11] = {.lex_state = 8, .external_lex_state = 3},
  [12] = {.lex_state = 8, .external_lex_state = 3},
  [13] = {.lex_state = 8, .external_lex_state = 3},
  [14] = {.lex_state = 8, .external_lex_state = 3},
  [15] = {.lex_state = 18, .external_lex_state = 2},
  [16] = {.lex_state = 4, .external_lex_state = 2},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 4, .external_lex_state = 2},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__long_string_quote = 0,
  ts_external_token__terminator = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__long_string_quote] = sym__long_string_quote,
  [ts_external_token__terminator] = sym__terminator,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__long_string_quote] = true,
    [ts_external_token__terminator] = true,
  },
  [2] = {
    [ts_external_token__terminator] = true,
  },
  [3] = {
    [ts_external_token__long_string_quote] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_boolean_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym__backslash_literal] = ACTIONS(1),
    [sym__char_escape_sequence] = ACTIONS(1),
    [aux_sym_integer_literal_token1] = ACTIONS(1),
    [aux_sym_float_literal_token1] = ACTIONS(1),
    [sym__numeric_literal] = ACTIONS(1),
    [sym__decimal_float_literal] = ACTIONS(1),
    [sym_nil_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_BSLASHp] = ACTIONS(1),
    [aux_sym__string_escape_sequence_token1] = ACTIONS(1),
    [anon_sym_r_DQUOTE] = ACTIONS(1),
    [aux_sym__identifier_imm_token1] = ACTIONS(1),
    [sym__long_string_quote] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym__literals] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_integer_literal] = STATE(45),
    [sym_float_literal] = STATE(45),
    [sym_custom_numeric_literal] = STATE(45),
    [sym_string_literal] = STATE(45),
    [sym__interpreted_string_literal] = STATE(41),
    [sym__raw_string_literal] = STATE(41),
    [sym__long_string_literal] = STATE(41),
    [sym_generalized_string_literal] = STATE(45),
    [sym__generalized_short_string] = STATE(38),
    [sym__generalized_long_string] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_boolean_literal] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym__numeric_literal] = ACTIONS(11),
    [sym__decimal_float_literal] = ACTIONS(13),
    [sym_nil_literal] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_r_DQUOTE] = ACTIONS(17),
    [aux_sym__long_string_literal_token1] = ACTIONS(19),
  },
  [2] = {
    [sym__literals] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_integer_literal] = STATE(45),
    [sym_float_literal] = STATE(45),
    [sym_custom_numeric_literal] = STATE(45),
    [sym_string_literal] = STATE(45),
    [sym__interpreted_string_literal] = STATE(41),
    [sym__raw_string_literal] = STATE(41),
    [sym__long_string_literal] = STATE(41),
    [sym_generalized_string_literal] = STATE(45),
    [sym__generalized_short_string] = STATE(38),
    [sym__generalized_long_string] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(5),
    [sym_boolean_literal] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym__numeric_literal] = ACTIONS(11),
    [sym__decimal_float_literal] = ACTIONS(13),
    [sym_nil_literal] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_r_DQUOTE] = ACTIONS(17),
    [aux_sym__long_string_literal_token1] = ACTIONS(19),
  },
  [3] = {
    [sym__literals] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_integer_literal] = STATE(45),
    [sym_float_literal] = STATE(45),
    [sym_custom_numeric_literal] = STATE(45),
    [sym_string_literal] = STATE(45),
    [sym__interpreted_string_literal] = STATE(41),
    [sym__raw_string_literal] = STATE(41),
    [sym__long_string_literal] = STATE(41),
    [sym_generalized_string_literal] = STATE(45),
    [sym__generalized_short_string] = STATE(38),
    [sym__generalized_long_string] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_boolean_literal] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__numeric_literal] = ACTIONS(34),
    [sym__decimal_float_literal] = ACTIONS(37),
    [sym_nil_literal] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [anon_sym_r_DQUOTE] = ACTIONS(43),
    [aux_sym__long_string_literal_token1] = ACTIONS(46),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      sym__decimal_float_literal,
      aux_sym__long_string_literal_token1,
    ACTIONS(49), 6,
      sym_boolean_literal,
      sym__numeric_literal,
      sym_nil_literal,
      anon_sym_DQUOTE,
      anon_sym_r_DQUOTE,
      sym_identifier,
  [15] = 4,
    ACTIONS(53), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(55), 1,
      anon_sym_DQUOTE2,
    STATE(7), 2,
      sym__string_escape_sequence,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(51), 3,
      sym__char_escape_sequence,
      anon_sym_BSLASHp,
      aux_sym__string_escape_sequence_token1,
  [31] = 4,
    ACTIONS(57), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE2,
    STATE(5), 2,
      sym__string_escape_sequence,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(51), 3,
      sym__char_escape_sequence,
      anon_sym_BSLASHp,
      aux_sym__string_escape_sequence_token1,
  [47] = 4,
    ACTIONS(64), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(67), 1,
      anon_sym_DQUOTE2,
    STATE(7), 2,
      sym__string_escape_sequence,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(61), 3,
      sym__char_escape_sequence,
      anon_sym_BSLASHp,
      aux_sym__string_escape_sequence_token1,
  [63] = 1,
    ACTIONS(69), 5,
      sym__char_escape_sequence,
      aux_sym__interpreted_string_literal_token1,
      anon_sym_DQUOTE2,
      anon_sym_BSLASHp,
      aux_sym__string_escape_sequence_token1,
  [71] = 5,
    ACTIONS(71), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(73), 1,
      aux_sym_float_literal_token1,
    ACTIONS(75), 1,
      aux_sym__identifier_imm_token1,
    ACTIONS(77), 1,
      sym__terminator,
    STATE(36), 1,
      sym__identifier_imm,
  [87] = 3,
    ACTIONS(79), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(10), 1,
      aux_sym__long_string_content,
    ACTIONS(81), 2,
      sym__long_string_quote,
      aux_sym__long_string_content_token1,
  [98] = 3,
    ACTIONS(84), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(10), 1,
      aux_sym__long_string_content,
    ACTIONS(86), 2,
      sym__long_string_quote,
      aux_sym__long_string_content_token1,
  [109] = 3,
    ACTIONS(88), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(14), 1,
      aux_sym__long_string_content,
    ACTIONS(90), 2,
      sym__long_string_quote,
      aux_sym__long_string_content_token1,
  [120] = 3,
    ACTIONS(92), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(11), 1,
      aux_sym__long_string_content,
    ACTIONS(94), 2,
      sym__long_string_quote,
      aux_sym__long_string_content_token1,
  [131] = 3,
    ACTIONS(96), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(10), 1,
      aux_sym__long_string_content,
    ACTIONS(86), 2,
      sym__long_string_quote,
      aux_sym__long_string_content_token1,
  [142] = 4,
    ACTIONS(73), 1,
      aux_sym_float_literal_token1,
    ACTIONS(75), 1,
      aux_sym__identifier_imm_token1,
    ACTIONS(98), 1,
      sym__terminator,
    STATE(36), 1,
      sym__identifier_imm,
  [155] = 4,
    ACTIONS(100), 1,
      anon_sym_SQUOTE2,
    ACTIONS(102), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(104), 1,
      aux_sym_float_literal_token1,
    ACTIONS(106), 1,
      sym__terminator,
  [168] = 2,
    ACTIONS(110), 1,
      sym__char_escape_sequence,
    ACTIONS(108), 2,
      aux_sym_char_literal_token1,
      sym__backslash_literal,
  [176] = 3,
    ACTIONS(104), 1,
      aux_sym_float_literal_token1,
    ACTIONS(112), 1,
      anon_sym_SQUOTE2,
    ACTIONS(114), 1,
      sym__terminator,
  [186] = 2,
    ACTIONS(116), 1,
      anon_sym_DQUOTE2,
    ACTIONS(118), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [193] = 2,
    ACTIONS(120), 1,
      anon_sym_DQUOTE2,
    ACTIONS(122), 1,
      sym__raw_string_content,
  [200] = 2,
    ACTIONS(124), 1,
      anon_sym_DQUOTE2,
    ACTIONS(126), 1,
      sym__raw_string_content,
  [207] = 1,
    ACTIONS(128), 1,
      sym__terminator,
  [211] = 1,
    ACTIONS(130), 1,
      sym__terminator,
  [215] = 1,
    ACTIONS(132), 1,
      sym__terminator,
  [219] = 1,
    ACTIONS(134), 1,
      anon_sym_DQUOTE2,
  [223] = 1,
    ACTIONS(136), 1,
      sym__terminator,
  [227] = 1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [231] = 1,
    ACTIONS(77), 1,
      sym__terminator,
  [235] = 1,
    ACTIONS(140), 1,
      anon_sym_SQUOTE2,
  [239] = 1,
    ACTIONS(142), 1,
      anon_sym_SQUOTE2,
  [243] = 1,
    ACTIONS(144), 1,
      sym__terminator,
  [247] = 1,
    ACTIONS(146), 1,
      sym__terminator,
  [251] = 1,
    ACTIONS(148), 1,
      sym__terminator,
  [255] = 1,
    ACTIONS(150), 1,
      sym__terminator,
  [259] = 1,
    ACTIONS(98), 1,
      sym__terminator,
  [263] = 1,
    ACTIONS(152), 1,
      sym__terminator,
  [267] = 1,
    ACTIONS(154), 1,
      sym__terminator,
  [271] = 1,
    ACTIONS(144), 1,
      sym__terminator,
  [275] = 1,
    ACTIONS(156), 1,
      sym__terminator,
  [279] = 1,
    ACTIONS(158), 1,
      sym__terminator,
  [283] = 1,
    ACTIONS(160), 1,
      sym__terminator,
  [287] = 1,
    ACTIONS(162), 1,
      sym__terminator,
  [291] = 1,
    ACTIONS(164), 1,
      anon_sym_DQUOTE2,
  [295] = 1,
    ACTIONS(166), 1,
      sym__terminator,
  [299] = 1,
    ACTIONS(168), 1,
      sym__terminator,
  [303] = 1,
    ACTIONS(170), 1,
      sym__terminator,
  [307] = 1,
    ACTIONS(172), 1,
      sym__terminator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 31,
  [SMALL_STATE(7)] = 47,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 71,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 98,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 131,
  [SMALL_STATE(15)] = 142,
  [SMALL_STATE(16)] = 155,
  [SMALL_STATE(17)] = 168,
  [SMALL_STATE(18)] = 176,
  [SMALL_STATE(19)] = 186,
  [SMALL_STATE(20)] = 193,
  [SMALL_STATE(21)] = 200,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 211,
  [SMALL_STATE(24)] = 215,
  [SMALL_STATE(25)] = 219,
  [SMALL_STATE(26)] = 223,
  [SMALL_STATE(27)] = 227,
  [SMALL_STATE(28)] = 231,
  [SMALL_STATE(29)] = 235,
  [SMALL_STATE(30)] = 239,
  [SMALL_STATE(31)] = 243,
  [SMALL_STATE(32)] = 247,
  [SMALL_STATE(33)] = 251,
  [SMALL_STATE(34)] = 255,
  [SMALL_STATE(35)] = 259,
  [SMALL_STATE(36)] = 263,
  [SMALL_STATE(37)] = 267,
  [SMALL_STATE(38)] = 271,
  [SMALL_STATE(39)] = 275,
  [SMALL_STATE(40)] = 279,
  [SMALL_STATE(41)] = 283,
  [SMALL_STATE(42)] = 287,
  [SMALL_STATE(43)] = 291,
  [SMALL_STATE(44)] = 295,
  [SMALL_STATE(45)] = 299,
  [SMALL_STATE(46)] = 303,
  [SMALL_STATE(47)] = 307,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_escape_sequence, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__long_string_content, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__long_string_content, 2), SHIFT_REPEAT(10),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 2),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalized_string_literal, 1, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_numeric_literal, 3, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generalized_short_string, 3, .production_id = 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generalized_long_string, 3, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generalized_short_string, 4, .production_id = 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generalized_long_string, 4, .production_id = 4),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_nim_external_scanner_create(void);
void tree_sitter_nim_external_scanner_destroy(void *);
bool tree_sitter_nim_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_nim_external_scanner_serialize(void *, char *);
void tree_sitter_nim_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nim(void) {
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
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_nim_external_scanner_create,
      tree_sitter_nim_external_scanner_destroy,
      tree_sitter_nim_external_scanner_scan,
      tree_sitter_nim_external_scanner_serialize,
      tree_sitter_nim_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
