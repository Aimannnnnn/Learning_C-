#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int gameAreaServer[10][10], gameAreaClient[10][10];

void Start(){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			gameAreaServer[i][j]=-1;
		}
	}
}

void ServerOutput(){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			cout << gameAreaServer[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

int RandomDirection(){
	int a = rand()%4;
	return a;
}

int RandomDirection2(){
	int a = rand()%2;
	return a;
}

void Intorno1(){
	bool flag=true;
	int x, y;
	do{
		x=rand()%10;
		y=rand()%10;
		for(int i=-1;i<=1; i++){ 
	    	for(int j=-1;j<=1; j++){
	      	  if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
	      	  		if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
	      	  			flag = false;
					}
				}
	   	 	}
		}
	}while(flag==false);
	gameAreaServer[x][y]=1;
}

void Intorno2(){
	bool flag=true;
	int x, y;
	switch(RandomDirection()){
		case 0:
			do{
				x=rand()%10;
				y=rand()%10;
				for(int i = -1; i <= 1; i++){
					for(int j = -1; j <= 2; j++){
						if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
							if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
								flag = false;
							
						}
					}
				}
				}	
			}while(flag==false);
			gameAreaServer[x][y] = 2;
			gameAreaServer[x][y+1] = 2;
			break;
		case 1:
			do{
				x=rand()%10;
				y=rand()%10;
				for(int i = -1; i <= 1; i++){
					for(int j = -2; j <= 1; j++){
						if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
							if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
								flag = false;
							}
						}
					}
				}
			}while(flag==false);
			gameAreaServer[x][y] = 2;
			gameAreaServer[x][y+1] = 2;
			break;
		case 2:
			do{
				x=rand()%10;
				y=rand()%10;
				for(int i = -1; i <= 2; i++){
					for(int j = -1; j <= 1; j++){
						if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
							if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
								flag = false;
							}
						}
					}
				}
			}while(flag==false);
			gameAreaServer[x][y] = 2;
			gameAreaServer[x+1][y] = 2;
			break;
		case 3:
			do{
				x=rand()%10;
				y=rand()%10;
				for(int i = -2; i <= 1; i++){
					for(int j = -1; j <= 1; j++){
						if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
							if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
								flag = false;
							}
						}
					}
				}
			}while(flag==false);
			gameAreaServer[x][y] = 2;
			gameAreaServer[x-1][y] = 2;
			break;
	}
}

void Intorno3(){
	bool flag=true;
	int x, y;
	switch(RandomDirection2()){
		case 0:
			do{
				x=rand()%10;
				y=rand()%10;
				for(int i = -1; i <= 1; i++){
					for(int j = -2; j <= 2; j++){
						if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
							if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
								flag = false;
							}
						}
					}
				}
			}while(flag==false);
			gameAreaServer[x][y] = 3;
			gameAreaServer[x][y-1] = 3;
			gameAreaServer[x][y+1] = 3;
		case 1:
			do{
				x=rand()%10;
				y=rand()%10;
				for(int i = -2; i <= 2; i++){
					for(int j = -1; j <= 1; j++){
						if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
							if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
								flag = false;
							}
						}
					}
				}
			}while(flag==false);
			gameAreaServer[x][y] = 3;
			gameAreaServer[x-1][y] = 3;
			gameAreaServer[x+1][y] = 3;
	}
}

void Intorno4(){
		bool flag=true;
		int x, y;
		switch(RandomDirection()){
		case 0:
			do{
			x=rand()%10;
			y=rand()%10;
			for(int i = -3; i <= 2; i++){
				for(int j = -1; j <= 1; j++){
					if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
						if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
							flag = false;
						}
					}
				}
			}
		}while(flag==false);
		gameAreaServer[x-2][y]=4;
		gameAreaServer[x-1][y]=4;
		gameAreaServer[x][y]=4;
		gameAreaServer[x+1][y]=4;
		break;
		case 1:
			do{
			x=rand()%10;
			y=rand()%10;
			for(int i = -1; i <= 1; i++){
				for(int j = -2; j <= 3; j++){
					if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
						if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
							flag = false;
						}
					}
				}
			}
		}while(flag==false);
		gameAreaServer[x][y-1]=4;
		gameAreaServer[x][y]=4;
		gameAreaServer[x][y+1]=4;
		gameAreaServer[x][y+2]=4;
		break;
		case 2:
			do{
			x=rand()%10;
			y=rand()%10;
			for(int i = -2; i <= 3; i++){
				for(int j = -1; j <= 1; j++){
					if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
						if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
							flag = false;
						}
					}
				}
			}
		}while(flag==false);
		gameAreaServer[x-1][y]=4;
		gameAreaServer[x][y]=4;
		gameAreaServer[x+1][y]=4;
		gameAreaServer[x+2][y]=4;
		break;
		case 3:
			do{
			x=rand()%10;
			y=rand()%10;
			for(int i = -1; i <= 1; i++){
				for(int j = -3; j <= 2; j++){
					if((x+i)>=0 && (x+i)<=9 && (y+j)>=0 && (y+j)<=9){
						if(gameAreaServer[i][j] == 1 || gameAreaServer[i][j] == 2 || gameAreaServer[i][j] == 3 || gameAreaServer[i][j] == 4){
							flag = false;
						}
					}
				}
			}
		}while(flag==false);
		gameAreaServer[x][y-2]=4;
		gameAreaServer[x][y-1]=4;
		gameAreaServer[x][y]=4;
		gameAreaServer[x][y+1]=4;
		break;
	}
}

int main(){
	
	int counter=0;
	
	srand(time(NULL));
	
	Start();
	
	ServerOutput();
	
	for(int i = 0; i<=1; i++){
		Intorno2();
		Intorno3();
	}
	
	for(int i=0; i<4; i++){
	Intorno1();
	}
	Intorno4();
	
	system("CLS");

	ServerOutput();
	
	return 0;
}
