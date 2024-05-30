#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Quanti numeri si vogliono inserire? ";
	cin >> n;
	
	int a[n];
	
	for (int i=0; i<n; i++){
		
		cout << "Inserire un numero: ";
		cin >> a[i];
		
	}
	
	for (int i=0; i<n; i=i+2){
		
		cout << "Il numero della cella " << i << " e': " << a[i] << endl;
		
	}
	
	return 0;
}
