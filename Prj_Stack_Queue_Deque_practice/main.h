#pragma once

#include <iostream>
#include <string>

// Получить входную строку
std::string getInputString();
// Отобразить результат
void displayResult(const std::string& result);
// Обработка выбора пользователя
void processUserChoice(const std::string& input, int choice);