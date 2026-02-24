#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  sym_yesterday = 2,
  sym_today = 3,
  sym_tomorrow = 4,
  sym_blockers = 5,
  sym_notes = 6,
  sym_accomplishments = 7,
  sym_planned = 8,
  sym_review = 9,
  sym_bullet = 10,
  sym_number = 11,
  anon_sym_LBRACK_RBRACK = 12,
  anon_sym_LBRACKx_RBRACK = 13,
  anon_sym_LBRACKX_RBRACK = 14,
  anon_sym_GT = 15,
  aux_sym_highlight_token1 = 16,
  anon_sym_BQUOTE = 17,
  aux_sym_code_token1 = 18,
  anon_sym_LBRACKHIGH_RBRACK = 19,
  anon_sym_LBRACKURGENT_RBRACK = 20,
  anon_sym_LBRACKLOW_RBRACK = 21,
  anon_sym_LBRACKCRITICAL_RBRACK = 22,
  anon_sym_LBRACKMEDIUM_RBRACK = 23,
  sym_tag = 24,
  sym_mention = 25,
  sym_service_name = 26,
  sym_status = 27,
  anon_sym_DASH_GT = 28,
  anon_sym_EQ_GT = 29,
  anon_sym_u2192 = 30,
  sym_date = 31,
  sym_time = 32,
  anon_sym_LPAREN = 33,
  aux_sym_parenthetical_token1 = 34,
  anon_sym_RPAREN = 35,
  sym_url = 36,
  sym_plain_text = 37,
  sym__newline = 38,
  sym_source_file = 39,
  sym_section_header = 40,
  sym_task = 41,
  sym_checkbox = 42,
  sym_task_content = 43,
  sym_highlight = 44,
  sym_code = 45,
  sym_priority = 46,
  sym_arrow = 47,
  sym_parenthetical = 48,
  sym_text_line = 49,
  sym_line_content = 50,
  sym_blank_line = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_task_content_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [sym_yesterday] = "yesterday",
  [sym_today] = "today",
  [sym_tomorrow] = "tomorrow",
  [sym_blockers] = "blockers",
  [sym_notes] = "notes",
  [sym_accomplishments] = "accomplishments",
  [sym_planned] = "planned",
  [sym_review] = "review",
  [sym_bullet] = "bullet",
  [sym_number] = "number",
  [anon_sym_LBRACK_RBRACK] = "[ ]",
  [anon_sym_LBRACKx_RBRACK] = "[x]",
  [anon_sym_LBRACKX_RBRACK] = "[X]",
  [anon_sym_GT] = ">",
  [aux_sym_highlight_token1] = "highlight_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_LBRACKHIGH_RBRACK] = "[HIGH]",
  [anon_sym_LBRACKURGENT_RBRACK] = "[URGENT]",
  [anon_sym_LBRACKLOW_RBRACK] = "[LOW]",
  [anon_sym_LBRACKCRITICAL_RBRACK] = "[CRITICAL]",
  [anon_sym_LBRACKMEDIUM_RBRACK] = "[MEDIUM]",
  [sym_tag] = "tag",
  [sym_mention] = "mention",
  [sym_service_name] = "service_name",
  [sym_status] = "status",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_u2192] = "\u2192",
  [sym_date] = "date",
  [sym_time] = "time",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [anon_sym_RPAREN] = ")",
  [sym_url] = "url",
  [sym_plain_text] = "plain_text",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_section_header] = "section_header",
  [sym_task] = "task",
  [sym_checkbox] = "checkbox",
  [sym_task_content] = "task_content",
  [sym_highlight] = "highlight",
  [sym_code] = "code",
  [sym_priority] = "priority",
  [sym_arrow] = "arrow",
  [sym_parenthetical] = "parenthetical",
  [sym_text_line] = "text_line",
  [sym_line_content] = "line_content",
  [sym_blank_line] = "blank_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_task_content_repeat1] = "task_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_yesterday] = sym_yesterday,
  [sym_today] = sym_today,
  [sym_tomorrow] = sym_tomorrow,
  [sym_blockers] = sym_blockers,
  [sym_notes] = sym_notes,
  [sym_accomplishments] = sym_accomplishments,
  [sym_planned] = sym_planned,
  [sym_review] = sym_review,
  [sym_bullet] = sym_bullet,
  [sym_number] = sym_number,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACKx_RBRACK] = anon_sym_LBRACKx_RBRACK,
  [anon_sym_LBRACKX_RBRACK] = anon_sym_LBRACKX_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_highlight_token1] = aux_sym_highlight_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_LBRACKHIGH_RBRACK] = anon_sym_LBRACKHIGH_RBRACK,
  [anon_sym_LBRACKURGENT_RBRACK] = anon_sym_LBRACKURGENT_RBRACK,
  [anon_sym_LBRACKLOW_RBRACK] = anon_sym_LBRACKLOW_RBRACK,
  [anon_sym_LBRACKCRITICAL_RBRACK] = anon_sym_LBRACKCRITICAL_RBRACK,
  [anon_sym_LBRACKMEDIUM_RBRACK] = anon_sym_LBRACKMEDIUM_RBRACK,
  [sym_tag] = sym_tag,
  [sym_mention] = sym_mention,
  [sym_service_name] = sym_service_name,
  [sym_status] = sym_status,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_u2192] = anon_sym_u2192,
  [sym_date] = sym_date,
  [sym_time] = sym_time,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_url] = sym_url,
  [sym_plain_text] = sym_plain_text,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_section_header] = sym_section_header,
  [sym_task] = sym_task,
  [sym_checkbox] = sym_checkbox,
  [sym_task_content] = sym_task_content,
  [sym_highlight] = sym_highlight,
  [sym_code] = sym_code,
  [sym_priority] = sym_priority,
  [sym_arrow] = sym_arrow,
  [sym_parenthetical] = sym_parenthetical,
  [sym_text_line] = sym_text_line,
  [sym_line_content] = sym_line_content,
  [sym_blank_line] = sym_blank_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_task_content_repeat1] = aux_sym_task_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_yesterday] = {
    .visible = true,
    .named = true,
  },
  [sym_today] = {
    .visible = true,
    .named = true,
  },
  [sym_tomorrow] = {
    .visible = true,
    .named = true,
  },
  [sym_blockers] = {
    .visible = true,
    .named = true,
  },
  [sym_notes] = {
    .visible = true,
    .named = true,
  },
  [sym_accomplishments] = {
    .visible = true,
    .named = true,
  },
  [sym_planned] = {
    .visible = true,
    .named = true,
  },
  [sym_review] = {
    .visible = true,
    .named = true,
  },
  [sym_bullet] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKx_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKX_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_highlight_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACKHIGH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKURGENT_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKLOW_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKCRITICAL_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKMEDIUM_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_mention] = {
    .visible = true,
    .named = true,
  },
  [sym_service_name] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2192] = {
    .visible = true,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parenthetical_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_text] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_task_content] = {
    .visible = true,
    .named = true,
  },
  [sym_highlight] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_text_line] = {
    .visible = true,
    .named = true,
  },
  [sym_line_content] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_content_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(226);
      ADVANCE_MAP(
        '\n', 524,
        '\r', 1,
        '#', 222,
        '(', 320,
        ')', 323,
        '-', 273,
        ':', 227,
        '=', 71,
        '>', 281,
        '@', 223,
        'A', 164,
        'B', 109,
        'C', 72,
        'D', 82,
        'I', 119,
        'M', 83,
        'N', 187,
        'O', 120,
        'P', 91,
        'R', 84,
        'T', 126,
        'W', 103,
        'Y', 169,
        '[', 3,
        '`', 285,
        'a', 11,
        'b', 30,
        'h', 52,
        'n', 41,
        'p', 28,
        'r', 16,
        't', 36,
        'y', 17,
        0x2192, 302,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '*' ||
          lookahead == 0x2022) ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(524);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 524,
        '\r', 326,
        '#', 222,
        '(', 320,
        '-', 399,
        '=', 400,
        '>', 282,
        '@', 223,
        'B', 428,
        'C', 401,
        'D', 408,
        'I', 436,
        'M', 409,
        'O', 437,
        'P', 418,
        'R', 411,
        'T', 444,
        'W', 423,
        '[', 76,
        '`', 285,
        'h', 376,
        0x2192, 303,
        '\t', 328,
        ' ', 328,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(523);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 152,
        'C', 138,
        'H', 104,
        'L', 129,
        'M', 93,
        'U', 141,
        'X', 153,
        'x', 154,
      );
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 222,
        '(', 320,
        '-', 399,
        '=', 400,
        '>', 282,
        '@', 223,
        'B', 428,
        'C', 401,
        'D', 408,
        'I', 436,
        'M', 409,
        'O', 437,
        'P', 418,
        'R', 411,
        'T', 444,
        'W', 423,
        '[', 76,
        '`', 285,
        'h', 376,
        0x2192, 303,
        '\t', 386,
        ' ', 386,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(523);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == 's') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == ':') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(33);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(58);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'd') ADVANCE(265);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'd') ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'k') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'm') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'm') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 's') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 's') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 't') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 't') ADVANCE(257);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 't') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 't') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 't') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'w') ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'w') ADVANCE(237);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'y') ADVANCE(233);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'y') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == 'H') ADVANCE(131);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == 'P') ADVANCE(139);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(224);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(300);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 74:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 'C') ADVANCE(138);
      if (lookahead == 'H') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(129);
      if (lookahead == 'M') ADVANCE(93);
      if (lookahead == 'U') ADVANCE(141);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'D') ADVANCE(297);
      END_STATE();
    case 79:
      if (lookahead == 'D') ADVANCE(128);
      END_STATE();
    case 80:
      if (lookahead == 'D') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'D') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(297);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(297);
      END_STATE();
    case 95:
      if (lookahead == 'G') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'G') ADVANCE(140);
      END_STATE();
    case 97:
      if (lookahead == 'G') ADVANCE(92);
      END_STATE();
    case 98:
      if (lookahead == 'G') ADVANCE(89);
      END_STATE();
    case 99:
      if (lookahead == 'H') ADVANCE(131);
      END_STATE();
    case 100:
      if (lookahead == 'H') ADVANCE(156);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(147);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(134);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(125);
      END_STATE();
    case 108:
      if (lookahead == 'K') ADVANCE(89);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 110:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 111:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 112:
      if (lookahead == 'L') ADVANCE(115);
      END_STATE();
    case 113:
      if (lookahead == 'L') ADVANCE(88);
      END_STATE();
    case 114:
      if (lookahead == 'L') ADVANCE(159);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == 'M') ADVANCE(314);
      END_STATE();
    case 117:
      if (lookahead == 'M') ADVANCE(157);
      END_STATE();
    case 118:
      if (lookahead == 'M') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(145);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(74);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(297);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(151);
      END_STATE();
    case 131:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 132:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 133:
      if (lookahead == 'P') ADVANCE(111);
      END_STATE();
    case 134:
      if (lookahead == 'P') ADVANCE(297);
      END_STATE();
    case 135:
      if (lookahead == 'P') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'P') ADVANCE(139);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 142:
      if (lookahead == 'S') ADVANCE(297);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(142);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 147:
      if (lookahead == 'U') ADVANCE(117);
      END_STATE();
    case 148:
      if (lookahead == 'V') ADVANCE(106);
      END_STATE();
    case 149:
      if (lookahead == 'W') ADVANCE(297);
      END_STATE();
    case 150:
      if (lookahead == 'W') ADVANCE(155);
      END_STATE();
    case 151:
      if (lookahead == 'Y') ADVANCE(89);
      END_STATE();
    case 152:
      if (lookahead == ']') ADVANCE(278);
      END_STATE();
    case 153:
      if (lookahead == ']') ADVANCE(280);
      END_STATE();
    case 154:
      if (lookahead == ']') ADVANCE(279);
      END_STATE();
    case 155:
      if (lookahead == ']') ADVANCE(290);
      END_STATE();
    case 156:
      if (lookahead == ']') ADVANCE(288);
      END_STATE();
    case 157:
      if (lookahead == ']') ADVANCE(292);
      END_STATE();
    case 158:
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 159:
      if (lookahead == ']') ADVANCE(291);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 179:
      if (lookahead == 'k') ADVANCE(175);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 202:
      if (lookahead == 'v') ADVANCE(178);
      END_STATE();
    case 203:
      if (lookahead == 'w') ADVANCE(268);
      END_STATE();
    case 204:
      if (lookahead == 'w') ADVANCE(236);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(232);
      END_STATE();
    case 206:
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 207:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(322);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(287);
      END_STATE();
    case 209:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 221:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 222:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 223:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 224:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(325);
      END_STATE();
    case 225:
      if (eof) ADVANCE(226);
      ADVANCE_MAP(
        '\n', 524,
        '\r', 326,
        '#', 222,
        '(', 320,
        '-', 274,
        '=', 400,
        '>', 282,
        '@', 223,
        'A', 466,
        'B', 427,
        'C', 401,
        'D', 408,
        'I', 436,
        'M', 409,
        'N', 489,
        'O', 437,
        'P', 417,
        'R', 410,
        'T', 443,
        'W', 423,
        'Y', 471,
        '[', 3,
        '`', 285,
        'a', 335,
        'b', 354,
        'h', 376,
        'n', 365,
        'p', 352,
        'r', 340,
        't', 360,
        'y', 341,
        0x2192, 303,
        '\t', 327,
        ' ', 327,
        '*', 275,
        0x2022, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != ']') ADVANCE(523);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_yesterday);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead == '-') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead == '-') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_today);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_today);
      if (lookahead == '-') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_today);
      if (lookahead == '-') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_today);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_tomorrow);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead == '-') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead == '-') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_blockers);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 's') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 's') ADVANCE(244);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 's') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 's') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_accomplishments);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 's') ADVANCE(258);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 's') ADVANCE(260);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_planned);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead == '-') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead == '-') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_review);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_review);
      if (lookahead == '-') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_review);
      if (lookahead == '-') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_review);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead == '>') ADVANCE(298);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead == '>') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_highlight_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_highlight_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LBRACKHIGH_RBRACK);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACKURGENT_RBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACKLOW_RBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACKCRITICAL_RBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACKMEDIUM_RBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_mention);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_u2192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(217);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_date);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == 'A') ADVANCE(116);
      if (lookahead == 'P') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(518);
      if (lookahead == 'A') ADVANCE(434);
      if (lookahead == 'P') ADVANCE(434);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'p') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(523);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(116);
      if (lookahead == 'P') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(434);
      if (lookahead == 'P') ADVANCE(434);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'p') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(523);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '(' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_plain_text);
      ADVANCE_MAP(
        '\r', 326,
        '-', 274,
        '=', 400,
        '>', 282,
        'A', 466,
        'B', 427,
        'C', 401,
        'D', 408,
        'I', 436,
        'M', 409,
        'N', 489,
        'O', 437,
        'P', 417,
        'R', 410,
        'T', 443,
        'W', 423,
        'Y', 471,
        'a', 335,
        'b', 354,
        'h', 376,
        'n', 365,
        'p', 352,
        'r', 340,
        't', 360,
        'y', 341,
        0x2192, 303,
        '\t', 327,
        ' ', 327,
        '*', 275,
        0x2022, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < '@' || 'D' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_plain_text);
      ADVANCE_MAP(
        '\r', 326,
        '-', 399,
        '=', 400,
        '>', 282,
        'B', 428,
        'C', 401,
        'D', 408,
        'I', 436,
        'M', 409,
        'O', 437,
        'P', 418,
        'R', 411,
        'T', 444,
        'W', 423,
        'h', 376,
        0x2192, 303,
        '\t', 328,
        ' ', 328,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead == 's') ADVANCE(330);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == ':') ADVANCE(398);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'a') ADVANCE(357);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'a') ADVANCE(382);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'a') ADVANCE(383);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'c') ADVANCE(351);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'c') ADVANCE(336);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'c') ADVANCE(361);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'd') ADVANCE(266);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'm') ADVANCE(362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'd') ADVANCE(333);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(379);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(373);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(337);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(358);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(370);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'h') ADVANCE(356);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'i') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'i') ADVANCE(343);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'k') ADVANCE(347);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'l') ADVANCE(331);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'l') ADVANCE(349);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'l') ADVANCE(364);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'm') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'm') ADVANCE(345);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(359);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(375);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(344);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(338);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(355);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(369);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(334);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'p') ADVANCE(329);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'p') ADVANCE(353);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'r') ADVANCE(243);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'r') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'r') ADVANCE(339);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'r') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 's') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 's') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 't') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 't') ADVANCE(259);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 't') ADVANCE(374);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 't') ADVANCE(342);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 't') ADVANCE(346);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'v') ADVANCE(350);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'w') ADVANCE(270);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'w') ADVANCE(238);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'y') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == 'y') ADVANCE(230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(422);
      if (lookahead == 'H') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_plain_text);
      ADVANCE_MAP(
        '-', 399,
        '=', 400,
        '>', 282,
        'B', 428,
        'C', 401,
        'D', 408,
        'I', 436,
        'M', 409,
        'O', 437,
        'P', 418,
        'R', 411,
        'T', 444,
        'W', 423,
        'h', 376,
        0x2192, 303,
        '\t', 386,
        ' ', 386,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead == 'P') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == ':') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '>') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'A') ADVANCE(440);
      if (lookahead == 'O') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'C') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'C') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(450);
      if (lookahead == 'O') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(459);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(439);
      if (lookahead == 'l') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'G') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'G') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'G') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'H') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'K') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(445);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'M') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'M') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'P') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'P') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'P') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'P') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'R') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'R') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'R') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'S') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'S') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'V') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'W') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'Y') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(523);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(523);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(523);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'c') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'c') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'h') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'i') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'k') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'm') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'm') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'v') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'w') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'w') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'y') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '(' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_plain_text);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(523);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 225},
  [2] = {.lex_state = 225},
  [3] = {.lex_state = 225},
  [4] = {.lex_state = 225},
  [5] = {.lex_state = 225},
  [6] = {.lex_state = 225},
  [7] = {.lex_state = 225},
  [8] = {.lex_state = 225},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 207},
  [27] = {.lex_state = 208},
  [28] = {.lex_state = 209},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_yesterday] = ACTIONS(1),
    [sym_today] = ACTIONS(1),
    [sym_tomorrow] = ACTIONS(1),
    [sym_blockers] = ACTIONS(1),
    [sym_notes] = ACTIONS(1),
    [sym_accomplishments] = ACTIONS(1),
    [sym_planned] = ACTIONS(1),
    [sym_review] = ACTIONS(1),
    [sym_bullet] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_mention] = ACTIONS(1),
    [sym_service_name] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_u2192] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_section_header] = STATE(2),
    [sym_task] = STATE(2),
    [sym_checkbox] = STATE(9),
    [sym_highlight] = STATE(12),
    [sym_code] = STATE(12),
    [sym_priority] = STATE(12),
    [sym_arrow] = STATE(12),
    [sym_parenthetical] = STATE(12),
    [sym_text_line] = STATE(2),
    [sym_line_content] = STATE(21),
    [sym_blank_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_task_content_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_yesterday] = ACTIONS(5),
    [sym_today] = ACTIONS(5),
    [sym_tomorrow] = ACTIONS(5),
    [sym_blockers] = ACTIONS(5),
    [sym_notes] = ACTIONS(5),
    [sym_accomplishments] = ACTIONS(5),
    [sym_planned] = ACTIONS(5),
    [sym_review] = ACTIONS(5),
    [sym_bullet] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(15),
    [sym_tag] = ACTIONS(17),
    [sym_mention] = ACTIONS(17),
    [sym_service_name] = ACTIONS(17),
    [sym_status] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ_GT] = ACTIONS(19),
    [anon_sym_u2192] = ACTIONS(19),
    [sym_date] = ACTIONS(17),
    [sym_time] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_url] = ACTIONS(17),
    [sym_plain_text] = ACTIONS(17),
    [sym__newline] = ACTIONS(23),
  },
  [2] = {
    [sym_section_header] = STATE(3),
    [sym_task] = STATE(3),
    [sym_checkbox] = STATE(9),
    [sym_highlight] = STATE(12),
    [sym_code] = STATE(12),
    [sym_priority] = STATE(12),
    [sym_arrow] = STATE(12),
    [sym_parenthetical] = STATE(12),
    [sym_text_line] = STATE(3),
    [sym_line_content] = STATE(21),
    [sym_blank_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_yesterday] = ACTIONS(5),
    [sym_today] = ACTIONS(5),
    [sym_tomorrow] = ACTIONS(5),
    [sym_blockers] = ACTIONS(5),
    [sym_notes] = ACTIONS(5),
    [sym_accomplishments] = ACTIONS(5),
    [sym_planned] = ACTIONS(5),
    [sym_review] = ACTIONS(5),
    [sym_bullet] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(15),
    [sym_tag] = ACTIONS(17),
    [sym_mention] = ACTIONS(17),
    [sym_service_name] = ACTIONS(17),
    [sym_status] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ_GT] = ACTIONS(19),
    [anon_sym_u2192] = ACTIONS(19),
    [sym_date] = ACTIONS(17),
    [sym_time] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_url] = ACTIONS(17),
    [sym_plain_text] = ACTIONS(17),
    [sym__newline] = ACTIONS(23),
  },
  [3] = {
    [sym_section_header] = STATE(3),
    [sym_task] = STATE(3),
    [sym_checkbox] = STATE(9),
    [sym_highlight] = STATE(12),
    [sym_code] = STATE(12),
    [sym_priority] = STATE(12),
    [sym_arrow] = STATE(12),
    [sym_parenthetical] = STATE(12),
    [sym_text_line] = STATE(3),
    [sym_line_content] = STATE(21),
    [sym_blank_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_yesterday] = ACTIONS(29),
    [sym_today] = ACTIONS(29),
    [sym_tomorrow] = ACTIONS(29),
    [sym_blockers] = ACTIONS(29),
    [sym_notes] = ACTIONS(29),
    [sym_accomplishments] = ACTIONS(29),
    [sym_planned] = ACTIONS(29),
    [sym_review] = ACTIONS(29),
    [sym_bullet] = ACTIONS(32),
    [sym_number] = ACTIONS(32),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(38),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(44),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(44),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(44),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(44),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(44),
    [sym_tag] = ACTIONS(47),
    [sym_mention] = ACTIONS(47),
    [sym_service_name] = ACTIONS(47),
    [sym_status] = ACTIONS(47),
    [anon_sym_DASH_GT] = ACTIONS(50),
    [anon_sym_EQ_GT] = ACTIONS(50),
    [anon_sym_u2192] = ACTIONS(50),
    [sym_date] = ACTIONS(47),
    [sym_time] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(53),
    [sym_url] = ACTIONS(47),
    [sym_plain_text] = ACTIONS(47),
    [sym__newline] = ACTIONS(56),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_yesterday] = ACTIONS(61),
    [sym_today] = ACTIONS(61),
    [sym_tomorrow] = ACTIONS(61),
    [sym_blockers] = ACTIONS(61),
    [sym_notes] = ACTIONS(61),
    [sym_accomplishments] = ACTIONS(61),
    [sym_planned] = ACTIONS(61),
    [sym_review] = ACTIONS(61),
    [sym_bullet] = ACTIONS(61),
    [sym_number] = ACTIONS(61),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(61),
    [sym_tag] = ACTIONS(61),
    [sym_mention] = ACTIONS(61),
    [sym_service_name] = ACTIONS(61),
    [sym_status] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_EQ_GT] = ACTIONS(61),
    [anon_sym_u2192] = ACTIONS(61),
    [sym_date] = ACTIONS(61),
    [sym_time] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym_url] = ACTIONS(61),
    [sym_plain_text] = ACTIONS(61),
    [sym__newline] = ACTIONS(61),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_yesterday] = ACTIONS(65),
    [sym_today] = ACTIONS(65),
    [sym_tomorrow] = ACTIONS(65),
    [sym_blockers] = ACTIONS(65),
    [sym_notes] = ACTIONS(65),
    [sym_accomplishments] = ACTIONS(65),
    [sym_planned] = ACTIONS(65),
    [sym_review] = ACTIONS(65),
    [sym_bullet] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(65),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(65),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(65),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(65),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(65),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(65),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(65),
    [sym_tag] = ACTIONS(65),
    [sym_mention] = ACTIONS(65),
    [sym_service_name] = ACTIONS(65),
    [sym_status] = ACTIONS(65),
    [anon_sym_DASH_GT] = ACTIONS(65),
    [anon_sym_EQ_GT] = ACTIONS(65),
    [anon_sym_u2192] = ACTIONS(65),
    [sym_date] = ACTIONS(65),
    [sym_time] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_url] = ACTIONS(65),
    [sym_plain_text] = ACTIONS(65),
    [sym__newline] = ACTIONS(65),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_yesterday] = ACTIONS(69),
    [sym_today] = ACTIONS(69),
    [sym_tomorrow] = ACTIONS(69),
    [sym_blockers] = ACTIONS(69),
    [sym_notes] = ACTIONS(69),
    [sym_accomplishments] = ACTIONS(69),
    [sym_planned] = ACTIONS(69),
    [sym_review] = ACTIONS(69),
    [sym_bullet] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_BQUOTE] = ACTIONS(69),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(69),
    [sym_tag] = ACTIONS(69),
    [sym_mention] = ACTIONS(69),
    [sym_service_name] = ACTIONS(69),
    [sym_status] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_u2192] = ACTIONS(69),
    [sym_date] = ACTIONS(69),
    [sym_time] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_url] = ACTIONS(69),
    [sym_plain_text] = ACTIONS(69),
    [sym__newline] = ACTIONS(69),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_yesterday] = ACTIONS(73),
    [sym_today] = ACTIONS(73),
    [sym_tomorrow] = ACTIONS(73),
    [sym_blockers] = ACTIONS(73),
    [sym_notes] = ACTIONS(73),
    [sym_accomplishments] = ACTIONS(73),
    [sym_planned] = ACTIONS(73),
    [sym_review] = ACTIONS(73),
    [sym_bullet] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_BQUOTE] = ACTIONS(73),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(73),
    [sym_tag] = ACTIONS(73),
    [sym_mention] = ACTIONS(73),
    [sym_service_name] = ACTIONS(73),
    [sym_status] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [anon_sym_u2192] = ACTIONS(73),
    [sym_date] = ACTIONS(73),
    [sym_time] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_url] = ACTIONS(73),
    [sym_plain_text] = ACTIONS(73),
    [sym__newline] = ACTIONS(73),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_yesterday] = ACTIONS(77),
    [sym_today] = ACTIONS(77),
    [sym_tomorrow] = ACTIONS(77),
    [sym_blockers] = ACTIONS(77),
    [sym_notes] = ACTIONS(77),
    [sym_accomplishments] = ACTIONS(77),
    [sym_planned] = ACTIONS(77),
    [sym_review] = ACTIONS(77),
    [sym_bullet] = ACTIONS(77),
    [sym_number] = ACTIONS(77),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(77),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(77),
    [sym_tag] = ACTIONS(77),
    [sym_mention] = ACTIONS(77),
    [sym_service_name] = ACTIONS(77),
    [sym_status] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_u2192] = ACTIONS(77),
    [sym_date] = ACTIONS(77),
    [sym_time] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym_url] = ACTIONS(77),
    [sym_plain_text] = ACTIONS(77),
    [sym__newline] = ACTIONS(77),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_task_content,
    ACTIONS(19), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(15), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(11), 6,
      sym_highlight,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(79), 8,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
      sym_plain_text,
  [43] = 8,
    ACTIONS(81), 1,
      anon_sym_GT,
    ACTIONS(84), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym__newline,
    ACTIONS(93), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(87), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(10), 6,
      sym_highlight,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(90), 8,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
      sym_plain_text,
  [86] = 8,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(19), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(15), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(10), 6,
      sym_highlight,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(101), 8,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
      sym_plain_text,
  [129] = 8,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym__newline,
    ACTIONS(19), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(15), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(10), 6,
      sym_highlight,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(101), 8,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
      sym_plain_text,
  [172] = 1,
    ACTIONS(107), 20,
      anon_sym_GT,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_plain_text,
      sym__newline,
  [195] = 1,
    ACTIONS(109), 20,
      anon_sym_GT,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_plain_text,
      sym__newline,
  [218] = 1,
    ACTIONS(111), 20,
      anon_sym_GT,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_plain_text,
      sym__newline,
  [241] = 1,
    ACTIONS(113), 20,
      anon_sym_GT,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_plain_text,
      sym__newline,
  [264] = 1,
    ACTIONS(115), 20,
      anon_sym_GT,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_plain_text,
      sym__newline,
  [287] = 1,
    ACTIONS(117), 19,
      anon_sym_GT,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_plain_text,
  [309] = 2,
    ACTIONS(119), 1,
      anon_sym_COLON,
    ACTIONS(121), 1,
      sym__newline,
  [316] = 1,
    ACTIONS(123), 1,
      sym__newline,
  [320] = 1,
    ACTIONS(125), 1,
      sym__newline,
  [324] = 1,
    ACTIONS(127), 1,
      sym__newline,
  [328] = 1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [332] = 1,
    ACTIONS(131), 1,
      anon_sym_BQUOTE,
  [336] = 1,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
  [340] = 1,
    ACTIONS(135), 1,
      aux_sym_parenthetical_token1,
  [344] = 1,
    ACTIONS(137), 1,
      aux_sym_code_token1,
  [348] = 1,
    ACTIONS(139), 1,
      aux_sym_highlight_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 43,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 129,
  [SMALL_STATE(13)] = 172,
  [SMALL_STATE(14)] = 195,
  [SMALL_STATE(15)] = 218,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 287,
  [SMALL_STATE(19)] = 309,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 320,
  [SMALL_STATE(22)] = 324,
  [SMALL_STATE(23)] = 328,
  [SMALL_STATE(24)] = 332,
  [SMALL_STATE(25)] = 336,
  [SMALL_STATE(26)] = 340,
  [SMALL_STATE(27)] = 344,
  [SMALL_STATE(28)] = 348,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_content, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_content, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_highlight, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checkbox, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [129] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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

TS_PUBLIC const TSLanguage *tree_sitter_dsm(void) {
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
