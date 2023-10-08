/*Enter a limit5
*	*	*	*	*	
*	*	*	*	
*	*	*	
*	*	
*

*/

#include <stdio.h>

int main() {
    int limit,i,j,k;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        for(j=i;j<limit;j++){
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}

//in below program, just added a for loop(k)

/*
Enter a limit6
*	*	*	*	*	*	
	*	*	*	*	*	
		*	*	*	*	
			*	*	*	
				*	*	
					*
					
*/

#include <stdio.h>

int main() {
    int limit,i,j,k;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        for(j=i;j<limit;j++){
            printf("*\t");
        }
        printf("\n");
        for(k=0;k<=i;k++){
            printf("\t");
        }
    }

    return 0;
}