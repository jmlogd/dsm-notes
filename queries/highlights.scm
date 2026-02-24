; Section headers - each with distinct color
(yesterday) @keyword
(today) @function
(tomorrow) @constant
(blockers) @keyword.exception
(notes) @string
(accomplishments) @type
(planned) @constant.builtin
(review) @attribute

; Task markers
(bullet) @punctuation.special
(number) @number
(checkbox) @boolean

; Priority levels
(priority) @keyword.exception

; Tags and mentions
(tag) @label
(mention) @string

; Technical content
(service_name) @property
(url) @string.special.url

; Status with individual colors
(status_done) @string           ; Green
(status_wip) @function          ; Blue
(status_todo) @keyword.exception ; Red
(status_awaiting) @constant     ; Orange/Yellow

; Time and dates
(date) @number
(time) @number

; Code/inline highlight
(code) @string.special

; Blue marker with !! - marker and text get special color
(bluemark_marker) @keyword.modifier
(bluemark_text) @function

; Elements inside bluemark keep their original colors
(bluemark_priority) @keyword.exception
(bluemark_tag) @label
(bluemark_mention) @string
(bluemark_service_name) @property
; bluemark_status inherits from status children (status_done, status_wip, etc.)
(bluemark_url) @string.special.url
(bluemark_date) @number
(bluemark_time) @number
(bluemark_code) @string.special
(bluemark_arrow) @operator
(bluemark_parenthetical) @comment

; Operators and comments
(arrow) @operator
(parenthetical) @comment
(plain_text) @variable
