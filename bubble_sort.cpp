#include<iostream>
#include<stdio.h>
using namespace std;


void BubbleSort(int A[], int n);

int main(){

    cout<<"enter the number of elements to be sorted\n";
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, n);
    return 0;

}
void BubbleSort(int A[], int n){
    int temp;
    for(int i = n-1; i >0; i--){
        for(int j = 0; j<i; j++){
            if(A[j]> A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    printf("sorted output \n");
    for (int i = 0; i<n; i++){
        printf("%d\n", A[i]);

    }

}
