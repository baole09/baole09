#include<iostream>
#include<math.h>
using namespace std;
/* Giai pt bac 2:
int main(){

    int a,b,c;
    cout<<"Nhap a= ";cin>>a;
    cout<<"Nhap b= ";cin>>b;
    cout<<"Nhap c= ";cin>>c;
    if(a==0){
        if(b==0 && c==0){
            cout<<"PT VSN"<<endl;
        }
        else if(b==0 && c!=0){
            cout<<"PT VN"<<endl;
        }
        else{
            cout<<"PT co No"<<-c/b<<endl;
        }

    }
    else{
        int delta=b*b - 4*a*c;
        if(delta>0)
        {
            cout<<"PT co 2 No phan biet:"<<endl;
            cout<<"x1= "<<(-b + sqrt(delta)) / (2*a);
            cout<<"x2= "<<(-b - sqrt(delta)) / (2*a);
        }
        else if(delta==0){
            cout<<"PT co No kep x1=x2= "<<(-b / (2*a))<<endl;
        }
        else{
            cout<<"PT VN"<<endl;
        }
    }
    return 0;
}
*/
/* Giai he phuong trinh:
int main()
{
    int a1, b1, c1, a2, b2, c2;
    cout<<"a1= ";cin>>a1;
    cout<<"b1= ";cin>>b1;
    cout<<"c1= ";cin>>c1;
    cout<<"a2= ";cin>>a2;
    cout<<"b2= ";cin>>b2;
    cout<<"c2= ";cin>>c2;
    double A= a1 * b2 - a2 * b1;
    double A1= c1 * b2 - b1 * c2;
    double A2= a1 * c2 - c1 * a2;
    if(A!=0)
    {
        double x1=A1/A;
        double x2=A2/A;
        cout<<"Pt co No duy nhat ("<<x1<<","<<x2<<")"<<endl;
    }
    else{
        if(A1==0 && A2==0){
            cout<<"Pt VSN"<<endl;
        }
        else{
            cout<<"Pt VN"<<endl;
        }
    }




    return 0;
}
*/

int main(){
    int a, b, c,tmp=0;
    cout<<"Nhap (a,b,c): ";cin>>a>>b>>c;
    if(a>b){
        tmp=a;
        a=b;
        b=tmp;
    }
    if(a>c){
        tmp=a;
        a=c;
        c=tmp;
    }
    if (b>c){
        tmp=b;
        b=c;
        c=tmp;
    }
    cout<<"Thu tu tang dan: "<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
