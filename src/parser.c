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
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  anon_sym_LBRACKHIGH_RBRACK = 15,
  anon_sym_LBRACKURGENT_RBRACK = 16,
  anon_sym_LBRACKLOW_RBRACK = 17,
  anon_sym_LBRACKCRITICAL_RBRACK = 18,
  sym_tag = 19,
  sym_mention = 20,
  sym_service_name = 21,
  anon_sym_DONE = 22,
  anon_sym_WIP = 23,
  anon_sym_TODO = 24,
  anon_sym_BLOCKED = 25,
  anon_sym_PENDING = 26,
  anon_sym_COMPLETED = 27,
  anon_sym_IN_DASHPROGRESS = 28,
  anon_sym_DASH_GT = 29,
  anon_sym_EQ_GT = 30,
  anon_sym_u2192 = 31,
  sym_date = 32,
  sym_time = 33,
  anon_sym_LPAREN = 34,
  aux_sym_parenthetical_token1 = 35,
  anon_sym_RPAREN = 36,
  sym_url = 37,
  sym_text = 38,
  aux_sym_text_line_token1 = 39,
  sym__newline = 40,
  sym_source_file = 41,
  sym_section_header = 42,
  sym_task = 43,
  sym_checkbox = 44,
  sym_task_content = 45,
  sym_priority = 46,
  sym_status = 47,
  sym_arrow = 48,
  sym_parenthetical = 49,
  sym_text_line = 50,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(200);
      ADVANCE_MAP(
        '\n', 424,
        '\r', 1,
        '#', 196,
        '(', 288,
        ')', 291,
        ':', 201,
        '=', 71,
        '@', 197,
        'A', 139,
        'B', 98,
        'C', 108,
        'D', 113,
        'I', 103,
        'N', 163,
        'P', 83,
        'R', 144,
        'T', 109,
        'W', 92,
        'Y', 145,
        '[', 3,
        'a', 12,
        'b', 31,
        'h', 53,
        'n', 42,
        'p', 29,
        'r', 17,
        't', 37,
        'y', 18,
        0x2192, 270,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(424);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 424,
        '\r', 294,
        '#', 196,
        '(', 288,
        '-', 310,
        '=', 311,
        '@', 197,
        'B', 328,
        'C', 336,
        'D', 341,
        'I', 332,
        'P', 320,
        'T', 337,
        'W', 325,
        '[', 73,
        'h', 301,
        0x2192, 271,
        '\t', 295,
        ' ', 295,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == 'C') ADVANCE(119);
      if (lookahead == 'H') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'U') ADVANCE(118);
      if (lookahead == 'X') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == 'X') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 196,
        '(', 288,
        '-', 310,
        '=', 311,
        '@', 197,
        'B', 328,
        'C', 336,
        'D', 341,
        'I', 332,
        'P', 320,
        'T', 337,
        'W', 325,
        '[', 73,
        'h', 301,
        0x2192, 271,
        '\t', 296,
        ' ', 296,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == 's') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == ':') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'a') ADVANCE(34);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'a') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'a') ADVANCE(60);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(218);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'h') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'k') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(212);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 's') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 's') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 't') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 't') ADVANCE(224);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 't') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 't') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 't') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'v') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'w') ADVANCE(233);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'w') ADVANCE(209);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'y') ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'y') ADVANCE(203);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(117);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(268);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 73:
      if (lookahead == 'C') ADVANCE(119);
      if (lookahead == 'H') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'C') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(259);
      END_STATE();
    case 77:
      if (lookahead == 'D') ADVANCE(263);
      END_STATE();
    case 78:
      if (lookahead == 'D') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'D') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(253);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 87:
      if (lookahead == 'G') ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == 'G') ADVANCE(261);
      END_STATE();
    case 89:
      if (lookahead == 'G') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(121);
      END_STATE();
    case 91:
      if (lookahead == 'H') ADVANCE(132);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == 'K') ADVANCE(84);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(134);
      END_STATE();
    case 101:
      if (lookahead == 'M') ADVANCE(282);
      END_STATE();
    case 102:
      if (lookahead == 'M') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(126);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(88);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(74);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(257);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(255);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(120);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(265);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(122);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 127:
      if (lookahead == 'W') ADVANCE(131);
      END_STATE();
    case 128:
      if (lookahead == ']') ADVANCE(239);
      END_STATE();
    case 129:
      if (lookahead == ']') ADVANCE(243);
      END_STATE();
    case 130:
      if (lookahead == ']') ADVANCE(241);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(247);
      END_STATE();
    case 132:
      if (lookahead == ']') ADVANCE(245);
      END_STATE();
    case 133:
      if (lookahead == ']') ADVANCE(246);
      END_STATE();
    case 134:
      if (lookahead == ']') ADVANCE(248);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(151);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 178:
      if (lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 179:
      if (lookahead == 'w') ADVANCE(232);
      END_STATE();
    case 180:
      if (lookahead == 'w') ADVANCE(208);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(205);
      END_STATE();
    case 182:
      if (lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 183:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(290);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 195:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 196:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 197:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 198:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(293);
      END_STATE();
    case 199:
      if (eof) ADVANCE(200);
      ADVANCE_MAP(
        '\n', 424,
        '\r', 366,
        '[', 4,
        '\t', 367,
        ' ', 367,
        'A', 377,
        'a', 377,
        'B', 396,
        'b', 396,
        'N', 402,
        'n', 402,
        'P', 394,
        'p', 394,
        'R', 382,
        'r', 382,
        'T', 403,
        't', 403,
        'Y', 383,
        'y', 383,
        '*', 235,
        '-', 235,
        0x2022, 235,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(423);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_yesterday);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead == '-') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_today);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_today);
      if (lookahead == '-') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_today);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_tomorrow);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead == '-') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_blockers);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 's') ADVANCE(213);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 's') ADVANCE(219);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_accomplishments);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 's') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == '-') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_accomplishments);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_planned);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead == '-') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_planned);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_review);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_review);
      if (lookahead == '-') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_review);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LBRACKHIGH_RBRACK);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LBRACKURGENT_RBRACK);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACKLOW_RBRACK);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACKCRITICAL_RBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_mention);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(364);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DONE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DONE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_WIP);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_WIP);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_TODO);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_BLOCKED);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_BLOCKED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_PENDING);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_PENDING);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COMPLETED);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COMPLETED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_IN_DASHPROGRESS);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_IN_DASHPROGRESS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_u2192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '/') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_date);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'P') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(360);
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'P') ADVANCE(330);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'P') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'P') ADVANCE(330);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead == '#' ||
          lookahead == '(' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        '\r', 294,
        '-', 310,
        '=', 311,
        'B', 328,
        'C', 336,
        'D', 341,
        'I', 332,
        'P', 320,
        'T', 337,
        'W', 325,
        'h', 301,
        0x2192, 271,
        '\t', 295,
        ' ', 295,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        '-', 310,
        '=', 311,
        'B', 328,
        'C', 336,
        'D', 341,
        'I', 332,
        'P', 320,
        'T', 337,
        'W', 325,
        'h', 301,
        0x2192, 271,
        '\t', 296,
        ' ', 296,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == 's') ADVANCE(298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == ':') ADVANCE(309);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == 'p') ADVANCE(297);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == 't') ADVANCE(299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == 't') ADVANCE(300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(364);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '/') ADVANCE(352);
      if (lookahead == ':') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '/') ADVANCE(352);
      if (lookahead == ':') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '/') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'C') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'G') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'G') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'I') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'I') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'K') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'M') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'M') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'P') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'P') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'P') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'R') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'R') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'S') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'S') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'T') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead == '#' ||
          lookahead == '(' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(292);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      ADVANCE_MAP(
        '\r', 366,
        '[', 368,
        ']', 423,
        '\t', 367,
        ' ', 367,
        'A', 377,
        'a', 377,
        'B', 396,
        'b', 396,
        'N', 402,
        'n', 402,
        'P', 394,
        'p', 394,
        'R', 382,
        'r', 382,
        'T', 403,
        't', 403,
        'Y', 383,
        'y', 383,
        '*', 236,
        '-', 236,
        0x2022, 236,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == 'X') ADVANCE(371);
      if (lookahead == 'x') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '.') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ']') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'c') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'k') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'l') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 's') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'v') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'w') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'w') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'y') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'y') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 199},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 199},
  [10] = {.lex_state = 199},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 199},
  [13] = {.lex_state = 199},
  [14] = {.lex_state = 199},
  [15] = {.lex_state = 199},
  [16] = {.lex_state = 199},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 183},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
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
    [sym_source_file] = STATE(21),
    [sym_section_header] = STATE(10),
    [sym_task] = STATE(10),
    [sym_checkbox] = STATE(2),
    [sym_text_line] = STATE(10),
    [sym_blank_line] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
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
    [sym_priority] = STATE(4),
    [sym_status] = STATE(4),
    [sym_arrow] = STATE(4),
    [sym_parenthetical] = STATE(4),
    [aux_sym_task_content_repeat1] = STATE(4),
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
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_u2192] = ACTIONS(21),
    [sym_date] = ACTIONS(17),
    [sym_time] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_url] = ACTIONS(17),
    [sym_text] = ACTIONS(17),
  },
  [3] = {
    [sym_priority] = STATE(3),
    [sym_status] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_parenthetical] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(3),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(25),
    [sym_tag] = ACTIONS(28),
    [sym_mention] = ACTIONS(28),
    [sym_service_name] = ACTIONS(28),
    [anon_sym_DONE] = ACTIONS(31),
    [anon_sym_WIP] = ACTIONS(31),
    [anon_sym_TODO] = ACTIONS(31),
    [anon_sym_BLOCKED] = ACTIONS(31),
    [anon_sym_PENDING] = ACTIONS(31),
    [anon_sym_COMPLETED] = ACTIONS(31),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(34),
    [anon_sym_EQ_GT] = ACTIONS(34),
    [anon_sym_u2192] = ACTIONS(34),
    [sym_date] = ACTIONS(28),
    [sym_time] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_url] = ACTIONS(28),
    [sym_text] = ACTIONS(28),
    [sym__newline] = ACTIONS(40),
  },
  [4] = {
    [sym_priority] = STATE(3),
    [sym_status] = STATE(3),
    [sym_arrow] = STATE(3),
    [sym_parenthetical] = STATE(3),
    [aux_sym_task_content_repeat1] = STATE(3),
    [anon_sym_LBRACKHIGH_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKURGENT_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKLOW_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCRITICAL_RBRACK] = ACTIONS(15),
    [sym_tag] = ACTIONS(42),
    [sym_mention] = ACTIONS(42),
    [sym_service_name] = ACTIONS(42),
    [anon_sym_DONE] = ACTIONS(19),
    [anon_sym_WIP] = ACTIONS(19),
    [anon_sym_TODO] = ACTIONS(19),
    [anon_sym_BLOCKED] = ACTIONS(19),
    [anon_sym_PENDING] = ACTIONS(19),
    [anon_sym_COMPLETED] = ACTIONS(19),
    [anon_sym_IN_DASHPROGRESS] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(21),
    [anon_sym_EQ_GT] = ACTIONS(21),
    [anon_sym_u2192] = ACTIONS(21),
    [sym_date] = ACTIONS(42),
    [sym_time] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_url] = ACTIONS(42),
    [sym_text] = ACTIONS(42),
    [sym__newline] = ACTIONS(44),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(46), 23,
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
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
      sym__newline,
  [26] = 1,
    ACTIONS(48), 23,
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
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
      sym__newline,
  [52] = 1,
    ACTIONS(50), 23,
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
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
      sym__newline,
  [78] = 1,
    ACTIONS(52), 23,
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
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
      sym__newline,
  [104] = 8,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      aux_sym_text_line_token1,
    ACTIONS(68), 1,
      sym__newline,
    STATE(2), 1,
      sym_checkbox,
    ACTIONS(59), 2,
      sym_bullet,
      sym_number,
    ACTIONS(62), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(9), 5,
      sym_section_header,
      sym_task,
      sym_text_line,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    ACTIONS(56), 8,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_accomplishments,
      sym_planned,
      sym_review,
  [143] = 8,
    ACTIONS(11), 1,
      aux_sym_text_line_token1,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(71), 1,
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
    STATE(9), 5,
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
  [182] = 1,
    ACTIONS(73), 22,
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
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      sym_date,
      sym_time,
      anon_sym_LPAREN,
      sym_url,
      sym_text,
  [207] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 15,
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
  [228] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 15,
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
  [249] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 15,
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
  [270] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 15,
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
  [291] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 15,
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
  [312] = 2,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      sym__newline,
  [319] = 1,
    ACTIONS(99), 1,
      sym__newline,
  [323] = 1,
    ACTIONS(101), 1,
      aux_sym_parenthetical_token1,
  [327] = 1,
    ACTIONS(103), 1,
      sym__newline,
  [331] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [335] = 1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
  [339] = 1,
    ACTIONS(109), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 143,
  [SMALL_STATE(11)] = 182,
  [SMALL_STATE(12)] = 207,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 270,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 312,
  [SMALL_STATE(18)] = 319,
  [SMALL_STATE(19)] = 323,
  [SMALL_STATE(20)] = 327,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 335,
  [SMALL_STATE(23)] = 339,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_content, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_checkbox, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
