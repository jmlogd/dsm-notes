#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  sym_bullet = 7,
  sym_number = 8,
  sym_service_name = 9,
  anon_sym_DONE = 10,
  anon_sym_WIP = 11,
  anon_sym_TODO = 12,
  anon_sym_BLOCKED = 13,
  anon_sym_PENDING = 14,
  anon_sym_COMPLETED = 15,
  anon_sym_DASH_GT = 16,
  anon_sym_EQ_GT = 17,
  anon_sym_LPAREN = 18,
  aux_sym_parenthetical_token1 = 19,
  anon_sym_RPAREN = 20,
  sym_text = 21,
  aux_sym_text_line_token1 = 22,
  sym__newline = 23,
  sym_source_file = 24,
  sym_section_header = 25,
  sym_task = 26,
  sym_task_content = 27,
  sym_status = 28,
  sym_arrow = 29,
  sym_parenthetical = 30,
  sym_text_line = 31,
  sym_blank_line = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_task_content_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [sym_yesterday] = "yesterday",
  [sym_today] = "today",
  [sym_tomorrow] = "tomorrow",
  [sym_blockers] = "blockers",
  [sym_notes] = "notes",
  [sym_bullet] = "bullet",
  [sym_number] = "number",
  [sym_service_name] = "service_name",
  [anon_sym_DONE] = "DONE",
  [anon_sym_WIP] = "WIP",
  [anon_sym_TODO] = "TODO",
  [anon_sym_BLOCKED] = "BLOCKED",
  [anon_sym_PENDING] = "PENDING",
  [anon_sym_COMPLETED] = "COMPLETED",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [anon_sym_RPAREN] = ")",
  [sym_text] = "text",
  [aux_sym_text_line_token1] = "text_line_token1",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_section_header] = "section_header",
  [sym_task] = "task",
  [sym_task_content] = "task_content",
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
  [sym_bullet] = sym_bullet,
  [sym_number] = sym_number,
  [sym_service_name] = sym_service_name,
  [anon_sym_DONE] = anon_sym_DONE,
  [anon_sym_WIP] = anon_sym_WIP,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_BLOCKED] = anon_sym_BLOCKED,
  [anon_sym_PENDING] = anon_sym_PENDING,
  [anon_sym_COMPLETED] = anon_sym_COMPLETED,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_text] = sym_text,
  [aux_sym_text_line_token1] = aux_sym_text_line_token1,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_section_header] = sym_section_header,
  [sym_task] = sym_task,
  [sym_task_content] = sym_task_content,
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
  [sym_bullet] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
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
  [sym_task_content] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      ADVANCE_MAP(
        '\n', 200,
        '\r', 1,
        '(', 132,
        ')', 135,
        ':', 90,
        '=', 32,
        'B', 48,
        'C', 54,
        'D', 55,
        'N', 72,
        'P', 41,
        'T', 56,
        'W', 45,
        'Y', 67,
        'b', 14,
        'n', 15,
        't', 16,
        'y', 9,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(200);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 200,
        '\r', 136,
        '(', 132,
        '-', 33,
        '=', 140,
        'B', 155,
        'C', 161,
        'D', 162,
        'P', 148,
        'T', 163,
        'W', 152,
        '\t', 137,
        ' ', 137,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '(', 132,
        '-', 33,
        '=', 140,
        'B', 155,
        'C', 161,
        'D', 162,
        'P', 148,
        'T', 163,
        'W', 152,
        '\t', 139,
        ' ', 139,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(28);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(29);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'k') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 's') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 't') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 't') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(123);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(127);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(125);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'K') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == 'O') ADVANCE(121);
      END_STATE();
    case 59:
      if (lookahead == 'P') ADVANCE(119);
      END_STATE();
    case 60:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 'w') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(134);
      END_STATE();
    case 87:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      ADVANCE_MAP(
        '\n', 200,
        '\r', 170,
        '\t', 171,
        ' ', 171,
        'B', 183,
        'b', 183,
        'N', 184,
        'n', 184,
        'T', 185,
        't', 185,
        'Y', 178,
        'y', 178,
        '*', 112,
        '-', 112,
        0x2022, 112,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_yesterday);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_yesterday);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_today);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_today);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_today);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tomorrow);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tomorrow);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_blockers);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 's') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_blockers);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == 's') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_notes);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bullet);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_service_name);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DONE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DONE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_WIP);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_WIP);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_TODO);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BLOCKED);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BLOCKED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PENDING);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PENDING);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COMPLETED);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COMPLETED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        '\r', 136,
        '=', 140,
        'B', 155,
        'C', 161,
        'D', 162,
        'P', 148,
        'T', 163,
        'W', 152,
        '\t', 137,
        ' ', 137,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        '=', 140,
        'B', 155,
        'C', 161,
        'D', 162,
        'P', 148,
        'T', 163,
        'W', 152,
        '\t', 139,
        ' ', 139,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'E') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'G') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'I') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'K') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'M') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'N') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'P') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'P') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'T') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '-' &&
          lookahead != 0x2022) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      ADVANCE_MAP(
        '\r', 170,
        '\t', 171,
        ' ', 171,
        'B', 183,
        'b', 183,
        'N', 184,
        'n', 184,
        'T', 185,
        't', 185,
        'Y', 178,
        'y', 178,
        '*', 113,
        '-', 113,
        0x2022, 113,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'k') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'y') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead == 'y') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_text_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 88},
  [6] = {.lex_state = 88},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 88},
  [11] = {.lex_state = 88},
  [12] = {.lex_state = 88},
  [13] = {.lex_state = 88},
  [14] = {.lex_state = 88},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 86},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
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
    [sym_bullet] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_service_name] = ACTIONS(1),
    [anon_sym_DONE] = ACTIONS(1),
    [anon_sym_WIP] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_BLOCKED] = ACTIONS(1),
    [anon_sym_PENDING] = ACTIONS(1),
    [anon_sym_COMPLETED] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_section_header] = STATE(6),
    [sym_task] = STATE(6),
    [sym_text_line] = STATE(6),
    [sym_blank_line] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_yesterday] = ACTIONS(5),
    [sym_today] = ACTIONS(5),
    [sym_tomorrow] = ACTIONS(5),
    [sym_blockers] = ACTIONS(5),
    [sym_notes] = ACTIONS(5),
    [sym_bullet] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_text_line_token1] = ACTIONS(9),
    [sym__newline] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_task_content,
    ACTIONS(13), 2,
      sym_service_name,
      sym_text,
    ACTIONS(17), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
    STATE(4), 4,
      sym_status,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(15), 6,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
  [29] = 6,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym__newline,
    ACTIONS(21), 2,
      sym_service_name,
      sym_text,
    ACTIONS(27), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
    STATE(3), 4,
      sym_status,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(24), 6,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
  [58] = 6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__newline,
    ACTIONS(17), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
    ACTIONS(35), 2,
      sym_service_name,
      sym_text,
    STATE(3), 4,
      sym_status,
      sym_arrow,
      sym_parenthetical,
      aux_sym_task_content_repeat1,
    ACTIONS(15), 6,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
  [87] = 6,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_text_line_token1,
    ACTIONS(50), 1,
      sym__newline,
    ACTIONS(44), 2,
      sym_bullet,
      sym_number,
    ACTIONS(41), 5,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
    STATE(5), 5,
      sym_section_header,
      sym_task,
      sym_text_line,
      sym_blank_line,
      aux_sym_source_file_repeat1,
  [115] = 6,
    ACTIONS(9), 1,
      aux_sym_text_line_token1,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      sym_bullet,
      sym_number,
    ACTIONS(5), 5,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
    STATE(5), 5,
      sym_section_header,
      sym_task,
      sym_text_line,
      sym_blank_line,
      aux_sym_source_file_repeat1,
  [143] = 1,
    ACTIONS(55), 12,
      sym_service_name,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      sym_text,
      sym__newline,
  [158] = 1,
    ACTIONS(57), 12,
      sym_service_name,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      sym_text,
      sym__newline,
  [173] = 1,
    ACTIONS(59), 12,
      sym_service_name,
      anon_sym_DONE,
      anon_sym_WIP,
      anon_sym_TODO,
      anon_sym_BLOCKED,
      anon_sym_PENDING,
      anon_sym_COMPLETED,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
      anon_sym_LPAREN,
      sym_text,
      sym__newline,
  [188] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 9,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_bullet,
      sym_number,
      aux_sym_text_line_token1,
      sym__newline,
  [203] = 2,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 9,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_bullet,
      sym_number,
      aux_sym_text_line_token1,
      sym__newline,
  [218] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 9,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_bullet,
      sym_number,
      aux_sym_text_line_token1,
      sym__newline,
  [233] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 9,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_bullet,
      sym_number,
      aux_sym_text_line_token1,
      sym__newline,
  [248] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 9,
      sym_yesterday,
      sym_today,
      sym_tomorrow,
      sym_blockers,
      sym_notes,
      sym_bullet,
      sym_number,
      aux_sym_text_line_token1,
      sym__newline,
  [263] = 2,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(83), 1,
      sym__newline,
  [270] = 1,
    ACTIONS(85), 1,
      aux_sym_parenthetical_token1,
  [274] = 1,
    ACTIONS(87), 1,
      sym__newline,
  [278] = 1,
    ACTIONS(89), 1,
      sym__newline,
  [282] = 1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
  [286] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [290] = 1,
    ACTIONS(95), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 115,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 173,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 263,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 274,
  [SMALL_STATE(18)] = 278,
  [SMALL_STATE(19)] = 282,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 290,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_content_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_content, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_line, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
