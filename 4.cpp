#include <iostream>
using namespace std;
int tamdeCadena(char cad[])
{   int a=0;
	while(*cad != '\0'){
	      a++;
		  cad++;
}	return a;
}

int tamdeCadenaR(char *cad)
{
  int tam=0;
  if(*cad=='\0')
   	return tam;
  else {
  	tam=tamdeCadenaR(++cad)+1;
   }
  return tam;
}

int main(){
	char palabra[]="dimeunapalabramasdificil";
	cout<<tamdeCadena(palabra)<<endl;
	cout<<tamdeCadenaR(palabra);
	return 0;
}
