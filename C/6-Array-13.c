// Divide and conquer
#include <stdio.h>

int findsmallest(int *arr ,int strt, int end){
if(strt == end){
    return arr[strt] ;
}
int mid =(strt + end)/2;
int leftsmallest= findsmallest(arr, strt ,mid);
int rightsmallest = findsmallest(arr, mid+1 , end);

if(leftsmallest<rightsmallest){
    return leftsmallest;
}
else{
    return rightsmallest;
}
printf("%d %d",leftsmallest, rightsmallest);
}

int main(){
    int arr[]={1,6,2,0,3,-2};
    int k =findsmallest(arr,0,5);
    printf("%d", k);
    return 0;
}