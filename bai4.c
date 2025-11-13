#include <stdio.h>
#include <string.h>
int main (){
	int x; 
	char str[]="xin chao tat ca moi nguoi";
	printf ("Chuoi da nhap la: %s\n ",str);
	printf ("Nhap vao gia tri bat ky: ");
	scanf ("%c",&x);
	int len =strlen(str);
	int count=0,flag=0; 
	for (int i=0;i<len-1;i++){
		if (str[i]==x){
			count++;
			flag=1;  
		} 
	} 
	if (flag==1){
	printf ("Ky tu  '%c' xuat hien %d trong chuoi.",x,count); 
	} else {
		printf ("Khong tim thay ki tu %c",x) ;
	} 
	 
} 
