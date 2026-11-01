#include "port.h"

#include <stdexcept>

// 教学起点：此实现故意没有完全满足接口约定，供学习者检查和修复。
// 本仓库只交付起始版本，不在材料准备时替学习者完成修复。
bool parse_port(const std::string& text, std::uint16_t& out) {
    try {
        const int value = std::stoi(text);
        out = static_cast<std::uint16_t>(value);
        return true;
    } catch (const std::invalid_argument&) {
        return false;
    } catch (const std::out_of_range&) {
        return false;
    }
}
