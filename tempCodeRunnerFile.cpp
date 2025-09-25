#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector <int>& arr, int n){
    int size = n;
    for(int i = 0;i<size;i++){
        swap(arr[i],arr[i+1]);
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