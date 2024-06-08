/*IMPLEMENTARE IL GIOCO DEL TRIS NEL SEGUENTE MODO:
  -Il giocatore compie la 1a mossa
  -Il server sceglie una posizione a caso
  quando ne trova una vuota inserisce il simbol
  -Al termine di ogni mossa il server controlla se ci sono vincitori
  -Al termine di ogni mossa visualizzare la matrice*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

char vincitore(char matrice[][4]){		//Questa funzione ha il compito di controllare un possibile vincitore

    char vinci='a';						//Ci sono 8 possibilit� di vincita
    if(matrice[1][1]=='X' && matrice[1][2]=='X' && matrice[1][3]=='X'){
        vinci='g';						//Di conseguenza ci sono 16 IF
        return vinci;
    }									//8 per il server e 8 per il giocatore.
    if(matrice[2][1]=='X' && matrice[2][2]=='X' && matrice[2][3]=='X'){
        vinci='g';						//La variabile vinci viene inizializzata ad un simbolo qualsiasi diverso 
        return vinci;
    }									//Sia da 'g' (giocatore) che da 's' (server)
    if(matrice[3][1]=='X' && matrice[3][2]=='X' && matrice[3][3]=='X'){			
        vinci='g';						//In modo che se non trova alcun vincitore la variabile rester� invariata
        return vinci;
    }
    if(matrice[1][1]=='X' && matrice[2][2]=='X' && matrice[3][3]=='X'){
        vinci='g';
        return vinci;
    }
    if(matrice[1][3]=='X' && matrice[2][2]=='X' && matrice[3][1]=='X'){
        vinci='g';
        return vinci;
    }
    if(matrice[1][3]=='X' && matrice[2][3]=='X' && matrice[3][3]=='X'){
        vinci='g';
        return vinci;
    }
    if(matrice[1][2]=='X' && matrice[2][2]=='X' && matrice[3][2]=='X'){
        vinci='g';
        return vinci;
    }
    if(matrice[1][1]=='X' && matrice[2][1]=='X' && matrice[3][1]=='X'){
        vinci='g';
        return vinci;
    }
    

    if(matrice[1][1]=='O' && matrice[1][2]=='O' && matrice[1][3]=='O'){
        vinci='s';
        return vinci;
    }
    if(matrice[2][1]=='O' && matrice[2][2]=='O' && matrice[2][3]=='O'){
        vinci='s';
        return vinci;
    }
    if(matrice[3][1]=='O' && matrice[3][2]=='O' && matrice[3][3]=='O'){
        vinci='s';
        return vinci;
    }
    if(matrice[1][1]=='O' && matrice[2][2]=='O' && matrice[3][3]=='O'){
        vinci='s';
        return vinci;
    }
    if(matrice[1][3]=='O' && matrice[2][2]=='O' && matrice[3][1]=='O'){
        vinci='s';
        return vinci;
    }
    if(matrice[1][3]=='O' && matrice[2][3]=='O' && matrice[3][3]=='O'){
        vinci='s';
        return vinci;
    }
    if(matrice[1][2]=='O' && matrice[2][2]=='O' && matrice[3][2]=='O'){
        vinci='s';
        return vinci;
    }
    if(matrice[1][1]=='O' && matrice[2][1]=='O' && matrice[3][1]=='O'){
        vinci='s';
        return vinci;
    }
    return vinci;
}

void Campo(char matrice[][4]){		//Questa funzione permette di visualizzare 
	cout << "   X -> Giocatore\tO -> Server\n\n";
    for(int i=0; i<4; i++){			//La tabella di gioco
        for(int j=0; j<4; j++){
            cout << "\t" << matrice[i][j] << " ";
        }
        cout << endl;
    }
}


void Server(int &rigaS, int &colonnaS){		//Questa funzione genera un numero casuale
    rigaS=rand()%4;
    colonnaS=rand()%4;		//Maggiore di 0 e minore o uguale a 4
}


int main(){

    char matrice[4][4]={' ','1','2','3','1','-','-','-','2','-','-','-','3','-','-','-'};
    int riga, colonna, rigaS, colonnaS;
    bool flag1;
    srand(time(NULL));
    do{
    	Campo(matrice);
    	do{
    		flag1=false;
    		cout << "\n  Riga: ";	//Vengono inserite le "coordinate" e successivamente un controllo
    		cin >> riga;
    		cout << "\n  Colonna: ";	//Verifica che siano dei valori possibili, in caso negativo c'� la possibilit� di riinserirle
    		cin >> colonna;
    		if(matrice[riga][colonna]!='X' && matrice[riga][colonna]!= 'O' && matrice[riga][colonna]!=' ' && matrice[riga][colonna]!='1' && matrice[riga][colonna]!='2' && matrice[riga][colonna]!='3' && matrice[riga][colonna]!='O' && riga<4 && colonna<4 && riga>0 && colonna>0){
        		matrice[riga][colonna]='X';
        		flag1=true;
   			}
    		else{
    			system("CLS");
    			Campo(matrice);
    			cout << "\n  Riga e/o colonna non valida/i,\n";
    		}
    	}while(flag1==false);
    	bool flag=false;
    	do{					//Qui si richiama la funzione Server e un controllo verifica se sono valori accettabili
        	Server(rigaS, colonnaS);
        	if(rigaS!=0 && colonnaS!=0 && matrice[rigaS][colonnaS]!='X' && matrice[rigaS][colonnaS]!=' ' && matrice[rigaS][colonnaS]!='0' && matrice[rigaS][colonnaS]!='1' && matrice[rigaS][colonnaS]!='2' && matrice[rigaS][colonnaS]!='3' && matrice[rigaS][colonnaS]!='O'){
				flag=true;
        	}
    	}while(flag==false);
    	matrice[rigaS][colonnaS]='O';	//Quando verranno trovati dei valori accettabili il simbolo 'O' prender� posto sulla griglia
    	system("CLS");
    }while(vincitore(matrice)!='s' && vincitore(matrice)!='g');		// TUTTO QUESTO CICLO VERRA' RIPETUTO NON APPENA LA FUNZIONE vincitore TROVERA' UN VINCITORE

    if(vincitore(matrice)=='g'){		//Richiamo la funzione vincitore e controllo cio che restituisce.
        cout << "COMPLIMENTI HAI VINTO!!!";
        return 0;
    }
    if(vincitore(matrice)=='s'){
    	cout << "HA VINTO IL SERVER!!!";
    	return 0;
	}
    else{
		cout << "NON HA VINTO NESSUNO!!!"; 
    }
}
