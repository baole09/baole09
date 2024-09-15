//Sắp xếp đếm phân phối:
#include<iostream>
using namespace std;

int cnt[10000001];

void CountingSort(int a[],int n){
    int k=-1000000000;
    for(int i=0; i<n; i++){
        cnt[a[i]]++;
        k = max(k, a[i]);
    }
    for(int i=0; i<=k; i++){
        if(cnt[i]){
            for(int j=0; j<cnt[i]; j++){
            cout<<i<<" ";
            }
        }

    }
}
int main(){
    int a[]={10,3,4,5,2,1,8,6,9,7};
    CountingSort(a,10);
}
