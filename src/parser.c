#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 52
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
  sym_highlight = 15,
  anon_sym_BQUOTE = 16,
  aux_sym_code_token1 = 17,
  anon_sym_LBRACKHIGH_RBRACK = 18,
  anon_sym_LBRACKURGENT_RBRACK = 19,
  anon_sym_LBRACKLOW_RBRACK = 20,
  anon_sym_LBRACKCRITICAL_RBRACK = 21,
  anon_sym_LBRACKMEDIUM_RBRACK = 22,
  sym_tag = 23,
  sym_mention = 24,
  sym_service_name = 25,
  sym_status = 26,
  anon_sym_DASH_GT = 27,
  anon_sym_EQ_GT = 28,
  anon_sym_u2192 = 29,
  sym_date = 30,
  sym_time = 31,
  anon_sym_LPAREN = 32,
  aux_sym_parenthetical_token1 = 33,
  anon_sym_RPAREN = 34,
  sym_url = 35,
  sym_plain_text = 36,
  sym__newline = 37,
  sym_source_file = 38,
  sym_section_header = 39,
  sym_task = 40,
  sym_checkbox = 41,
  sym_task_content = 42,
  sym_code = 43,
  sym_priority = 44,
  sym_arrow = 45,
  sym_parenthetical = 46,
  sym_text_line = 47,
  sym_line_content = 48,
  sym_blank_line = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_task_content_repeat1 = 51,
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
  [sym_highlight] = "highlight",
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
  [sym_highlight] = sym_highlight,
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
  [sym_highlight] = {
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
};

