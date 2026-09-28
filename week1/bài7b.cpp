#include <iostream>
using namespace std;
void xoadong(int &rows,int &columns,int array[][100],int k){
    for(int i=k-1;i<rows-1;i++){
        for(int j=0;j<columns;j++){
            array[i][j]=array[i+1][j];
        }
    }
    rows--;
}
int main() 
{
    int rows;
    int columns;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    if(rows<0){
        cout<<"error"<<endl;
        return 0;
    }
    cout<<"Enter the number of columns"<<endl;
    cin>>columns;
    if(columns<0){
        cout<<"error"<<endl;
        return 0;
    }
    int array[100][100];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>array[i][j];
        }
    }
    int k;
    cout<<"enter the row you want to delete"<<endl;
    cin>>k;
    if(k<0||k>rows){
        cout<<"error"<<endl;
        return 0;
    }
    xoadong(rows,columns,array,k);
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//độ phức tạp bộ nhớ o[n^2]
//độ phức tạp thời gian o[n^2]