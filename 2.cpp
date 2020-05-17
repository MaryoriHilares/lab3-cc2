#include <iostream>
using namespace std;
void intercambio(int &n,int &i)
{  int temp=n;
	n=i;
	i=temp;	
}

void invertir(int *arr, int tam){
 int* temp=arr+tam-1;
 for(int i=0;i<tam/2;i++){
        intercambio(*(arr++),*(temp--));
		}	
}

void recInvertir(int *arr,int *temp) //Invierte la lista de forma recursiva
{ if(arr<temp){
  intercambio(*arr,*(temp));
  recInvertir(++arr,--temp);
}
 }

void mostrar(int *arr, int tam){
	for(int i=0;i<tam;i++)
      cout<<*arr++<<" ";
}

int main()
{   int A[]={2,3,4,5,6,7,8,9,10};
    int tam=sizeof A/sizeof (A[0]);
    int *ar=A;
    int* temp=ar+tam-1;
    invertir(A,tam);
    recInvertir(A,temp);
	mostrar(A,tam);
	return 0;
}
