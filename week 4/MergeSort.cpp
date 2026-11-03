#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right) {
    int temp[right - left + 1]; 
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }
        else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= right) {
        temp[k] = arr[j];
        k++;
        j++;
    }

    for (int p = 0; p < k; p++) {
        arr[left + p] = temp[p];
    }
}
void mergeSort(int arr[], int left, int right) {
    if (left >= right){
        return; 
    } 
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);      
    mergeSort(arr, mid + 1, right);  
    merge(arr, left, mid, right);   
}
int main() 
{
    return 0;
}