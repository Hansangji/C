// swap
#include<stdio.h>
void swap(int *a, int *b){
	int t;
	t=*a; *a=*b; *b=t;
}
void main(){
	int a=2, b=5;
	swap(&a,&b);
	printf("%d %d\n", a, b);
}
