#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void Merge(int arr[], int l, int mid, int r){
    int i,j,k;
    i = j= 0;
    int n1, n2;
    n1 = mid-l + 1;
    n2 = r-mid;
    int left[n1], right[n2];


    for(int i = 0; i<n1; i++){
      left[i] = arr[i+l];
    }
    for(int j = 0; i<n2; i++){
        right[j] = arr[mid+1+j];
    }
    k = l;

    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }


}


void MergeSort(int arr[], int l, int r){
    if(l>r){
        return;
    }

    int mid = l + (r-l)/2;

    MergeSort(arr, l, mid);
    MergeSort(arr, mid+1, r);
    Merge(arr,l,mid,r);
}

int main(){

    cout<<"enter the number of elements to be sorted\n";
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    MergeSort(arr, 0, n-1);

    for(int i =0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;

}



