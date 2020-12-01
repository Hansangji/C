#include <stdio.h>

#include <stdlib.h>



typedef struct list {

  int d;

  struct list* p;

} LIST;



LIST* root = NULL;

LIST* last = NULL;



void AddList(int a){

  LIST* r = (LIST*)malloc(sizeof(LIST));

  r->d = a;

  r->p = NULL;

  if(root==NULL) root = r;

  else last->p = r;

  last = r;

}



int main(void){

  AddList(35);
  AddList(40);
  AddList(45);
  last = root;

  while(root){
    printf("%d\n", root->d);
    root = root->p;
  }

}
