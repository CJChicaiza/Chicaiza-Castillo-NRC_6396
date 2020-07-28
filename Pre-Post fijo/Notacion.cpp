/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/
#include<windows.h>
#include <math.h>
#include <stdio.h>
#include "Pila.cpp"

void postfix(char eq[])
{
    char eqfinal[100];
    int lvlops[100];
    eqfinal[0]='\0';
    int f=-1;
    int i=0;
    int dim=0;
    Pila pila;
    int auxlvl=-1;
    int lvlop=-1;
    char token[100];
    token [0]='\0';
    strcpy(token,eq);
    for(int k=0;k<100;k++){
                lvlops[k]=0;
            }
    int j=1;
    while( token [i] != '\0' )
    {

        if((token[i]==')')||(token[i]=='^')||(token[i]=='R')||(token[i]=='*')||(token[i]=='/')||(token[i]=='+')||(token[i]=='-'))
        {

            switch (token[i])
            {
            case ')':
                lvlops[j]=4;
                break;
            case '^': //   ^
                lvlops[j]=3;
                break;
            case'R':
                lvlops[j]=3;
                break;
            case '*':
                lvlops[j]=2;
                break;
            case'/':
                lvlops[j]=2;
                break;
            case '+':
                lvlops[j]=1;
                break;
            case '-':
                lvlops[j]=1;
                break;
            }
            /*cout<<endl;
            printf ("en %c j es %d y j-1 es %d",token[i],lvlops[j],lvlops[j-1]);
            cout<<endl;*/
            if (lvlops[j]==4)
            {
                while(!pila.pilaVacia())
                {
                    eqfinal[dim]=pila.quitar();
                    dim++;
                }
                for(j=j;j>=0;j--){
                    lvlops[j]=0;
                }
                j=0;
            }
            else if(lvlops[j]>lvlops[j-1])
            {
                pila.insertar(token[i]);
            }
            else if (lvlops[j]==lvlops[j-1])
            {
                eqfinal[dim]=pila.quitar();
                pila.insertar(token[i]);
                dim++;
                //lvlops[j-1]=lvlops[j-2];
                lvlops[j]=0;
                j=j-2;

            }
            else if (lvlops[j]<lvlops[j-1])
            {
                while(!pila.pilaVacia())
                {
                    eqfinal[dim]=pila.quitar();
                    dim++;
                }
                pila.insertar(token[i]);
                lvlops[1]=lvlops[j];
                for(j=j;j>1;j--){
                    lvlops[j]=0;
                }
               /* cout<<endl;
                printf (" j es %d", j);
                cout<<endl;*/
                //j--;
            }
            j++;

        }
        else
        {
            if (token[i]=='(')
            dim = dim;
            else{
             eqfinal[dim]=token[i];
            dim++;
            }

        }

        i++;

    }

    while(!pila.pilaVacia())
    {
        eqfinal[dim]=pila.quitar();
        dim++;
    }

    puts(eqfinal);
}
void profix(char eq[])
{
    char eqfinal[100];
    int lvlops[100];
    eqfinal[0]='\0';
    int f=-1;
    int i=0;
    int dim=0;
    Pila pila;
    int auxlvl=-1;
    int lvlop=-1;
    char token[100];
    token [0]='\0';
    strcpy(token,eq);
    for(int k=0;k<100;k++){
                lvlops[k]=0;
            }
    int j=1;
    while( token [i] != '\0' )
    {

        if((token[i]==')')||(token[i]=='^')||(token[i]=='R')||(token[i]=='*')||(token[i]=='/')||(token[i]=='+')||(token[i]=='-'))
        {

            switch (token[i])
            {
            case ')':
                lvlops[j]=4;
                break;
            case '^': //   ^
                lvlops[j]=3;
                break;
            case'R':
                lvlops[j]=3;
                break;
            case '*':
                lvlops[j]=2;
                break;
            case'/':
                lvlops[j]=2;
                break;
            case '+':
                lvlops[j]=1;
                break;
            case '-':
                lvlops[j]=1;
                break;
            }
            /*cout<<endl;
            printf ("en %c j es %d y j-1 es %d",token[i],lvlops[j],lvlops[j-1]);
            cout<<endl;*/
            if (lvlops[j]==4)
            {
                while(!pila.pilaVacia())
                {
                    eqfinal[dim]=pila.quitar();
                    dim++;
                }
                for(j=j;j>=0;j--){
                    lvlops[j]=0;
                }
                j=0;
            }
            else if(lvlops[j]>lvlops[j-1])
            {
                pila.insertar(token[i]);
            }
            else if (lvlops[j]==lvlops[j-1])
            {
                eqfinal[dim]=pila.quitar();
                pila.insertar(token[i]);
                dim++;
                //lvlops[j-1]=lvlops[j-2];
                lvlops[j]=0;
                j=j-2;

            }
            else if (lvlops[j]<lvlops[j-1])
            {
                while(!pila.pilaVacia())
                {
                    eqfinal[dim]=pila.quitar();
                    dim++;
                }
                pila.insertar(token[i]);
                lvlops[1]=lvlops[j];
                for(j=j;j>1;j--){
                    lvlops[j]=0;
                }
               /* cout<<endl;
                printf (" j es %d", j);
                cout<<endl;*/
                //j--;
            }
            j++;

        }
        else
        {
            if (token[i]=='(')
            dim = dim;
            else{
             eqfinal[dim]=token[i];
            dim++;
            }

        }

        i++;

    }

    while(!pila.pilaVacia())
    {
        eqfinal[dim]=pila.quitar();
        dim++;
    }

    cout <<"Su notacion prefija desordenada es:"<<endl;
    puts(eqfinal);
    cout <<"Su notacion prefija ordenada es:"<<endl;
    Pila chg;
    char feq[100];
    for (int i=0; i< strlen(eqfinal);i++){
        chg.insertar(eqfinal[i]);
    }
    for (int i=0; i< strlen(eqfinal);i++){
        feq[i]=chg.quitar();
        if (feq[i]==')')
         feq[i]='(';
        else if (feq[i]=='(')
         feq[i]=')';
    }
    feq[strlen(eqfinal)]='\0';
    puts (feq);
}

void prefix(char oeq[]){
    char eq[100];
    Pila chg;
    for (int i=0; i< strlen(oeq);i++){
        chg.insertar(oeq[i]);
    }
    for (int i=0; i< strlen(oeq);i++){
        eq[i]=chg.quitar();
        if (eq[i]==')')
         eq[i]='(';
        else if (eq[i]=='(')
         eq[i]=')';
    }
    eq[strlen(oeq)]='\0';
    puts (eq);

    profix(eq);

}


