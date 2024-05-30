//Scorrere un array con la ricorsione
#include <iostream>
using namespace std;

void Input_Array(int n, int Array[]){ //procedura per l'inserimento dell'array

    system("clear");

    if(n <= 0)
        return;

    cout << "Inserisci un numero intero: ";
    cin >> Array[n];

    return Input_Array(n-1, Array);     //viene usata la ricorsione
}

void Output_Array(int n, int Array[]){      //procedura per l'uscita a schermo dell'array

    if(n <= 0)
        return;

    cout << "Numero: " << Array[n] << endl;

    return Output_Array(n-1, Array);    //viene usata la ricorsione
}

int main(){

    int n = 5;

    int Array[n];

    Input_Array(n, Array);

    system("clear");

    Output_Array(n, Array);

return 0;
}

