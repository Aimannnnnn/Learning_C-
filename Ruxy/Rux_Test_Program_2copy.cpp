#include <iostream>

int main(){

    int counter = 0;
    std::string a;
    std::string b;


    std::cout << "Insert a number: ";
    std::cin >> a;

    for(int i = 0; i < 100; i++){
        if (a[i] % 2 == 0){
            b[i]=a[i];
            b[i+1]=a[i];
            counter++;
        }
        else if (counter >= i){
            b[i+1]=a[i];
        }
    }

        if (counter > 0){
            std::cout << b;
        }
        else{
            std::cout << -1;
        }

return 0;
}