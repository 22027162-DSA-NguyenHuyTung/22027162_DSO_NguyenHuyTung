#include <iostream>
using namespace std;
int tinhtoan(int n){
    if(n==0){
        return 1;
    }
    return n*tinhtoan(n-1);
}
int main() 
{
    int n;
    cout<<"Enter the number n"<<endl;
    cin>>n;
    if(n<0){
        cout<<"Please enter the number greater than zero"<<endl;
        return 0;
    }
    int ketqua=tinhtoan(n);
    cout<<ketqua;
    return 0;
}
//độ phưc tạp bộ nhớ o[1]
//độ phức tạp thời gian o[n]