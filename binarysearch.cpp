#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> &arr, int ele){
    int n=arr.size();
    int left=0;
    int right=n-1;
    int ans=-1;
    while(left<=right){
        int mid=((right-left)/2)+left;
        if(arr[mid]>=ele){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;

        }
        
    }
    return ans;

}

int upperbound(vector<int> &arr, int ele){
    int n=arr.size();
    int left=0;
    int right=n-1;
    int ans=-1;
    while(left<=right){
        int mid=((right-left)/2)+left;
        if(arr[mid]>ele){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;

        }
        
    }
    return ans;

}

int main(){
    vector<int> arr={1,2,3,3,3,3,3,4,5,6};
    auto i=lower_bound(arr.begin(), arr.end(), 3);
    auto j=upper_bound(arr.begin(), arr.end(),3);
    cout<<j-i<<endl;
    
    int lowerboundOf2=lowerbound(arr,2);
    cout<<lowerboundOf2<<endl;

    int upperboundOf2=upperbound(arr, 2);
    cout<<upperboundOf2<<endl;
    
    return 0;
}