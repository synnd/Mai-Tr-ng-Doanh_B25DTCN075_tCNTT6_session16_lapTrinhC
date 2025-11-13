#include<stdio.h>
int main (){
	char str[]="mai trong doanh";
	int count=0;
	printf ("Chuoi da nhap la: %s\n",str); 
	int i=0; 
	while (str[i]!='\0'){
		if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			count ++; 
		} 
		i++; 
	} 
	printf ("So chu cai trong mang la: %d",count) ;
	return 0; 
} 
