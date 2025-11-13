#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "bcdacabdbca";
    printf ("Mang da nhap la: %s\n",str) ;
    int i, j;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        int count = 1;
        if (str[i] == '\0') {
		continue; 
        }
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '\0';
            }
        }

        if (str[i] != '\0') {
            printf("%c: %d\n", str[i], count);
        }
    }

    return 0;
}

