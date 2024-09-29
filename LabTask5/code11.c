#include <stdio.h>

int main() {
    char ch, encrypt, decrypt;
    int key;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("\nEnter a key (0-255): ");
    scanf("%d", &key);

    encrypt = ch ^ key;
    printf("\nEncrypted: %c", encrypt);

    decrypt = encrypt ^ key;
    printf("\nDecrypted: %c\n", decrypt);

    return 0;
}