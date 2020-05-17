#include <iostream>
#include <string.h>
using namespace std;
void copiarCad(char a[],char b[])
{   int c=strlen(b);
	while(*a != '\0'){
		*b=*a;
	     b++;
		 a++; 
	}
}
int main(){
	char a[]="mundo XD";
	char b[]="Hola";
	copiarCad(a,b);
	cout<<b;
	return 0;
}
