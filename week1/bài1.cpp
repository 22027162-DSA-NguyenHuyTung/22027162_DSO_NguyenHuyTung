#include <iostream>
using namespace std;
int main() 
{
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    if(size<0){
        cout<<"please enter the number greater than zero"<<endl;
        return 0;
    }
    int array[size];
    int sum=0;
    for(int i=0;i<size;i++){
        cout<<"enter the number #"<<i+1<<endl;
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    cout<<sum;
    return 0;
}
//độ phức tạp thời gian o[n]
//độ phức tạp bộ nhớ o[n]