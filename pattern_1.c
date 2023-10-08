

/* 
1
1 2
1 2 3
1 2 3 4
*/
#include <stdio.h>
int main() {
    int i,a,j;
    printf("Enter a limit");
    scanf("%d",&a);
	for(i=1;i<=a;i++){
	for(j=1;j<=i;j++)
	{
	printf("%d\t",j);
	}
	printf("\n");
	}
    return 0;
}




//in below program, just printed * instead of number j



/*

*	
*	*	
*	*	*	
*	*	*	*	
*	*	*	*	*	
*	*	*	*	*	*	

*/
#include <stdio.h>
int main() {
    int i,j,a;
    printf("Enter a limit\t");
    scanf("%d",&a);
    for(j=0;j<=a;j++){
        for(i=1;i<=j;i++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}


//in below program, just printed i instead of number j
/* 
Enter a limit4
1	
2	2	
3	3	3	
4	4	4	4	
*/

#include <stdio.h>
int main() {
    int i,a,j;
    printf("Enter a limit");
    scanf("%d",&a);
	for(i=1;i<=a;i++){
	for(j=1;j<=i;j++)
	{
	printf("%d\t",i);
	}
	printf("\n");
	}
    return 0;
}