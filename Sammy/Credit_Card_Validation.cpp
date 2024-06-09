#include <iostream>

int main(){

    std::string creditCard;
    int sumEven = 0;
    int sumOdd = 0;
    int result = 0;

    std::cout << "Enter credit card number: ";
    std::cin >> creditCard;
    
    if(creditCard.size() != 16){
        std::cout << "The number must be 16 digits without spaces";
        return 0;
    }

    for(int i = creditCard.size() - 2; i >= 0; i-=2){
        sumEven += ((creditCard[i] - '0') * 2) % 10 + (((creditCard[i] -'0') * 2) / 10) % 10;
    }

    for(int i = creditCard.size() - 1; i >= 1; i-=2){
        sumOdd += creditCard[i] - '0';
    }

    result = sumEven + sumOdd;

    if(result % 10 == 0){
        std::cout << "The credit card is valid";
    }
    else{
        std::cout << "The credit card is not valid"; 
    }

return 0;
}