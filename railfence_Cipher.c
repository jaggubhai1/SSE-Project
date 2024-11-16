#include <stdio.h>
#include <string.h>


int decryption()
{
   int t,n,m,i,j,k,sum=0;
    char s[100] = "HOLELWRDLO";
    n = 3;
    char a[3][10];
    for(int i = 0;i<3;i++)
    	for(int j = 0;j<10;j++)
    		a[i][j] = ' ';
    j=0;
    int flag=0;
    for(i=0;i<10;i++){
        a[j][i] = '0';
         if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;

        if(flag==0){
            j++;
        }
        else j--;
    }
    int temp =0;
    for(i=0;i<n;i++){
        for(j=0;j<10;j++){
                if(a[i][j]=='0')
                    a[i][j]= s[temp++];
        }
    }
    flag=0;
    j=0;
    for(i=0;i<10;i++){
        printf("%c",a[j][i]);
         if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;

        if(flag==0){
            j++;
        }
        else j--;
    }
    printf("\n");
}

int encryption()
{
    int t,n,m,i,j,k,sum=0;
    char s[100] = "HELLOWORLD";
    n = 3;
    char a[3][10];
    for(int i = 0;i<3;i++)
    	for(int j = 0;j<10;j++)
    		a[i][j] = ' ';
    j=0;
    int flag=0;
    for(i=0;i<10;i++){
        a[j][i] = s[i];
         if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;

        if(flag==0){
            j++;
        }
        else j--;
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            if(a[i][j]!=' ')
                printf("%c",a[i][j]);
        }
    }
    printf("\n");  
    return 0;
}

int main()
{   
	encryption();
	decryption();
}