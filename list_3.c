#include <stdio.h>
#include <stdlib.h>

typedef struct list {
  int d; //������ ������ ���� 
  struct list* p; // ���� ����ų �ּҸ� ������ ������ 
} LIST;

LIST* root = NULL;  //LIST = struct list
LIST* last = NULL;

void AddList(int a){

  LIST* r = (LIST*)malloc(sizeof(LIST)); //�� node(������ ����) ���� 
  r->d = a; // �� ���� 
  r->p = NULL;  

  if(root==NULL) root = r; //ó�� ���� ������ ��� ���� 

  else           last->p = r; //���� ���� ������ ��� ���� 

  last = r; //������ ������ 
}

int main(void){

  AddList(35); //addlist �Լ��� ������ ������ 
  AddList(40); 
  AddList(45);
 
  last = root;

  while(root){
    printf("%d\n", root->d); //������ ���
    root = root->p; //���� ������ �ּ�
  }

  root = last;

  while(root){
 last = root->p; //���� node�� �ּҸ� �ӽ÷� ���� 
  free(root); // ���� node �޸� ���� 
  root = last; // �����Ϳ� ���� ����� �ּҸ� ���� 
  }
  
  free (root); //�޸� ���� 
  free (last);
}
