//Bubble sort
for (int i = 0; i < n-1; i++){
  for (int j = 0; j < n-1-i; j++){
    if(arr[j]>arr[j+1]){
      int temp;
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  }
}

//insertion sort
#include <stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void printing(int arr[],int n){
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[]={1,5,3,0,2};
    int n=5;
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(&arr[j],&arr[j-1]);
            j--;
        }
    }
    printing(arr,n);
    return 0;
}
