#ifndef AI_CODING_LAB_PORT_H
#define AI_CODING_LAB_PORT_H

#include <cstdint>
#include <string>

// 本实验的接口约定（不代表所有网络程序的通用端口策略）：
// 1. text 必须非空，且只包含 ASCII 字符 '0' 到 '9'。
// 2. 十进制数值必须在 [1, 65535]，允许前导零，不限制文本长度。
//    因而很长的前导零加合法数值仍应成功，不能只按长度拒绝。
// 3. 成功返回 true，并将数值写入 out。
// 4. 非法输入返回 false，out 保持原值；输入格式或数值问题不向调用方抛异常。
// 5. 不读写文件、网络或全局状态，不改变本函数签名，不新增第三方依赖。
// 不要求处理系统资源耗尽等环境异常。
bool parse_port(const std::string& text, std::uint16_t& out);

#endif
