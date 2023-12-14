#include "stringStack.h"
#include <stack>

// Удаление последовательных повторяющихся символов с использованием стека
std::string removeConsecutiveDuplicatesUsingStack(const std::string& input) {
    std::stack<char> charStack;
    for (char current : input) {
        if (charStack.empty() || current != charStack.top()) {
            charStack.push(current);
        }
    }
    std::string result;
    while (!charStack.empty()) {
        result = charStack.top() + result;
        charStack.pop();
    }
    return result;
}