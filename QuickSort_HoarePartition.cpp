//Sắp xếp nhanh - Quick Sort Vs Hoare Partition:
#include<iostream>
using namespace std;

//Hoare partition:
int partition(int a[], int m, int n){
    int i=m-1, j=n+1, pivot = a[m];
    while(true){
        do{
            ++i;
        }while(a[i]<pivot);
        do{
            --j;
        }while(a[j]>pivot);
        if(i<j){
            swap(a[i], a[j]);
        }
        else{
            return j;
        }
    }
}
void quicksort(int a[],int m, int n){
    if(m<n){
        int p=partition(a,m,n);
        quicksort(a,m,p);
        quicksort(a,p+1,n);
    }
}
int main(){
    int a[]={10,1,3,4,2,5,7,9,8,6};
    quicksort(a,0,9);
    for(int i=0; i<10;i++){
        cout<<a[i]<<" ";
    }
}
