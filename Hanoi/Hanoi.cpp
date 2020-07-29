#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

#include "Libraries/Input.cpp"
#include "Libraries/To_number.cpp"
using namespace std;

int hanoi(int n);
void hanoi(int n,int com, int aux, int fin);

int main(void){

       // clrscr();
	char com='A';
	char aux='B';
	char fin='C';
	int n;

	Input _input;
	n = to_int(_input.input_int_number("Ingrese un numero: "));
	fflush(stdin);

	printf("\nLos movimientos a realizar son: \n");
	hanoi(n,com,aux,fin);
	cout<<"\nlos minimos movimientos son "<<hanoi(n)<<endl;
}

/**
        @brief imprime y recorre 
        @param n numero de movimientos
        @param com pilar uno
        @param aux pilar dos
        @param fin pilar tres
        @return void
 */

void hanoi(int n,int com, int aux, int fin){

	if(n==1){
		printf("%c->%c",com,fin);
	}
	else{
		hanoi(n-1,com,fin,aux);
		printf("\n%c->%c\n",com,fin);
		hanoi(n-1,aux,com,fin);
	}

}

/**
        @brief sirve para dar el numero minimo de movimientos
        @param n numero de movimientos
        @return int
 */

int hanoi(int n)
{
    if(n == 1)
        return 1;
    else
        return 2 * hanoi(n-1) + 1;
}
