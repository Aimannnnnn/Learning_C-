//Conversione da numero decimale
//A numero binario
#include <iostream>
using namespace std;

int main(){
	
	int decimale = 0;
	int counter = 0;

	cout << "Numero decimale: ";
	cin >> decimale;
	
	int copiadecimale1 = decimale;
	
	do{
		
		if (copiadecimale1 % 2 == 0){
			copiadecimale1  = copiadecimale1/2;
		}
		if (copiadecimale1 % 2 == 1){
			copiadecimale1 = (copiadecimale1-1) /2;
		}
		counter ++;
	}while(copiadecimale1 > 0);
	
	
		
	int copiadecimale = decimale;
	int binario[counter+1];
	
	do{
		
		if (copiadecimale % 2 == 0){
			copiadecimale = copiadecimale/2;
			binario[counter] = 0;
		}
		if (copiadecimale % 2 == 1){
			copiadecimale = (copiadecimale-1) /2;
			binario[counter] = 1;
		}
		counter ++;
	}while(copiadecimale > 0);
	
	//system("cls");
	cout << "DECIMALE: "  << decimale << endl;
	cout << "BINARIO: ";	

	for (int i = counter; i >= 0; i--){
		cout << binario[i];
	}
	
	return 0;
}