static TSCharacterRange sym_plain_text_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '"'}, {'$', '\''}, {'*', '9'}, {';', '='}, {'?', '?'}, {'A', 'Z'},
  {'\\', '\\'}, {'^', '_'}, {'a', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      ADVANCE_MAP(
        '\n', 254,
        '\r', 1,
        '#', 47,
        '(', 107,
        ')', 110,
        '-', 78,
        ':', 54,
        '=', 178,
        '@', 48,
        'A', 194,
        'B', 217,
        'D', 188,
        'N', 224,
        'P', 216,
        'R', 204,
        'T', 189,
        'W', 183,
        'Y', 205,
        '[', 4,
        '`', 84,
        'a', 118,
        'b', 137,
        'h', 159,
        'n', 148,
        'p', 135,
        'r', 123,
        't', 143,
        'y', 124,
        0x2192, 98,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '*' ||
          lookahead == 0x2022) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(253);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(254);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 254,
        '\r', 1,
        '#', 47,
        '(', 107,
        '-', 177,
        ':', 7,
        '=', 178,
        '@', 48,
        'A', 195,
        'D', 188,
        'T', 190,
        'W', 183,
        '[', 9,
        '`', 84,
        'h', 159,
        0x2192, 98,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(253);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
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
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(50);
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
      if (lookahead == 'M') ADVANCE(104);
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
      if (lookahead == ']') ADVANCE(80);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(82);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(81);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(89);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(91);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(88);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(109);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(111);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      ADVANCE_MAP(
        '\n', 254,
        '\r', 1,
        '#', 47,
        '(', 107,
        '-', 78,
        ':', 7,
        '=', 178,
        '@', 48,
        'A', 194,
        'B', 217,
        'D', 188,
        'N', 224,
        'P', 216,
        'R', 204,
        'T', 189,
        'W', 183,
        'Y', 205,
        '[', 4,
        '`', 84,
        'a', 118,
        'b', 137,
        'h', 159,
        'n', 148,
        'p', 135,
        'r', 123,
        't', 143,
        'y', 124,
        0x2192, 98,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(51);
      if (lookahead == '*' ||
          lookahead == 0x2022) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(253);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_yesterday);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead == '-') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_today);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_today);
      if (lookahead == '-') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tomorrow);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead == '-') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_blockers);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 's') ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 's') ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_accomplishments);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 's') ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_planned);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead == '-') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_review);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_review);
      if (lookahead == '-') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACKHIGH_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACKURGENT_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACKLOW_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACKCRITICAL_RBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACKMEDIUM_RBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_mention);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(248);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == 's') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == ':') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'a') ADVANCE(140);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'a') ADVANCE(165);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'a') ADVANCE(166);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'd') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'd') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'h') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 's') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 's') ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 't') ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 't') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 't') ADVANCE(157);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 't') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 't') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'w') ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'w') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'y') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == 'y') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(249);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(250);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '>') ADVANCE(96);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '>') ADVANCE(97);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'A') ADVANCE(184);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(191);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(95);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'G') ADVANCE(95);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(192);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(193);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(187);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(181);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(182);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(186);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(202);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(180);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(95);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'P') ADVANCE(95);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'T') ADVANCE(185);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'W') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(200);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'W') ADVANCE(179);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(222);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(242);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(243);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'c') ADVANCE(215);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'c') ADVANCE(225);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(73);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(226);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(198);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(239);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(235);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(68);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(240);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(201);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(221);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(232);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(230);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'h') ADVANCE(220);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'i') ADVANCE(234);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'i') ADVANCE(207);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'k') ADVANCE(211);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'l') ADVANCE(196);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'l') ADVANCE(227);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'l') ADVANCE(213);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'm') ADVANCE(229);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'm') ADVANCE(209);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(236);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(223);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(208);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(237);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(219);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(231);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(199);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(241);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'p') ADVANCE(218);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(64);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(233);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(203);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(228);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 's') ADVANCE(212);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 's') ADVANCE(238);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(72);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(206);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(210);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'v') ADVANCE(214);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'w') ADVANCE(75);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'w') ADVANCE(59);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'y') ADVANCE(57);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'y') ADVANCE(55);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_plain_text);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_plain_text);
      if ((!eof && set_contains(sym_plain_text_character_set_1, 11, lookahead))) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__newline);
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
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 41},
  [26] = {.lex_state = 42},
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
    [sym_highlight] = ACTIONS(1),
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
    [sym_source_file] = STATE(24),
    [sym_section_header] = STATE(3),
    [sym_task] = STATE(3),
    [sym_checkbox] = STATE(10),
    [sym_code] = STATE(9),
    [sym_priority] = STATE(9),
    [sym_arrow] = STATE(9),
    [sym_parenthetical] = STATE(9),
    [sym_text_line] = STATE(3),
    [sym_line_content] = STATE(21),
    [sym_blank_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(9),
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
    [sym_highlight] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(17),
    [sym_tag] = ACTIONS(13),
    [sym_mention] = ACTIONS(13),
    [sym_service_name] = ACTIONS(13),
    [sym_status] = ACTIONS(13),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ_GT] = ACTIONS(19),
    [anon_sym_u2192] = ACTIONS(19),
    [sym_date] = ACTIONS(13),
    [sym_time] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_url] = ACTIONS(13),
    [sym_plain_text] = ACTIONS(23),
    [sym__newline] = ACTIONS(25),
  },
  [2] = {
    [sym_section_header] = STATE(2),
    [sym_task] = STATE(2),
    [sym_checkbox] = STATE(10),
    [sym_code] = STATE(9),
    [sym_priority] = STATE(9),
    [sym_arrow] = STATE(9),
    [sym_parenthetical] = STATE(9),
    [sym_text_line] = STATE(2),
    [sym_line_content] = STATE(21),
    [sym_blank_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_task_content_repeat1] = STATE(9),
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
    [sym_number] = ACTIONS(35),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(38),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(38),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(38),
    [sym_highlight] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(44),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(47),
    [sym_tag] = ACTIONS(41),
    [sym_mention] = ACTIONS(41),
    [sym_service_name] = ACTIONS(41),
    [sym_status] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(50),
    [anon_sym_EQ_GT] = ACTIONS(50),
    [anon_sym_u2192] = ACTIONS(50),
    [sym_date] = ACTIONS(41),
    [sym_time] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(53),
    [sym_url] = ACTIONS(41),
    [sym_plain_text] = ACTIONS(56),
    [sym__newline] = ACTIONS(59),
  },
  [3] = {
    [sym_section_header] = STATE(2),
    [sym_task] = STATE(2),
    [sym_checkbox] = STATE(10),
    [sym_code] = STATE(9),
    [sym_priority] = STATE(9),
    [sym_arrow] = STATE(9),
    [sym_parenthetical] = STATE(9),
    [sym_text_line] = STATE(2),
    [sym_line_content] = STATE(21),
    [sym_blank_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_task_content_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(62),
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
    [sym_highlight] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(17),
    [sym_tag] = ACTIONS(13),
    [sym_mention] = ACTIONS(13),
    [sym_service_name] = ACTIONS(13),
    [sym_status] = ACTIONS(13),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ_GT] = ACTIONS(19),
    [anon_sym_u2192] = ACTIONS(19),
    [sym_date] = ACTIONS(13),
    [sym_time] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_url] = ACTIONS(13),
    [sym_plain_text] = ACTIONS(23),
    [sym__newline] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_yesterday] = ACTIONS(66),
    [sym_today] = ACTIONS(66),
    [sym_tomorrow] = ACTIONS(66),
    [sym_blockers] = ACTIONS(66),
    [sym_notes] = ACTIONS(66),
    [sym_accomplishments] = ACTIONS(66),
    [sym_planned] = ACTIONS(66),
    [sym_review] = ACTIONS(66),
    [sym_bullet] = ACTIONS(66),
    [sym_number] = ACTIONS(64),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(64),
    [sym_highlight] = ACTIONS(64),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(64),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(64),
    [sym_tag] = ACTIONS(64),
    [sym_mention] = ACTIONS(64),
    [sym_service_name] = ACTIONS(64),
    [sym_status] = ACTIONS(64),
    [anon_sym_DASH_GT] = ACTIONS(64),
    [anon_sym_EQ_GT] = ACTIONS(64),
    [anon_sym_u2192] = ACTIONS(64),
    [sym_date] = ACTIONS(64),
    [sym_time] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_url] = ACTIONS(64),
    [sym_plain_text] = ACTIONS(66),
    [sym__newline] = ACTIONS(64),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_yesterday] = ACTIONS(70),
    [sym_today] = ACTIONS(70),
    [sym_tomorrow] = ACTIONS(70),
    [sym_blockers] = ACTIONS(70),
    [sym_notes] = ACTIONS(70),
    [sym_accomplishments] = ACTIONS(70),
    [sym_planned] = ACTIONS(70),
    [sym_review] = ACTIONS(70),
    [sym_bullet] = ACTIONS(70),
    [sym_number] = ACTIONS(68),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(68),
    [sym_highlight] = ACTIONS(68),
    [anon_sym_BQUOTE] = ACTIONS(68),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(68),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(68),
    [sym_tag] = ACTIONS(68),
    [sym_mention] = ACTIONS(68),
    [sym_service_name] = ACTIONS(68),
    [sym_status] = ACTIONS(68),
    [anon_sym_DASH_GT] = ACTIONS(68),
    [anon_sym_EQ_GT] = ACTIONS(68),
    [anon_sym_u2192] = ACTIONS(68),
    [sym_date] = ACTIONS(68),
    [sym_time] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym_url] = ACTIONS(68),
    [sym_plain_text] = ACTIONS(70),
    [sym__newline] = ACTIONS(68),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_yesterday] = ACTIONS(74),
    [sym_today] = ACTIONS(74),
    [sym_tomorrow] = ACTIONS(74),
    [sym_blockers] = ACTIONS(74),
    [sym_notes] = ACTIONS(74),
    [sym_accomplishments] = ACTIONS(74),
    [sym_planned] = ACTIONS(74),
    [sym_review] = ACTIONS(74),
    [sym_bullet] = ACTIONS(74),
    [sym_number] = ACTIONS(72),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(72),
    [sym_highlight] = ACTIONS(72),
    [anon_sym_BQUOTE] = ACTIONS(72),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(72),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(72),
    [sym_tag] = ACTIONS(72),
    [sym_mention] = ACTIONS(72),
    [sym_service_name] = ACTIONS(72),
    [sym_status] = ACTIONS(72),
    [anon_sym_DASH_GT] = ACTIONS(72),
    [anon_sym_EQ_GT] = ACTIONS(72),
    [anon_sym_u2192] = ACTIONS(72),
    [sym_date] = ACTIONS(72),
    [sym_time] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_url] = ACTIONS(72),
    [sym_plain_text] = ACTIONS(74),
    [sym__newline] = ACTIONS(72),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_yesterday] = ACTIONS(78),
    [sym_today] = ACTIONS(78),
    [sym_tomorrow] = ACTIONS(78),
    [sym_blockers] = ACTIONS(78),
    [sym_notes] = ACTIONS(78),
    [sym_accomplishments] = ACTIONS(78),
    [sym_planned] = ACTIONS(78),
    [sym_review] = ACTIONS(78),
    [sym_bullet] = ACTIONS(78),
    [sym_number] = ACTIONS(76),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(76),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(76),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(76),
    [sym_highlight] = ACTIONS(76),
    [anon_sym_BQUOTE] = ACTIONS(76),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(76),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(76),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(76),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(76),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(76),
    [sym_tag] = ACTIONS(76),
    [sym_mention] = ACTIONS(76),
    [sym_service_name] = ACTIONS(76),
    [sym_status] = ACTIONS(76),
    [anon_sym_DASH_GT] = ACTIONS(76),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_u2192] = ACTIONS(76),
    [sym_date] = ACTIONS(76),
    [sym_time] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(76),
    [sym_url] = ACTIONS(76),
    [sym_plain_text] = ACTIONS(78),
    [sym__newline] = ACTIONS(76),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_yesterday] = ACTIONS(82),
    [sym_today] = ACTIONS(82),
    [sym_tomorrow] = ACTIONS(82),
    [sym_blockers] = ACTIONS(82),
    [sym_notes] = ACTIONS(82),
    [sym_accomplishments] = ACTIONS(82),
    [sym_planned] = ACTIONS(82),
    [sym_review] = ACTIONS(82),
    [sym_bullet] = ACTIONS(82),
    [sym_number] = ACTIONS(80),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(80),
    [sym_highlight] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACKMEDIUM_RBRACK] = ACTIONS(80),
    [sym_tag] = ACTIONS(80),
    [sym_mention] = ACTIONS(80),
    [sym_service_name] = ACTIONS(80),
    [sym_status] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(80),
    [anon_sym_EQ_GT] = ACTIONS(80),
    [anon_sym_u2192] = ACTIONS(80),
    [sym_date] = ACTIONS(80),
    [sym_time] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym_url] = ACTIONS(80),
    [sym_plain_text] = ACTIONS(82),
    [sym__newline] = ACTIONS(80),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      sym_plain_text,
    ACTIONS(88), 1,
      sym__newline,
    ACTIONS(19), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(17), 5,
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
      aux_sym_task_content_repeat1,
    ACTIONS(84), 8,
      sym_highlight,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
  [42] = 8,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      sym_plain_text,
    STATE(20), 1,
      sym_task_content,
    ACTIONS(19), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(17), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    STATE(12), 5,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(90), 8,
      sym_highlight,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
  [84] = 8,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_plain_text,
    ACTIONS(112), 1,
      sym__newline,
    ACTIONS(103), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(100), 5,
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
      aux_sym_task_content_repeat1,
    ACTIONS(94), 8,
      sym_highlight,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
  [126] = 8,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      sym_plain_text,
    ACTIONS(114), 1,
      sym__newline,
    ACTIONS(19), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(17), 5,
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
      aux_sym_task_content_repeat1,
    ACTIONS(84), 8,
      sym_highlight,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
  [168] = 2,
    ACTIONS(118), 1,
      sym_plain_text,
    ACTIONS(116), 19,
      sym_highlight,
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
  [193] = 2,
    ACTIONS(122), 1,
      sym_plain_text,
    ACTIONS(120), 19,
      sym_highlight,
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
  [218] = 2,
    ACTIONS(126), 1,
      sym_plain_text,
    ACTIONS(124), 19,
      sym_highlight,
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
  [243] = 2,
    ACTIONS(130), 1,
      sym_plain_text,
    ACTIONS(128), 19,
      sym_highlight,
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
  [268] = 2,
    ACTIONS(134), 1,
      sym_plain_text,
    ACTIONS(132), 18,
      sym_highlight,
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
  [292] = 2,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(138), 1,
      sym__newline,
  [299] = 1,
    ACTIONS(140), 1,
      sym__newline,
  [303] = 1,
    ACTIONS(142), 1,
      sym__newline,
  [307] = 1,
    ACTIONS(144), 1,
      sym__newline,
  [311] = 1,
    ACTIONS(146), 1,
      anon_sym_BQUOTE,
  [315] = 1,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
  [319] = 1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [323] = 1,
    ACTIONS(152), 1,
      aux_sym_parenthetical_token1,
  [327] = 1,
    ACTIONS(154), 1,
      aux_sym_code_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 168,
  [SMALL_STATE(14)] = 193,
  [SMALL_STATE(15)] = 218,
  [SMALL_STATE(16)] = 243,
  [SMALL_STATE(17)] = 268,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 307,
  [SMALL_STATE(22)] = 311,
  [SMALL_STATE(23)] = 315,
  [SMALL_STATE(24)] = 319,
  [SMALL_STATE(25)] = 323,
  [SMALL_STATE(26)] = 327,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_content, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_content, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checkbox, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
