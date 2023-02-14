#include <bits/stdc++.h>
using namespace std;

// Optimal Approach using Bit Manipulation
int add(int a, int b)
{
    int carry = b, sum;
    while (carry != 0)
    {
        sum = a ^ b;          // Sum will be equal to XOR
        carry = (a & b) << 1; // Carry will be equal to and of both a and b with left shift of 1

        a = sum;
        b = carry;
    }
    return sum;
}

// Brute Force - TC: O(b) SC: O(1)
int addUsingLoop(int a, int b)
{
    // Looping b times and incrementing a each times
    for (int i = 1; i <= b; i++)
    {
        a++;
    }
    return a;
}

int main()
{
    // Write the code from here
    cout << add(5, 3) << endl;
    cout << addUsingLoop(2, 3) << endl;
    return 0;
}