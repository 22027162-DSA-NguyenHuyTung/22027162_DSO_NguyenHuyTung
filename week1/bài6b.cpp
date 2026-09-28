#include <iostream>
using namespace std;
void insert(int &size,int y,int m,int array[]){
    size++;
    for(int i=size;i>m-1;i--){
        array[i]=array[i-1];
    }
    array[m-1]=y;
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
    int y;
    cout<<"enter the value of y"<<endl;
    cin>>y;
    int m;
    cout<<"enter where you want to insert y"<<endl;
    cin>>m;
    if(m>size||m<0){
        cout<<"error"<<endl;
        return 0;
    }
    insert(size,y,m,array);
    for(int i=0;i<size;i++){    
            cout<<array[i]<<" ";
    }
    return 0;
}
//độ phức tạp thời gian o[n]
//độ phức tạp bộ nhớ o[n]
