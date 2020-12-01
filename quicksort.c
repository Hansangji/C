#include <stdio.h>
void swap(int *a, int *b){ int t=*a; *a = *b; *b = t;}
void quick(int *array, int left, int right){
    int pivot = left;
    int i = left;
    int j = right;
    while (i < j){
    	printf("1. %d %d %d\n", array[pivot],array[i], array[j]);
        while (array[i] <= array[pivot] && i < right){
		i += 1;
		printf("2. %d %d %d\n", array[pivot],array[i], array[j]);
		}
        while (array[j] >= array[pivot] && j > left){
		j -= 1;
		printf("3. %d %d %d\n", array[pivot],array[i], array[j]);
		}

        if (i < j){
            swap(&array[i], &array[j]);
            printf("4. %d %d %d\n", array[pivot],array[i], array[j]);
            continue;
        }
        swap(&array[pivot], &array[j]);
		printf("5. %d %d %d\n", array[pivot],array[i], array[j]);
        quick(array, left, j - 1);
        quick(array, j + 1, right);

    }

}

void pr(int a[]){
    int i;
    for(i=0;i<5;i++) printf("%d\n", a[i]);
}

void main(){
    int a[]={2,1,3,5,4};
    quick(a,0,4);
}
