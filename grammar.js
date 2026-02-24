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
        $.notes
      ),
      optional(':'),
      $._newline
    ),

    yesterday: $ => /[Yy]esterday/,
    today: $ => /[Tt]oday/,
    tomorrow: $ => /[Tt]omorrow/,
    blockers: $ => /[Bb]lockers?/,
    notes: $ => /[Nn]otes?/,

    task: $ => seq(
      choice($.bullet, $.number),
      $.task_content,
      $._newline
    ),

    bullet: $ => /[-*•]/,
    number: $ => /[0-9]+\./,

    task_content: $ => repeat1(choice(
      $.service_name,
      $.status,
      $.arrow,
      $.parenthetical,
      $.text
    )),

    service_name: $ => /[a-z]+(-[a-z]+)+/,
    status: $ => choice('DONE', 'WIP', 'TODO', 'BLOCKED', 'PENDING', 'COMPLETED'),
    arrow: $ => choice('->', '=>'),
    parenthetical: $ => seq('(', /[^)\n]+/, ')'),
    text: $ => /[^\n()\-*•]+/,

    text_line: $ => seq(/[^\n\-*•0-9][^\n]*/, $._newline),
    blank_line: $ => $._newline,
    _newline: $ => /\r?\n/
  }
});
