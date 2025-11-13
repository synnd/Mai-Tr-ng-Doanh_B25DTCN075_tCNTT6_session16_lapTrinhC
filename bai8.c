#include <stdio.h> 
#include <string.h>

int main() {
    char str[] = "mai trong doanh ";
    printf ("Chuoi ban dau la: %s\n",str) ;
    int i;
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32; 
    }
    for (i = 1; i < strlen(str); i++) {
        if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = str[i] - 32;  
        }
    }
    printf("Chuoi sau khi viet hoa: %s", str);

	return 0; 
}

