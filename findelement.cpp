#include <bits/stdc++.h>
using namespace std;

int searchElement(vector <int>& arr,int n,int x){
    int y;
    for(int i =0;i<n;i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    vector <int> arr = {1,2,3,4,5};
    int n = arr.size();
    int x = 4;

    int result = searchElement(arr,n,x);

    if(result != -1){cout<<"The element has been found at index "<<result<<endl;}
    else{cout<<"The element dos'nt exist in an array";}

}