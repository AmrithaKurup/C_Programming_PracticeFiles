/*
Enter a limit7
            * 
          * * * 
        * * * * * 
      * * * * * * * 
    * * * * * * * * * 
  * * * * * * * * * * * 
* * * * * * * * * * * * * 
*/

#include <stdio.h>

int main() {
    int limit,i,j=0,k;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(i=1;i<limit+7;i+=2){
        for(k=limit+4;k>=j;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


/*
Enter a limit7
* * * * * * * * * * * 
  * * * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * * 
          *  
*/



#include <stdio.h>

int main() {
    int limit,i,j=0,k;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(i=1;i<limit+7;i+=2){
        for(j=i;j<=limit+4;j++){
            printf("* ");
        }
        printf("\n");
        for(k=0;k<=i;k++){
            printf(" ");
        }
    }

    return 0;
}