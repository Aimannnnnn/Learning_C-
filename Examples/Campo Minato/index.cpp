/*
CAMPO MINATO
-Il computer posiziona le bombe a caso in modo che intorno ad ogni bomba non ci siano altre bombe
-Il computer scrive in ogni cella quante bombe ha intorno
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//funzione per stampare a video il campo
void Stampa(int campoS[][5]){ 
for(int i=0;i<=4; i++){
    for(int j=0;j<=4; j++){
       cout<<"\t"<<campoS[i][j];

    }
    cout<<"\n";
}

}

//funzione void per azzerare il campo del server con tutti zero
void Azzera(int campoS[][5]){
for(int i=0;i<=4; i++){
    for(int j=0;j<=4; j++){
        campoS[i][j]=0;

    }
}
} //non restituisce nulla perché è una procedura

//inizializza il campo visualizzato dal giocatore con delle X
void CampoGiocatore(char campoG[][5]){
for(int i=0;i<=4; i++){
    for(int j=0;j<=4; j++){
        campoG[i][j]='X';

    }
}
} //vedi riga 33

//funzione per stampare a video il campo del giocatore
void StampaG(char campoG[][5]){
for(int i=0;i<=4; i++){
    for(int j=0;j<=4; j++){
       cout<<"\t"<<campoG[i][j];
    }
    cout<<"\n";
}
}//vedi riga 33

//funzione che calcola l'intorno di una cella
int Intorno(int campoS[][5], int riga, int colonna){

int s=0;
for(int i=-1;i<=1; i++){ //viene eseguita con due cicli che vanno da -1 a 1
    for(int j=-1;j<=1; j++){
        if((riga+i)>=0 && (riga+i)<=4 && (colonna+j)>=0 && (colonna+j)<=4) //questo if verifica che non si vada in overflow
            s=s+campoS[riga+i][colonna+j];// essendo che ogni bomba vale 1 questa operazione esegue semplicemente delle somme di uno ogni volta che nel suo intorno trova una bomba
    }
}
return s; //inoltre restituisce il valore della somma
}

//funzione per inserire le bombe in modo che ogni bomba non abbia nessunabomba nel suo intorno
void Bombe(int campoS[][5]){

int riga;
int colonna;
do{

riga=rand()%5; //in riga mettiamo un valore da 0 a 4, perché il campo è fatto da 5 righe
colonna=rand()%5; //in colonna mettiamo un valore da 0 a 4, perché il campo è fatto da 5 colonna

}while(Intorno(campoS, riga, colonna)>0); //lo fa finché il valore dell'intorno è maggiore di 0, l'intorno è 0 se non ha nessuna bomba nell'intorno
campoS[riga][colonna]=1;

}

int main(){
	srand(time(NULL)); //funzione che cambia il clock della cpu, cambiando il seme
	
	//variabili
	int campoS[5][5], Iriga, Icolonna;
	char campoG[5][5];
	bool flag=true;

	//richiamo delle funzioni
	Azzera(campoS);
	CampoGiocatore(campoG);

	//mette le vombe 5 volte nel campo del server
	for(int i=0; i<5; i++)
        Bombe(campoS);


	StampaG(campoG); 
	
	for (int i=1;i<=20;i++){ //ciclo for da 1 a 20 perché le mosse possinili sono 20, se si riesce ad arrivare significa che sono state scelte tutte caselle senza bombe

        do{ //ciclo per l'input
            flag=true; //flag inizializzato a true
            cout << "\n\nRIGA: ";
            cin >> Iriga;

            cout << "\nCOLONNA: ";
            cin >> Icolonna;

            if(campoG[Iriga][Icolonna]!= 'X' || Iriga>4 || Iriga<0 || Icolonna>4 || Icolonna<0){ //verifica se la cella inserita è accettabile o no
            	system("CLS");
            	StampaG(campoG); //se non lo è, manda a video che non lo è e mette il flag falso
                cout << "\n\nCORDINATE NON ACCETTABILI!";
                flag=false;
            }
        }while(flag==false); //questo ciclo va avanti finché il flag è falso
        
        campoG[Iriga][Icolonna]=Intorno(campoS, Iriga, Icolonna)+48; /*nel campo del giocatore mette il valore restituito dalla funzione introno+48,
        questo si fa perché essendo che il campo giocatore è un char, senza l'aggiunta del 48 restituirebbe il carattere in ascii di 0, 1, 2, ecc..,
		aggiungendo il 48 in ascii si ottengono i caratteri equivalenti dei numeri*/
    
        if (campoS[Iriga][Icolonna]==1){ //se nel campo server la coordinata precedentemente inserita è uguale a 1, significa che è una bomba, cioè sconfitta
        	system("CLS");
        	cout << "\nHAI PERSO" << endl << endl;;
        	Stampa(campoS); //mandiamo a video il campo del server per vedere dove erano state messe le bombe
        	return 0; //e termina la partita
		}
		
        system("CLS");
        StampaG(campoG); //stampa a video del campo giocatore
	}
	
cout << "COMPLIMENTI HAI VINTO!"; //questo messaggio appare solo se è stato finito il campo senza aver scelto coordinate aventi bombe
return 0;

}
