#include <bits/stdc++.h>
using namespace std;
int main(){
    // print the subarray of the array 
    int n ; 
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0; i<n; i++){
        for(int j = i; j<n; j++){
            for(int k = i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}