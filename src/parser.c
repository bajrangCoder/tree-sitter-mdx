#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_text = 1,
  anon_sym_import = 2,
  aux_sym_import_statement_token1 = 3,
  anon_sym_SEMI = 4,
  anon_sym_export = 5,
  anon_sym_LT = 6,
  anon_sym_GT = 7,
  anon_sym_LT_SLASH = 8,
  anon_sym_SLASH_GT = 9,
  anon_sym_EQ = 10,
  anon_sym_LBRACE = 11,
  aux_sym_jsx_expression_token1 = 12,
  anon_sym_RBRACE = 13,
  sym_identifier = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_token1 = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_string_token2 = 18,
  sym_escape_sequence = 19,
  sym_source_file = 20,
  sym_import_statement = 21,
  sym_export_statement = 22,
  sym_jsx_element = 23,
  sym_jsx_content = 24,
  sym_opening_element = 25,
  sym_closing_element = 26,
  sym_self_closing_element = 27,
  sym_attributes = 28,
  sym_attribute = 29,
  sym_jsx_expression = 30,
  sym_string = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_jsx_content_repeat1 = 33,
  aux_sym_attributes_repeat1 = 34,
  aux_sym_string_repeat1 = 35,
  aux_sym_string_repeat2 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_import] = "import",
  [aux_sym_import_statement_token1] = "import_statement_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_export] = "export",
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
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym_import_statement] = "import_statement",
  [sym_export_statement] = "export_statement",
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
  [aux_sym_jsx_content_repeat1] = "jsx_content_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_import_statement_token1] = aux_sym_import_statement_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_export] = anon_sym_export,
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
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym_import_statement] = sym_import_statement,
  [sym_export_statement] = sym_export_statement,
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
  [aux_sym_jsx_content_repeat1] = aux_sym_jsx_content_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
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
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_export_statement] = {
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
  [aux_sym_jsx_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
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
  [31] = 18,
  [32] = 11,
  [33] = 14,
  [34] = 16,
  [35] = 8,
  [36] = 15,
  [37] = 17,
  [38] = 16,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 53,
  [59] = 50,
  [60] = 52,
  [61] = 51,
  [62] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      ADVANCE_MAP(
        '"', 52,
        '\'', 55,
        '/', 5,
        ';', 38,
        '<', 42,
        '=', 46,
        '>', 43,
        '\\', 18,
        'e', 15,
        'i', 6,
        '{', 47,
        '}', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '{') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 16:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(37);
      END_STATE();
    case 17:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == '{') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_jsx_expression_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_jsx_expression_token1);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym_import_statement] = STATE(2),
    [sym_export_statement] = STATE(2),
    [sym_jsx_element] = STATE(2),
    [sym_opening_element] = STATE(4),
    [sym_self_closing_element] = STATE(18),
    [sym_jsx_expression] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_text,
    STATE(4), 1,
      sym_opening_element,
    STATE(18), 1,
      sym_self_closing_element,
    STATE(3), 5,
      sym_import_statement,
      sym_export_statement,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_source_file_repeat1,
  [32] = 9,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(24), 1,
      anon_sym_import,
    ACTIONS(27), 1,
      anon_sym_export,
    ACTIONS(30), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_opening_element,
    STATE(18), 1,
      sym_self_closing_element,
    STATE(3), 5,
      sym_import_statement,
      sym_export_statement,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_source_file_repeat1,
  [64] = 9,
    ACTIONS(36), 1,
      sym_text,
    ACTIONS(38), 1,
      anon_sym_LT,
    ACTIONS(40), 1,
      anon_sym_LT_SLASH,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_opening_element,
    STATE(11), 1,
      sym_closing_element,
    STATE(31), 1,
      sym_self_closing_element,
    STATE(43), 1,
      sym_jsx_content,
    STATE(6), 3,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_jsx_content_repeat1,
  [94] = 9,
    ACTIONS(36), 1,
      sym_text,
    ACTIONS(38), 1,
      anon_sym_LT,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_opening_element,
    STATE(31), 1,
      sym_self_closing_element,
    STATE(32), 1,
      sym_closing_element,
    STATE(45), 1,
      sym_jsx_content,
    STATE(6), 3,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_jsx_content_repeat1,
  [124] = 7,
    ACTIONS(38), 1,
      anon_sym_LT,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      sym_text,
    ACTIONS(48), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_opening_element,
    STATE(31), 1,
      sym_self_closing_element,
    STATE(7), 3,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_jsx_content_repeat1,
  [148] = 7,
    ACTIONS(50), 1,
      sym_text,
    ACTIONS(53), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_SLASH,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_opening_element,
    STATE(31), 1,
      sym_self_closing_element,
    STATE(7), 3,
      sym_jsx_element,
      sym_jsx_expression,
      aux_sym_jsx_content_repeat1,
  [172] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 5,
      sym_text,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_LBRACE,
  [183] = 5,
    ACTIONS(65), 1,
      anon_sym_GT,
    ACTIONS(67), 1,
      anon_sym_SLASH_GT,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(44), 1,
      sym_attributes,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [200] = 5,
    ACTIONS(65), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_SLASH_GT,
    STATE(42), 1,
      sym_attributes,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [217] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 5,
      sym_text,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_LBRACE,
  [228] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 5,
      sym_text,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_LBRACE,
  [239] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 5,
      sym_text,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_LBRACE,
  [250] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 5,
      sym_text,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_LBRACE,
  [261] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 5,
      sym_text,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_LBRACE,
  [272] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 5,
      sym_text,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_LBRACE,
  [283] = 2,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 5,
      sym_text,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_LBRACE,
  [294] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 5,
      sym_text,
      anon_sym_import,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_LBRACE,
  [305] = 4,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(40), 2,
      sym_jsx_expression,
      sym_string,
  [319] = 3,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(21), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [331] = 3,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(113), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(21), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [343] = 2,
    ACTIONS(118), 1,
      sym_text,
    ACTIONS(120), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [352] = 2,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(122), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_identifier,
  [361] = 2,
    ACTIONS(126), 1,
      sym_text,
    ACTIONS(128), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [370] = 4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      aux_sym_string_token1,
    ACTIONS(134), 1,
      sym_escape_sequence,
    STATE(27), 1,
      aux_sym_string_repeat1,
  [383] = 4,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      aux_sym_string_token2,
    ACTIONS(138), 1,
      sym_escape_sequence,
    STATE(28), 1,
      aux_sym_string_repeat2,
  [396] = 4,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      aux_sym_string_token1,
    ACTIONS(144), 1,
      sym_escape_sequence,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [409] = 4,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      aux_sym_string_token2,
    ACTIONS(148), 1,
      sym_escape_sequence,
    STATE(30), 1,
      aux_sym_string_repeat2,
  [422] = 4,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      aux_sym_string_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [435] = 4,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      aux_sym_string_token2,
    ACTIONS(163), 1,
      sym_escape_sequence,
    STATE(30), 1,
      aux_sym_string_repeat2,
  [448] = 2,
    ACTIONS(101), 1,
      sym_text,
    ACTIONS(103), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [457] = 2,
    ACTIONS(73), 1,
      sym_text,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [466] = 2,
    ACTIONS(85), 1,
      sym_text,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [475] = 2,
    ACTIONS(93), 1,
      sym_text,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [484] = 2,
    ACTIONS(61), 1,
      sym_text,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [493] = 2,
    ACTIONS(89), 1,
      sym_text,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [502] = 2,
    ACTIONS(97), 1,
      sym_text,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
  [511] = 1,
    ACTIONS(93), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_identifier,
  [517] = 1,
    ACTIONS(166), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_identifier,
  [523] = 1,
    ACTIONS(168), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_identifier,
  [529] = 1,
    ACTIONS(170), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_identifier,
  [535] = 2,
    ACTIONS(172), 1,
      anon_sym_GT,
    ACTIONS(174), 1,
      anon_sym_SLASH_GT,
  [542] = 2,
    ACTIONS(176), 1,
      anon_sym_LT_SLASH,
    STATE(8), 1,
      sym_closing_element,
  [549] = 2,
    ACTIONS(172), 1,
      anon_sym_GT,
    ACTIONS(178), 1,
      anon_sym_SLASH_GT,
  [556] = 2,
    ACTIONS(180), 1,
      anon_sym_LT_SLASH,
    STATE(35), 1,
      sym_closing_element,
  [563] = 1,
    ACTIONS(182), 1,
      anon_sym_SEMI,
  [567] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [571] = 1,
    ACTIONS(186), 1,
      aux_sym_import_statement_token1,
  [575] = 1,
    ACTIONS(188), 1,
      anon_sym_SEMI,
  [579] = 1,
    ACTIONS(190), 1,
      sym_identifier,
  [583] = 1,
    ACTIONS(192), 1,
      sym_identifier,
  [587] = 1,
    ACTIONS(194), 1,
      aux_sym_jsx_expression_token1,
  [591] = 1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
  [595] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [599] = 1,
    ACTIONS(200), 1,
      aux_sym_import_statement_token1,
  [603] = 1,
    ACTIONS(202), 1,
      anon_sym_GT,
  [607] = 1,
    ACTIONS(204), 1,
      anon_sym_GT,
  [611] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
  [615] = 1,
    ACTIONS(208), 1,
      sym_identifier,
  [619] = 1,
    ACTIONS(210), 1,
      aux_sym_jsx_expression_token1,
  [623] = 1,
    ACTIONS(212), 1,
      sym_identifier,
  [627] = 1,
    ACTIONS(214), 1,
      aux_sym_jsx_expression_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 183,
  [SMALL_STATE(10)] = 200,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 239,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 261,
  [SMALL_STATE(16)] = 272,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 294,
  [SMALL_STATE(19)] = 305,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 361,
  [SMALL_STATE(25)] = 370,
  [SMALL_STATE(26)] = 383,
  [SMALL_STATE(27)] = 396,
  [SMALL_STATE(28)] = 409,
  [SMALL_STATE(29)] = 422,
  [SMALL_STATE(30)] = 435,
  [SMALL_STATE(31)] = 448,
  [SMALL_STATE(32)] = 457,
  [SMALL_STATE(33)] = 466,
  [SMALL_STATE(34)] = 475,
  [SMALL_STATE(35)] = 484,
  [SMALL_STATE(36)] = 493,
  [SMALL_STATE(37)] = 502,
  [SMALL_STATE(38)] = 511,
  [SMALL_STATE(39)] = 517,
  [SMALL_STATE(40)] = 523,
  [SMALL_STATE(41)] = 529,
  [SMALL_STATE(42)] = 535,
  [SMALL_STATE(43)] = 542,
  [SMALL_STATE(44)] = 549,
  [SMALL_STATE(45)] = 556,
  [SMALL_STATE(46)] = 563,
  [SMALL_STATE(47)] = 567,
  [SMALL_STATE(48)] = 571,
  [SMALL_STATE(49)] = 575,
  [SMALL_STATE(50)] = 579,
  [SMALL_STATE(51)] = 583,
  [SMALL_STATE(52)] = 587,
  [SMALL_STATE(53)] = 591,
  [SMALL_STATE(54)] = 595,
  [SMALL_STATE(55)] = 599,
  [SMALL_STATE(56)] = 603,
  [SMALL_STATE(57)] = 607,
  [SMALL_STATE(58)] = 611,
  [SMALL_STATE(59)] = 615,
  [SMALL_STATE(60)] = 619,
  [SMALL_STATE(61)] = 623,
  [SMALL_STATE(62)] = 627,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_content, 1, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jsx_content_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsx_content_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsx_content_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsx_content_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_element, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_element, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_element, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_element, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_element, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_element, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_expression, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_expression, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_closing_element, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_closing_element, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_element, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_element, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opening_element, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opening_element, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opening_element, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opening_element, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(30),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(30),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
