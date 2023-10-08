// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int limit,i,sum=1,prev=0,res=0;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("%d\t",prev);
    printf("%d\t",sum);
    for(i=3;i<=limit;i++){
        res=sum+prev;
        prev=sum;
        sum=res;
        printf("%d\t",res);
    }

    return 0;
} 
