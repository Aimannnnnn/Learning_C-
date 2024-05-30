//DEFINIRE IL TIPO DI DATO COMPLESSO ANIMALE
//CHE CONTENGA LE CARATTERISTICHE DI UN ANIMALE
//IMPLEMENTARE LE FUNZIONI DI INSERIMENTO E STAMPA
//IMPLEMENTARE IL BLOCCO DI ISTRUZIONI CHE PERMETTONO DI SELEZIONARE
//QUALE ANIMALE MANDARE IN OUTPUT
#include <iostream>
using namespace std;

struct animale{				//Dichiarazione di struct
     string tipo;			//Dichiarazione degli argomenti
     string razza;
     string lunghezza_pelo;
     string colore_pelo;
     string taglia;
     char sesso;
};

void input(animale &qualsiasi){					//Funzione che permette
     cout << "Inserire il tipo di animale: ";	//l'inserimento da tastiera 
     cin >> qualsiasi.tipo;						//degli argomenti delle struct

     cout << "Inserire la razza dell'animale: ";
     cin >> qualsiasi.razza;

     cout << "Inserire la lunghezza del pelo (lungo, corto o assente): ";
     cin >> qualsiasi.lunghezza_pelo;

     cout << "Inserire il colore del pelo: ";
     cin >> qualsiasi.colore_pelo;

     cout << "Inserire la taglia dell'animale (s, m, l o xl): ";
     cin >> qualsiasi.taglia;

     cout << "Inserire il sesso dell'animale (m/f): ";
     cin >> qualsiasi.sesso;
     system("CLS");
}

void stampa(animale qualsiasi){				//Funzione che permette di
     cout << "TIPO ANIMALE: " << qualsiasi.tipo;	//visualizzare gli argomenti di una struct
     cout << "\nRAZZA: " << qualsiasi.razza;
     cout << "\nLUNGHEZZA DEL PELO: " << qualsiasi.lunghezza_pelo;
     cout << "\nCOLORE DEL PELO: " << qualsiasi.colore_pelo;
     cout << "\nTAGLIA: " << qualsiasi.taglia;
     cout << "\nSESSO DELL'ANIMALE: " << qualsiasi.sesso << endl << endl;    
     cout << endl << endl;
}

int main(){
     int n, filtro;
     cout << "Quanti animali si voglioni inserire? "; //Richiesta di inserimeto del
     cin >> n;	  //numero di animali da inserire
     system("CLS");		//Pulisce lo schermo
     animale qualsiasi[n];
     for(int i = 0; i < n; i++){ //Viene eseguito il ciclo n volte
  input(qualsiasi[i]);		 //che permette l'inserimento dei vari argomenti
     }
     system("CLS");		//Pulisce lo schermo
 cout << "FILTRI: \n";		//Viene chiesto di scegliere fra 6 tipi diversi di filtri
 cout << "1) Tipo di animale\n";
 cout << "2) Razza\n";
 cout << "3) Lunghezza del pelo\n";
 cout << "4) Colore del pelo\n";
 cout << "5) Taglia\n";
 cout << "6) Sesso\n";
 cin >> filtro;
 string filtro_tipo, filtro_razza, filtro_lunghezza_pelo, filtro_colore_pelo, filtro_taglia;
 char  filtro_sesso;
 system("CLS");		//Pulisce lo schermo
 switch(filtro){	//Quando viene scelto un filtro viene chiesto di
  case 1:			//puntualizzare il filtro
   cout << "Che animali vuoi visualizzare? ";
   cin >> filtro_tipo;
   for(int i = 0; i < n; i++){
    if(filtro_tipo==qualsiasi[i].tipo)
     stampa(qualsiasi[i]);     
   }
   
   break;
  case 2:
   cout << "Che razza vuoi visualizzare? ";
   cin >> filtro_razza;
   for(int i = 0; i < n; i++){
    if(filtro_razza==qualsiasi[i].razza)
     stampa(qualsiasi[i]);
   }
   break;
  case 3:
   cout << "Di che tipo di lunghezza del pelo vuoi visualizzare gli animali? ";
   cin >> filtro_lunghezza_pelo;
   for(int i = 0; i < n; i++){
    if(filtro_lunghezza_pelo==qualsiasi[i].lunghezza_pelo)
     stampa(qualsiasi[i]);
   }
   break;
  case 4:
   cout << "Di che colore del pelo vuoi visualizzare gli animali? ";
   cin >> filtro_colore_pelo;
   for(int i = 0; i < n; i++){
    if(filtro_colore_pelo==qualsiasi[i].colore_pelo)
     stampa(qualsiasi[i]);
   }
   break;
  case 5:
   cout << "Di che taglia vuoi visualizzare gli animali? ";
   cin >> filtro_taglia;
   for(int i = 0; i < n; i++){
    if(filtro_taglia==qualsiasi[i].taglia)
     stampa(qualsiasi[i]);
   }
   break;
   case 6:
   cout << "Di che sesso vuoi visualizzare gli animali? ";
   cin >> filtro_sesso;
   for(int i = 0; i < n; i++){
    if(filtro_sesso == qualsiasi[i].sesso)
     stampa(qualsiasi[i]);
   }
   break;
   default:
	   cout << "Filtro non disponibile!";
 }
 

return 0;
}

