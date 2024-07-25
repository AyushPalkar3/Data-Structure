#include <stdio.h>


int LinearSearch(int arr[],int size,int element){
    for ( int i=0;i <size; i++)
    {
        if(arr[i]==element){
            return i;
        }
        // printf("%d",arr[i]);
    }
    return -1;
    
}
int main() {
    int arr[]={5,6,7,8,9,23};
    int size =6,element=8;
    int index=LinearSearch(arr,size,element);
    printf("%d",index);
    return 0;
}