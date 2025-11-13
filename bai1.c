#include <stdio.h>
#include <string.h>
int main (){
	char str[50];
	printf ("Nhap vao chuoi bat ki: ");
	fgets (str,sizeof(str),stdin );
	printf ("Chuoi da nhap la : %s\n",str) ;
	printf ("Do dai chuoi la: %lu\n",strlen(str));
	return 0; 
} 
