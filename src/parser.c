#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_text = 1,
  anon_sym_LT = 2,
  anon_sym_GT = 3,
  anon_sym_LT_SLASH = 4,
  anon_sym_SLASH_GT = 5,
  anon_sym_EQ = 6,
  anon_sym_LBRACE = 7,
  aux_sym_jsx_expression_token1 = 8,
  anon_sym_RBRACE = 9,
  sym_identifier = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_string_token2 = 14,
  sym_source_file = 15,
  sym_jsx_element = 16,
  sym_jsx_content = 17,
  sym_opening_element = 18,
  sym_closing_element = 19,
  sym_self_closing_element = 20,
  sym_attributes = 21,
  sym_attribute = 22,
  sym_jsx_expression = 23,
  sym_string = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_attributes_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [aux_sym_jsx_expression_token1] = "jsx_expression_token1",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_source_file] = "source_file",
  [sym_jsx_element] = "jsx_element",
  [sym_jsx_content] = "jsx_content",
  [sym_opening_element] = "opening_element",
  [sym_closing_element] = "closing_element",
  [sym_self_closing_element] = "self_closing_element",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_jsx_expression] = "jsx_expression",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_jsx_expression_token1] = aux_sym_jsx_expression_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_source_file] = sym_source_file,
  [sym_jsx_element] = sym_jsx_element,
  [sym_jsx_content] = sym_jsx_content,
  [sym_opening_element] = sym_opening_element,
  [sym_closing_element] = sym_closing_element,
  [sym_self_closing_element] = sym_self_closing_element,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_jsx_expression] = sym_jsx_expression,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_jsx_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_jsx_element] = {
    .visible = true,
    .named = true,
  },
  [sym_jsx_content] = {
    .visible = true,
    .named = true,
  },
  [sym_opening_element] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_element] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_element] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_jsx_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 8,
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
  [23] = 15,
  [24] = 17,
  [25] = 18,
  [26] = 19,
  [27] = 20,
  [28] = 22,
  [29] = 21,
  [30] = 30,
  [31] = 31,
  [32] = 17,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 33,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 40,
  [46] = 46,
  [47] = 47,
  [48] = 43,
  [49] = 40,
  [50] = 47,
  [51] = 41,
  [52] = 42,
  [53] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      ADVANCE_MAP(
        '"', 16,
        '\'', 19,
        '/', 1,
        '<', 6,
        '=', 10,
        '>', 7,
        '{', 11,
        '}', 14,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(9);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '{') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_jsx_expression_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_jsx_expression_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_jsx_element] = STATE(5),
    [sym_opening_element] = STATE(3),
    [sym_self_closing_element] = STATE(29),
    [sym_jsx_expression] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym_opening_element,
    STATE(21), 1,
      sym_self_closing_element,
    STATE(22), 1,
      sym_closing_element,
    STATE(35), 1,
      sym_jsx_content,
    STATE(4), 3,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_source_file_repeat1,
  [30] = 9,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_opening_element,
    STATE(21), 1,
      sym_self_closing_element,
    STATE(28), 1,
      sym_closing_element,
    STATE(34), 1,
      sym_jsx_content,
    STATE(4), 3,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_source_file_repeat1,
  [60] = 7,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_opening_element,
    STATE(21), 1,
      sym_self_closing_element,
    STATE(7), 3,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_source_file_repeat1,
  [84] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_text,
    STATE(3), 1,
      sym_opening_element,
    STATE(29), 1,
      sym_self_closing_element,
    STATE(6), 3,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_source_file_repeat1,
  [108] = 7,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(34), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym_opening_element,
    STATE(29), 1,
      sym_self_closing_element,
    STATE(6), 3,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_source_file_repeat1,
  [132] = 7,
    ACTIONS(40), 1,
      sym_text,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(46), 1,
      anon_sym_LT_SLASH,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym_opening_element,
    STATE(21), 1,
      sym_self_closing_element,
    STATE(7), 3,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_source_file_repeat1,
  [156] = 5,
    ACTIONS(51), 1,
      anon_sym_GT,
    ACTIONS(53), 1,
      anon_sym_SLASH_GT,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(33), 1,
      sym_attributes,
    STATE(12), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [173] = 5,
    ACTIONS(51), 1,
      anon_sym_GT,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_SLASH_GT,
    STATE(36), 1,
      sym_attributes,
    STATE(12), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [190] = 3,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(10), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [202] = 4,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    STATE(30), 2,
      sym_jsx_expression,
      sym_string,
  [216] = 3,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(70), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(10), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [228] = 2,
    ACTIONS(72), 1,
      sym_text,
    ACTIONS(74), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [237] = 2,
    ACTIONS(76), 1,
      sym_text,
    ACTIONS(78), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [246] = 2,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
  [255] = 2,
    ACTIONS(86), 1,
      anon_sym_EQ,
    ACTIONS(84), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_identifier,
  [264] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(90), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
  [273] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(94), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
  [282] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(98), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
  [291] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(102), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
  [300] = 2,
    ACTIONS(104), 1,
      sym_text,
    ACTIONS(106), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [309] = 2,
    ACTIONS(108), 1,
      sym_text,
    ACTIONS(110), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [318] = 2,
    ACTIONS(80), 1,
      sym_text,
    ACTIONS(82), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [327] = 2,
    ACTIONS(88), 1,
      sym_text,
    ACTIONS(90), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [336] = 2,
    ACTIONS(92), 1,
      sym_text,
    ACTIONS(94), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [345] = 2,
    ACTIONS(96), 1,
      sym_text,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [354] = 2,
    ACTIONS(100), 1,
      sym_text,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [363] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(110), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
  [372] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
  [381] = 1,
    ACTIONS(112), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_identifier,
  [387] = 1,
    ACTIONS(114), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_identifier,
  [393] = 1,
    ACTIONS(88), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_identifier,
  [399] = 2,
    ACTIONS(116), 1,
      anon_sym_GT,
    ACTIONS(118), 1,
      anon_sym_SLASH_GT,
  [406] = 2,
    ACTIONS(120), 1,
      anon_sym_LT_SLASH,
    STATE(18), 1,
      sym_closing_element,
  [413] = 2,
    ACTIONS(122), 1,
      anon_sym_LT_SLASH,
    STATE(25), 1,
      sym_closing_element,
  [420] = 2,
    ACTIONS(116), 1,
      anon_sym_GT,
    ACTIONS(124), 1,
      anon_sym_SLASH_GT,
  [427] = 1,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
  [431] = 1,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
  [435] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [439] = 1,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
  [443] = 1,
    ACTIONS(132), 1,
      aux_sym_jsx_expression_token1,
  [447] = 1,
    ACTIONS(134), 1,
      sym_identifier,
  [451] = 1,
    ACTIONS(136), 1,
      anon_sym_GT,
  [455] = 1,
    ACTIONS(138), 1,
      aux_sym_string_token1,
  [459] = 1,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
  [463] = 1,
    ACTIONS(142), 1,
      aux_sym_string_token2,
  [467] = 1,
    ACTIONS(144), 1,
      sym_identifier,
  [471] = 1,
    ACTIONS(146), 1,
      anon_sym_GT,
  [475] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
  [479] = 1,
    ACTIONS(150), 1,
      sym_identifier,
  [483] = 1,
    ACTIONS(152), 1,
      aux_sym_jsx_expression_token1,
  [487] = 1,
    ACTIONS(154), 1,
      sym_identifier,
  [491] = 1,
    ACTIONS(156), 1,
      aux_sym_jsx_expression_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 173,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 202,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 255,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 282,
  [SMALL_STATE(20)] = 291,
  [SMALL_STATE(21)] = 300,
  [SMALL_STATE(22)] = 309,
  [SMALL_STATE(23)] = 318,
  [SMALL_STATE(24)] = 327,
  [SMALL_STATE(25)] = 336,
  [SMALL_STATE(26)] = 345,
  [SMALL_STATE(27)] = 354,
  [SMALL_STATE(28)] = 363,
  [SMALL_STATE(29)] = 372,
  [SMALL_STATE(30)] = 381,
  [SMALL_STATE(31)] = 387,
  [SMALL_STATE(32)] = 393,
  [SMALL_STATE(33)] = 399,
  [SMALL_STATE(34)] = 406,
  [SMALL_STATE(35)] = 413,
  [SMALL_STATE(36)] = 420,
  [SMALL_STATE(37)] = 427,
  [SMALL_STATE(38)] = 431,
  [SMALL_STATE(39)] = 435,
  [SMALL_STATE(40)] = 439,
  [SMALL_STATE(41)] = 443,
  [SMALL_STATE(42)] = 447,
  [SMALL_STATE(43)] = 451,
  [SMALL_STATE(44)] = 455,
  [SMALL_STATE(45)] = 459,
  [SMALL_STATE(46)] = 463,
  [SMALL_STATE(47)] = 467,
  [SMALL_STATE(48)] = 471,
  [SMALL_STATE(49)] = 475,
  [SMALL_STATE(50)] = 479,
  [SMALL_STATE(51)] = 483,
  [SMALL_STATE(52)] = 487,
  [SMALL_STATE(53)] = 491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_content, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opening_element, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opening_element, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opening_element, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opening_element, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_expression, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_expression, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_element, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_element, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closing_element, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closing_element, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_element, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_element, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_element, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_element, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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

TS_PUBLIC const TSLanguage *tree_sitter_mdx(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
