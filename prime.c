#include <stdio.h>


int main() {
    int i,a,flag=0,j;
    printf("Enter a limit\t");
    scanf("%d",&a);
    for(j=1;j<=a;j++){
        for(i=2;i<=(j/2);i++){
            if((j%i)==0){
                flag=1;
                break;
            }
        }
        if(flag == 0){
            printf("%d\t",j);
        }
        else{
            flag=0;
        }
    }
    return 0;
}