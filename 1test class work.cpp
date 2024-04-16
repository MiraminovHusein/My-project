#include <iostream>

int main() {

    setlocale (LC_ALL, "RUSSIAN");

    int number;
    std::cout << "ֲגוהטעו קטסכמ במכüרו 999: ";
    std::cin >> number;

    int hundreds_digit = (number / 100) % 10;
    std::cout << "ײטפנא ג נאחנÿהו סמעום: " << hundreds_digit << std::endl;

   main();
}
