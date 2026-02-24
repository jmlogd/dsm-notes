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
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 56
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
  sym_bluemark_marker = 15,
  sym_bluemark_text = 16,
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
  sym_bluemark = 44,
  sym_bluemark_content = 45,
  sym_code = 46,
  sym_priority = 47,
  sym_arrow = 48,
  sym_parenthetical = 49,
  sym_text_line = 50,
  sym_line_content = 51,
  sym_blank_line = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_task_content_repeat1 = 54,
  aux_sym_bluemark_content_repeat1 = 55,
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
  [sym_bluemark_marker] = "bluemark_marker",
  [sym_bluemark_text] = "bluemark_text",
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
  [sym_bluemark] = "bluemark",
  [sym_bluemark_content] = "bluemark_content",
  [sym_code] = "code",
  [sym_priority] = "priority",
  [sym_arrow] = "arrow",
  [sym_parenthetical] = "parenthetical",
  [sym_text_line] = "text_line",
  [sym_line_content] = "line_content",
  [sym_blank_line] = "blank_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_task_content_repeat1] = "task_content_repeat1",
  [aux_sym_bluemark_content_repeat1] = "bluemark_content_repeat1",
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
  [sym_bluemark_marker] = sym_bluemark_marker,
  [sym_bluemark_text] = sym_bluemark_text,
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
  [sym_bluemark] = sym_bluemark,
  [sym_bluemark_content] = sym_bluemark_content,
  [sym_code] = sym_code,
  [sym_priority] = sym_priority,
  [sym_arrow] = sym_arrow,
  [sym_parenthetical] = sym_parenthetical,
  [sym_text_line] = sym_text_line,
  [sym_line_content] = sym_line_content,
  [sym_blank_line] = sym_blank_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_task_content_repeat1] = aux_sym_task_content_repeat1,
  [aux_sym_bluemark_content_repeat1] = aux_sym_bluemark_content_repeat1,
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
  [sym_bluemark_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_bluemark_text] = {
    .visible = true,
    .named = true,
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
  [sym_bluemark] = {
    .visible = true,
    .named = true,
  },
  [sym_bluemark_content] = {
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
  [aux_sym_bluemark_content_repeat1] = {
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
  [20] = 18,
  [21] = 16,
  [22] = 22,
  [23] = 19,
  [24] = 17,
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
  [35] = 34,
  [36] = 27,
  [37] = 32,
  [38] = 30,
};

static TSCharacterRange sym_bluemark_text_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '"'}, {'$', '\''}, {'*', '9'}, {';', '='}, {'?', '?'}, {'A', 'Z'},
  {'\\', '\\'}, {'^', '_'}, {'a', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '\n', 388,
        '\r', 1,
        '!', 5,
        '#', 47,
        '(', 241,
        ')', 244,
        '-', 217,
        ':', 52,
        '=', 217,
        '@', 48,
        'A', 160,
        'B', 182,
        'D', 154,
        'N', 189,
        'P', 181,
        'R', 169,
        'T', 155,
        'W', 149,
        'Y', 170,
        '[', 4,
        '`', 218,
        'a', 85,
        'b', 104,
        'h', 126,
        'n', 115,
        'p', 102,
        'r', 90,
        't', 110,
        'y', 91,
        0x2192, 217,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '*' ||
          lookahead == 0x2022) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(217);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(388);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 388,
        '\r', 1,
        '!', 5,
        '#', 47,
        '(', 241,
        '-', 217,
        '=', 217,
        '@', 48,
        'A', 161,
        'D', 154,
        'T', 156,
        'W', 149,
        '[', 9,
        '`', 218,
        'h', 126,
        0x2192, 217,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(217);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 388,
        '\r', 1,
        '!', 5,
        '#', 47,
        '(', 241,
        '-', 311,
        '=', 312,
        '@', 48,
        'A', 329,
        'D', 323,
        'T', 325,
        'W', 317,
        '[', 9,
        '`', 218,
        'h', 293,
        0x2192, 232,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(387);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ' ', 32,
        'C', 26,
        'H', 17,
        'L', 25,
        'M', 12,
        'U', 27,
        'X', 33,
        'x', 34,
      );
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'M') ADVANCE(12);
      if (lookahead == 'U') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'H') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(238);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'W') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == ']') ADVANCE(78);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(223);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(221);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(225);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(222);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(224);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(243);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(220);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(245);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '\n', 388,
        '\r', 1,
        '!', 5,
        '#', 47,
        '(', 241,
        '-', 76,
        '=', 312,
        '@', 48,
        'A', 328,
        'B', 351,
        'D', 323,
        'N', 358,
        'P', 350,
        'R', 338,
        'T', 324,
        'W', 317,
        'Y', 339,
        '[', 4,
        '`', 218,
        'a', 252,
        'b', 271,
        'h', 293,
        'n', 282,
        'p', 269,
        'r', 257,
        't', 277,
        'y', 258,
        0x2192, 232,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50);
      if (lookahead == '*' ||
          lookahead == 0x2022) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(387);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_yesterday);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead == '-') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_today);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_today);
      if (lookahead == '-') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tomorrow);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead == '-') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_blockers);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 's') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 's') ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_accomplishments);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 's') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_planned);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead == '-') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_review);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_review);
      if (lookahead == '-') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead == '>') ADVANCE(230);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_bluemark_marker);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'a') ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'a') ADVANCE(132);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'k') ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 's') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 's') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 's') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 't') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 't') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 't') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 't') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 't') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'y') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(216);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(211);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '-') ADVANCE(212);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '/') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '/') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '.') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '.') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '/') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '/') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '/') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == '/') ADVANCE(215);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'A') ADVANCE(150);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'D') ADVANCE(157);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'E') ADVANCE(229);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'G') ADVANCE(229);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'I') ADVANCE(158);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'I') ADVANCE(159);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'I') ADVANCE(153);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'N') ADVANCE(147);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'N') ADVANCE(148);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'O') ADVANCE(152);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'O') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(167);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'O') ADVANCE(146);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'O') ADVANCE(229);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'P') ADVANCE(229);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'T') ADVANCE(151);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'W') ADVANCE(145);
      if (lookahead == 'c') ADVANCE(165);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'W') ADVANCE(145);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'a') ADVANCE(187);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'a') ADVANCE(207);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'c') ADVANCE(180);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'c') ADVANCE(190);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'd') ADVANCE(217);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(191);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'd') ADVANCE(163);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'e') ADVANCE(205);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'e') ADVANCE(201);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'e') ADVANCE(206);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'e') ADVANCE(166);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'e') ADVANCE(199);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'e') ADVANCE(186);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'e') ADVANCE(197);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'e') ADVANCE(195);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'h') ADVANCE(185);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'i') ADVANCE(200);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'i') ADVANCE(171);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'k') ADVANCE(176);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'l') ADVANCE(162);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'l') ADVANCE(193);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'l') ADVANCE(178);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'm') ADVANCE(194);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'm') ADVANCE(174);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'n') ADVANCE(202);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'n') ADVANCE(188);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'n') ADVANCE(172);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'o') ADVANCE(203);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'o') ADVANCE(184);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'o') ADVANCE(196);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'o') ADVANCE(206);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'o') ADVANCE(164);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'p') ADVANCE(183);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'r') ADVANCE(199);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'r') ADVANCE(198);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'r') ADVANCE(168);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'r') ADVANCE(192);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 's') ADVANCE(217);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 's') ADVANCE(177);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 's') ADVANCE(204);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 't') ADVANCE(199);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 't') ADVANCE(173);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 't') ADVANCE(175);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'v') ADVANCE(179);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'w') ADVANCE(217);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (lookahead == 'y') ADVANCE(217);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_bluemark_text);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_bluemark_text);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACKHIGH_RBRACK);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACKURGENT_RBRACK);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACKLOW_RBRACK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACKCRITICAL_RBRACK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACKMEDIUM_RBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_mention);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(382);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 's') ADVANCE(247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == ':') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(274);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(299);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(300);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(268);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(278);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(279);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(296);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(290);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(297);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(275);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(287);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(285);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'h') ADVANCE(273);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(289);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(260);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(248);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(266);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(281);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(284);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(262);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(276);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(292);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(261);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(255);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(272);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(286);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(294);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(246);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(270);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(288);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(256);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(280);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 's') ADVANCE(265);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 's') ADVANCE(295);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 't') ADVANCE(283);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 't') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 't') ADVANCE(291);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 't') ADVANCE(259);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 't') ADVANCE(263);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'v') ADVANCE(267);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'w') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'w') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'y') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == 'y') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(383);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(384);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '>') ADVANCE(230);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '>') ADVANCE(231);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'A') ADVANCE(318);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(322);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(229);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'G') ADVANCE(229);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(326);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(327);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(321);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(315);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(316);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(229);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(320);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(336);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(314);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'P') ADVANCE(229);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'T') ADVANCE(319);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'W') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(334);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'W') ADVANCE(313);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(356);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(376);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(377);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'c') ADVANCE(349);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'c') ADVANCE(359);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(71);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead == 'm') ADVANCE(360);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(332);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(373);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(369);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(66);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(374);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(335);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(355);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(366);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(364);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'h') ADVANCE(354);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'i') ADVANCE(368);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'i') ADVANCE(341);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'k') ADVANCE(345);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'l') ADVANCE(330);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'l') ADVANCE(361);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'l') ADVANCE(347);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'm') ADVANCE(363);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'm') ADVANCE(343);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(370);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(357);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(342);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(371);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(353);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(365);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(333);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(375);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'p') ADVANCE(352);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(62);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(367);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(337);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(362);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 's') ADVANCE(346);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 's') ADVANCE(372);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(70);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(340);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(344);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'v') ADVANCE(348);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'w') ADVANCE(73);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'w') ADVANCE(57);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'y') ADVANCE(55);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'y') ADVANCE(53);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_plain_text);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_plain_text);
      if ((!eof && set_contains(sym_bluemark_text_character_set_1, 11, lookahead))) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 50},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 42},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 42},
  [38] = {.lex_state = 41},
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
    [sym_bluemark_marker] = ACTIONS(1),
    [sym_bluemark_text] = ACTIONS(1),
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
    [sym_plain_text] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym_section_header] = STATE(2),
    [sym_task] = STATE(2),
    [sym_checkbox] = STATE(12),
    [sym_bluemark] = STATE(14),
    [sym_code] = STATE(14),
    [sym_priority] = STATE(14),
    [sym_arrow] = STATE(14),
    [sym_parenthetical] = STATE(14),
    [sym_text_line] = STATE(2),
    [sym_line_content] = STATE(29),
    [sym_blank_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_task_content_repeat1] = STATE(14),
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
    [sym_number] = ACTIONS(9),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(11),
    [sym_bluemark_marker] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(17),
    [sym_tag] = ACTIONS(19),
    [sym_mention] = ACTIONS(19),
    [sym_service_name] = ACTIONS(19),
    [sym_status] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_u2192] = ACTIONS(21),
    [sym_date] = ACTIONS(19),
    [sym_time] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_url] = ACTIONS(19),
    [sym_plain_text] = ACTIONS(25),
    [sym__newline] = ACTIONS(27),
  },
  [2] = {
    [sym_section_header] = STATE(3),
    [sym_task] = STATE(3),
    [sym_checkbox] = STATE(12),
    [sym_bluemark] = STATE(14),
    [sym_code] = STATE(14),
    [sym_priority] = STATE(14),
    [sym_arrow] = STATE(14),
    [sym_parenthetical] = STATE(14),
    [sym_text_line] = STATE(3),
    [sym_line_content] = STATE(29),
    [sym_blank_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_yesterday] = ACTIONS(5),
    [sym_today] = ACTIONS(5),
    [sym_tomorrow] = ACTIONS(5),
    [sym_blockers] = ACTIONS(5),
    [sym_notes] = ACTIONS(5),
    [sym_accomplishments] = ACTIONS(5),
    [sym_planned] = ACTIONS(5),
    [sym_review] = ACTIONS(5),
    [sym_bullet] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(11),
    [sym_bluemark_marker] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(17),
    [sym_tag] = ACTIONS(19),
    [sym_mention] = ACTIONS(19),
    [sym_service_name] = ACTIONS(19),
    [sym_status] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_u2192] = ACTIONS(21),
    [sym_date] = ACTIONS(19),
    [sym_time] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_url] = ACTIONS(19),
    [sym_plain_text] = ACTIONS(25),
    [sym__newline] = ACTIONS(27),
  },
  [3] = {
    [sym_section_header] = STATE(3),
    [sym_task] = STATE(3),
    [sym_checkbox] = STATE(12),
    [sym_bluemark] = STATE(14),
    [sym_code] = STATE(14),
    [sym_priority] = STATE(14),
    [sym_arrow] = STATE(14),
    [sym_parenthetical] = STATE(14),
    [sym_text_line] = STATE(3),
    [sym_line_content] = STATE(29),
    [sym_blank_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_yesterday] = ACTIONS(33),
    [sym_today] = ACTIONS(33),
    [sym_tomorrow] = ACTIONS(33),
    [sym_blockers] = ACTIONS(33),
    [sym_notes] = ACTIONS(33),
    [sym_accomplishments] = ACTIONS(33),
    [sym_planned] = ACTIONS(33),
    [sym_review] = ACTIONS(33),
    [sym_bullet] = ACTIONS(36),
    [sym_number] = ACTIONS(39),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(42),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(42),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(42),
    [sym_bluemark_marker] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(48),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(51),
    [sym_tag] = ACTIONS(54),
    [sym_mention] = ACTIONS(54),
    [sym_service_name] = ACTIONS(54),
    [sym_status] = ACTIONS(54),
    [anon_sym_DASH_GT] = ACTIONS(57),
    [anon_sym_EQ_GT] = ACTIONS(57),
    [anon_sym_u2192] = ACTIONS(57),
    [sym_date] = ACTIONS(54),
    [sym_time] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_url] = ACTIONS(54),
    [sym_plain_text] = ACTIONS(63),
    [sym__newline] = ACTIONS(66),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_yesterday] = ACTIONS(71),
    [sym_today] = ACTIONS(71),
    [sym_tomorrow] = ACTIONS(71),
    [sym_blockers] = ACTIONS(71),
    [sym_notes] = ACTIONS(71),
    [sym_accomplishments] = ACTIONS(71),
    [sym_planned] = ACTIONS(71),
    [sym_review] = ACTIONS(71),
    [sym_bullet] = ACTIONS(71),
    [sym_number] = ACTIONS(69),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(69),
    [sym_bluemark_marker] = ACTIONS(69),
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
    [sym_plain_text] = ACTIONS(71),
    [sym__newline] = ACTIONS(69),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_yesterday] = ACTIONS(75),
    [sym_today] = ACTIONS(75),
    [sym_tomorrow] = ACTIONS(75),
    [sym_blockers] = ACTIONS(75),
    [sym_notes] = ACTIONS(75),
    [sym_accomplishments] = ACTIONS(75),
    [sym_planned] = ACTIONS(75),
    [sym_review] = ACTIONS(75),
    [sym_bullet] = ACTIONS(75),
    [sym_number] = ACTIONS(73),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(73),
    [sym_bluemark_marker] = ACTIONS(73),
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
    [sym_plain_text] = ACTIONS(75),
    [sym__newline] = ACTIONS(73),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_yesterday] = ACTIONS(79),
    [sym_today] = ACTIONS(79),
    [sym_tomorrow] = ACTIONS(79),
    [sym_blockers] = ACTIONS(79),
    [sym_notes] = ACTIONS(79),
    [sym_accomplishments] = ACTIONS(79),
    [sym_planned] = ACTIONS(79),
    [sym_review] = ACTIONS(79),
    [sym_bullet] = ACTIONS(79),
    [sym_number] = ACTIONS(77),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(77),
    [sym_bluemark_marker] = ACTIONS(77),
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
    [sym_plain_text] = ACTIONS(79),
    [sym__newline] = ACTIONS(77),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_yesterday] = ACTIONS(83),
    [sym_today] = ACTIONS(83),
    [sym_tomorrow] = ACTIONS(83),
    [sym_blockers] = ACTIONS(83),
    [sym_notes] = ACTIONS(83),
    [sym_accomplishments] = ACTIONS(83),
    [sym_planned] = ACTIONS(83),
    [sym_review] = ACTIONS(83),
    [sym_bullet] = ACTIONS(83),
    [sym_number] = ACTIONS(81),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(81),
    [sym_bluemark_marker] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(81),
    [sym_tag] = ACTIONS(81),
    [sym_mention] = ACTIONS(81),
    [sym_service_name] = ACTIONS(81),
    [sym_status] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_u2192] = ACTIONS(81),
    [sym_date] = ACTIONS(81),
    [sym_time] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [sym_url] = ACTIONS(81),
    [sym_plain_text] = ACTIONS(83),
    [sym__newline] = ACTIONS(81),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_yesterday] = ACTIONS(87),
    [sym_today] = ACTIONS(87),
    [sym_tomorrow] = ACTIONS(87),
    [sym_blockers] = ACTIONS(87),
    [sym_notes] = ACTIONS(87),
    [sym_accomplishments] = ACTIONS(87),
    [sym_planned] = ACTIONS(87),
    [sym_review] = ACTIONS(87),
    [sym_bullet] = ACTIONS(87),
    [sym_number] = ACTIONS(85),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(85),
    [sym_bluemark_marker] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(85),
    [sym_tag] = ACTIONS(85),
    [sym_mention] = ACTIONS(85),
    [sym_service_name] = ACTIONS(85),
    [sym_status] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [anon_sym_EQ_GT] = ACTIONS(85),
    [anon_sym_u2192] = ACTIONS(85),
    [sym_date] = ACTIONS(85),
    [sym_time] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [sym_url] = ACTIONS(85),
    [sym_plain_text] = ACTIONS(87),
    [sym__newline] = ACTIONS(85),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      sym_bluemark_marker,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_plain_text,
    ACTIONS(93), 1,
      sym__newline,
    ACTIONS(21), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(17), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(13), 6,
      sym_bluemark,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(89), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
  [45] = 4,
    ACTIONS(97), 1,
      sym_bluemark_text,
    STATE(11), 5,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_bluemark_content_repeat1,
    ACTIONS(99), 8,
      sym_service_name,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      sym_url,
      sym_plain_text,
    ACTIONS(95), 12,
      sym_bluemark_marker,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_status,
      anon_sym_LPAREN,
      sym__newline,
  [80] = 9,
    ACTIONS(106), 1,
      anon_sym_BQUOTE,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_plain_text,
    ACTIONS(101), 2,
      sym_bluemark_marker,
      sym__newline,
    ACTIONS(112), 3,
      sym_tag,
      sym_mention,
      sym_status,
    ACTIONS(115), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(103), 5,
      sym_bluemark_text,
      sym_service_name,
      sym_date,
      sym_time,
      sym_url,
    ACTIONS(109), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(11), 5,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_bluemark_content_repeat1,
  [125] = 9,
    ACTIONS(13), 1,
      sym_bluemark_marker,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_plain_text,
    STATE(33), 1,
      sym_task_content,
    ACTIONS(21), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(17), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(9), 6,
      sym_bluemark,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(123), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
  [170] = 9,
    ACTIONS(127), 1,
      sym_bluemark_marker,
    ACTIONS(130), 1,
      anon_sym_BQUOTE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      sym_plain_text,
    ACTIONS(148), 1,
      sym__newline,
    ACTIONS(139), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(133), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(13), 6,
      sym_bluemark,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(136), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
  [215] = 9,
    ACTIONS(13), 1,
      sym_bluemark_marker,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_plain_text,
    ACTIONS(150), 1,
      sym__newline,
    ACTIONS(21), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(17), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(13), 6,
      sym_bluemark,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(89), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
  [260] = 8,
    ACTIONS(154), 1,
      anon_sym_BQUOTE,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_bluemark_content,
    ACTIONS(158), 3,
      sym_tag,
      sym_mention,
      sym_status,
    ACTIONS(160), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(152), 5,
      sym_bluemark_text,
      sym_service_name,
      sym_date,
      sym_time,
      sym_url,
    ACTIONS(156), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(10), 5,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_bluemark_content_repeat1,
  [301] = 2,
    ACTIONS(166), 9,
      sym_bluemark_text,
      sym_service_name,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      sym_url,
      sym_plain_text,
    ACTIONS(164), 12,
      sym_bluemark_marker,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_status,
      anon_sym_LPAREN,
      sym__newline,
  [327] = 2,
    ACTIONS(170), 9,
      sym_bluemark_text,
      sym_service_name,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      sym_url,
      sym_plain_text,
    ACTIONS(168), 12,
      sym_bluemark_marker,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_status,
      anon_sym_LPAREN,
      sym__newline,
  [353] = 2,
    ACTIONS(174), 9,
      sym_bluemark_text,
      sym_service_name,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      sym_url,
      sym_plain_text,
    ACTIONS(172), 12,
      sym_bluemark_marker,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_status,
      anon_sym_LPAREN,
      sym__newline,
  [379] = 2,
    ACTIONS(178), 9,
      sym_bluemark_text,
      sym_service_name,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      sym_url,
      sym_plain_text,
    ACTIONS(176), 12,
      sym_bluemark_marker,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
      sym_tag,
      sym_mention,
      sym_status,
      anon_sym_LPAREN,
      sym__newline,
  [405] = 2,
    ACTIONS(174), 1,
      sym_plain_text,
    ACTIONS(172), 19,
      sym_bluemark_marker,
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
      sym__newline,
  [430] = 2,
    ACTIONS(166), 1,
      sym_plain_text,
    ACTIONS(164), 19,
      sym_bluemark_marker,
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
      sym__newline,
  [455] = 2,
    ACTIONS(182), 1,
      sym_plain_text,
    ACTIONS(180), 19,
      sym_bluemark_marker,
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
      sym__newline,
  [480] = 2,
    ACTIONS(178), 1,
      sym_plain_text,
    ACTIONS(176), 19,
      sym_bluemark_marker,
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
      sym__newline,
  [505] = 2,
    ACTIONS(170), 1,
      sym_plain_text,
    ACTIONS(168), 19,
      sym_bluemark_marker,
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
      sym__newline,
  [530] = 2,
    ACTIONS(186), 1,
      sym_plain_text,
    ACTIONS(184), 18,
      sym_bluemark_marker,
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
  [554] = 2,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(190), 1,
      sym__newline,
  [561] = 1,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
  [565] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [569] = 1,
    ACTIONS(196), 1,
      sym__newline,
  [573] = 1,
    ACTIONS(198), 1,
      aux_sym_parenthetical_token1,
  [577] = 1,
    ACTIONS(200), 1,
      sym__newline,
  [581] = 1,
    ACTIONS(202), 1,
      aux_sym_code_token1,
  [585] = 1,
    ACTIONS(204), 1,
      sym__newline,
  [589] = 1,
    ACTIONS(206), 1,
      anon_sym_BQUOTE,
  [593] = 1,
    ACTIONS(208), 1,
      anon_sym_BQUOTE,
  [597] = 1,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
  [601] = 1,
    ACTIONS(212), 1,
      aux_sym_code_token1,
  [605] = 1,
    ACTIONS(214), 1,
      aux_sym_parenthetical_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 45,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 125,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 215,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 301,
  [SMALL_STATE(17)] = 327,
  [SMALL_STATE(18)] = 353,
  [SMALL_STATE(19)] = 379,
  [SMALL_STATE(20)] = 405,
  [SMALL_STATE(21)] = 430,
  [SMALL_STATE(22)] = 455,
  [SMALL_STATE(23)] = 480,
  [SMALL_STATE(24)] = 505,
  [SMALL_STATE(25)] = 530,
  [SMALL_STATE(26)] = 554,
  [SMALL_STATE(27)] = 561,
  [SMALL_STATE(28)] = 565,
  [SMALL_STATE(29)] = 569,
  [SMALL_STATE(30)] = 573,
  [SMALL_STATE(31)] = 577,
  [SMALL_STATE(32)] = 581,
  [SMALL_STATE(33)] = 585,
  [SMALL_STATE(34)] = 589,
  [SMALL_STATE(35)] = 593,
  [SMALL_STATE(36)] = 597,
  [SMALL_STATE(37)] = 601,
  [SMALL_STATE(38)] = 605,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_content, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bluemark_content, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bluemark_content, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_content, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bluemark, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bluemark, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checkbox, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
