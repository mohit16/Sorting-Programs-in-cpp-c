#include<iostream>
#include<stdio.h>
using namespace std;


void SelectionSort(int A[], int n);

int main(){

    cout<<"enter the number of elements to be sorted\n";
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    SelectionSort(arr, n);
    return 0;

}
void SelectionSort(int A[], int n){
    int min_index, temp =0;
    for(int i = 0; i <n-1 ; i++){
         min_index = i;
        for(int j = i+1; j<n ; j++){
            if(A[min_index] > A[j])
                min_index = j;

        }
        //swap the min element with the i'th element
        temp = A[i];
        A[i] = A[min_index];
        A[min_index] = temp;
    }
    printf("sorted output \n");
    for (int i = 0; i<n; i++){
        printf("%d\n", A[i]);

    }

}
