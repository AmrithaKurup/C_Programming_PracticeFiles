#include <stdio.h>
int sum();
int main() {
	int c;
	c = sum();
    printf("Sum is %d",c);
    return 0;
}
int sum(){
    int n1,n2,sum;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
	sum = n1 + n2;
	return sum;
}