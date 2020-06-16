//순서 정렬
#include <stdio.h>
void main(){
	int i, j, t;
	int a[]={5,2,4,6,1,3};
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			if(a[j]>a[j+1]){
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
			}
		}
	}
	for(i=0;i<6;i++){
		printf("%d\n", a[i]);
	}
} 
