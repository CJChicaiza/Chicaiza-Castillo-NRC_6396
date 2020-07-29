#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <math.h>
using namespace std;
#define MAXSIZE 100000
main()
{
    int n; 
    clock_t tiempoFinal, tiempo;
    double segundo;
    int m[MAXSIZE];
    
    for(int i = 0; i < MAXSIZE; i++) 
        m[i] = rand();
    cout << "Ingrese una cantidad "<<endl;
    cin >> n;
    if((n < 0) || (n >= MAXSIZE)) { 
        exit(0);
    }
    
    tiempoFinal = clock(); 
    int valor = 43;
    int contador = 0;
    for(int i = 0; i < n; i++) {
        if(valor == m[i]) {
            contador++;
        }
    }
    
    tiempo = clock();
    
    segundo = (double)(tiempo-tiempoFinal)/CLOCKS_PER_SEC;
    cout << "O(n) en tiempo "<<segundo<<endl;
    
    tiempoFinal = clock(); 
    
    double mylog = log2(n);
    for(int l=0; l<mylog; l++) {
      for(int i = 0; i < n; i++) {
        if(valor == m[i]) {
            contador++;
        }
      }
    }
    
    tiempo = clock();
    
    segundo = (double)(tiempo-tiempoFinal)/CLOCKS_PER_SEC;
    cout << "O(nlogn) en tiempo "<<segundo<<endl;
    
    tiempoFinal = clock();
    int contador1 = 0;
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++) {
            if(m[i] == m[j]) {
                contador1++;
            }
        }
    }
    
    tiempo = clock();
    
    segundo = (double)(tiempo-tiempoFinal)/CLOCKS_PER_SEC;
    cout << "n^2 en tiempo "<<segundo<<endl;
    contador1 = 0;
    tiempoFinal = clock(); 
    for(int j = 0; j < n; j++) {
        for(int i = j; i < n; i++) {
            if(m[i] == m[j]) {
                contador1++;
            }
        }
    }
    
    tiempo = clock();
    segundo = (double)(tiempo-tiempoFinal)/CLOCKS_PER_SEC;
    cout << "n^2-n en tiempo "<<segundo<<endl;
    
    contador1 = 0;
    tiempoFinal = clock(); 
    for(int k = 0; k < n; k++) {
      for(int j = 0; j < n; j++) {
        for(int i = j; i < n; i++) {
            if(m[i] == m[j]) {
                contador1++;
            }
        }
      }
    }
    
    tiempo = clock();
    segundo = (double)(tiempo-tiempoFinal)/CLOCKS_PER_SEC;
    cout << "n^3 en tiempo "<<segundo<<endl;
    
}
