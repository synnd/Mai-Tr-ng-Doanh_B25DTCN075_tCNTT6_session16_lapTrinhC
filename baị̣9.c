#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char kyTu;
    int i, j = 0;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &kyTu);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != kyTu) { 
		str[j++] = str[i];
        }
    }
    str[j] = '\0'; 

    printf("Chuoi sau khi xoa '%c': %s", kyTu, str);
    return 0;
}

