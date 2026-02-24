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

    task_content: $ => choice(
      // With bluemark: elements before !!, then bluemark takes rest of line
      seq(repeat($._task_element), $.bluemark),
      // Without bluemark: just normal elements
      repeat1($._task_element)
    ),

    _task_element: $ => choice(
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
      $.plain_text
    ),

    bluemark: $ => prec.left(seq(
      $.bluemark_marker,
      $.bluemark_content
    )),

    bluemark_marker: $ => '!!',

    bluemark_content: $ => prec.left(repeat1($._bluemark_element)),

    _bluemark_element: $ => choice(
      alias($.priority, $.bluemark_priority),
      alias($.tag, $.bluemark_tag),
      alias($.mention, $.bluemark_mention),
      alias($.service_name, $.bluemark_service_name),
      alias($.status, $.bluemark_status),
      alias($.arrow, $.bluemark_arrow),
      alias($.date, $.bluemark_date),
      alias($.time, $.bluemark_time),
      alias($.parenthetical, $.bluemark_parenthetical),
      alias($.url, $.bluemark_url),
      alias($.code, $.bluemark_code),
      $.bluemark_text
    ),

    bluemark_text: $ => token(prec(-1, /[^\s\n()\[\]#@`>:!]+/)),

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

    line_content: $ => choice(
      seq(repeat($._task_element), $.bluemark),
      repeat1($._task_element)
    ),

    plain_text: $ => token(prec(-1, /[^\s\n()\[\]#@`>:!]+/)),
    blank_line: $ => $._newline,
    _newline: $ => /\r?\n/
  }
});
