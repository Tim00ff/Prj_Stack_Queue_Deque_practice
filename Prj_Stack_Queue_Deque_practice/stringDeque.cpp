#include "stringDeque.h"
#include <deque>

// Удаление последовательных повторяющихся символов с использованием дека
std::string removeConsecutiveDuplicatesUsingDeque(const std::string& input) {
    std::deque<char> charDeque;
    for (char current : input) {
        if (charDeque.empty() || current != charDeque.back()) {
            charDeque.push_back(current);
        }
    }
    std::string result;
    while (!charDeque.empty()) {
        result += charDeque.front();
        charDeque.pop_front();
    }
    return result;
}