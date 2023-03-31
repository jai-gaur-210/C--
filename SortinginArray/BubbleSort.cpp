#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int j=0; j<n; j++){
        cin>>arr[j];

    }
    // j<n-i bhi likh sakte hai
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }
        
    
    
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";

    }
    cout<<endl;
    return 0;
 }