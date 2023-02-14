#include <bits/stdc++.h>
using namespace std;

string removeAlphabet(string s, char ch)
{
    string ans = ""; // Initialising empty string
    for (int i = 0; i < s.length(); i++)
    {
        // if s[i] is equal to the character passed the continue else append s[i] to ans
        if (s[i] == ch)
        {
            continue;
        }
        ans += s[i];
    }
    return ans;
}

int main()
{
    // Write the code from here
    // Input
    string s = "hello";
    // logic
    string ans = removeAlphabet(s, 'e');
    // Output
    cout << ans;
    return 0;
}