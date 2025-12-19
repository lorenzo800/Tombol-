# Tombola versione 01 di Previtali
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	
	
	int x;
	bool t[91] = {false}; 

	srand(time(NULL));
	x=rand()%90+1; 
	
	cout<<"Gioco della tombola"<<endl;
	cout<<"Tabella iniziale:"<<endl;
	
	for(int i=1; i<91; i++){
	if (t[i]) cout << "[X] ";
    else cout <<i << " ";
    
    if (i % 10 == 0) cout << endl; 
}
	return 0;
}
