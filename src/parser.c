#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 11
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 12

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
  sym__task_element = 43,
  sym_bluemark = 44,
  sym_bluemark_content = 45,
  sym__bluemark_element = 46,
  sym_bluemark_text = 47,
  sym_code = 48,
  sym_priority = 49,
  sym_arrow = 50,
  sym_parenthetical = 51,
  sym_text_line = 52,
  sym_line_content = 53,
  sym_plain_text = 54,
  sym_blank_line = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_task_content_repeat1 = 57,
  aux_sym_bluemark_content_repeat1 = 58,
  alias_sym_bluemark_arrow = 59,
  alias_sym_bluemark_code = 60,
  alias_sym_bluemark_date = 61,
  alias_sym_bluemark_mention = 62,
  alias_sym_bluemark_parenthetical = 63,
  alias_sym_bluemark_priority = 64,
  alias_sym_bluemark_service_name = 65,
  alias_sym_bluemark_status = 66,
  alias_sym_bluemark_tag = 67,
  alias_sym_bluemark_time = 68,
  alias_sym_bluemark_url = 69,
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
  [sym__task_element] = "_task_element",
  [sym_bluemark] = "bluemark",
  [sym_bluemark_content] = "bluemark_content",
  [sym__bluemark_element] = "_bluemark_element",
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
  [alias_sym_bluemark_arrow] = "bluemark_arrow",
  [alias_sym_bluemark_code] = "bluemark_code",
  [alias_sym_bluemark_date] = "bluemark_date",
  [alias_sym_bluemark_mention] = "bluemark_mention",
  [alias_sym_bluemark_parenthetical] = "bluemark_parenthetical",
  [alias_sym_bluemark_priority] = "bluemark_priority",
  [alias_sym_bluemark_service_name] = "bluemark_service_name",
  [alias_sym_bluemark_status] = "bluemark_status",
  [alias_sym_bluemark_tag] = "bluemark_tag",
  [alias_sym_bluemark_time] = "bluemark_time",
  [alias_sym_bluemark_url] = "bluemark_url",
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
  [sym__task_element] = sym__task_element,
  [sym_bluemark] = sym_bluemark,
  [sym_bluemark_content] = sym_bluemark_content,
  [sym__bluemark_element] = sym__bluemark_element,
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
  [alias_sym_bluemark_arrow] = alias_sym_bluemark_arrow,
  [alias_sym_bluemark_code] = alias_sym_bluemark_code,
  [alias_sym_bluemark_date] = alias_sym_bluemark_date,
  [alias_sym_bluemark_mention] = alias_sym_bluemark_mention,
  [alias_sym_bluemark_parenthetical] = alias_sym_bluemark_parenthetical,
  [alias_sym_bluemark_priority] = alias_sym_bluemark_priority,
  [alias_sym_bluemark_service_name] = alias_sym_bluemark_service_name,
  [alias_sym_bluemark_status] = alias_sym_bluemark_status,
  [alias_sym_bluemark_tag] = alias_sym_bluemark_tag,
  [alias_sym_bluemark_time] = alias_sym_bluemark_time,
  [alias_sym_bluemark_url] = alias_sym_bluemark_url,
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
  [sym__task_element] = {
    .visible = false,
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
  [sym__bluemark_element] = {
    .visible = false,
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
  [alias_sym_bluemark_arrow] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bluemark_code] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bluemark_date] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bluemark_mention] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bluemark_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bluemark_priority] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bluemark_service_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bluemark_status] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bluemark_tag] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bluemark_time] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bluemark_url] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_bluemark_tag,
  },
  [2] = {
    [0] = alias_sym_bluemark_mention,
  },
  [3] = {
    [0] = alias_sym_bluemark_service_name,
  },
  [4] = {
    [0] = alias_sym_bluemark_status,
  },
  [5] = {
    [0] = alias_sym_bluemark_date,
  },
  [6] = {
    [0] = alias_sym_bluemark_time,
  },
  [7] = {
    [0] = alias_sym_bluemark_url,
  },
  [8] = {
    [0] = alias_sym_bluemark_code,
  },
  [9] = {
    [0] = alias_sym_bluemark_priority,
  },
  [10] = {
    [0] = alias_sym_bluemark_arrow,
  },
  [11] = {
    [0] = alias_sym_bluemark_parenthetical,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_code, 2,
    sym_code,
    alias_sym_bluemark_code,
  sym_priority, 2,
    sym_priority,
    alias_sym_bluemark_priority,
  sym_arrow, 2,
    sym_arrow,
    alias_sym_bluemark_arrow,
  sym_parenthetical, 2,
    sym_parenthetical,
    alias_sym_bluemark_parenthetical,
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
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 41},
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
    [sym_source_file] = STATE(35),
    [sym_section_header] = STATE(3),
    [sym_task] = STATE(3),
    [sym_checkbox] = STATE(10),
    [sym__task_element] = STATE(9),
    [sym_bluemark] = STATE(46),
    [sym_code] = STATE(9),
    [sym_priority] = STATE(9),
    [sym_arrow] = STATE(9),
    [sym_parenthetical] = STATE(9),
    [sym_text_line] = STATE(3),
    [sym_line_content] = STATE(45),
    [sym_plain_text] = STATE(9),
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
    [sym_checkbox] = STATE(10),
    [sym__task_element] = STATE(9),
    [sym_bluemark] = STATE(46),
    [sym_code] = STATE(9),
    [sym_priority] = STATE(9),
    [sym_arrow] = STATE(9),
    [sym_parenthetical] = STATE(9),
    [sym_text_line] = STATE(2),
    [sym_line_content] = STATE(45),
    [sym_plain_text] = STATE(9),
    [sym_blank_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_task_content_repeat1] = STATE(9),
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
    [sym_checkbox] = STATE(10),
    [sym__task_element] = STATE(9),
    [sym_bluemark] = STATE(46),
    [sym_code] = STATE(9),
    [sym_priority] = STATE(9),
    [sym_arrow] = STATE(9),
    [sym_parenthetical] = STATE(9),
    [sym_text_line] = STATE(2),
    [sym_line_content] = STATE(45),
    [sym_plain_text] = STATE(9),
    [sym_blank_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_task_content_repeat1] = STATE(9),
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
  [0] = 10,
    ACTIONS(13), 1,
      sym_bluemark_marker,
    ACTIONS(15), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym__newline,
    STATE(40), 1,
      sym_bluemark,
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
    STATE(12), 7,
      sym__task_element,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      sym_plain_text,
      aux_sym_task_content_repeat1,
  [49] = 10,
    ACTIONS(13), 1,
      sym_bluemark_marker,
    ACTIONS(15), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_bluemark,
    STATE(42), 1,
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
    ACTIONS(93), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
    STATE(11), 7,
      sym__task_element,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      sym_plain_text,
      aux_sym_task_content_repeat1,
  [98] = 10,
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
    STATE(44), 1,
      sym_bluemark,
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
    STATE(12), 7,
      sym__task_element,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      sym_plain_text,
      aux_sym_task_content_repeat1,
  [147] = 8,
    ACTIONS(99), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(102), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 2,
      sym_bluemark_marker,
      sym__newline,
    ACTIONS(111), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    ACTIONS(105), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
    ACTIONS(108), 7,
      sym_tag,
      sym_mention,
      sym_service_name,
      sym_status,
      sym_date,
      sym_time,
      sym_url,
    STATE(12), 7,
      sym__task_element,
      sym_code,
      sym_priority,
      sym_arrow,
      sym_parenthetical,
      sym_plain_text,
      aux_sym_task_content_repeat1,
  [191] = 18,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(119), 1,
      sym_tag,
    ACTIONS(121), 1,
      sym_mention,
    ACTIONS(123), 1,
      sym_service_name,
    ACTIONS(125), 1,
      sym_status,
    ACTIONS(127), 1,
      sym_date,
    ACTIONS(129), 1,
      sym_time,
    ACTIONS(131), 1,
      sym_url,
    ACTIONS(133), 1,
      sym__newline,
    STATE(29), 1,
      sym_code,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym_arrow,
    STATE(32), 1,
      sym_parenthetical,
    ACTIONS(23), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    STATE(15), 3,
      sym__bluemark_element,
      sym_bluemark_text,
      aux_sym_bluemark_content_repeat1,
    ACTIONS(19), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
  [254] = 18,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(119), 1,
      sym_tag,
    ACTIONS(121), 1,
      sym_mention,
    ACTIONS(123), 1,
      sym_service_name,
    ACTIONS(125), 1,
      sym_status,
    ACTIONS(127), 1,
      sym_date,
    ACTIONS(129), 1,
      sym_time,
    ACTIONS(131), 1,
      sym_url,
    STATE(29), 1,
      sym_code,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym_arrow,
    STATE(32), 1,
      sym_parenthetical,
    STATE(38), 1,
      sym_bluemark_content,
    ACTIONS(23), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    STATE(13), 3,
      sym__bluemark_element,
      sym_bluemark_text,
      aux_sym_bluemark_content_repeat1,
    ACTIONS(19), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
  [317] = 18,
    ACTIONS(135), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(138), 1,
      anon_sym_BQUOTE,
    ACTIONS(144), 1,
      sym_tag,
    ACTIONS(147), 1,
      sym_mention,
    ACTIONS(150), 1,
      sym_service_name,
    ACTIONS(153), 1,
      sym_status,
    ACTIONS(159), 1,
      sym_date,
    ACTIONS(162), 1,
      sym_time,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      sym_url,
    ACTIONS(171), 1,
      sym__newline,
    STATE(29), 1,
      sym_code,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym_arrow,
    STATE(32), 1,
      sym_parenthetical,
    ACTIONS(156), 3,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
    STATE(15), 3,
      sym__bluemark_element,
      sym_bluemark_text,
      aux_sym_bluemark_content_repeat1,
    ACTIONS(141), 5,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      anon_sym_LBRACKMEDIUM_RBRACK,
  [380] = 2,
    ACTIONS(175), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(173), 19,
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
  [405] = 2,
    ACTIONS(179), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(177), 19,
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
    ACTIONS(183), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(181), 19,
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
    ACTIONS(187), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(185), 19,
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
    ACTIONS(191), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(189), 19,
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
    ACTIONS(193), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(195), 18,
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
  [529] = 2,
    ACTIONS(197), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(199), 18,
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
  [553] = 2,
    ACTIONS(201), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(203), 18,
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
  [577] = 2,
    ACTIONS(205), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(207), 18,
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
  [601] = 2,
    ACTIONS(209), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(211), 18,
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
  [625] = 2,
    ACTIONS(213), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(215), 18,
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
  [649] = 2,
    ACTIONS(217), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(219), 18,
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
  [673] = 2,
    ACTIONS(221), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(223), 18,
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
  [697] = 2,
    ACTIONS(225), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(227), 18,
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
  [721] = 2,
    ACTIONS(229), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(231), 18,
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
  [745] = 2,
    ACTIONS(233), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(235), 18,
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
  [769] = 2,
    ACTIONS(237), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(239), 18,
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
  [793] = 2,
    ACTIONS(243), 1,
      aux_sym_bluemark_text_token1,
    ACTIONS(241), 18,
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
  [817] = 2,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      sym__newline,
  [824] = 1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [828] = 1,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
  [832] = 1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [836] = 1,
    ACTIONS(255), 1,
      sym__newline,
  [840] = 1,
    ACTIONS(257), 1,
      aux_sym_code_token1,
  [844] = 1,
    ACTIONS(259), 1,
      sym__newline,
  [848] = 1,
    ACTIONS(95), 1,
      sym__newline,
  [852] = 1,
    ACTIONS(261), 1,
      sym__newline,
  [856] = 1,
    ACTIONS(263), 1,
      sym__newline,
  [860] = 1,
    ACTIONS(265), 1,
      sym__newline,
  [864] = 1,
    ACTIONS(267), 1,
      sym__newline,
  [868] = 1,
    ACTIONS(91), 1,
      sym__newline,
  [872] = 1,
    ACTIONS(269), 1,
      aux_sym_parenthetical_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 49,
  [SMALL_STATE(11)] = 98,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 191,
  [SMALL_STATE(14)] = 254,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 380,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 430,
  [SMALL_STATE(19)] = 455,
  [SMALL_STATE(20)] = 480,
  [SMALL_STATE(21)] = 505,
  [SMALL_STATE(22)] = 529,
  [SMALL_STATE(23)] = 553,
  [SMALL_STATE(24)] = 577,
  [SMALL_STATE(25)] = 601,
  [SMALL_STATE(26)] = 625,
  [SMALL_STATE(27)] = 649,
  [SMALL_STATE(28)] = 673,
  [SMALL_STATE(29)] = 697,
  [SMALL_STATE(30)] = 721,
  [SMALL_STATE(31)] = 745,
  [SMALL_STATE(32)] = 769,
  [SMALL_STATE(33)] = 793,
  [SMALL_STATE(34)] = 817,
  [SMALL_STATE(35)] = 824,
  [SMALL_STATE(36)] = 828,
  [SMALL_STATE(37)] = 832,
  [SMALL_STATE(38)] = 836,
  [SMALL_STATE(39)] = 840,
  [SMALL_STATE(40)] = 844,
  [SMALL_STATE(41)] = 848,
  [SMALL_STATE(42)] = 852,
  [SMALL_STATE(43)] = 856,
  [SMALL_STATE(44)] = 860,
  [SMALL_STATE(45)] = 864,
  [SMALL_STATE(46)] = 868,
  [SMALL_STATE(47)] = 872,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_content, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_content, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bluemark_content, 1, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bluemark_content_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_text, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_text, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bluemark_text, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bluemark_text, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 7),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 8),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 8),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 9),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 9),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 10),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 10),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bluemark_element, 1, 0, 11),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bluemark_element, 1, 0, 11),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checkbox, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [249] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bluemark, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_content, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_content, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
