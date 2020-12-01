#include <stdio.h>
/*.... 5  ....   5보다 크면 오른쪽 작으면 왼쪽 
..3.. ...7
.............8*/
struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};
void pr(struct Node* t){
	printf("%d\n", t->data);
	if(t->left){
		pr(t->left);
	}
	if(t->right){
		pr(t->right);
	}
}
struct Node* NewTree(int d){
	t = (struct Node*)malloc(sizeof(struct Node));
	t->data = 8;
	t->left = NULL;
	t->right = NULL;
	return t;
}
void main(){
	struct Node* t1;
	struct Node* t2;
	struct Node* t3;
	struct Node* t4;
	
	t4 = (struct Node*)malloc(sizeof(struct Node));
	t4->data = 8;
	t4->left = NULL;
	t4->right = NULL;
	
	t3 = (struct Node*)malloc(sizeof(struct Node));
	t3->data = 7;
	t3->left = NULL;
	t3->right = t4;
	
	t2 = (struct Node*)malloc(sizeof(struct Node));
	t2->data = 3;
	t2->left = NULL;
	t2->right = NULL;
	
	t1 = (struct Node*)malloc(sizeof(struct Node));
	t1->data = 5;
	t1->left = t2;
	t1->right = t3;

	pr(t1);
} 


