#include <stdio.h>
int deleteArr(int arr[],int index, int size){
   for (int i = index; i < size; i++)
   {
    arr[i]=arr[i+1];

   }
   return size-1;
   
    
}
void showArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("element %d =%d \n",i,arr[i]);
    }
   printf(sizeof(int));
    
}
int main() {
    int arr[10]={1,2,3,4,5};
    int size =5;
    int newSize=deleteArr(arr,3,size);
    showArr(arr,newSize);
    return 0;
}