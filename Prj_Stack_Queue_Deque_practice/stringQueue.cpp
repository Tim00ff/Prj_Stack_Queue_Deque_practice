#include "stringQueue.h"
#include <queue>

// Удаление последовательных повторяющихся символов с использованием очереди
std::string removeConsecutiveDuplicatesUsingQueue(const std::string& input) {
    std::queue<char> charQueue;
    for (char current : input) {
        if (charQueue.empty() || current != charQueue.back()) {
            charQueue.push(current);
        }
    }
    std::string result;
    while (!charQueue.empty()) {
        result += charQueue.front();
        charQueue.pop();
    }
    return result;
}