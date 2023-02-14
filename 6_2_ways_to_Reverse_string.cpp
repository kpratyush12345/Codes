#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach TC: O(n) SC: O(n)
string reverseString(string s)
{
    string ans = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += s[i];
    }
    return ans;
}

// Optimal approach TC: O(n/2) SC: O(1)
string reverseStringOptimally(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        swap(s[i], s[s.length() - i - 1]);

        // If interviewer says dont use swap inbuilt function
        // Then use -
        //  int temp = s[i];
        //  s[i] = s[s.length() - i - 1];
        //  s[s.length() - i - 1] = temp;
    }
    return s;
}

int main()
{
    // Write the code from here
    string s = "hello";
    string ans = reverseString(s);
    string ans2 = reverseStringOptimally(s);
    cout << ans << endl;
    cout << ans2 << endl;
    return 0;
}