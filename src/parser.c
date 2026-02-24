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
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_GT = 1,
  aux_sym_quote_token1 = 2,
  anon_sym_COLON = 3,
  sym_yesterday = 4,
  sym_today = 5,
  sym_tomorrow = 6,
  sym_blockers = 7,
  sym_notes = 8,
  sym_accomplishments = 9,
  sym_planned = 10,
  sym_review = 11,
  sym_bullet = 12,
  sym_number = 13,
  anon_sym_LBRACK_RBRACK = 14,
  anon_sym_LBRACKx_RBRACK = 15,
  anon_sym_LBRACKX_RBRACK = 16,
  anon_sym_BQUOTE = 17,
  aux_sym_code_token1 = 18,
  anon_sym_LBRACKHIGH_RBRACK = 19,
  anon_sym_LBRACKURGENT_RBRACK = 20,
  anon_sym_LBRACKLOW_RBRACK = 21,
  anon_sym_LBRACKCRITICAL_RBRACK = 22,
  sym_tag = 23,
  sym_mention = 24,
  sym_service_name = 25,
  anon_sym_DONE = 26,
  anon_sym_WIP = 27,
  anon_sym_TODO = 28,
  anon_sym_BLOCKED = 29,
  anon_sym_PENDING = 30,
  anon_sym_COMPLETED = 31,
  anon_sym_IN_DASHPROGRESS = 32,
  anon_sym_INPROGRESS = 33,
  anon_sym_CANCELLED = 34,
  anon_sym_ONHOLD = 35,
  anon_sym_ON_DASHHOLD = 36,
  anon_sym_REVIEW = 37,
  anon_sym_MERGED = 38,
  anon_sym_DEPLOYED = 39,
  anon_sym_DASH_GT = 40,
  anon_sym_EQ_GT = 41,
  anon_sym_u2192 = 42,
  sym_date = 43,
  sym_time = 44,
  anon_sym_LPAREN = 45,
  aux_sym_parenthetical_token1 = 46,
  anon_sym_RPAREN = 47,
  sym_url = 48,
  sym_plain_text = 49,
  sym__newline = 50,
  sym_source_file = 51,
  sym_quote = 52,
  sym_section_header = 53,
  sym_task = 54,
  sym_checkbox = 55,
  sym_task_content = 56,
  sym_code = 57,
  sym_priority = 58,
  sym_status = 59,
  sym_arrow = 60,
  sym_parenthetical = 61,
  sym_text_line = 62,
  sym_line_content = 63,
  sym_blank_line = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_task_content_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GT] = ">",
  [aux_sym_quote_token1] = "quote_token1",
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
  [sym_plain_text] = "plain_text",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_quote] = "quote",
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
  [sym_line_content] = "line_content",
  [sym_blank_line] = "blank_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_task_content_repeat1] = "task_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_quote_token1] = aux_sym_quote_token1,
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
  [sym_plain_text] = sym_plain_text,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_quote] = sym_quote,
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quote_token1] = {
    .visible = false,
    .named = false,
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
  [sym_quote] = {
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
  [29] = 29,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 582,
        '\r', 1,
        '#', 235,
        '(', 359,
        ')', 362,
        '-', 290,
        ':', 244,
        '=', 71,
        '>', 240,
        '@', 236,
        'A', 177,
        'B', 118,
        'C', 72,
        'D', 87,
        'I', 128,
        'M', 88,
        'N', 200,
        'O', 129,
        'P', 96,
        'R', 89,
        'T', 135,
        'W', 112,
        'Y', 182,
        '[', 3,
        '`', 298,
        'a', 11,
        'b', 30,
        'h', 52,
        'n', 41,
        'p', 28,
        'r', 16,
        't', 36,
        'y', 17,
        0x2192, 341,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '*' ||
          lookahead == 0x2022) ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(582);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 582,
        '\r', 365,
        '#', 235,
        '(', 359,
        '-', 438,
        '=', 439,
        '@', 236,
        'B', 479,
        'C', 440,
        'D', 452,
        'I', 488,
        'M', 453,
        'O', 489,
        'P', 463,
        'R', 455,
        'T', 495,
        'W', 474,
        '[', 76,
        '`', 298,
        'h', 415,
        0x2192, 342,
        '\t', 367,
        ' ', 367,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(581);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(152);
      if (lookahead == 'X') ADVANCE(167);
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 235,
        '(', 359,
        '-', 438,
        '=', 439,
        '@', 236,
        'B', 479,
        'C', 440,
        'D', 452,
        'I', 488,
        'M', 453,
        'O', 489,
        'P', 463,
        'R', 455,
        'T', 495,
        'W', 474,
        '[', 76,
        '`', 298,
        'h', 415,
        0x2192, 342,
        '\t', 425,
        ' ', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(581);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == 's') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == ':') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(33);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(58);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(282);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(266);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'h') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(258);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 's') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 's') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 't') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 't') ADVANCE(274);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 't') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 't') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 't') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'w') ADVANCE(286);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'w') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(246);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == 'H') ADVANCE(140);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(147);
      if (lookahead == 'P') ADVANCE(150);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(237);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(339);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 74:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(152);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'D') ADVANCE(333);
      END_STATE();
    case 79:
      if (lookahead == 'D') ADVANCE(327);
      END_STATE();
    case 80:
      if (lookahead == 'D') ADVANCE(315);
      END_STATE();
    case 81:
      if (lookahead == 'D') ADVANCE(329);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(335);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(325);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(319);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(138);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(116);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(309);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(163);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(125);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 101:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 102:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 103:
      if (lookahead == 'G') ADVANCE(317);
      END_STATE();
    case 104:
      if (lookahead == 'G') ADVANCE(109);
      END_STATE();
    case 105:
      if (lookahead == 'G') ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 'G') ADVANCE(151);
      END_STATE();
    case 107:
      if (lookahead == 'G') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == 'G') ADVANCE(153);
      END_STATE();
    case 109:
      if (lookahead == 'H') ADVANCE(170);
      END_STATE();
    case 110:
      if (lookahead == 'H') ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'I') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 113:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 114:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 116:
      if (lookahead == 'I') ADVANCE(134);
      END_STATE();
    case 117:
      if (lookahead == 'K') ADVANCE(97);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(79);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(172);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(93);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead == 'M') ADVANCE(353);
      END_STATE();
    case 127:
      if (lookahead == 'M') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 135:
      if (lookahead == 'O') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 136:
      if (lookahead == 'O') ADVANCE(74);
      END_STATE();
    case 137:
      if (lookahead == 'O') ADVANCE(164);
      END_STATE();
    case 138:
      if (lookahead == 'O') ADVANCE(313);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(165);
      END_STATE();
    case 140:
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 141:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 142:
      if (lookahead == 'O') ADVANCE(121);
      END_STATE();
    case 143:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 144:
      if (lookahead == 'P') ADVANCE(120);
      END_STATE();
    case 145:
      if (lookahead == 'P') ADVANCE(311);
      END_STATE();
    case 146:
      if (lookahead == 'P') ADVANCE(123);
      END_STATE();
    case 147:
      if (lookahead == 'P') ADVANCE(154);
      END_STATE();
    case 148:
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(111);
      END_STATE();
    case 150:
      if (lookahead == 'R') ADVANCE(141);
      END_STATE();
    case 151:
      if (lookahead == 'R') ADVANCE(91);
      END_STATE();
    case 152:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 153:
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 154:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 155:
      if (lookahead == 'S') ADVANCE(323);
      END_STATE();
    case 156:
      if (lookahead == 'S') ADVANCE(321);
      END_STATE();
    case 157:
      if (lookahead == 'S') ADVANCE(155);
      END_STATE();
    case 158:
      if (lookahead == 'S') ADVANCE(156);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(114);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(101);
      END_STATE();
    case 162:
      if (lookahead == 'V') ADVANCE(115);
      END_STATE();
    case 163:
      if (lookahead == 'W') ADVANCE(331);
      END_STATE();
    case 164:
      if (lookahead == 'W') ADVANCE(169);
      END_STATE();
    case 165:
      if (lookahead == 'Y') ADVANCE(99);
      END_STATE();
    case 166:
      if (lookahead == ']') ADVANCE(295);
      END_STATE();
    case 167:
      if (lookahead == ']') ADVANCE(297);
      END_STATE();
    case 168:
      if (lookahead == ']') ADVANCE(296);
      END_STATE();
    case 169:
      if (lookahead == ']') ADVANCE(303);
      END_STATE();
    case 170:
      if (lookahead == ']') ADVANCE(301);
      END_STATE();
    case 171:
      if (lookahead == ']') ADVANCE(302);
      END_STATE();
    case 172:
      if (lookahead == ']') ADVANCE(304);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(281);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 189:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 192:
      if (lookahead == 'k') ADVANCE(188);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(353);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 215:
      if (lookahead == 'v') ADVANCE(191);
      END_STATE();
    case 216:
      if (lookahead == 'w') ADVANCE(285);
      END_STATE();
    case 217:
      if (lookahead == 'w') ADVANCE(253);
      END_STATE();
    case 218:
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 219:
      if (lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 221:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(361);
      END_STATE();
    case 222:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(300);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 235:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 236:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(364);
      END_STATE();
    case 238:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 582,
        '\r', 365,
        '#', 235,
        '(', 359,
        '-', 291,
        '=', 439,
        '>', 241,
        '@', 236,
        'A', 524,
        'B', 478,
        'C', 440,
        'D', 452,
        'I', 488,
        'M', 453,
        'N', 547,
        'O', 489,
        'P', 462,
        'R', 454,
        'T', 494,
        'W', 474,
        'Y', 529,
        '[', 3,
        '`', 298,
        'a', 374,
        'b', 393,
        'h', 415,
        'n', 404,
        'p', 391,
        'r', 379,
        't', 399,
        'y', 380,
        0x2192, 342,
        '\t', 366,
        ' ', 366,
        '*', 292,
        0x2022, 292,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != ']') ADVANCE(581);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_quote_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_quote_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_yesterday);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead == '-') ADVANCE(580);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_today);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_today);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_today);
      if (lookahead == '-') ADVANCE(580);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_today);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_tomorrow);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead == '-') ADVANCE(580);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_blockers);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 's') ADVANCE(259);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 's') ADVANCE(261);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(580);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 's') ADVANCE(267);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 's') ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(580);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_accomplishments);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == 's') ADVANCE(275);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 's') ADVANCE(277);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(580);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_planned);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead == '-') ADVANCE(580);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_review);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_review);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_review);
      if (lookahead == '-') ADVANCE(580);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_review);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead == '>') ADVANCE(337);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead == '>') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACKHIGH_RBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACKURGENT_RBRACK);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACKLOW_RBRACK);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACKCRITICAL_RBRACK);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_mention);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(580);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DONE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DONE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_WIP);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_WIP);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_TODO);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_BLOCKED);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_BLOCKED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PENDING);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_PENDING);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_COMPLETED);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_COMPLETED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_IN_DASHPROGRESS);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_IN_DASHPROGRESS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_INPROGRESS);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_INPROGRESS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_CANCELLED);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_CANCELLED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_ONHOLD);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_ONHOLD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_ON_DASHHOLD);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_ON_DASHHOLD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_REVIEW);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_REVIEW);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_MERGED);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_MERGED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DEPLOYED);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DEPLOYED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_u2192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(230);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_date);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'P') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(486);
      if (lookahead == 'P') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'p') ADVANCE(542);
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
          lookahead != 'a') ADVANCE(581);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'P') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(486);
      if (lookahead == 'P') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'p') ADVANCE(542);
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
          lookahead != 'a') ADVANCE(581);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(581);
      if (lookahead == '#' ||
          lookahead == '(' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_plain_text);
      ADVANCE_MAP(
        '\r', 365,
        '-', 291,
        '=', 439,
        '>', 241,
        'A', 524,
        'B', 478,
        'C', 440,
        'D', 452,
        'I', 488,
        'M', 453,
        'N', 547,
        'O', 489,
        'P', 462,
        'R', 454,
        'T', 494,
        'W', 474,
        'Y', 529,
        'a', 374,
        'b', 393,
        'h', 415,
        'n', 404,
        'p', 391,
        'r', 379,
        't', 399,
        'y', 380,
        0x2192, 342,
        '\t', 366,
        ' ', 366,
        '*', 292,
        0x2022, 292,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < '@' || 'D' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_plain_text);
      ADVANCE_MAP(
        '\r', 365,
        '-', 438,
        '=', 439,
        'B', 479,
        'C', 440,
        'D', 452,
        'I', 488,
        'M', 453,
        'O', 489,
        'P', 463,
        'R', 455,
        'T', 495,
        'W', 474,
        'h', 415,
        0x2192, 342,
        '\t', 367,
        ' ', 367,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead == 's') ADVANCE(369);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == ':') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(396);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(421);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(422);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(390);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(375);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(400);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(283);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(401);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(418);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(412);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(268);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(419);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(397);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(409);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(407);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'h') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(411);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(382);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'k') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(370);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(384);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(398);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(383);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(408);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(373);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'p') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'p') ADVANCE(392);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(260);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(410);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(402);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 's') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 's') ADVANCE(417);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 't') ADVANCE(405);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 't') ADVANCE(276);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 't') ADVANCE(413);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 't') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 't') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'v') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'w') ADVANCE(287);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'w') ADVANCE(255);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(580);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead == 'H') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_plain_text);
      ADVANCE_MAP(
        '-', 438,
        '=', 439,
        'B', 479,
        'C', 440,
        'D', 452,
        'I', 488,
        'M', 453,
        'O', 489,
        'P', 463,
        'R', 455,
        'T', 495,
        'W', 474,
        'h', 415,
        0x2192, 342,
        '\t', 425,
        ' ', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(506);
      if (lookahead == 'P') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(577);
      if (lookahead == '.') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == ':') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == ':') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '.') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == ':') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(568);
      if (lookahead == ':') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '/') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '>') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'A') ADVANCE(492);
      if (lookahead == 'O') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'C') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'D') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(503);
      if (lookahead == 'O') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(517);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(491);
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'G') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'G') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'G') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'G') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'H') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'I') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'K') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(496);
      if (lookahead == 'l') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 482:
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
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'L') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'M') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'M') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'N') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'O') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'P') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'P') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'P') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'P') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'R') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'R') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'R') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'R') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'S') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'S') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'S') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'S') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'V') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'W') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'Y') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(581);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(581);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(581);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'c') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'c') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(521);
      if (lookahead == 'm') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'h') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'k') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'l') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'm') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'm') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'm') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'p') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 's') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'w') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'w') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'y') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == 'y') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(581);
      if (lookahead == '#' ||
          lookahead == '(' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(363);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_plain_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_plain_text);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '`' || 'z' < lookahead)) ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_plain_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 238},
  [2] = {.lex_state = 238},
  [3] = {.lex_state = 238},
  [4] = {.lex_state = 238},
  [5] = {.lex_state = 238},
  [6] = {.lex_state = 238},
  [7] = {.lex_state = 238},
  [8] = {.lex_state = 238},
  [9] = {.lex_state = 238},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 220},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 221},
  [30] = {.lex_state = 222},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
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
    [sym_source_file] = STATE(26),
    [sym_quote] = STATE(2),
    [sym_section_header] = STATE(2),
    [sym_task] = STATE(2),
    [sym_checkbox] = STATE(10),
    [sym_code] = STATE(13),
    [sym_priority] = STATE(13),
    [sym_status] = STATE(13),
    [sym_arrow] = STATE(13),
    [sym_parenthetical] = STATE(13),
    [sym_text_line] = STATE(2),
    [sym_line_content] = STATE(24),
    [sym_blank_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_task_content_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(5),
    [sym_yesterday] = ACTIONS(7),
    [sym_today] = ACTIONS(7),
    [sym_tomorrow] = ACTIONS(7),
    [sym_blockers] = ACTIONS(7),
    [sym_notes] = ACTIONS(7),
    [sym_accomplishments] = ACTIONS(7),
    [sym_planned] = ACTIONS(7),
    [sym_review] = ACTIONS(7),
    [sym_bullet] = ACTIONS(9),
    [sym_number] = ACTIONS(9),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(15),
    [sym_tag] = ACTIONS(17),
    [sym_mention] = ACTIONS(17),
    [sym_service_name] = ACTIONS(17),
    [anon_sym_DONE] = ACTIONS(19),
    [anon_sym_WIP] = ACTIONS(19),
    [anon_sym_TODO] = ACTIONS(19),
    [anon_sym_BLOCKED] = ACTIONS(19),
    [anon_sym_PENDING] = ACTIONS(19),
    [anon_sym_COMPLETED] = ACTIONS(19),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(19),
    [anon_sym_INPROGRESS] = ACTIONS(19),
    [anon_sym_CANCELLED] = ACTIONS(19),
    [anon_sym_ONHOLD] = ACTIONS(19),
    [anon_sym_ON_DASHHOLD] = ACTIONS(19),
    [anon_sym_REVIEW] = ACTIONS(19),
    [anon_sym_MERGED] = ACTIONS(19),
    [anon_sym_DEPLOYED] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_u2192] = ACTIONS(21),
    [sym_date] = ACTIONS(17),
    [sym_time] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_url] = ACTIONS(17),
    [sym_plain_text] = ACTIONS(17),
    [sym__newline] = ACTIONS(25),
  },
  [2] = {
    [sym_quote] = STATE(3),
    [sym_section_header] = STATE(3),
    [sym_task] = STATE(3),
    [sym_checkbox] = STATE(10),
    [sym_code] = STATE(13),
    [sym_priority] = STATE(13),
    [sym_status] = STATE(13),
    [sym_arrow] = STATE(13),
    [sym_parenthetical] = STATE(13),
    [sym_text_line] = STATE(3),
    [sym_line_content] = STATE(24),
    [sym_blank_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(5),
    [sym_yesterday] = ACTIONS(7),
    [sym_today] = ACTIONS(7),
    [sym_tomorrow] = ACTIONS(7),
    [sym_blockers] = ACTIONS(7),
    [sym_notes] = ACTIONS(7),
    [sym_accomplishments] = ACTIONS(7),
    [sym_planned] = ACTIONS(7),
    [sym_review] = ACTIONS(7),
    [sym_bullet] = ACTIONS(9),
    [sym_number] = ACTIONS(9),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(15),
    [sym_tag] = ACTIONS(17),
    [sym_mention] = ACTIONS(17),
    [sym_service_name] = ACTIONS(17),
    [anon_sym_DONE] = ACTIONS(19),
    [anon_sym_WIP] = ACTIONS(19),
    [anon_sym_TODO] = ACTIONS(19),
    [anon_sym_BLOCKED] = ACTIONS(19),
    [anon_sym_PENDING] = ACTIONS(19),
    [anon_sym_COMPLETED] = ACTIONS(19),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(19),
    [anon_sym_INPROGRESS] = ACTIONS(19),
    [anon_sym_CANCELLED] = ACTIONS(19),
    [anon_sym_ONHOLD] = ACTIONS(19),
    [anon_sym_ON_DASHHOLD] = ACTIONS(19),
    [anon_sym_REVIEW] = ACTIONS(19),
    [anon_sym_MERGED] = ACTIONS(19),
    [anon_sym_DEPLOYED] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_u2192] = ACTIONS(21),
    [sym_date] = ACTIONS(17),
    [sym_time] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_url] = ACTIONS(17),
    [sym_plain_text] = ACTIONS(17),
    [sym__newline] = ACTIONS(25),
  },
  [3] = {
    [sym_quote] = STATE(3),
    [sym_section_header] = STATE(3),
    [sym_task] = STATE(3),
    [sym_checkbox] = STATE(10),
    [sym_code] = STATE(13),
    [sym_priority] = STATE(13),
    [sym_status] = STATE(13),
    [sym_arrow] = STATE(13),
    [sym_parenthetical] = STATE(13),
    [sym_text_line] = STATE(3),
    [sym_line_content] = STATE(24),
    [sym_blank_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [sym_yesterday] = ACTIONS(34),
    [sym_today] = ACTIONS(34),
    [sym_tomorrow] = ACTIONS(34),
    [sym_blockers] = ACTIONS(34),
    [sym_notes] = ACTIONS(34),
    [sym_accomplishments] = ACTIONS(34),
    [sym_planned] = ACTIONS(34),
    [sym_review] = ACTIONS(34),
    [sym_bullet] = ACTIONS(37),
    [sym_number] = ACTIONS(37),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(40),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(40),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(40),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(46),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(46),
    [sym_tag] = ACTIONS(49),
    [sym_mention] = ACTIONS(49),
    [sym_service_name] = ACTIONS(49),
    [anon_sym_DONE] = ACTIONS(52),
    [anon_sym_WIP] = ACTIONS(52),
    [anon_sym_TODO] = ACTIONS(52),
    [anon_sym_BLOCKED] = ACTIONS(52),
    [anon_sym_PENDING] = ACTIONS(52),
    [anon_sym_COMPLETED] = ACTIONS(52),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(52),
    [anon_sym_INPROGRESS] = ACTIONS(52),
    [anon_sym_CANCELLED] = ACTIONS(52),
    [anon_sym_ONHOLD] = ACTIONS(52),
    [anon_sym_ON_DASHHOLD] = ACTIONS(52),
    [anon_sym_REVIEW] = ACTIONS(52),
    [anon_sym_MERGED] = ACTIONS(52),
    [anon_sym_DEPLOYED] = ACTIONS(52),
    [anon_sym_DASH_GT] = ACTIONS(55),
    [anon_sym_EQ_GT] = ACTIONS(55),
    [anon_sym_u2192] = ACTIONS(55),
    [sym_date] = ACTIONS(49),
    [sym_time] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_url] = ACTIONS(49),
    [sym_plain_text] = ACTIONS(49),
    [sym__newline] = ACTIONS(61),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_GT] = ACTIONS(66),
    [sym_yesterday] = ACTIONS(66),
    [sym_today] = ACTIONS(66),
    [sym_tomorrow] = ACTIONS(66),
    [sym_blockers] = ACTIONS(66),
    [sym_notes] = ACTIONS(66),
    [sym_accomplishments] = ACTIONS(66),
    [sym_planned] = ACTIONS(66),
    [sym_review] = ACTIONS(66),
    [sym_bullet] = ACTIONS(66),
    [sym_number] = ACTIONS(66),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(66),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(66),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(66),
    [sym_tag] = ACTIONS(66),
    [sym_mention] = ACTIONS(66),
    [sym_service_name] = ACTIONS(66),
    [anon_sym_DONE] = ACTIONS(66),
    [anon_sym_WIP] = ACTIONS(66),
    [anon_sym_TODO] = ACTIONS(66),
    [anon_sym_BLOCKED] = ACTIONS(66),
    [anon_sym_PENDING] = ACTIONS(66),
    [anon_sym_COMPLETED] = ACTIONS(66),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(66),
    [anon_sym_INPROGRESS] = ACTIONS(66),
    [anon_sym_CANCELLED] = ACTIONS(66),
    [anon_sym_ONHOLD] = ACTIONS(66),
    [anon_sym_ON_DASHHOLD] = ACTIONS(66),
    [anon_sym_REVIEW] = ACTIONS(66),
    [anon_sym_MERGED] = ACTIONS(66),
    [anon_sym_DEPLOYED] = ACTIONS(66),
    [anon_sym_DASH_GT] = ACTIONS(66),
    [anon_sym_EQ_GT] = ACTIONS(66),
    [anon_sym_u2192] = ACTIONS(66),
    [sym_date] = ACTIONS(66),
    [sym_time] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym_url] = ACTIONS(66),
    [sym_plain_text] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(70),
    [sym_yesterday] = ACTIONS(70),
    [sym_today] = ACTIONS(70),
    [sym_tomorrow] = ACTIONS(70),
    [sym_blockers] = ACTIONS(70),
    [sym_notes] = ACTIONS(70),
    [sym_accomplishments] = ACTIONS(70),
    [sym_planned] = ACTIONS(70),
    [sym_review] = ACTIONS(70),
    [sym_bullet] = ACTIONS(70),
    [sym_number] = ACTIONS(70),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(70),
    [anon_sym_BQUOTE] = ACTIONS(70),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(70),
    [sym_tag] = ACTIONS(70),
    [sym_mention] = ACTIONS(70),
    [sym_service_name] = ACTIONS(70),
    [anon_sym_DONE] = ACTIONS(70),
    [anon_sym_WIP] = ACTIONS(70),
    [anon_sym_TODO] = ACTIONS(70),
    [anon_sym_BLOCKED] = ACTIONS(70),
    [anon_sym_PENDING] = ACTIONS(70),
    [anon_sym_COMPLETED] = ACTIONS(70),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(70),
    [anon_sym_INPROGRESS] = ACTIONS(70),
    [anon_sym_CANCELLED] = ACTIONS(70),
    [anon_sym_ONHOLD] = ACTIONS(70),
    [anon_sym_ON_DASHHOLD] = ACTIONS(70),
    [anon_sym_REVIEW] = ACTIONS(70),
    [anon_sym_MERGED] = ACTIONS(70),
    [anon_sym_DEPLOYED] = ACTIONS(70),
    [anon_sym_DASH_GT] = ACTIONS(70),
    [anon_sym_EQ_GT] = ACTIONS(70),
    [anon_sym_u2192] = ACTIONS(70),
    [sym_date] = ACTIONS(70),
    [sym_time] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_url] = ACTIONS(70),
    [sym_plain_text] = ACTIONS(70),
    [sym__newline] = ACTIONS(70),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(74),
    [sym_yesterday] = ACTIONS(74),
    [sym_today] = ACTIONS(74),
    [sym_tomorrow] = ACTIONS(74),
    [sym_blockers] = ACTIONS(74),
    [sym_notes] = ACTIONS(74),
    [sym_accomplishments] = ACTIONS(74),
    [sym_planned] = ACTIONS(74),
    [sym_review] = ACTIONS(74),
    [sym_bullet] = ACTIONS(74),
    [sym_number] = ACTIONS(74),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(74),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(74),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(74),
    [sym_tag] = ACTIONS(74),
    [sym_mention] = ACTIONS(74),
    [sym_service_name] = ACTIONS(74),
    [anon_sym_DONE] = ACTIONS(74),
    [anon_sym_WIP] = ACTIONS(74),
    [anon_sym_TODO] = ACTIONS(74),
    [anon_sym_BLOCKED] = ACTIONS(74),
    [anon_sym_PENDING] = ACTIONS(74),
    [anon_sym_COMPLETED] = ACTIONS(74),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(74),
    [anon_sym_INPROGRESS] = ACTIONS(74),
    [anon_sym_CANCELLED] = ACTIONS(74),
    [anon_sym_ONHOLD] = ACTIONS(74),
    [anon_sym_ON_DASHHOLD] = ACTIONS(74),
    [anon_sym_REVIEW] = ACTIONS(74),
    [anon_sym_MERGED] = ACTIONS(74),
    [anon_sym_DEPLOYED] = ACTIONS(74),
    [anon_sym_DASH_GT] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(74),
    [anon_sym_u2192] = ACTIONS(74),
    [sym_date] = ACTIONS(74),
    [sym_time] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_url] = ACTIONS(74),
    [sym_plain_text] = ACTIONS(74),
    [sym__newline] = ACTIONS(74),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(78),
    [sym_yesterday] = ACTIONS(78),
    [sym_today] = ACTIONS(78),
    [sym_tomorrow] = ACTIONS(78),
    [sym_blockers] = ACTIONS(78),
    [sym_notes] = ACTIONS(78),
    [sym_accomplishments] = ACTIONS(78),
    [sym_planned] = ACTIONS(78),
    [sym_review] = ACTIONS(78),
    [sym_bullet] = ACTIONS(78),
    [sym_number] = ACTIONS(78),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(78),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(78),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(78),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(78),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(78),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(78),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(78),
    [sym_tag] = ACTIONS(78),
    [sym_mention] = ACTIONS(78),
    [sym_service_name] = ACTIONS(78),
    [anon_sym_DONE] = ACTIONS(78),
    [anon_sym_WIP] = ACTIONS(78),
    [anon_sym_TODO] = ACTIONS(78),
    [anon_sym_BLOCKED] = ACTIONS(78),
    [anon_sym_PENDING] = ACTIONS(78),
    [anon_sym_COMPLETED] = ACTIONS(78),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(78),
    [anon_sym_INPROGRESS] = ACTIONS(78),
    [anon_sym_CANCELLED] = ACTIONS(78),
    [anon_sym_ONHOLD] = ACTIONS(78),
    [anon_sym_ON_DASHHOLD] = ACTIONS(78),
    [anon_sym_REVIEW] = ACTIONS(78),
    [anon_sym_MERGED] = ACTIONS(78),
    [anon_sym_DEPLOYED] = ACTIONS(78),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(78),
    [anon_sym_u2192] = ACTIONS(78),
    [sym_date] = ACTIONS(78),
    [sym_time] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(78),
    [sym_url] = ACTIONS(78),
    [sym_plain_text] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(82),
    [sym_yesterday] = ACTIONS(82),
    [sym_today] = ACTIONS(82),
    [sym_tomorrow] = ACTIONS(82),
    [sym_blockers] = ACTIONS(82),
    [sym_notes] = ACTIONS(82),
    [sym_accomplishments] = ACTIONS(82),
    [sym_planned] = ACTIONS(82),
    [sym_review] = ACTIONS(82),
    [sym_bullet] = ACTIONS(82),
    [sym_number] = ACTIONS(82),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(82),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(82),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(82),
    [anon_sym_BQUOTE] = ACTIONS(82),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(82),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(82),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(82),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(82),
    [sym_tag] = ACTIONS(82),
    [sym_mention] = ACTIONS(82),
    [sym_service_name] = ACTIONS(82),
    [anon_sym_DONE] = ACTIONS(82),
    [anon_sym_WIP] = ACTIONS(82),
    [anon_sym_TODO] = ACTIONS(82),
    [anon_sym_BLOCKED] = ACTIONS(82),
    [anon_sym_PENDING] = ACTIONS(82),
    [anon_sym_COMPLETED] = ACTIONS(82),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(82),
    [anon_sym_INPROGRESS] = ACTIONS(82),
    [anon_sym_CANCELLED] = ACTIONS(82),
    [anon_sym_ONHOLD] = ACTIONS(82),
    [anon_sym_ON_DASHHOLD] = ACTIONS(82),
    [anon_sym_REVIEW] = ACTIONS(82),
    [anon_sym_MERGED] = ACTIONS(82),
    [anon_sym_DEPLOYED] = ACTIONS(82),
    [anon_sym_DASH_GT] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_u2192] = ACTIONS(82),
    [sym_date] = ACTIONS(82),
    [sym_time] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [sym_url] = ACTIONS(82),
    [sym_plain_text] = ACTIONS(82),
    [sym__newline] = ACTIONS(82),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(86),
    [sym_yesterday] = ACTIONS(86),
    [sym_today] = ACTIONS(86),
    [sym_tomorrow] = ACTIONS(86),
    [sym_blockers] = ACTIONS(86),
    [sym_notes] = ACTIONS(86),
    [sym_accomplishments] = ACTIONS(86),
    [sym_planned] = ACTIONS(86),
    [sym_review] = ACTIONS(86),
    [sym_bullet] = ACTIONS(86),
    [sym_number] = ACTIONS(86),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(86),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(86),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(86),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(86),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(86),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(86),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(86),
    [sym_tag] = ACTIONS(86),
    [sym_mention] = ACTIONS(86),
    [sym_service_name] = ACTIONS(86),
    [anon_sym_DONE] = ACTIONS(86),
    [anon_sym_WIP] = ACTIONS(86),
    [anon_sym_TODO] = ACTIONS(86),
    [anon_sym_BLOCKED] = ACTIONS(86),
    [anon_sym_PENDING] = ACTIONS(86),
    [anon_sym_COMPLETED] = ACTIONS(86),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(86),
    [anon_sym_INPROGRESS] = ACTIONS(86),
    [anon_sym_CANCELLED] = ACTIONS(86),
    [anon_sym_ONHOLD] = ACTIONS(86),
    [anon_sym_ON_DASHHOLD] = ACTIONS(86),
    [anon_sym_REVIEW] = ACTIONS(86),
    [anon_sym_MERGED] = ACTIONS(86),
    [anon_sym_DEPLOYED] = ACTIONS(86),
    [anon_sym_DASH_GT] = ACTIONS(86),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_u2192] = ACTIONS(86),
    [sym_date] = ACTIONS(86),
    [sym_time] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [sym_url] = ACTIONS(86),
    [sym_plain_text] = ACTIONS(86),
    [sym__newline] = ACTIONS(86),
  },
  [10] = {
    [sym_task_content] = STATE(25),
    [sym_code] = STATE(12),
    [sym_priority] = STATE(12),
    [sym_status] = STATE(12),
    [sym_arrow] = STATE(12),
    [sym_parenthetical] = STATE(12),
    [aux_sym_task_content_repeat1] = STATE(12),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(15),
    [sym_tag] = ACTIONS(88),
    [sym_mention] = ACTIONS(88),
    [sym_service_name] = ACTIONS(88),
    [anon_sym_DONE] = ACTIONS(19),
    [anon_sym_WIP] = ACTIONS(19),
    [anon_sym_TODO] = ACTIONS(19),
    [anon_sym_BLOCKED] = ACTIONS(19),
    [anon_sym_PENDING] = ACTIONS(19),
    [anon_sym_COMPLETED] = ACTIONS(19),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(19),
    [anon_sym_INPROGRESS] = ACTIONS(19),
    [anon_sym_CANCELLED] = ACTIONS(19),
    [anon_sym_ONHOLD] = ACTIONS(19),
    [anon_sym_ON_DASHHOLD] = ACTIONS(19),
    [anon_sym_REVIEW] = ACTIONS(19),
    [anon_sym_MERGED] = ACTIONS(19),
    [anon_sym_DEPLOYED] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_u2192] = ACTIONS(21),
    [sym_date] = ACTIONS(88),
    [sym_time] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_url] = ACTIONS(88),
    [sym_plain_text] = ACTIONS(88),
  },
  [11] = {
    [sym_code] = STATE(11),
    [sym_priority] = STATE(11),
    [sym_status] = STATE(11),
    [sym_arrow] = STATE(11),
    [sym_parenthetical] = STATE(11),
    [aux_sym_task_content_repeat1] = STATE(11),
    [anon_sym_BQUOTE] = ACTIONS(90),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(93),
    [sym_tag] = ACTIONS(96),
    [sym_mention] = ACTIONS(96),
    [sym_service_name] = ACTIONS(96),
    [anon_sym_DONE] = ACTIONS(99),
    [anon_sym_WIP] = ACTIONS(99),
    [anon_sym_TODO] = ACTIONS(99),
    [anon_sym_BLOCKED] = ACTIONS(99),
    [anon_sym_PENDING] = ACTIONS(99),
    [anon_sym_COMPLETED] = ACTIONS(99),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(99),
    [anon_sym_INPROGRESS] = ACTIONS(99),
    [anon_sym_CANCELLED] = ACTIONS(99),
    [anon_sym_ONHOLD] = ACTIONS(99),
    [anon_sym_ON_DASHHOLD] = ACTIONS(99),
    [anon_sym_REVIEW] = ACTIONS(99),
    [anon_sym_MERGED] = ACTIONS(99),
    [anon_sym_DEPLOYED] = ACTIONS(99),
    [anon_sym_DASH_GT] = ACTIONS(102),
    [anon_sym_EQ_GT] = ACTIONS(102),
    [anon_sym_u2192] = ACTIONS(102),
    [sym_date] = ACTIONS(96),
    [sym_time] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(105),
    [sym_url] = ACTIONS(96),
    [sym_plain_text] = ACTIONS(96),
    [sym__newline] = ACTIONS(108),
  },
  [12] = {
    [sym_code] = STATE(11),
    [sym_priority] = STATE(11),
    [sym_status] = STATE(11),
    [sym_arrow] = STATE(11),
    [sym_parenthetical] = STATE(11),
    [aux_sym_task_content_repeat1] = STATE(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(15),
    [sym_tag] = ACTIONS(110),
    [sym_mention] = ACTIONS(110),
    [sym_service_name] = ACTIONS(110),
    [anon_sym_DONE] = ACTIONS(19),
    [anon_sym_WIP] = ACTIONS(19),
    [anon_sym_TODO] = ACTIONS(19),
    [anon_sym_BLOCKED] = ACTIONS(19),
    [anon_sym_PENDING] = ACTIONS(19),
    [anon_sym_COMPLETED] = ACTIONS(19),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(19),
    [anon_sym_INPROGRESS] = ACTIONS(19),
    [anon_sym_CANCELLED] = ACTIONS(19),
    [anon_sym_ONHOLD] = ACTIONS(19),
    [anon_sym_ON_DASHHOLD] = ACTIONS(19),
    [anon_sym_REVIEW] = ACTIONS(19),
    [anon_sym_MERGED] = ACTIONS(19),
    [anon_sym_DEPLOYED] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_u2192] = ACTIONS(21),
    [sym_date] = ACTIONS(110),
    [sym_time] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_url] = ACTIONS(110),
    [sym_plain_text] = ACTIONS(110),
    [sym__newline] = ACTIONS(112),
  },
  [13] = {
    [sym_code] = STATE(11),
    [sym_priority] = STATE(11),
    [sym_status] = STATE(11),
    [sym_arrow] = STATE(11),
    [sym_parenthetical] = STATE(11),
    [aux_sym_task_content_repeat1] = STATE(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(15),
    [sym_tag] = ACTIONS(110),
    [sym_mention] = ACTIONS(110),
    [sym_service_name] = ACTIONS(110),
    [anon_sym_DONE] = ACTIONS(19),
    [anon_sym_WIP] = ACTIONS(19),
    [anon_sym_TODO] = ACTIONS(19),
    [anon_sym_BLOCKED] = ACTIONS(19),
    [anon_sym_PENDING] = ACTIONS(19),
    [anon_sym_COMPLETED] = ACTIONS(19),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(19),
    [anon_sym_INPROGRESS] = ACTIONS(19),
    [anon_sym_CANCELLED] = ACTIONS(19),
    [anon_sym_ONHOLD] = ACTIONS(19),
    [anon_sym_ON_DASHHOLD] = ACTIONS(19),
    [anon_sym_REVIEW] = ACTIONS(19),
    [anon_sym_MERGED] = ACTIONS(19),
    [anon_sym_DEPLOYED] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_u2192] = ACTIONS(21),
    [sym_date] = ACTIONS(110),
    [sym_time] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_url] = ACTIONS(110),
    [sym_plain_text] = ACTIONS(110),
    [sym__newline] = ACTIONS(114),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(116), 31,
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
      sym_plain_text,
      sym__newline,
  [34] = 1,
    ACTIONS(118), 31,
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
      sym_plain_text,
      sym__newline,
  [68] = 1,
    ACTIONS(120), 31,
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
      sym_plain_text,
      sym__newline,
  [102] = 1,
    ACTIONS(122), 31,
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
      sym_plain_text,
      sym__newline,
  [136] = 1,
    ACTIONS(124), 31,
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
      sym_plain_text,
      sym__newline,
  [170] = 1,
    ACTIONS(126), 30,
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
      sym_plain_text,
  [203] = 2,
    ACTIONS(128), 1,
      anon_sym_COLON,
    ACTIONS(130), 1,
      sym__newline,
  [210] = 1,
    ACTIONS(132), 1,
      aux_sym_quote_token1,
  [214] = 1,
    ACTIONS(134), 1,
      sym__newline,
  [218] = 1,
    ACTIONS(136), 1,
      sym__newline,
  [222] = 1,
    ACTIONS(138), 1,
      sym__newline,
  [226] = 1,
    ACTIONS(140), 1,
      sym__newline,
  [230] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [234] = 1,
    ACTIONS(144), 1,
      anon_sym_BQUOTE,
  [238] = 1,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [242] = 1,
    ACTIONS(148), 1,
      aux_sym_parenthetical_token1,
  [246] = 1,
    ACTIONS(150), 1,
      aux_sym_code_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 34,
  [SMALL_STATE(16)] = 68,
  [SMALL_STATE(17)] = 102,
  [SMALL_STATE(18)] = 136,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 210,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 218,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 230,
  [SMALL_STATE(27)] = 234,
  [SMALL_STATE(28)] = 238,
  [SMALL_STATE(29)] = 242,
  [SMALL_STATE(30)] = 246,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_content, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_content, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checkbox, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
