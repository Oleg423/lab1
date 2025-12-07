#include <iostream>
#include <string>  // Для использования std::string

/*
 * Программа Hello World с вводом имени пользователя
 * Лабораторная работа №2
 * Автор: [Ваше Имя]
 */

int main() {
    std::string name;  // Переменная для хранения имени
    
    // Запрос имени пользователя
    std::cout << "Введите ваше имя: ";
    std::cin >> name;
    
    // Вывод приветственного сообщения
    std::cout << "Hello world from " << name << std::endl;
    
    return 0;  // Успешное завершение программы
}