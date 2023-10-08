/*
Enter a limit9
* * * * * * * * * 
 * * * * * * * * 
  * * * * * * * 
   * * * * * * 
    * * * * * 
     * * * * 
      * * * 
       * * 
        * 
		
*/

#include <stdio.h>

int main() {
    int limit,i,j,k;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        for(j=i;j<limit;j++){
            printf("* ");
        }
        printf("\n");
        for(k=0;k<=i;k++){
            printf(" ");
        }
    }

    return 0;
}



/*
Enter a limit5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
*/


#include <stdio.h>

int main() {
    int limit,i,j=0,k;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(i=0;i<limit+1;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        for(k=limit;k>j;k--){
            printf(" ");
        }
    }

    return 0;
}