#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    double array[size];
    double sum=0;
    for(int i=0;i<size;i++){
        cout<<"enter the number #"<<i+1<<endl;
        cin>>array[i];
        sum+=array[i];
    }
    for(int i=0;i<size;i++){
        if(array[i]>sum/size){
            cout<<array[i]<<" ";
        }
    }
    return 0;
}
//đô phức tạp bộ nhớ o[n]
//độ phức tạp thời gian o[n]