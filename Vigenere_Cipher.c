#include <stdio.h>
#include <string.h>

int encryption()
{
	int i,j,k,n;
    char a[26][26];
    k=0;
    n=26;
    for(i=0;i<n;i++){
        k=i;
        for(j=0;j<n;j++){
            a[i][j]='A'+k;
            k++;
            if(k==26)
                k=0;
        }
    }
    char s[100] = "HELLOWORLD";
    char key[100] = "TEST";
    k=0;
    int mod = strlen(key);
    for(i=mod;i<strlen(s);i++){
        key[i] =key[k%mod];
        k++;
    }
    char encrypt[100];
    int cnt = 0;
    for(i=0;i<strlen(s);i++){
        encrypt[cnt++] = a[s[i]-'A'][key[i]-'A'];
    }
    encrypt[cnt] = '\0';
    printf("Encrypted message: %s\n",encrypt);
    return 0;
}

int decryption()
{
	int i,j,k,n;
    char a[26][26];
    k=0;
    n=26;
    for(i=0;i<n;i++){
        k=i;
        for(j=0;j<n;j++){
            a[i][j]='A'+k;
            k++;
            if(k==26) k=0;
        }
    }
    char s[100] = "AIDEHAGKEH";
    char key[100] = "TEST";
    k=0;
    int mod = strlen(key);
    for(i=mod;i<strlen(s);i++){
        key[i] =key[k];
        k++;
    }
    char decrypt[100];
    int cnt = 0;
    for(i=0;i<strlen(s);i++){
        for(j=0;j<n;j++){
            if(a[j][key[i]-'A']==s[i]){
                decrypt[cnt++] = 'A'+j;
                break;
            }
        }
    }
    decrypt[cnt] = '\0';
    printf("Decrypted message: %s\n",decrypt);
    return 0;
}

int main()
{
	encryption();
	decryption();
}
