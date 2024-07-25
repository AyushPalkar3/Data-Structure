#include <stdio.h>
int binarySearch(int arr[],int size, int element)
{
    int low=0,high=size-1,mid=(high+low)/2;
    while (low<=high)
    {
        /* code */
    
        if(arr[mid]==element){
            return mid;
        }
        else if (element<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        mid=(low+high)/2;
    }
    return -1;
}
int main() {
    int arr[]={1,2,3,4,5,6,7};
    int size=7,element=7;
    int index =binarySearch(arr,size,element);
    printf("%d",index);
    return 0;
}