#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkprime(int n){
int i, flag=0;
    if(n==0||n==1){
        flag=1;
    }
    for(i=2; i<=n/2; i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
int a, flag1;
    printf("input your number:\n");
    scanf("%d", &a);
    flag1=checkprime(a);
    if(flag1==1){
        printf("aval nist");
    }
    if(flag1==0){
        printf("aval hast");
    }
    return 0;
}
