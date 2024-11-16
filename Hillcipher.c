#include<stdio.h>
#include <string.h>


int encryption(){
    int x,y,i,j,k,n;
    printf("Enter the size of key matrix\n");
    n = 2;
    printf("Enter the key matrix\n");
    int a[][2] = {{4,1},{3,2}};
    printf("Enter the message to encrypt\n");
    char s[100] = "helloworld";
    int len = strlen(s);
    int temp = (n-len%n)%n;
    for(i=0;i<temp;i++){
        s[len+i]='x';
    }
    k=0;
    int sum = 0;
    char ans[100];
    int cnt = 0;
    while(k<len){
        for(i=0;i<n;i++){
            sum = 0;
            temp = k;
            for(j=0;j<n;j++){
                sum += (a[i][j]%26*(s[temp++]-'a')%26)%26;
                sum = sum%26;
            }
            ans[cnt++] = (sum+'a');
        }
        k+=n;
    }
    ans[cnt] = '\0';
    printf("%s\n",ans);
    return 0;    
}

int main()
{
   encryption();
}

