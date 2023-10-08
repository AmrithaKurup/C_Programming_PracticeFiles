#include <stdio.h>
void sum();
int main() {
	sum();
    return 0;
}
void sum(){
    int n1,n2,sum;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
	sum = n1 + n2;
    printf("Sum is %d",sum);
}