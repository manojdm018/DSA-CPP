#include <bits/stdc++.h>
using namespace std;

int repeatingNumbers(vector <int>& arr,int n){
    for(int i = 0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            return i;
        }
    }
    return -1;
}

int main(){
    vector <int> arr = {1,2,4,4,6,7};
    int n = arr.size();
    int results = repeatingNumbers(arr,n);

    if(results != -1){cout<<"There are repeating numbers at index "<<results<<endl;}
    else{cout<<"There are no repeating"<<endl;}
}