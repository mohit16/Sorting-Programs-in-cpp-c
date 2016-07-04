#include<iostream>
#include<stdio.h>
using namespace std;


void InsertionSort(int A[], int n);

int main(){

    cout<<"enter the number of elements to be sorted\n";
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    InsertionSort(arr, n);
    return 0;

}
void InsertionSort(int A[], int n){

    for(int i = 1; i <n ; i++){
        int temp = A[i];
        int j = i;
        while(A[j-1]>temp && j>=1){
            A[j] = A[j-1];
            j--;
        }
        A[j] = temp;
        }
    printf("sorted output \n");
    for (int i = 0; i<n; i++){
        printf("%d\n", A[i]);

    }

}

