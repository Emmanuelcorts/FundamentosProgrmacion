/*Emmanuel de Jesus Cortes Nuñez 
Proyecto final 
Crear juego de cartas(baraja inglesa)*/ 
#include<iostream>
#include<time.h>
 using namespace std;
//Asignacion de cartas 
srand(time(NULL));
int jugadoresCant=0;

cout"Cuantos jugadores desea registrar "endl; cin>>jugadoresCant;

int asignacionCartas(int [2][5]);

 main(){
    
 }

int asignacionCartas(int jugadoresCartas[][]){
    for(int i =0;i<2;i++){
       jugadoresCartas[i][j] =  rand() % 13+1;
        for(int j=0;j<5;j++){
            jugadoresCartas[i][j] = rand() % 4+1;
        }
    }
}