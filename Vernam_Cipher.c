#include <stdio.h>
#include <string.h>


int decryption()
{
	int t,i,j;
    char m[100] = "AIDEHAGKEH";
    char key[100] = "TEST";
    int mod = strlen(key);
    j=0;
    for(i=mod;i<strlen(m);i++){
        key[i] = key[j%mod];
        j++;
    }
    char ans[100];
    int cnt = 0;
    for(i=0;i<strlen(m);i++){
        ans[cnt++] = (m[i]-key[i]+26)%26+'A';
    }
    ans[cnt] = '\0';
    printf("Decrypted message: %s\n",ans);
    
    return 0;
}

int encryption()
{
    int t,i,j;
    char m[100] = "HELLOWORLD";
    char key[100] = "TEST";
    int mod = strlen(key);
    j=0;
    for(i=mod;i<strlen(m);i++){
        key[i] = key[j%mod];
        j++;
    }
    char ans[100];
    int cnt = 0;
    for(i=0;i<strlen(m);i++){
        ans[cnt++] = (key[i]-'A'+m[i]-'A')%26+'A';
    }
    printf("Encrypted message: %s\n",ans);
    
    return 0;
}

int main()
{   
	encryption();
	decryption();
}