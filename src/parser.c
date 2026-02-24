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
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  anon_sym_BQUOTE = 15,
  aux_sym_code_token1 = 16,
  anon_sym_LBRACKHIGH_RBRACK = 17,
  anon_sym_LBRACKURGENT_RBRACK = 18,
  anon_sym_LBRACKLOW_RBRACK = 19,
  anon_sym_LBRACKCRITICAL_RBRACK = 20,
  sym_tag = 21,
  sym_mention = 22,
  sym_service_name = 23,
  anon_sym_DONE = 24,
  anon_sym_WIP = 25,
  anon_sym_TODO = 26,
  anon_sym_BLOCKED = 27,
  anon_sym_PENDING = 28,
  anon_sym_COMPLETED = 29,
  anon_sym_IN_DASHPROGRESS = 30,
  anon_sym_INPROGRESS = 31,
  anon_sym_CANCELLED = 32,
  anon_sym_ONHOLD = 33,
  anon_sym_ON_DASHHOLD = 34,
  anon_sym_REVIEW = 35,
  anon_sym_MERGED = 36,
  anon_sym_DEPLOYED = 37,
  anon_sym_DASH_GT = 38,
  anon_sym_EQ_GT = 39,
  anon_sym_u2192 = 40,
  sym_date = 41,
  sym_time = 42,
  anon_sym_LPAREN = 43,
  aux_sym_parenthetical_token1 = 44,
  anon_sym_RPAREN = 45,
  sym_url = 46,
  sym_text = 47,
  aux_sym_text_line_token1 = 48,
  sym__newline = 49,
  sym_source_file = 50,
  sym_section_header = 51,
  sym_task = 52,
  sym_checkbox = 53,
  sym_task_content = 54,
  sym_code = 55,
  sym_priority = 56,
  sym_status = 57,
  sym_arrow = 58,
  sym_parenthetical = 59,
  sym_text_line = 60,
  sym_blank_line = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_task_content_repeat1 = 63,
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
  [anon_sym_BQUOTE] = "`",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_LBRACKHIGH_RBRACK] = "[HIGH]",
  [anon_sym_LBRACKURGENT_RBRACK] = "[URGENT]",
  [anon_sym_LBRACKLOW_RBRACK] = "[LOW]",
  [anon_sym_LBRACKCRITICAL_RBRACK] = "[CRITICAL]",
  [sym_tag] = "tag",
  [sym_mention] = "mention",
  [sym_service_name] = "service_name",
  [anon_sym_DONE] = "DONE",
  [anon_sym_WIP] = "WIP",
  [anon_sym_TODO] = "TODO",
  [anon_sym_BLOCKED] = "BLOCKED",
  [anon_sym_PENDING] = "PENDING",
  [anon_sym_COMPLETED] = "COMPLETED",
  [anon_sym_IN_DASHPROGRESS] = "IN-PROGRESS",
  [anon_sym_INPROGRESS] = "INPROGRESS",
  [anon_sym_CANCELLED] = "CANCELLED",
  [anon_sym_ONHOLD] = "ONHOLD",
  [anon_sym_ON_DASHHOLD] = "ON-HOLD",
  [anon_sym_REVIEW] = "REVIEW",
  [anon_sym_MERGED] = "MERGED",
  [anon_sym_DEPLOYED] = "DEPLOYED",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_u2192] = "\u2192",
  [sym_date] = "date",
  [sym_time] = "time",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [anon_sym_RPAREN] = ")",
  [sym_url] = "url",
  [sym_text] = "text",
  [aux_sym_text_line_token1] = "text_line_token1",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_section_header] = "section_header",
  [sym_task] = "task",
  [sym_checkbox] = "checkbox",
  [sym_task_content] = "task_content",
  [sym_code] = "code",
  [sym_priority] = "priority",
  [sym_status] = "status",
  [sym_arrow] = "arrow",
  [sym_parenthetical] = "parenthetical",
  [sym_text_line] = "text_line",
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
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_LBRACKHIGH_RBRACK] = anon_sym_LBRACKHIGH_RBRACK,
  [anon_sym_LBRACKURGENT_RBRACK] = anon_sym_LBRACKURGENT_RBRACK,
  [anon_sym_LBRACKLOW_RBRACK] = anon_sym_LBRACKLOW_RBRACK,
  [anon_sym_LBRACKCRITICAL_RBRACK] = anon_sym_LBRACKCRITICAL_RBRACK,
  [sym_tag] = sym_tag,
  [sym_mention] = sym_mention,
  [sym_service_name] = sym_service_name,
  [anon_sym_DONE] = anon_sym_DONE,
  [anon_sym_WIP] = anon_sym_WIP,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_BLOCKED] = anon_sym_BLOCKED,
  [anon_sym_PENDING] = anon_sym_PENDING,
  [anon_sym_COMPLETED] = anon_sym_COMPLETED,
  [anon_sym_IN_DASHPROGRESS] = anon_sym_IN_DASHPROGRESS,
  [anon_sym_INPROGRESS] = anon_sym_INPROGRESS,
  [anon_sym_CANCELLED] = anon_sym_CANCELLED,
  [anon_sym_ONHOLD] = anon_sym_ONHOLD,
  [anon_sym_ON_DASHHOLD] = anon_sym_ON_DASHHOLD,
  [anon_sym_REVIEW] = anon_sym_REVIEW,
  [anon_sym_MERGED] = anon_sym_MERGED,
  [anon_sym_DEPLOYED] = anon_sym_DEPLOYED,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_u2192] = anon_sym_u2192,
  [sym_date] = sym_date,
  [sym_time] = sym_time,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_url] = sym_url,
  [sym_text] = sym_text,
  [aux_sym_text_line_token1] = aux_sym_text_line_token1,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_section_header] = sym_section_header,
  [sym_task] = sym_task,
  [sym_checkbox] = sym_checkbox,
  [sym_task_content] = sym_task_content,
  [sym_code] = sym_code,
  [sym_priority] = sym_priority,
  [sym_status] = sym_status,
  [sym_arrow] = sym_arrow,
  [sym_parenthetical] = sym_parenthetical,
  [sym_text_line] = sym_text_line,
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
  [anon_sym_DONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WIP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BLOCKED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PENDING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMPLETED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN_DASHPROGRESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPROGRESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CANCELLED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ONHOLD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON_DASHHOLD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REVIEW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MERGED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEPLOYED] = {
    .visible = true,
    .named = false,
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_line_token1] = {
    .visible = false,
    .named = false,
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
  [sym_status] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 520,
        '\r', 1,
        '#', 235,
        '(', 345,
        ')', 348,
        ':', 240,
        '=', 72,
        '@', 236,
        'A', 178,
        'B', 119,
        'C', 73,
        'D', 88,
        'I', 129,
        'M', 89,
        'N', 201,
        'O', 130,
        'P', 97,
        'R', 90,
        'T', 136,
        'W', 113,
        'Y', 183,
        '[', 3,
        '`', 284,
        'a', 12,
        'b', 31,
        'h', 53,
        'n', 42,
        'p', 29,
        'r', 17,
        't', 37,
        'y', 18,
        0x2192, 327,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(520);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 520,
        '\r', 351,
        '#', 235,
        '(', 345,
        '-', 368,
        '=', 369,
        '@', 236,
        'B', 406,
        'C', 370,
        'D', 382,
        'I', 415,
        'M', 383,
        'O', 416,
        'P', 391,
        'R', 384,
        'T', 421,
        'W', 402,
        '[', 77,
        '`', 285,
        'h', 358,
        0x2192, 328,
        '\t', 352,
        ' ', 352,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == 'C') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(153);
      if (lookahead == 'X') ADVANCE(168);
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == 'X') ADVANCE(168);
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 235,
        '(', 345,
        '-', 368,
        '=', 369,
        '@', 236,
        'B', 406,
        'C', 370,
        'D', 382,
        'I', 415,
        'M', 383,
        'O', 416,
        'P', 391,
        'R', 384,
        'T', 421,
        'W', 402,
        '[', 77,
        '`', 285,
        'h', 358,
        0x2192, 328,
        '\t', 353,
        ' ', 353,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == 's') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == ':') ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(34);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(60);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(257);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'h') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 's') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 's') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 't') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 't') ADVANCE(263);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 't') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 't') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 't') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'w') ADVANCE(272);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'w') ADVANCE(248);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(245);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == 'H') ADVANCE(141);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(151);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(237);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(325);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 76:
      if (lookahead == 'C') ADVANCE(74);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(153);
      END_STATE();
    case 78:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'D') ADVANCE(320);
      END_STATE();
    case 80:
      if (lookahead == 'D') ADVANCE(314);
      END_STATE();
    case 81:
      if (lookahead == 'D') ADVANCE(302);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(316);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(322);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(312);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(306);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(139);
      END_STATE();
    case 87:
      if (lookahead == 'D') ADVANCE(117);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(296);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 101:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 102:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 103:
      if (lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 104:
      if (lookahead == 'G') ADVANCE(304);
      END_STATE();
    case 105:
      if (lookahead == 'G') ADVANCE(110);
      END_STATE();
    case 106:
      if (lookahead == 'G') ADVANCE(95);
      END_STATE();
    case 107:
      if (lookahead == 'G') ADVANCE(152);
      END_STATE();
    case 108:
      if (lookahead == 'G') ADVANCE(99);
      END_STATE();
    case 109:
      if (lookahead == 'G') ADVANCE(154);
      END_STATE();
    case 110:
      if (lookahead == 'H') ADVANCE(171);
      END_STATE();
    case 111:
      if (lookahead == 'H') ADVANCE(143);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 114:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 116:
      if (lookahead == 'I') ADVANCE(93);
      END_STATE();
    case 117:
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 118:
      if (lookahead == 'K') ADVANCE(98);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(173);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 126:
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 'M') ADVANCE(339);
      END_STATE();
    case 128:
      if (lookahead == 'M') ADVANCE(147);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(161);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 136:
      if (lookahead == 'O') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 137:
      if (lookahead == 'O') ADVANCE(75);
      END_STATE();
    case 138:
      if (lookahead == 'O') ADVANCE(165);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(300);
      END_STATE();
    case 140:
      if (lookahead == 'O') ADVANCE(166);
      END_STATE();
    case 141:
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 142:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 143:
      if (lookahead == 'O') ADVANCE(122);
      END_STATE();
    case 144:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 145:
      if (lookahead == 'P') ADVANCE(121);
      END_STATE();
    case 146:
      if (lookahead == 'P') ADVANCE(298);
      END_STATE();
    case 147:
      if (lookahead == 'P') ADVANCE(124);
      END_STATE();
    case 148:
      if (lookahead == 'P') ADVANCE(155);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(106);
      END_STATE();
    case 150:
      if (lookahead == 'R') ADVANCE(112);
      END_STATE();
    case 151:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 152:
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 153:
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 154:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 155:
      if (lookahead == 'R') ADVANCE(144);
      END_STATE();
    case 156:
      if (lookahead == 'S') ADVANCE(310);
      END_STATE();
    case 157:
      if (lookahead == 'S') ADVANCE(308);
      END_STATE();
    case 158:
      if (lookahead == 'S') ADVANCE(156);
      END_STATE();
    case 159:
      if (lookahead == 'S') ADVANCE(157);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(115);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(172);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(102);
      END_STATE();
    case 163:
      if (lookahead == 'V') ADVANCE(116);
      END_STATE();
    case 164:
      if (lookahead == 'W') ADVANCE(318);
      END_STATE();
    case 165:
      if (lookahead == 'W') ADVANCE(170);
      END_STATE();
    case 166:
      if (lookahead == 'Y') ADVANCE(100);
      END_STATE();
    case 167:
      if (lookahead == ']') ADVANCE(278);
      END_STATE();
    case 168:
      if (lookahead == ']') ADVANCE(282);
      END_STATE();
    case 169:
      if (lookahead == ']') ADVANCE(280);
      END_STATE();
    case 170:
      if (lookahead == ']') ADVANCE(290);
      END_STATE();
    case 171:
      if (lookahead == ']') ADVANCE(288);
      END_STATE();
    case 172:
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 173:
      if (lookahead == ']') ADVANCE(291);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 190:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 193:
      if (lookahead == 'k') ADVANCE(189);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(339);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 216:
      if (lookahead == 'v') ADVANCE(192);
      END_STATE();
    case 217:
      if (lookahead == 'w') ADVANCE(271);
      END_STATE();
    case 218:
      if (lookahead == 'w') ADVANCE(247);
      END_STATE();
    case 219:
      if (lookahead == 'y') ADVANCE(244);
      END_STATE();
    case 220:
      if (lookahead == 'y') ADVANCE(241);
      END_STATE();
    case 221:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(347);
      END_STATE();
    case 222:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(287);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 234:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 235:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 236:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(350);
      END_STATE();
    case 238:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 520,
        '\r', 462,
        '[', 4,
        '\t', 463,
        ' ', 463,
        'A', 473,
        'a', 473,
        'B', 492,
        'b', 492,
        'N', 498,
        'n', 498,
        'P', 490,
        'p', 490,
        'R', 478,
        'r', 478,
        'T', 499,
        't', 499,
        'Y', 479,
        'y', 479,
        '*', 274,
        '-', 274,
        0x2022, 274,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(519);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_yesterday);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_today);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_today);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_today);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_tomorrow);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_blockers);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 's') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 's') ADVANCE(258);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_accomplishments);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 's') ADVANCE(264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_planned);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_review);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_review);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_review);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
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
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_mention);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(460);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DONE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DONE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_WIP);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_WIP);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_TODO);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_BLOCKED);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BLOCKED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PENDING);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_PENDING);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COMPLETED);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COMPLETED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_IN_DASHPROGRESS);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_IN_DASHPROGRESS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_INPROGRESS);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_INPROGRESS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_CANCELLED);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_CANCELLED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_ONHOLD);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_ONHOLD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_ON_DASHHOLD);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_ON_DASHHOLD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_REVIEW);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_REVIEW);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_MERGED);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_MERGED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DEPLOYED);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DEPLOYED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_u2192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(230);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_date);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'P') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == 'A') ADVANCE(413);
      if (lookahead == 'P') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'P') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(413);
      if (lookahead == 'P') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '(' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        '\r', 351,
        '-', 368,
        '=', 369,
        'B', 406,
        'C', 370,
        'D', 382,
        'I', 415,
        'M', 383,
        'O', 416,
        'P', 391,
        'R', 384,
        'T', 421,
        'W', 402,
        '`', 285,
        'h', 358,
        0x2192, 328,
        '\t', 352,
        ' ', 352,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        '-', 368,
        '=', 369,
        'B', 406,
        'C', 370,
        'D', 382,
        'I', 415,
        'M', 383,
        'O', 416,
        'P', 391,
        'R', 384,
        'T', 421,
        'W', 402,
        '`', 285,
        'h', 358,
        0x2192, 328,
        '\t', 353,
        ' ', 353,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == 's') ADVANCE(355);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == ':') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == 't') ADVANCE(356);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == 't') ADVANCE(357);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(460);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == 'H') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(432);
      if (lookahead == 'P') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == ':') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == ':') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '/') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '/') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'A') ADVANCE(418);
      if (lookahead == 'O') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'C') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'O') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'G') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'G') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'G') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'G') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'H') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'I') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'I') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'I') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'K') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'M') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'M') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'P') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'P') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'P') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'P') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'R') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'R') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'R') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'S') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'S') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'S') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'S') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'T') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'W') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'Y') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '(' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(349);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead != 0) ADVANCE(519);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      ADVANCE_MAP(
        '\r', 462,
        '[', 464,
        ']', 519,
        '\t', 463,
        ' ', 463,
        'A', 473,
        'a', 473,
        'B', 492,
        'b', 492,
        'N', 498,
        'n', 498,
        'P', 490,
        'p', 490,
        'R', 478,
        'r', 478,
        'T', 499,
        't', 499,
        'Y', 479,
        'y', 479,
        '*', 275,
        '-', 275,
        0x2022, 275,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ' ') ADVANCE(466);
      if (lookahead == 'X') ADVANCE(467);
      if (lookahead == 'x') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ']') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ']') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'c') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'c') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'h') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'i') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'k') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 's') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'v') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'w') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'w') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'y') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'y') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 238},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 238},
  [12] = {.lex_state = 238},
  [13] = {.lex_state = 238},
  [14] = {.lex_state = 238},
  [15] = {.lex_state = 238},
  [16] = {.lex_state = 238},
  [17] = {.lex_state = 238},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 221},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 222},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
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
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_mention] = ACTIONS(1),
    [sym_service_name] = ACTIONS(1),
    [anon_sym_DONE] = ACTIONS(1),
    [anon_sym_WIP] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_BLOCKED] = ACTIONS(1),
    [anon_sym_PENDING] = ACTIONS(1),
    [anon_sym_COMPLETED] = ACTIONS(1),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(1),
    [anon_sym_INPROGRESS] = ACTIONS(1),
    [anon_sym_CANCELLED] = ACTIONS(1),
    [anon_sym_ONHOLD] = ACTIONS(1),
    [anon_sym_ON_DASHHOLD] = ACTIONS(1),
    [anon_sym_REVIEW] = ACTIONS(1),
    [anon_sym_MERGED] = ACTIONS(1),
    [anon_sym_DEPLOYED] = ACTIONS(1),
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
    [sym_source_file] = STATE(25),
    [sym_section_header] = STATE(11),
    [sym_task] = STATE(11),
    [sym_checkbox] = STATE(2),
    [sym_text_line] = STATE(11),
    [sym_blank_line] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
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
    [aux_sym_text_line_token1] = ACTIONS(11),
    [sym__newline] = ACTIONS(13),
  },
  [2] = {
    [sym_task_content] = STATE(20),
    [sym_code] = STATE(4),
    [sym_priority] = STATE(4),
    [sym_status] = STATE(4),
    [sym_arrow] = STATE(4),
    [sym_parenthetical] = STATE(4),
    [aux_sym_task_content_repeat1] = STATE(4),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(17),
    [sym_tag] = ACTIONS(19),
    [sym_mention] = ACTIONS(19),
    [sym_service_name] = ACTIONS(19),
    [anon_sym_DONE] = ACTIONS(21),
    [anon_sym_WIP] = ACTIONS(21),
    [anon_sym_TODO] = ACTIONS(21),
    [anon_sym_BLOCKED] = ACTIONS(21),
    [anon_sym_PENDING] = ACTIONS(21),
    [anon_sym_COMPLETED] = ACTIONS(21),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(21),
    [anon_sym_INPROGRESS] = ACTIONS(21),
    [anon_sym_CANCELLED] = ACTIONS(21),
    [anon_sym_ONHOLD] = ACTIONS(21),
    [anon_sym_ON_DASHHOLD] = ACTIONS(21),
    [anon_sym_REVIEW] = ACTIONS(21),
    [anon_sym_MERGED] = ACTIONS(21),
    [anon_sym_DEPLOYED] = ACTIONS(21),
    [anon_sym_DASH_GT] = ACTIONS(23),
    [anon_sym_EQ_GT] = ACTIONS(23),
    [anon_sym_u2192] = ACTIONS(23),
    [sym_date] = ACTIONS(19),
    [sym_time] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_url] = ACTIONS(19),
    [sym_text] = ACTIONS(19),
  },
  [3] = {
    [sym_code] = STATE(3),
    [sym_priority] = STATE(3),
    [sym_status] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_parenthetical] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(3),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(30),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(30),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(30),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(30),
    [sym_tag] = ACTIONS(33),
    [sym_mention] = ACTIONS(33),
    [sym_service_name] = ACTIONS(33),
    [anon_sym_DONE] = ACTIONS(36),
    [anon_sym_WIP] = ACTIONS(36),
    [anon_sym_TODO] = ACTIONS(36),
    [anon_sym_BLOCKED] = ACTIONS(36),
    [anon_sym_PENDING] = ACTIONS(36),
    [anon_sym_COMPLETED] = ACTIONS(36),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(36),
    [anon_sym_INPROGRESS] = ACTIONS(36),
    [anon_sym_CANCELLED] = ACTIONS(36),
    [anon_sym_ONHOLD] = ACTIONS(36),
    [anon_sym_ON_DASHHOLD] = ACTIONS(36),
    [anon_sym_REVIEW] = ACTIONS(36),
    [anon_sym_MERGED] = ACTIONS(36),
    [anon_sym_DEPLOYED] = ACTIONS(36),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_EQ_GT] = ACTIONS(39),
    [anon_sym_u2192] = ACTIONS(39),
    [sym_date] = ACTIONS(33),
    [sym_time] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(42),
    [sym_url] = ACTIONS(33),
    [sym_text] = ACTIONS(33),
    [sym__newline] = ACTIONS(45),
  },
  [4] = {
    [sym_code] = STATE(3),
    [sym_priority] = STATE(3),
    [sym_status] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_parenthetical] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(3),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(17),
    [sym_tag] = ACTIONS(47),
    [sym_mention] = ACTIONS(47),
    [sym_service_name] = ACTIONS(47),
    [anon_sym_DONE] = ACTIONS(21),
    [anon_sym_WIP] = ACTIONS(21),
    [anon_sym_TODO] = ACTIONS(21),
    [anon_sym_BLOCKED] = ACTIONS(21),
    [anon_sym_PENDING] = ACTIONS(21),
    [anon_sym_COMPLETED] = ACTIONS(21),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(21),
    [anon_sym_INPROGRESS] = ACTIONS(21),
    [anon_sym_CANCELLED] = ACTIONS(21),
    [anon_sym_ONHOLD] = ACTIONS(21),
    [anon_sym_ON_DASHHOLD] = ACTIONS(21),
    [anon_sym_REVIEW] = ACTIONS(21),
    [anon_sym_MERGED] = ACTIONS(21),
    [anon_sym_DEPLOYED] = ACTIONS(21),
    [anon_sym_DASH_GT] = ACTIONS(23),
    [anon_sym_EQ_GT] = ACTIONS(23),
    [anon_sym_u2192] = ACTIONS(23),
    [sym_date] = ACTIONS(47),
    [sym_time] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_url] = ACTIONS(47),
    [sym_text] = ACTIONS(47),
    [sym__newline] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(51), 31,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
      anon_sym_IN_DASHPROGRESS,
      anon_sym_INPROGRESS,
      anon_sym_CANCELLED,
      anon_sym_ONHOLD,
      anon_sym_ON_DASHHOLD,
      anon_sym_REVIEW,
      anon_sym_MERGED,
      anon_sym_DEPLOYED,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
      sym__newline,
  [34] = 1,
    ACTIONS(53), 31,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
      anon_sym_IN_DASHPROGRESS,
      anon_sym_INPROGRESS,
      anon_sym_CANCELLED,
      anon_sym_ONHOLD,
      anon_sym_ON_DASHHOLD,
      anon_sym_REVIEW,
      anon_sym_MERGED,
      anon_sym_DEPLOYED,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
      sym__newline,
  [68] = 1,
    ACTIONS(55), 31,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
      anon_sym_IN_DASHPROGRESS,
      anon_sym_INPROGRESS,
      anon_sym_CANCELLED,
      anon_sym_ONHOLD,
      anon_sym_ON_DASHHOLD,
      anon_sym_REVIEW,
      anon_sym_MERGED,
      anon_sym_DEPLOYED,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
      sym__newline,
  [102] = 1,
    ACTIONS(57), 31,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
      anon_sym_IN_DASHPROGRESS,
      anon_sym_INPROGRESS,
      anon_sym_CANCELLED,
      anon_sym_ONHOLD,
      anon_sym_ON_DASHHOLD,
      anon_sym_REVIEW,
      anon_sym_MERGED,
      anon_sym_DEPLOYED,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
      sym__newline,
  [136] = 1,
    ACTIONS(59), 31,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
      anon_sym_IN_DASHPROGRESS,
      anon_sym_INPROGRESS,
      anon_sym_CANCELLED,
      anon_sym_ONHOLD,
      anon_sym_ON_DASHHOLD,
      anon_sym_REVIEW,
      anon_sym_MERGED,
      anon_sym_DEPLOYED,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
      sym__newline,
  [170] = 1,
    ACTIONS(61), 30,
      anon_sym_BQUOTE,
      anon_sym_LBRACKHIGH_RBRACK,
      anon_sym_LBRACKURGENT_RBRACK,
      anon_sym_LBRACKLOW_RBRACK,
      anon_sym_LBRACKCRITICAL_RBRACK,
      sym_tag,
      sym_mention,
      sym_service_name,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
      anon_sym_IN_DASHPROGRESS,
      anon_sym_INPROGRESS,
      anon_sym_CANCELLED,
      anon_sym_ONHOLD,
      anon_sym_ON_DASHHOLD,
      anon_sym_REVIEW,
      anon_sym_MERGED,
      anon_sym_DEPLOYED,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
  [203] = 8,
    ACTIONS(11), 1,
      aux_sym_text_line_token1,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_checkbox,
    ACTIONS(7), 2,
      sym_bullet,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(12), 5,
      sym_section_header,
      sym_task,
      sym_text_line,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 8,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_accomplishments,
      sym_planned,
      sym_review,
  [242] = 8,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym_text_line_token1,
    ACTIONS(79), 1,
      sym__newline,
    STATE(2), 1,
      sym_checkbox,
    ACTIONS(70), 2,
      sym_bullet,
      sym_number,
    ACTIONS(73), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(12), 5,
      sym_section_header,
      sym_task,
      sym_text_line,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    ACTIONS(67), 8,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_accomplishments,
      sym_planned,
      sym_review,
  [281] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 15,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_accomplishments,
      sym_planned,
      sym_review,
      sym_bullet,
      sym_number,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
      aux_sym_text_line_token1,
      sym__newline,
  [302] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 15,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_accomplishments,
      sym_planned,
      sym_review,
      sym_bullet,
      sym_number,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
      aux_sym_text_line_token1,
      sym__newline,
  [323] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 15,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_accomplishments,
      sym_planned,
      sym_review,
      sym_bullet,
      sym_number,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
      aux_sym_text_line_token1,
      sym__newline,
  [344] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 15,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_accomplishments,
      sym_planned,
      sym_review,
      sym_bullet,
      sym_number,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
      aux_sym_text_line_token1,
      sym__newline,
  [365] = 2,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 15,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_accomplishments,
      sym_planned,
      sym_review,
      sym_bullet,
      sym_number,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
      aux_sym_text_line_token1,
      sym__newline,
  [386] = 2,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(104), 1,
      sym__newline,
  [393] = 1,
    ACTIONS(106), 1,
      aux_sym_parenthetical_token1,
  [397] = 1,
    ACTIONS(108), 1,
      sym__newline,
  [401] = 1,
    ACTIONS(110), 1,
      aux_sym_code_token1,
  [405] = 1,
    ACTIONS(112), 1,
      anon_sym_BQUOTE,
  [409] = 1,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
  [413] = 1,
    ACTIONS(116), 1,
      sym__newline,
  [417] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [421] = 1,
    ACTIONS(120), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 242,
  [SMALL_STATE(13)] = 281,
  [SMALL_STATE(14)] = 302,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 365,
  [SMALL_STATE(18)] = 386,
  [SMALL_STATE(19)] = 393,
  [SMALL_STATE(20)] = 397,
  [SMALL_STATE(21)] = 401,
  [SMALL_STATE(22)] = 405,
  [SMALL_STATE(23)] = 409,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 417,
  [SMALL_STATE(26)] = 421,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_content, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checkbox, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
