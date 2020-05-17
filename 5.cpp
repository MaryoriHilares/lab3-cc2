#include <iostream>
#include <string.h>
using namespace std;
void concatenarCad(char a[],char b[])
{   int c=strlen(b);
    char *ptr= b+c;
	while(*a != '\0'){
	         *ptr=*a;
	          ptr++;
			  a++; 
	    }
	}
int main(){
	char a[]=" mundo XD";
	char b[20]="Hola";
	concatenarCad(a,b);
	cout<<b;
	return 0;
}
