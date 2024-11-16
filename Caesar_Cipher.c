#include<stdio.h>
#include <string.h>


int decrypt(){
    int i,j,k;
    int key;
    key = 16;
    printf("Enter the message to decrypt\n");
    char s[100]="sseprojecttofindmemoryleaks";
    int len = strlen(s);
    char decrypt[100];
    for(i=0;i<len;i++){
        decrypt[i]=(s[i]-'A'-key+26)%26+'A';
    }
    decrypt[len] = 0;
    printf("\n\nDecrypted message is %s\n",decrypt);
    return 0;
}

int encrypt()
{
    int i,j,k;
    int key;
    key = 16;
    printf("Enter the message\n");
    char s[100]="sseprojecttofindmemoryleaks";
    int len = strlen(s);
    char encrypt[100];
    for(i=0;i<len;i++){
        encrypt[i] = (s[i]-'A'+key)%26+'A';
    }
    printf("\n\nEncrypted message is %s\n",encrypt);
    return 0;
}


int main()
{
    // add some code here like call encrypt or decrypt function.
    encrypt();
    decrypt();
    //src : https://japp.io/cryptography/caesar-cipher-algorithm-program-in-c-c/
    return 0;
}