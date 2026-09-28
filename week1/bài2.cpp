#include <iostream>
using namespace std;
void sort(int array[],int size);
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
    sort(array,size);
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
void sort(int array[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
//độ phức tạp bộ nhớ o[n]
//độ phức tạp thời gian 0[n^2]