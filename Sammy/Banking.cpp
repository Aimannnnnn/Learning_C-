#include <iostream>
#include <iomanip>
#include <limits>

void Show(double balance){
    std::cout << "Your balance is: " << std::setprecision(2) << std::fixed << balance << "$\n";
}

double withdraw(double balance){
    double amount = 0;
    std::cout << "How much do you want to withdraw?\n";
    std::cin >> amount;
    if(amount > balance){
        std::cout << "You don't have enough money!\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "Please enter a valid amount\n";
        return 0;
    }
    else if(amount > 1000){
        std::cout << "You can't withdraw more than 1000$ at once\n";
        return 0;
    }
    else{
        return amount;
    }
} 

double deposit(){
    double amount = 0;
    std::cout << "How much do you want to deposit?\n";
    std::cin >> amount;
    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Please enter a valid amount\n";
        return 0;
    }
}

int main(){

    double balance = 0;
    int choice = 0;
    
    do{
        std::cout << "What do you want to do?\n1: Show Balance\n2: Withdraw\n3: Deposit\n4: Exit\n";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the line
            std::cout << "Invalid input. Please enter a valid choice.\n";
            continue;
        }

        switch(choice){
            case 1: Show(balance);
                    break;
            case 2: balance -= withdraw(balance);
                    Show(balance);
                    break;
            case 3: balance += deposit();
                    Show(balance);
                    break;
            case 4: std::cout << "Byebye!";
                    break;
            default: std::cout << "Please enter a valid choice\n";
        }
    }while(choice != 4);

return 0;
}