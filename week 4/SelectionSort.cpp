#include <iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_num=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_num]){
                min_num=j;
            }
        }
        if(min_num!=i){
            int temp = arr[i];
            arr[i]=arr[min_num];
            arr[min_num]=temp;
        }
    }
}
int main() 
{
    return 0;
}