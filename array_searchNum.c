#include <stdio.h>

int main() {
    int a[5],i,key,flag=0;
    printf("enter 5 numbers");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a key");
    scanf("%d",&key);
    for(i=0;i<5;i++){
        if(key == a[i]){
         flag=1;
         break;
        }
    }
    if(flag==1){
         printf("present\n");
    }
    else{
         printf("not present\n");
    }
    return 0;
}