
#include "iostream"
#include "conio.h"
#include "dos.h"
#include "stdlib.h"

#define CIERTO 1
#define FALSO 0
#define TIEMPO 80
using namespace std;

int **Accesibilidad(int N);
int SigPaso(int x, int y, int *To_i, int *To_j,int N,int **C);
void Caballo(int i,int j,int N);
void Ver(int x,int y,int To_i,int To_j);


int main()
{
//	clrscr();
	int i,j,N;

	//puedes cambiar N,i,j pero i<N && j<N &&i>=0 &&j>=0 ,N>4

	i=0;
	j=0;
	N=11;
	Caballo(i,j,N);
	getch();

}

int a[8] = { 2, 1,-1,-2,-2,-1, 1, 2};
int b[8] = {-1,-2,-2,-1, 1, 2, 2, 1};

int **AccesBoard;

int **Accesibilidad(int N)
{
	int **A,Mov,Cont,u,v,i,j;
	A=new int *[N];
	for(int _i=0;_i<N;_i++)
		*(A+_i)=new int [N];

	for(i=0; i<N/2; i++)
		for(j=0; j<N/2; j++)
		{
			for(Mov=0, Cont=0; Mov<N; Mov++)
			{
				u=i+a[Mov]; //Movimiento Horizontal
				v=j+b[Mov]; //Movimienyo Vertical

				if( 0<=u && u<N && 0<=v && v<N )
					Cont++;
			}
			*(*(A+i)+j)=Cont;
			*(*(A+N-1-i)+j)=Cont;
			*(*(A+N-1-i)+N-1-j)=Cont;
			*(*(A+i)+N-1-j)=Cont;
		}

	if ( N%2 )
	{
		for( i=0; i<=N/2; i++ )
		{
			for (Cont=0, Mov=0; Mov<8; Mov++ )
			{
				u=i+a[Mov];
				v=N/2+b[Mov];
				if(0<=u && u<N && 0<=v && v<N )
					Cont++;
			}
			*(*(A+i)+N/2)=Cont;
			*(*(A+N/2)+i)=Cont;
			*(*(A+N/2)+N-1-i)=Cont;
			*(*(A+N-1-i)+N/2)=Cont;
		}
	}
	return A;
}
int SigPaso(int x, int y, int *To_i, int *To_j,int N,int **C)
{
	int i, j, u, v,Menor=0;
	int Solutiones[8], Aux[8],Accesibilidad[8];

	for ( i=0; i<8; i++ )
	{
		u=x+a[i];
		v=y+b[i];

		if(0<=u && u<N && 0<=v && v<N && *(*(C+u)+v)==0)
			Accesibilidad[i] = AccesBoard[v][u];
		else
			Accesibilidad[i] = 10;
	}

// Buscamos la menor "accesibilidad"

	Menor=100;

	for ( i=0; i<8; i++ )
		if ( Accesibilidad[i] < Menor )
			Menor = Accesibilidad[i];

	for ( j=0,i=0; i<8; i++ )
		if ( Accesibilidad[i] == Menor )
		Solutiones[j++]=i;

	j = Solutiones[0];

	if ( Accesibilidad[j] < 10 ) {
		u=x+a[j];
		v=y+b[j];

		*To_i = u;
		*To_j = v;

		for ( i=0; i<8; i++ ) {
			u=x+a[i];
			v=y+b[i];

			if(0<=u && u<N && 0<=v && v<N ){
				AccesBoard[v][u] -=1;
			}
		}
		return( CIERTO );
	}
	else return( FALSO );
}

void Caballo(int i,int j,int N)
{
	int Pivot,To_i,To_j, _i, _j,Exito;
	int **C;

	C=new int *[N];
	for(_i=0;_i<N;_i++)
		*(C+_i)=new int [N];

	for(_i=0;_i<N;_i++)
		for(_j=0;_j<N;_j++)
			*(*(C+_i)+_j)=0;

	AccesBoard=Accesibilidad(N);
	Exito=1;

	for(Pivot=1; Pivot<=N*N &&Exito==1; Pivot++)
	{
		*(*(C+i)+j)=Pivot;
		Exito=SigPaso(i,j,&To_i,&To_j,N,C);
		Ver(1,1,i,j);
		cout<<*(*(C+i)+j);
		i=To_i;
		j=To_j;
	}
}
void Ver(int x,int y,int To_i,int To_j)
{
	int Tx=4,Ty=4;
	gotoxy(x+To_i*Ty,y+To_j*Tx);
	delay(TIEMPO);
}

