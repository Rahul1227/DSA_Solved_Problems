#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> PossibleSubSets(vector<int> &set, int n)
{
    int noOfSubSet = 1 << n;
    vector<vector<int>> ans;
    for (int num = 0; num < noOfSubSet; num++)
    {
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            if (num & (1 << i))
            {
                temp.push_back(set[i]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}

void printResult(const vector<vector<int>> &result)
{
    for (const auto &subset : result)
    {
        cout << "{ ";
        for (const auto &num : subset)
        {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
}

int main()
{
    vector<int> set;
    int n;
    cout << "Enter the number of set elements: ";
    cin >> n;
    cout << "Enter the elements of the set now" << endl;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        set.push_back(num);
    }

    cout << "The entered set is: " << endl;
    for (auto it : set)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<vector<int>> result = PossibleSubSets(set, n);
    cout << "The subsets are: " << endl;
    printResult(result);

    return 0;
}
