#include <iostream>

int main(){
    int domande = 15;
    int domandeGiuste = 10;
    double score = (double) domandeGiuste / domande * 100;
    std::cout << score << "%";


    return 0;
}