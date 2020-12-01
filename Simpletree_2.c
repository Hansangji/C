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
	struct Node* t;
	t = (struct Node*)malloc(sizeof(struct Node));
	t->data = d;
	t->left = NULL;
	t->right = NULL;
	return t;
}
void main(){
	struct Node* t1;
	struct Node* t2;
	struct Node* t3;
	struct Node* t4;
	
	t4 = NewTree(8);
	t3 = NewTree(7);
	t3->right = t4;
	t2 = NewTree(3);
	t1 = NewTree(5);
	t1->left = t2;
	t1->right = t3;

	pr(t1);
} 


