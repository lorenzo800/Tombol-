# Tombola versione 01 di Previtali
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	int x;
	srand(time(NULL));
	x=rand()%90+1; 
	
	cout<<x<<endl;

	return 0;
}
