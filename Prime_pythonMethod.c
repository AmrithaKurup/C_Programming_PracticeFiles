#include <stdio.h>


int main() {
    int i,a,flag=0,j;
    printf("Enter a limit\t");
    scanf("%d",&a);
    for(j=2;j<=a;j++){
        for(i=2;i<=(j/2);i++){
            if((j%i)==0){
                break;
            }
        }
        if(i == j){
            printf("%d\t",j);
        }
}