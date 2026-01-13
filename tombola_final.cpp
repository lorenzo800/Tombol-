#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

using namespace std;

int main() {
	
    srand(time(NULL));

    int x;
    bool t[91] = {false}; // Tabellone numeri estratti
    int estr = 0;

    // Variabili per le cartelle (3 righe, 9 colonne)
    int c1[3][9] = {0}; 
    int c2[3][9] = {0};
    int pg1 = 0, pg2 = 0;
    
    
    

    // Generazione cartelle
    
    for(int r=0; r<3; r++) {
        for(int n=0; n<5; n++) {
            int col;
            // Giocatore 1
            do { col = rand() % 9; } while(c1[r][col] != 0);
            c1[r][col] = (col * 10) + (rand() % 10);
            if(c1[r][col] == 0) c1[r][col] = 1; 

            // Giocatore 2
            do { col = rand() % 9; } while(c2[r][col] != 0);
            c2[r][col] = (col * 10) + (rand() % 10);
            if(c2[r][col] == 0) c2[r][col] = 1;
      }
      
    }




    // funzionamento gioco 
    while(pg1 != 15 && pg2 != 15) {
        system("cls"); // Pulisce lo schermo ogni turno

       
        do {
            x = rand() % 90 + 1;
        } while(t[x] == true);
        
        t[x] = true; // Segna numero estratto sul tabellone con x
        estr++;

        cout << "GIOCO DELLA TOMBOLA" << endl;
        cout << "Numero estratto: [" << x << "]" << endl << endl;

        //  Tabellone
        cout << "TABELLONE:" << endl;
        for(int i=1; i<91; i++) {
            if (t[i]) cout << "[X] ";
            else if(i<10) cout << "0" << i << "  ";
            else cout << i << "  ";        

            if (i % 10 == 0) cout << endl;
        }

        // Controlla e stampa scheda 1 giocatore
        cout <<endl<<"CARTELLA GIOCATORE 1" << endl;
        pg1 = 0; 
        for(int r=0; r<3; r++) {
        	
     for(int c=0; c<9; c++) {
          if(c1[r][c] == 0) cout << "    ";
              else {
        if(t[c1[r][c]]) {
                        cout << "[" << c1[r][c] << "] ";
                        pg1++;
                    } else {
                        cout << c1[r][c] << "   ";
                        if(c1[r][c] < 10) cout << " ";
                        
           }
         }
       }
            cout << endl;
    }

        // Controlla e stampa scheda 2 giocatore
        cout <<endl<<"CARTELLA GIOCATORE 2" << endl;
        pg2 = 0;
        for(int r=0; r<3; r++) {
        	
         for(int c=0; c<9; c++) {
         	
          if(c2[r][c] == 0) cout << "    ";
        else {
        if(t[c2[r][c]]) {
         cout << "[" << c2[r][c] << "] ";
            pg2++;
            
                    } else {
         cout << c2[r][c] << "   ";
         
        if(c2[r][c] < 10) cout << " ";
                }
               }
          }
            cout << endl;
      }
      
      
         // Segnalazione giocatore vincente
         
        if(pg1 == 15) cout <<endl<<"TOMBOLA! VINCE IL GIOCATORE 1!";                           
        else if(pg2 == 15) cout <<endl<<"TOMBOLA! VINCE IL GIOCATORE 2!";



        Sleep(1000); 
    }







    return 0;
    
    
    
    
    
    
    
}
