// ����Լ� <- �ڱⰡ �ڽ��� ȣ��  
#include<stdio.h>
void pr(int n){
   printf("%d\n", n);
   if(n<=1) return;
   pr(n-1);
}
void main(){
   pr(5);
}
