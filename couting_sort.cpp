#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
 void CountingSort(int arr[], int n, int k){

     printf("example");
    int brr[k+1],crr[n+1];
    int i;
    for( i = 0; i < k+1; i++){
    brr[i] = 0;
    }
    printf("example");
    for( i = 0; i<n+1;i++){
       crr[i]  = 0;
    }
    for( i = 0; i<n;i++){
        brr[arr[i]] += 1;
    }
    printf("example");
    for( i =1; i<k+1; i++){
        brr[i] = brr[i]+brr[i-1];
    }
    printf("example");
    for(i = 0; i<n; i++){

        crr[brr[arr[i]]] = arr[i];
        brr[arr[i]]--;

    }
    printf("sorted input: \n");
    for(i =1; i<n+1; i++){
        printf("%d\n",crr[i]);

    }
 }

int main(){
    printf("enter the number you want to sort\n");
    int n;
    scanf("%d", &n);
    printf("enter the Range of Numbers\n");
    int k;
    scanf("%d", &k);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    CountingSort(arr, n, k);

}
