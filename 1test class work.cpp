#include <iostream>

int main() {

    setlocale (LC_ALL, "RUSSIAN");

    int number;
    std::cout << "������� ����� ������ 999: ";
    std::cin >> number;

    int hundreds_digit = (number / 100) % 10;
    std::cout << "����� � ������� �����: " << hundreds_digit << std::endl;

   main();
}
