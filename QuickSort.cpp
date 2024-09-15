//Sắp xếp nhanh- Quick Sort Vs Lomuto Partition:
#include<iostream>
using namespace std;

int partition(int a[], m, n){
    int j=m-1, pivot=a[n];
    for(int i=m; i<n; i++){
        if(a[i]<=pivot){
            ++j;
            int tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }

    }
    ++j;
    int tmp=a[n];
    a[n]=a[j];
    a[j]=tmp;
    return j;
}

void quicksort(inta a[], m, n){
    if(m<n){
        int p = partition(a,m,n);
        quicksort(a,m,p-1);
        quicksort(a,p+1,n);
    }
}
int main(){
    int a[]={10,9,6,7,5,3,2,4,1,8};
    quicksort(a,0,9);
    for(int i=0; i<10; i++){
        cout<<a[i]<<" ";
    }
}
