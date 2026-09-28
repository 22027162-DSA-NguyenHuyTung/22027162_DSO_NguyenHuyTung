#include <iostream>
using namespace std;

int main() 
{
    int sum=0;
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
    int array[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>array[i][j];
            sum+=array[i][j];
        }
    }
    cout<<sum;
    return 0;
}
//độ phức tạp bộ nhớ o[n^2]
//độ phức tạp thời gian o[n^2]