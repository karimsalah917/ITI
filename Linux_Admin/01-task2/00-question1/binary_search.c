#include <stdio.h>



int binary_search(int* arr,int size,int key)
{
int i,lo=0,hi=size-1,mid;
mid=(lo+hi)/2;
while(hi>=lo)
{
mid=(lo+hi)/2;
if(arr[mid]>key)
hi=mid-1;
else if(arr[mid]>key)
lo=mid+1;
else if(arr[mid]==key)
return mid;
else
return -1;
}
}
int main(void)
{
int found_index;
int arr[5]={1,2,3,4,5};
found_index=binary_search(arr,5,3);
printf("the element is found at index [%d]\n",found_index);
return 0;
}










