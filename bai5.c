#include <stdio.h>
#include <string.h>
int main (){
    char str[]= "Hello word";
	int count =0;
	int len = strlen(str); 
	if (str[0] != ' ')
        count = 1;
	for (int i=1;i<len;i++){
		if (str[i-1]==' ' && str[i]!=' '){
			count ++; 
		} 
	}
	printf ("So tu trong chuoi la: %d",count); 
}
