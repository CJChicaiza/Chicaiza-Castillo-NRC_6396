#include <iostream>
using namespace std;
 

int partition (int *v, int fromz, int toz)
{
    int x = *(v+toz);
    int i = fromz - 1;
 
    for (int j = fromz; j <= toz- 1; j++)
    {
        if (*(v+j) <= x)
        {
            i++;
            swap (*(v+i), *(v+j));
        }
    }
    swap (*(v+i+1), *(v+toz));
    return (i + 1);
}
 void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b = temp;
}
void quicksort (int *v, int fromz, int toz)
{
    if (fromz < toz)
    {
        int flag = partition(v, fromz,toz);
        quicksort(v, fromz, flag - 1);
        quicksort(v, flag + 1, toz);
    }
}
int main()
{
	int dim;
    cout<<"Ingrese la dimension del array:	";
    cin>>dim;
    int *v= new int[dim];
    delete v;
    cout<<"Ingrese los valores del array:	"<<endl;
    
    for (int i=0;i<dim;i++)
    	cin>>*(v+i);
    	
    quicksort(v,0,dim-1);
    for(int i=0;i<dim;i++)
    	cout<<*(v+i)<<" ";
    	
    	system("pause");
    return 0;
}
