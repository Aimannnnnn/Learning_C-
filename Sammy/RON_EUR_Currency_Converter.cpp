#include <iostream>

int main() {

    double amount;
    std::string currency;

    std::cout << "***********************************************\n";

    std::cout << "What currency do you want to convert to? ";
    std::cin >> currency;
    if (currency == "EUR" || currency == "eur") {
        std::cout << "Please enter your amount in RON: ";
        std::cin >> amount;
        amount = amount / 5;
        std::cout << "Your amount in EUR is: " << amount << " EUR\n";
    }
    else if (currency == "RON" || currency == "ron") {
        std::cout << "Please enter your amount in EUR: ";
        std::cin >> amount;
        amount = amount * 5;
        std::cout << "Your amount in RON is: " << amount << " RON\n";
    }
    else {
        std::cout << "This is not a valid currency\n";
    }

    std::cout << "***********************************************";

return 0;
}