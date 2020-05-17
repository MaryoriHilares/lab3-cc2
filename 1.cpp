#include <iostream>
using namespace std;
int sumaR(int *arr, int t){
 int suma=0;
 if(t>0){
 	suma+=*arr+sumaR(++arr,--t);
 }
 return suma;
}

void suma(int *arr, int tam){
   int suma;
  for(int i=0; i<tam;i++)
  {
  	suma=suma+*arr++;
  }
  cout<<suma<<endl;
 }

int main()
{   int arr[]={1,2,3,4,5,6,7,8,9};
    int tam=sizeof arr/sizeof (arr[0]);;
	suma(arr,tam);
	cout<<sumaR(arr,tam);
	return 0;
}
