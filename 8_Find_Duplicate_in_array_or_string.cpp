#include <bits/stdc++.h>
using namespace std;

// String
vector<char> findDuplicate(string s)
{
    unordered_map<char, int> mp; // Initialising map to store the occurences
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++; // Looping and adding the data to map will the second value equal to its number of occurences
    }
    vector<char> ans; // Array to store the duplicate elements

    // Looping through map
    for (auto i : mp)
    {
        // If the second value is greater than 1 then it contains duplicate therefore we add it to the ans vector
        if (i.second > 1)
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}

// Array
vector<int> findDuplicate(vector<int> &arr)
{
    unordered_map<int, int> mp; // Initialising map to store the occurences
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++; // Looping and adding the data to map will the second value equal to its number of occurences
    }
    vector<int> ans; // Array to store the duplicate elements

    // Looping through map
    for (auto i : mp)
    {
        // If the second value is greater than 1 then it contains duplicate therefore we add it to the ans vector
        if (i.second > 1)
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}

int main()
{
    // Write the code from here
    // Input
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Logic
    vector<int> ans = findDuplicate(arr);
    // Output
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}