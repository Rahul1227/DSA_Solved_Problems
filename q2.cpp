#include <bits/stdc++.h>
vector<int> solve(int q, vector<pair<int, int>> queries) {
	vector<int> ans;
	vector<int> arr;
	for(auto it:queries){
		if(it.first==0){
			arr.push_back(it.second);

		}else if (it.first==1){
			int product=1;
			int n=arr.size()-1;
			for(int i=1; i<=it.second; i++){
				product*=arr[n];
				n--;
			}
			ans.push_back(product);
		}
	}
	return  ans;
  }
