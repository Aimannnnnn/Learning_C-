/*Trova n divisori*/
#include <iostream>
using namespace std;

int main(){

int a, b, i;
char c;

cout << "Inserisci il primo numero: ";

cin >> a;

do{

    cout << "Inserisci un' altro numero: ";

    cin >> b;

    if(b%a==0)
        i++;

    a=b;

    cout << "Vuoi inserire un'altro numero(s/n)? ";

    cin >> c;

}while(c=='s');

cout << "Ho trovato " << i << " divisore/i.";

return 0;
}
