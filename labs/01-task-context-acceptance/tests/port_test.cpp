#include "port.h"

#include <exception>
#include <iostream>

struct Case {
    const char* name;
    const char* text;
    bool expected_ok;
    std::uint16_t expected_value;
};

int main() {
    const Case cases[] = {
        {"lower-valid", "1", true, 1},
        {"normal-valid", "8080", true, 8080},
        {"upper-valid", "65535", true, 65535},
        {"leading-zeros", "00080", true, 80},
        {"empty", "", false, 0},
        {"letters", "abc", false, 0},
        {"below-range", "0", false, 0},
        {"above-range", "65536", false, 0},
        {"trailing-text", "80http", false, 0},
    };

    int failed = 0;
    int total = 0;
    for (const Case& test : cases) {
        ++total;
        const std::uint16_t sentinel = 12345;
        std::uint16_t out = sentinel;
        try {
            const bool ok = parse_port(test.text, out);
            const bool passed = ok == test.expected_ok &&
                out == (test.expected_ok ? test.expected_value : sentinel);
            if (!passed) {
                ++failed;
            }
            std::cout << (passed ? "PASS " : "FAIL ") << test.name
                      << " ok=" << ok << " out=" << out << '\n';
        } catch (const std::exception& error) {
            ++failed;
            std::cout << "FAIL " << test.name << " exception=" << error.what() << '\n';
        } catch (...) {
            ++failed;
            std::cout << "FAIL " << test.name << " unknown-exception\n";
        }
    }
    std::cout << "total=" << total << " passed=" << total - failed
              << " failed=" << failed << '\n';
    return failed == 0 ? 0 : 1;
}
