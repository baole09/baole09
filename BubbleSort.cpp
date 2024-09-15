// Sắp xếp nổi bọt:
#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
    for(int i=0; i < n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j] >a[j+1]){
                int tmp = a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;

            }
        }
    }
}
int main(){
    int a[] = {10,3,1,2,8,9,7,4,6,5};
    bubblesort(a, 10);
    for(int i=0; i<10; i++){
        cout<<a[i]<<" "<<endl;
    }
}
