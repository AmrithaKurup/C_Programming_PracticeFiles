#include <stdio.h>

void sum(int,int);
int main() {
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
	sum(n1,n2);

    return 0;
}
void sum(int n1,int n2){
	int sum;
	sum = n1 + n2;
    printf("Sum is %d",sum);
}