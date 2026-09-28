#include <iostream>
using namespace std;
void xoaphantu(int &size,int array[],int k){
    for(int i=k-1;i<size-1;i++){
        array[i]=array[i+1];
    }
    size--;
}
int main() 
{
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    if(size<0){
        cout<<"error"<<endl;
        return 0;
    }
    int array[size];
    for(int i=0;i<size;i++){
        cout<<"enter the number #"<<i+1<<endl;
        cin>>array[i];
    }
    int k;
    cout <<"pick the element you want to delete"<<endl;
    cin>>k;
    if(k<0||k>=size){
        cout <<"error"<<endl;
        return 0;
    }
    xoaphantu(size,array,k);
    for(int i=0;i<size;i++){    
            cout<<array[i]<<" ";
    }
    return 0;
}
//độ phức tạp thời gian o[n]
//độ phức tạp bộ nhớ o[n]