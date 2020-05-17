#include <iostream>
using namespace std;
void swap(int &n,int &i)//intercambia el valor de dos elementos
{  int temp=n;
	n=i;
	i=temp;	
}

void mostrarLista(int *arr, int tam)//Esta funcion permite que se imprima la lista
{
	for(int i=0;i<tam;i++)
      cout<<*arr++<<" ";
    cout<<endl;
}

void ordenar(int arr[], int tam){
 int *ptr=arr;
 int *rec=arr;//el elemento que recorre todos los numeros no ordenados de la lista
 for(int i=0;i<tam-1;i++)
 {
	for(int j=i;j<tam;j++)
	{
 	   if (*rec<*ptr){
 	     swap(*rec,*ptr);
	   }
	   rec++;
    }
    rec-=tam-1-i;//rec=rec-tam+1+i
    ptr++;
}
}
 
int main()
{   int A[]={5,2,0,4,3,1,7,8,9};
    int tam=sizeof A/sizeof (A[0]);
    ordenar(A,tam);
    mostrarLista(A,tam);
   	return 0;
}
