#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) // If n = 5
{
    int k = n;                  // Copying value to n to k so that n does not change
    for (int i = 0; i < n; i++) // looping n number of times
    {
        int j = k; // Copying k value to j so that j can be printed with each iteration
        while (j > 0)
        {
            cout << j; // If j is 5 then 5 is printed then j is decremented then 4 is printed and so on
            j--;
        }
        cout << endl;
        k--; // We decrement k as in the next iteration we have to start from 4
    }
}

void printPatternWithSpace(int n) // same as above just one step is added
{
    int k = n;
    for (int i = 0; i < n; i++)
    {
        int j = k;

        // Adding space to the begining
        int space = n - j;
        for (int l = 0; l < space; l++)
        {
            cout << " ";
        }

        while (j > 0)
        {
            cout << j;
            j--;
        }
        cout << endl;
        k--;
    }
}

int main()
{
    // Write the code from here
    printPatternWithSpace(5);

    return 0;
}