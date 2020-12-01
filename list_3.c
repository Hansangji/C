#include <stdio.h>
#include <stdlib.h>

typedef struct list {
  int d; //데이터 저장할 변수 
  struct list* p; // 다음 가르킬 주소를 저장할 포인터 
} LIST;

LIST* root = NULL;  //LIST = struct list
LIST* last = NULL;

void AddList(int a){

  LIST* r = (LIST*)malloc(sizeof(LIST)); //새 node(데이터 지점) 생성 
  r->d = a; // 값 저장 
  r->p = NULL;  

  if(root==NULL) root = r; //처음 들어온 데이터 노드 지정 

  else           last->p = r; //이후 들어온 데이터 노드 지정 

  last = r; //마지막 데이터 
}

int main(void){

  AddList(35); //addlist 함수로 데이터 보내기 
  AddList(40); 
  AddList(45);
 
  last = root;

  while(root){
    printf("%d\n", root->d); //데이터 출력
    root = root->p; //다음 데이터 주소
  }

  root = last;

  while(root){
 last = root->p; //다음 node의 주소를 임시로 저장 
  free(root); // 현재 node 메모리 해제 
  root = last; // 포인터에 다음 노드의 주소를 저장 
  }
  
  free (root); //메모리 해제 
  free (last);
}
