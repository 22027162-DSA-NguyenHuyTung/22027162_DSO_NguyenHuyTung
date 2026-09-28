#include <iostream>
using namespace std;
int ucln(int a,int b);
void rutgon(int &a,int &b);
int main() 
{
    int a;
    int b;
    cout<<"Enter the number A"<<endl;
    cin>>a;
    cout<<"Enter the number B"<<endl;
    cin>>b;
    if(b==0){
        cout<<"Please enter the number B different than zero"<<endl;
        return 0;
    }
    rutgon(a,b);
    if(b<0){
        a=-a;
        b=-b;
    }
    cout<<a<<"/"<<b;
    return 0;
}
int ucln(int a,int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
void rutgon(int &a,int &b){
     int g=ucln(a,b);
    a=a/g;
    b=b/g;
}
//độ phức tạp thời gian o[logn]
//độ phức tạp bộ nhớ o[1]