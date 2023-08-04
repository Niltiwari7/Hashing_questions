#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_element=INT_MAX;
    int min_freq_ele;
    int max_element= INT_MIN;
    int max_freq_ele;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        if(it.second<min_element){
            min_element=it.second;
            min_freq_ele=it.first;
        }
        if(it.second>max_element){
            max_element=it.second;
            max_freq_ele=it.first;
        }

    }
    cout<<max_freq_ele<<" "<<min_freq_ele<<endl;
}