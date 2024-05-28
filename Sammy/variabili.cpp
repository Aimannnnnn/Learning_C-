#include <iostream>

int main() {
    int numero1, numero2, sum;
    std::cout << "Insert the first number" << '\n';
    std::cin >> numero1;
    std::cout << "Insert the second number" << '\n';
    std::cin >> numero2;
    sum = numero1 + numero2;
    std::cout << sum;
    return 0;
}