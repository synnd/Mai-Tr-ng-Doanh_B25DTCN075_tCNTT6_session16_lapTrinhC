#include <stdio.h>
#include <string.h> 
int main (){
	char str [50];
	printf ("Nhap vao chuoi bat ki: ");
	fgets (str,sizeof(str),stdin );
	printf ("Chuoi dao nguoc la: ");
	int len = strlen(str) ;
	for (int i= len-1; i>=0;i--){
		   printf ("%c",str[i]); 
	} 
	return 0; 
} 
