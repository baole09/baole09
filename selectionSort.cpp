//Sắp xếp chọn:
#include<isostream> 
using namespace std;

void selectionSort(int a[], n){
    for(int i=0; i<n-1;i++){
        int min_index=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min_index]){
            min_index=j;
            }
        }
        int tmp=a[i];
        a[i]=a[min_index];
        a[min_index]=tmp;
    }
}
int main(){
    int a[]={10,9,2,5,4,3,7,8,6,1};
    selectionSort(a,10);
    for(int i=0; i<10; i++){
        cout<<a[i]<<" ";
    }

}
