#include <stdio.h>
#include <string.h>
int main (){
	char str[]="Xin chao cac ban" ;
	printf ("Cac ki tu trong chuoi la: ");
	int len = strlen(str); 
	for (int i=0;i<len ;i++){
		printf ("%c ",str[i]); 
	} 
	return 0; 
} 
