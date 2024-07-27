#include<stdio.h>

// Traversal
void showArr(int arr[],int n){
    for (int i = 0; i < n  ; i++)
    {
        printf("elemnt= %d \n",arr[i]);
    }
    printf("-------------------------------\n");
}


int sortedInsert(int arr[],int size,int eelement,int capacity,int index){
    if(size>=capacity){
        printf("Array is full");
        return -1;}
    for (int i = size; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index]=eelement;
    size=size+1;
    
    return size;
}

int main(){
    int arr[100]={7,8,12,27,88};
    int size = 5;
    int element = 43;
    int index = 3;
    showArr(arr,5);
    int newsize=sortedInsert(arr,size,element,100,index);
    showArr(arr,newsize);
    return 0;
}