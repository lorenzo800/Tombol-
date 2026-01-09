#include <unistd.h>
#include <windows.h>
using namespace std;
int x;
int main (){

bool t[91] = {false}; 

srand(time(NULL));
x=rand()%90+1; 

cout<<"Gioco della tombola"<<endl;
cout<<"Tabella iniziale:"<<endl;

for(int i=1; i<91; i++){
if (t[i]) cout << "[X] ";

else if(i<10){
	cout<< i << "   ";
}
else cout <<i << "  "; 


if (i % 10 == 0) cout << endl;
Sleep(40);
}

cout<<"Cartella giocatore 1";






cout<<"Cartella giocatore 2";







 return 0;


}
