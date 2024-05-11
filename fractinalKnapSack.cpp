#include <bits/stdc++.h>
using namespace std;

double maxKnapsackValue(int profit[], int weight[], int n, int netweight) {
    vector<pair<double, int>> pwratio; // Pair of (profit/weight, item index)
    double result = 0;

    // Calculate profit-to-weight ratio for each item and store it with its index
    for (int i = 0; i < n; i++) {
        pwratio.push_back({(double)profit[i] / weight[i], i});
    }

    // Sort items by profit-to-weight ratio in non-increasing order
    sort(pwratio.begin(), pwratio.end(), greater<pair<double, int>>());

    int currentWeight = 0;
    for (int i = 0; i < n; i++) {
        if (currentWeight + weight[pwratio[i].second] <= netweight) {
            // If adding the entire item is possible, add its profit to the result
            result += profit[pwratio[i].second];
            currentWeight += weight[pwratio[i].second];
        } else {
            // Otherwise, add a fraction of the item to the knapsack
            double remainingWeight = netweight - currentWeight;
            result += pwratio[i].first * remainingWeight;
            break; // Knapsack is full, so we break out of the loop
        }
    }
    return result;
}

int main() {
    int netweight;
    cout<<"Enter net Weight: ";
    cin>>netweight;
    int n;
    cout<<"Enter the number of profit or weight: ";
    cin>>n;
    int profit[n];
    int weight[n];
    cout<<"Enter the value of profit: "<<endl;
    for(int i=0; i<n; i++){
        cin>>profit[i];
    }
    cout<<"Enter the value of the weight: "<<endl;
    for(int i=0; i<n; i++){
        cin>>weight[i];
    }
    

    double result = maxKnapsackValue(profit, weight, n, netweight);
    cout << "Maximum value in knapsack: " << result << endl;

    return 0;
}
