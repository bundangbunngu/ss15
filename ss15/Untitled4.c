#include <stdio.h>
#include <string.h>

int main(){
    char text[] = "Hello my gmail is test123@gmail.com";
    int freq[256] = {0};

    for (int i = 0; text[i] != '\0'; i++) {
        freq[(unsigned char)text[i]]++;
    }

    printf("Chuoi ban dau: %s\n", text);
    printf("So lan xuat hien cua tung ky tu:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}

