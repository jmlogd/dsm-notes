#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  aux_sym_bluemark_text_token1 = 16,
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
  sym__newline = 37,
  sym_source_file = 38,
  sym_section_header = 39,
  sym_task = 40,
  sym_checkbox = 41,
  sym_task_content = 42,
  sym_bluemark = 43,
  sym_bluemark_content = 44,
  sym_bluemark_text = 45,
  sym_code = 46,
  sym_priority = 47,
  sym_arrow = 48,
  sym_parenthetical = 49,
  sym_text_line = 50,
  sym_line_content = 51,
  sym_plain_text = 52,
  sym_blank_line = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_task_content_repeat1 = 55,
  aux_sym_bluemark_content_repeat1 = 56,
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
  [aux_sym_bluemark_text_token1] = "bluemark_text_token1",
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
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_section_header] = "section_header",
  [sym_task] = "task",
  [sym_checkbox] = "checkbox",
  [sym_task_content] = "task_content",
  [sym_bluemark] = "bluemark",
  [sym_bluemark_content] = "bluemark_content",
  [sym_bluemark_text] = "bluemark_text",
  [sym_code] = "code",
  [sym_priority] = "priority",
  [sym_arrow] = "arrow",
  [sym_parenthetical] = "parenthetical",
  [sym_text_line] = "text_line",
  [sym_line_content] = "line_content",
  [sym_plain_text] = "plain_text",
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
  [aux_sym_bluemark_text_token1] = aux_sym_bluemark_text_token1,
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
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_section_header] = sym_section_header,
  [sym_task] = sym_task,
  [sym_checkbox] = sym_checkbox,
  [sym_task_content] = sym_task_content,
  [sym_bluemark] = sym_bluemark,
  [sym_bluemark_content] = sym_bluemark_content,
  [sym_bluemark_text] = sym_bluemark_text,
  [sym_code] = sym_code,
  [sym_priority] = sym_priority,
  [sym_arrow] = sym_arrow,
  [sym_parenthetical] = sym_parenthetical,
  [sym_text_line] = sym_text_line,
  [sym_line_content] = sym_line_content,
  [sym_plain_text] = sym_plain_text,
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
  [aux_sym_bluemark_text_token1] = {
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
  [sym_bluemark_text] = {
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
  [sym_plain_text] = {
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
};

static TSCharacterRange aux_sym_bluemark_text_token1_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '"'}, {'$', '\''}, {'*', '9'}, {';', '='}, {'?', '?'}, {'A', 'Z'},
  {'\\', '\\'}, {'^', '_'}, {'a', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '\n', 250,
        '\r', 1,
        '!', 4,
        '#', 46,
        '(', 245,
        ')', 248,
        '-', 74,
        ':', 50,
        '=', 146,
        '@', 47,
        'A', 162,
        'B', 185,
        'D', 156,
        'N', 192,
        'P', 184,
        'R', 172,
        'T', 157,
        'W', 151,
        'Y', 173,
        '[', 3,
        '`', 222,
        'a', 86,
        'b', 105,
        'h', 127,
        'n', 116,
        'p', 103,
        'r', 91,
        't', 111,
        'y', 92,
        0x2192, 236,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '*' ||
          lookahead == 0x2022) ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(221);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(250);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 250,
        '\r', 1,
        '!', 4,
        '#', 46,
        '(', 245,
        '-', 145,
        '=', 146,
        '@', 47,
        'A', 163,
        'D', 156,
        'T', 158,
        'W', 151,
        '[', 8,
        '`', 222,
        'h', 127,
        0x2192, 236,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(221);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 31,
        'C', 25,
        'H', 16,
        'L', 24,
        'M', 11,
        'U', 26,
        'X', 32,
        'x', 33,
      );
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(16);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == 'U') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'G') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(242);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'W') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == ']') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == ']') ADVANCE(78);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(227);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(225);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(229);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(226);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(228);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(224);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(247);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(249);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_yesterday);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead == '-') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_today);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_today);
      if (lookahead == '-') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tomorrow);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead == '-') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_blockers);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 's') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 's') ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_accomplishments);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 's') ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_planned);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead == '-') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_review);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_review);
      if (lookahead == '-') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead == '>') ADVANCE(234);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_bluemark_marker);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == 's') ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == ':') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(108);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(133);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(134);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'k') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 's') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 's') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 't') ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 't') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 't') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 't') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 't') ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'v') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'w') ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'w') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'y') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == 'y') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(217);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '-') ADVANCE(218);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '.') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '.') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '>') ADVANCE(234);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == '>') ADVANCE(235);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'A') ADVANCE(152);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'D') ADVANCE(159);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'E') ADVANCE(233);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'G') ADVANCE(233);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'I') ADVANCE(160);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'I') ADVANCE(161);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'I') ADVANCE(155);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'N') ADVANCE(149);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'N') ADVANCE(150);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'O') ADVANCE(154);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(170);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'O') ADVANCE(148);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'O') ADVANCE(233);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'P') ADVANCE(233);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'T') ADVANCE(153);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'W') ADVANCE(147);
      if (lookahead == 'c') ADVANCE(168);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'W') ADVANCE(147);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'a') ADVANCE(190);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'a') ADVANCE(210);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'a') ADVANCE(211);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'c') ADVANCE(183);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'c') ADVANCE(193);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'd') ADVANCE(69);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(194);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'd') ADVANCE(166);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'e') ADVANCE(207);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'e') ADVANCE(203);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'e') ADVANCE(64);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'e') ADVANCE(208);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'e') ADVANCE(169);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'e') ADVANCE(189);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'e') ADVANCE(200);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'e') ADVANCE(198);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'h') ADVANCE(188);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'i') ADVANCE(202);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'i') ADVANCE(175);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'k') ADVANCE(179);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'l') ADVANCE(164);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'l') ADVANCE(195);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'l') ADVANCE(181);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'm') ADVANCE(197);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'm') ADVANCE(177);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'n') ADVANCE(204);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'n') ADVANCE(191);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'n') ADVANCE(176);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'o') ADVANCE(205);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'o') ADVANCE(187);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'o') ADVANCE(199);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'o') ADVANCE(167);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'o') ADVANCE(209);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'p') ADVANCE(186);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'r') ADVANCE(60);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'r') ADVANCE(201);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'r') ADVANCE(171);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'r') ADVANCE(196);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 's') ADVANCE(180);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 's') ADVANCE(206);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 't') ADVANCE(68);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 't') ADVANCE(174);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 't') ADVANCE(178);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'v') ADVANCE(182);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'w') ADVANCE(71);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'w') ADVANCE(55);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'y') ADVANCE(53);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (lookahead == 'y') ADVANCE(51);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_bluemark_text_token1);
      if ((!eof && set_contains(aux_sym_bluemark_text_token1_character_set_1, 11, lookahead))) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACKHIGH_RBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACKURGENT_RBRACK);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACKLOW_RBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LBRACKCRITICAL_RBRACK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LBRACKMEDIUM_RBRACK);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_mention);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(216);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 41},
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
    [aux_sym_bluemark_text_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(31),
    [sym_section_header] = STATE(3),
    [sym_task] = STATE(3),
    [sym_checkbox] = STATE(9),
    [sym_bluemark] = STATE(11),
    [sym_code] = STATE(11),
    [sym_priority] = STATE(11),
    [sym_arrow] = STATE(11),
    [sym_parenthetical] = STATE(11),
    [sym_text_line] = STATE(3),
    [sym_line_content] = STATE(30),
    [sym_plain_text] = STATE(11),
    [sym_blank_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(11),
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
    [aux_sym_bluemark_text_token1] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(19),
    [sym_tag] = ACTIONS(21),
    [sym_mention] = ACTIONS(21),
    [sym_service_name] = ACTIONS(21),
    [sym_status] = ACTIONS(21),
    [anon_sym_DASH_GT] = ACTIONS(23),
    [anon_sym_EQ_GT] = ACTIONS(23),
    [anon_sym_u2192] = ACTIONS(23),
    [sym_date] = ACTIONS(21),
    [sym_time] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_url] = ACTIONS(21),
    [sym__newline] = ACTIONS(27),
  },
  [2] = {
    [sym_section_header] = STATE(2),
    [sym_task] = STATE(2),
    [sym_checkbox] = STATE(9),
    [sym_bluemark] = STATE(11),
    [sym_code] = STATE(11),
    [sym_priority] = STATE(11),
    [sym_arrow] = STATE(11),
    [sym_parenthetical] = STATE(11),
    [sym_text_line] = STATE(2),
    [sym_line_content] = STATE(30),
    [sym_plain_text] = STATE(11),
    [sym_blank_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_task_content_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_yesterday] = ACTIONS(31),
    [sym_today] = ACTIONS(31),
    [sym_tomorrow] = ACTIONS(31),
    [sym_blockers] = ACTIONS(31),
    [sym_notes] = ACTIONS(31),
    [sym_accomplishments] = ACTIONS(31),
    [sym_planned] = ACTIONS(31),
    [sym_review] = ACTIONS(31),
    [sym_bullet] = ACTIONS(34),
    [sym_number] = ACTIONS(37),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(40),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(40),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(40),
    [sym_bluemark_marker] = ACTIONS(43),
    [aux_sym_bluemark_text_token1] = ACTIONS(46),
    [anon_sym_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(52),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(52),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(52),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(52),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(52),
    [sym_tag] = ACTIONS(55),
    [sym_mention] = ACTIONS(55),
    [sym_service_name] = ACTIONS(55),
    [sym_status] = ACTIONS(55),
    [anon_sym_DASH_GT] = ACTIONS(58),
    [anon_sym_EQ_GT] = ACTIONS(58),
    [anon_sym_u2192] = ACTIONS(58),
    [sym_date] = ACTIONS(55),
    [sym_time] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym_url] = ACTIONS(55),
    [sym__newline] = ACTIONS(64),
  },
  [3] = {
    [sym_section_header] = STATE(2),
    [sym_task] = STATE(2),
    [sym_checkbox] = STATE(9),
    [sym_bluemark] = STATE(11),
    [sym_code] = STATE(11),
    [sym_priority] = STATE(11),
    [sym_arrow] = STATE(11),
    [sym_parenthetical] = STATE(11),
    [sym_text_line] = STATE(2),
    [sym_line_content] = STATE(30),
    [sym_plain_text] = STATE(11),
    [sym_blank_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_task_content_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(67),
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
    [aux_sym_bluemark_text_token1] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(19),
    [sym_tag] = ACTIONS(21),
    [sym_mention] = ACTIONS(21),
    [sym_service_name] = ACTIONS(21),
    [sym_status] = ACTIONS(21),
    [anon_sym_DASH_GT] = ACTIONS(23),
    [anon_sym_EQ_GT] = ACTIONS(23),
    [anon_sym_u2192] = ACTIONS(23),
    [sym_date] = ACTIONS(21),
    [sym_time] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_url] = ACTIONS(21),
    [sym__newline] = ACTIONS(27),
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
    [aux_sym_bluemark_text_token1] = ACTIONS(71),
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
    [aux_sym_bluemark_text_token1] = ACTIONS(75),
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
    [aux_sym_bluemark_text_token1] = ACTIONS(79),
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
    [aux_sym_bluemark_text_token1] = ACTIONS(83),
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
    [aux_sym_bluemark_text_token1] = ACTIONS(87),
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
    [sym__newline] = ACTIONS(85),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      sym_bluemark_marker,
    ACTIONS(15), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_task_content,
    ACTIONS(23), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(19), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    ACTIONS(89), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
    STATE(10), 7,
      sym_bluemark,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      sym_plain_text,
      aux_sym_task_content_repeat1,
  [46] = 9,
    ACTIONS(13), 1,
      sym_bluemark_marker,
    ACTIONS(15), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym__newline,
    ACTIONS(23), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(19), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    ACTIONS(91), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
    STATE(12), 7,
      sym_bluemark,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      sym_plain_text,
      aux_sym_task_content_repeat1,
  [92] = 9,
    ACTIONS(13), 1,
      sym_bluemark_marker,
    ACTIONS(15), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(23), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(19), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    ACTIONS(91), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
    STATE(12), 7,
      sym_bluemark,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      sym_plain_text,
      aux_sym_task_content_repeat1,
  [138] = 9,
    ACTIONS(97), 1,
      sym_bluemark_marker,
    ACTIONS(100), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(103), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      sym__newline,
    ACTIONS(112), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(106), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    ACTIONS(109), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
    STATE(12), 7,
      sym_bluemark,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      sym_plain_text,
      aux_sym_task_content_repeat1,
  [184] = 8,
    ACTIONS(122), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(125), 1,
      anon_sym_BQUOTE,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 2,
      sym_bluemark_marker,
      sym__newline,
    ACTIONS(134), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(128), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(13), 6,
      sym_bluemark_text,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_bluemark_content_repeat1,
    ACTIONS(131), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
  [227] = 3,
    ACTIONS(142), 1,
      aux_sym_bluemark_text_token1,
    STATE(13), 6,
      sym_bluemark_text,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_bluemark_content_repeat1,
    ACTIONS(140), 19,
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
  [260] = 8,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      aux_sym_bluemark_text_token1,
    STATE(22), 1,
      sym_bluemark_content,
    ACTIONS(23), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(19), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(14), 6,
      sym_bluemark_text,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_bluemark_content_repeat1,
    ACTIONS(146), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
  [302] = 2,
    ACTIONS(150), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(148), 19,
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
  [327] = 2,
    ACTIONS(154), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(152), 19,
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
  [352] = 2,
    ACTIONS(158), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(156), 19,
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
  [377] = 2,
    ACTIONS(162), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(160), 19,
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
  [402] = 2,
    ACTIONS(166), 1,
      aux_sym_bluemark_text_token1,
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
  [427] = 2,
    ACTIONS(170), 1,
      aux_sym_bluemark_text_token1,
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
  [452] = 2,
    ACTIONS(174), 1,
      aux_sym_bluemark_text_token1,
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
  [477] = 2,
    ACTIONS(178), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(176), 18,
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
  [501] = 2,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(182), 1,
      sym__newline,
  [508] = 1,
    ACTIONS(184), 1,
      sym__newline,
  [512] = 1,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
  [516] = 1,
    ACTIONS(188), 1,
      anon_sym_BQUOTE,
  [520] = 1,
    ACTIONS(190), 1,
      aux_sym_code_token1,
  [524] = 1,
    ACTIONS(192), 1,
      sym__newline,
  [528] = 1,
    ACTIONS(194), 1,
      sym__newline,
  [532] = 1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [536] = 1,
    ACTIONS(198), 1,
      aux_sym_parenthetical_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 46,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 227,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 302,
  [SMALL_STATE(17)] = 327,
  [SMALL_STATE(18)] = 352,
  [SMALL_STATE(19)] = 377,
  [SMALL_STATE(20)] = 402,
  [SMALL_STATE(21)] = 427,
  [SMALL_STATE(22)] = 452,
  [SMALL_STATE(23)] = 477,
  [SMALL_STATE(24)] = 501,
  [SMALL_STATE(25)] = 508,
  [SMALL_STATE(26)] = 512,
  [SMALL_STATE(27)] = 516,
  [SMALL_STATE(28)] = 520,
  [SMALL_STATE(29)] = 524,
  [SMALL_STATE(30)] = 528,
  [SMALL_STATE(31)] = 532,
  [SMALL_STATE(32)] = 536,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_content, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_content, 1, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bluemark_content, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bluemark_content, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_text, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_text, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bluemark_text, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bluemark_text, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bluemark, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bluemark, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checkbox, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
