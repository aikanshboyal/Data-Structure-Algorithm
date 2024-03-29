#include<bits/stdc++.h>
using namespace std;

bool is0Subarray(int arr[], int n){
    unordered_set<int> s;
    int pre_sum = 0;
    for(int i=0 ; i<n ; i++){
        pre_sum += arr[i];
        if(s.find(pre_sum) != s.end())
            return true;
        if(pre_sum == 0)
            return true;
        s.insert(pre_sum);
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    cout << "The given have a subarray with sum zero " << is0Subarray(arr, n);
    return 0;
    

}