# 实现 SET 和 GET

维护一个内存哈希表：

- `SET key value` 写入并返回 `+OK\r\n`
- `GET key` 返回已写入的 bulk string
- key 不存在时返回 `$-1\r\n`

这个阶段重点是让协议层和存储层分离，避免把状态散落在解析逻辑里。
