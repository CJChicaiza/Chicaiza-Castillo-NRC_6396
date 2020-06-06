#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define PI 3.1415926535897
using namespace std;

//void ingresaNumericos(char *,float *);

void entryNum(char *msg, float *val){
	int caracter;
	puts(msg);
	int i=0;
	char valor[5];
	while((caracter=getch())!=13){
		if(caracter>=48&& caracter<=57){
			valor[i++]=caracter;
			printf("%c",caracter);
		}
	}
	*val=atof(valor);
}
float powPr(float num, int pow)
{
	float anws;
	anws=1;
	for (int n=1;n<=pow;n++)
	{
		anws=num*anws;
	}
	return(anws);
}

float degToRad(float deg)
{
	return (deg*PI)/180;
}


