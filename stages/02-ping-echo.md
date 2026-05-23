# 实现 PING 和 ECHO

在命令分发层支持：

- `PING` 返回 `+PONG\r\n`
- `ECHO value` 返回 RESP bulk string，例如 `$5\r\nhello\r\n`

命令名建议大小写不敏感。
