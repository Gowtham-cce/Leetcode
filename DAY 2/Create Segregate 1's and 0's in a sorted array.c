#include <stdio.h>
void swap(int *p1,int *p2)
{
  int temp;
  temp=*p1;
  *p1=*p2;
  *p2=temp;
}
int main(void) {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int zi=0;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      swap(&arr[i],&arr[zi]);
      ++zi;
    }
  }
  for(int i=0;i<n;i++)
    {
      printf("%d  ",arr[i]);
    }
  return 0;
}
