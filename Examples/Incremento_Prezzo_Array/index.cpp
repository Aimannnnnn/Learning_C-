//Incrementare prezzo di un array
#include <iostream>
using namespace std;

void Incremento(double &prezzo){
    prezzo = prezzo + ((prezzo * 12) / 100);
}


int main(){

    system("clear");

    int n = 0;

    cout << "Quanti elementi vuoi inserire? ";
    cin >> n;

    double Array[n];

    for(int i = 0; i < n; i++){
        cout << i + 1 <<") ";
        cin >> Array[i];
        }

        system("clear");

    for(int i = 0; i < n; i++){
        Incremento(Array[i]);
        cout << Array[i] << endl;
    }

    cin.get();
    cin.get();

return 0;
}
