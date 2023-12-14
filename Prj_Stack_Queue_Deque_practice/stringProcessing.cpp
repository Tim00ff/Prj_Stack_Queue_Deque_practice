#include "stringProcessing.h"
#include "main.h"

// Обработка выбора пользователя
void processUserChoice(const std::string& input, int choice) {
    std::string result;
    switch (choice) {
    case 1:
        result = removeConsecutiveDuplicatesUsingStack(input);
        break;
    case 2:
        result = removeConsecutiveDuplicatesUsingQueue(input);
        break;
    case 3:
        result = removeConsecutiveDuplicatesUsingDeque(input);
        break;
    default:
        std::cout << "Неверный выбор алгоритма!" << std::endl;
    }
    displayResult(result);
}