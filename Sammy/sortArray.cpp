#include <iostream>

int main(){

    int array[] = {3, 9, 4, 10, 5, 1, 6, 2, 7, 8};
    int size = sizeof(array)/sizeof(array[0]);
    int temp = 0;

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(array[i] > array[j]){
                temp = array[j];
                array[j] = array[i];
                array [i] = temp;
                // swap senza una terza variabile
                /*int i=10;
                int j=5;
                i = i + j; //15
                j = i - j; //10
                i = i - j; //5 */
            }
        }
    }
    for(int i : array){
        std::cout << i << " ";
    }

return 0;
}