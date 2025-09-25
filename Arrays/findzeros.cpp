#include <bits/stdc++.h>
using namespace std;

void numberOfZeros(vector <int>& arr, int n){

    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            count++;
        }
    }
    cout<<"There are "<<count<<" zeros's in you array";
}

int main(){
    vector <int> arr = {0,5,9,0,1,2,0};
    int n = arr.size();
    numberOfZeros(arr,n);
}