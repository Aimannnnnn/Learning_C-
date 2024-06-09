// Display myNum by duplicate each even digit of myNum      Example: myNum = 2380 ---> 2238800
// Display instead -1 if myNum doesn't have even digits     Example: myNum = 3157 ---> -1

#include <iostream>

int main(){

    std::string myNum;
    std::string counter;
    int evenDigitsCounter = 0;

    std::cout << "Insert a number: ";
    std::cin >> myNum;

    for(int i = 0; i < myNum.size(); i++){
        if(myNum[i] != '0' && myNum[i] != '1' && myNum[i] != '2' && myNum[i] != '3' && myNum[i] != '4' && myNum[i] != '5' && myNum[i] != '6' && myNum[i] != '7' && myNum[i] != '8' && myNum[i] != '9'){
            std::cout << "Please type only numbers";
            return 0;
        }
    }

    for(int i = 0; i < myNum.size(); i++){
        if((myNum[i] - '0') % 2 == 0){
            counter += myNum[i];
            counter += myNum[i];
            evenDigitsCounter ++;
        }
        else{
            counter += myNum[i];
        }
    }

    if(evenDigitsCounter > 0){
        std::cout << counter;
    }
    else{
        std::cout << "-1";
    }

return 0;
}