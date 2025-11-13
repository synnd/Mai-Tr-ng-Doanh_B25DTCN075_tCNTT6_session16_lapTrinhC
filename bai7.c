#include <stdio.h>
#include <string.h>
int  main (){
	char str[]="Hello my gmail is test123@gmail.com";
	printf ("Chuoi da nhap la: %s\n",str) ;
	int i=0;
	int count1=0,count2=0,count3=0; 
	while (str[i]!='\0'){
		if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			count1 ++; 
		} else if (str[i]>='0' && str[i]<='9'){
		    count2++; 
		} else{
			count3++; 
		} 
		i++; 
	} 
	printf ("So ky tu la chu cai la: %d\n",count1);
 	printf ("So ky tu la chu so la: %d\n",count2);	
    printf ("So ky tu la ky tu dac biet la: %d\n",count3);

	 	

} 
