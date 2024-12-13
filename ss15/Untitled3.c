#include <stdio.h>
#include <string.h>

int main(){
    char text[] = "Hello my gmail is test123@gmail.com";
    char charToRemove;
    int size = strlen(text);

    printf("Chuoi ban dau: %s\n", text);

    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &charToRemove);

    char result[size + 1]; 
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (text[i] != charToRemove) {
            result[j++] = text[i];
        }
    }
    result[j] = '\0'; 

    printf("Chuoi sau khi xoa '%c': %s\n", charToRemove, result);

    return 0;
}
