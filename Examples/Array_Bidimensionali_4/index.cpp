//SCRIVERE UN ARRAY DI INTERI QUADRATO LE CUI DIANOGALI CONETENGANO IL VALORE 0
#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Inserire un lato dell' array: ";
    cin >> n;

    int Array[n][n], counter=0;
    Array[n][n]=0;

    for(int i=0; i<n; i++){
            Array[i][i]=0;
    }
    for(int j=n-1; j>=0; j--){
        Array[j][j]=0;
    }
    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		cout << Array[i][j];
		}
		cout << endl;
	}
return 0;
}
