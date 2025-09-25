#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector <int>& arr, int n){
    int size = n;
    int start = 0, end = (n-1);

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector <int> arr = {2,5,6,7};
    int n = arr.size();
    reverseArray(arr,n);
}