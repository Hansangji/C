#include <stdio.h>

#include <stdlib.h>

typedef struct list { //typedef = 구조체 매크로 
int d;
struct list* p;
} LIST;

LIST* root = NULL;
LIST* last = NULL;

int main(void){

LIST *r1, *r2, *r3;

r1 = (LIST*)malloc(sizeof(LIST));
r1->d = 35;
root = r1;
last = r1;

r2 = (LIST*)malloc(sizeof(LIST));
last->p = r2;
r2->d = 40;
last = r2;

r3 = (LIST*)malloc(sizeof(LIST));
last->p = r3;
r3->d = 45;
r3->p = NULL;
last = r3;

while(root){
printf("%d\n", root->d);
root = root->p;
}

free (r1);
free (r2);
free (r3);

}
