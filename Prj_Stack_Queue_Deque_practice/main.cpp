#include "main.h"
#include "stringProcessing.h"

// Получить входную строку
std::string getInputString() {
    std::string input;
    std::cout << "Enter the string: ";
    std::cin >> input;
    return input;
}

// Отобразить результат
void displayResult(const std::string& result) {
    std::cout << "Result: " << result << std::endl;
}

int main() {
    std::string input = getInputString();
    int choice;
    std::cout << "Choose an algorithm (1.Stack 2.Queue 3.Deque)" << std::endl;
    std::cin >> choice;
    processUserChoice(input, choice);
    return 0;
}