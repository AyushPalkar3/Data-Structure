#include <stdio.h>
#include<stdlib.h>
struct myArray{
      int total_size;
      int used_size;
      int *ptr;
};
void createArray(struct myArray *a, int tSize, int uSize){
    (*a).total_size = tSize;
    (*a).used_size = uSize;
    (*a).ptr = (int *) malloc(tSize*sizeof(int));

    
   }
void createArray2(struct myArray *b,int tSize, int uSize){
    b->total_size=tSize;
    b->used_size=uSize;
    b->ptr = (int*)malloc(tSize*sizeof(int));
}

   void showArray(struct myArray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (*a).ptr[i]);
    }
    
   }
   void showArray2(struct myArray *b){
    for (int i = 0; i < b->used_size; i++)
    {
        printf("%d\n", (*b).ptr[i]);
    }
    
   }

void setVal(struct myArray *b){
    int n;
    for (int i = 0; i < b->used_size; i++)
    {
        printf("Enter element %d :-",i);
        scanf("%d",&n);
        (b->ptr)[i]=n;
    }
    
}
int main(){
    struct myArray marks,mark;
    createArray(&marks, 10, 2);
    createArray2(&mark,5,3);
    setVal(&mark);
    showArray(&mark);
    return 0;
}