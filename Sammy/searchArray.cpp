#include <iostream>

int main(){

    int numbers[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int myNum;
    int search = -1;

    std::cout << "Enter a number to search: ";
    std::cin >> myNum;

    for(int i = 0; i < size; i++){
        if(numbers[i] == myNum){
            search = i;
        }
    }
    
    if(search == -1){
        std::cout << "The number wasn't found";
    }
    else{
        std::cout << "The location of the number " << myNum << " is: " << search + 1;
    }

return 0;
}