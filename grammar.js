module.exports = grammar({
  name: 'dsm',

  extras: $ => [/[ \t]/],

  rules: {
    source_file: $ => repeat(choice(
      $.section_header,
      $.task,
      $.text_line,
      $.blank_line
    )),

    section_header: $ => seq(
      choice(
        $.yesterday,
        $.today,
        $.tomorrow,
        $.blockers,
        $.notes,
        $.accomplishments,
        $.planned,
        $.review
      ),
      optional(':'),
      $._newline
    ),

    yesterday: $ => /[Yy]esterday/,
    today: $ => /[Tt]oday/,
    tomorrow: $ => /[Tt]omorrow/,
    blockers: $ => /[Bb]lockers?/,
    notes: $ => /[Nn]otes?/,
    accomplishments: $ => /[Aa]ccomplishments?/,
    planned: $ => /[Pp]lanned/,
    review: $ => /[Rr]eview/,

    task: $ => seq(
      choice($.bullet, $.number, $.checkbox),
      $.task_content,
      $._newline
    ),

    bullet: $ => /[-*•]/,
    number: $ => /[0-9]+\./,
    checkbox: $ => choice('[ ]', '[x]', '[X]'),

    task_content: $ => repeat1(choice(
      $.priority,
      $.tag,
      $.mention,
      $.service_name,
      $.status,
      $.arrow,
      $.date,
      $.time,
      $.parenthetical,
      $.url,
      $.code,
      $.highlight,
      $.plain_text
    )),

    highlight: $ => />>>[^\n]+/,

    code: $ => seq('`', /[^`\n]+/, '`'),

    priority: $ => choice('[HIGH]', '[URGENT]', '[LOW]', '[CRITICAL]', '[MEDIUM]'),
    tag: $ => /#[a-zA-Z0-9_-]+/,
    mention: $ => /@[a-zA-Z0-9_-]+/,
    service_name: $ => /[a-z]+(-[a-z]+)+/,
    status: $ => token(prec(10, /DONE|WIP|TODO|AWAITING/)),
    arrow: $ => choice('->', '=>', '→'),
    date: $ => /\d{4}-\d{2}-\d{2}|\d{1,2}\/\d{1,2}(\/\d{2,4})?/,
    time: $ => /\d{1,2}:\d{2}(:\d{2})?(am|pm|AM|PM)?/,
    parenthetical: $ => seq('(', /[^)\n]+/, ')'),
    url: $ => /https?:\/\/[^\s)]+/,

    text_line: $ => seq($.line_content, $._newline),

    line_content: $ => repeat1(choice(
      $.priority,
      $.tag,
      $.mention,
      $.service_name,
      $.status,
      $.arrow,
      $.date,
      $.time,
      $.parenthetical,
      $.url,
      $.code,
      $.highlight,
      $.plain_text
    )),

    plain_text: $ => token(prec(-1, /[^\s\n()\[\]#@`>:]+/)),
    blank_line: $ => $._newline,
    _newline: $ => /\r?\n/
  }
});
