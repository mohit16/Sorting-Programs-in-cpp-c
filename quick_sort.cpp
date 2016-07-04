#include<stdlib.h>
#include<iostream>
#include<stdio.h>

using namespace std;
int partition_pivot(int arr[], int l, int r){

    if(l == r)
        return l;
    int pivot = arr[l];
    int left = l+1;
    int right = r;
    while(left<right){
           // int temp = 0;
        while(arr[left]<pivot){
            left++;
        }
        while(arr[right]>pivot){
            right--;
        }
        if(left<right){
             int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }

    }
    arr[l] = arr[right];
    arr[right] = pivot;
    return right;

}


void QuickSort(int arr[], int l, int r){
    if(l>r){
        return;
    }

    int pivot;
    pivot = partition_pivot(arr, l, r);
    QuickSort(arr, l, pivot-1);
    QuickSort(arr, pivot+1, r);
}

int main(){

    cout<<"enter the number of elements to be sorted\n";
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    QuickSort(arr, 0, n-1);
    for(int i =0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;

}



