#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void Heapify(int arr[], int i,int n){

    int left_child = 2*i +1;
    int right_child = 2*i+2;
    int max_index = i;

    if(left_child < n && arr[left_child]>arr[max_index]){
        max_index = left_child;
    }
    if( right_child < n && arr[right_child]>arr[max_index]){
        max_index = right_child;
    }
    if(max_index !=i){
        //swap the elements
        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;

        Heapify(arr, max_index,n);
    }



}

int main(){
int n;
cout<<"enter the number of elements\n";
cin>>n;
int arr[n];
for(int i = 0; i<n; i++){
    cin>>arr[i];
}

for(int i = n/2 - 1; i>=0; i--){
//the Main method in Heap sort to understand
    Heapify(arr, i,n);

}
for(int i = n-1; i>=0; i--){
    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;
    Heapify(arr, 0, i);
}
for(int j= n-1;j>=0; j--)
{
    printf("%d \n",arr[j]);
}

return 0;}
