#include <bits/stdc++.h>
using namespace std;

void swapColumns(vector<vector<int>> &arr, int col1, int col2)
{
    int n = arr.size();
    int m = arr[0].size();

    // Checking if the col1 and col2 values are out of Bound or not
    if (col1 >= m || col2 >= m || col1 < 0 || col2 < 0)
    {
        cout << "Out of Bound" << endl;
        return;
    }

    // Looping and swapping the column values
    for (int i = 0; i < n; i++)
    {
        swap(arr[i][col1], arr[i][col2]);
        // If interviewer says dont use swap inbuilt function
        // Then use -
        //  int temp = arr[i][col1];
        //  arr[i][col1] = arr[i][col2];
        //  arr[i][col2] = temp;
    }
}

int main()
{
    // Write the code from here
    // Input
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int col1, col2;
    cin >> col1 >> col2;
    // Logic
    swapColumns(arr, col1, col2);
    // Output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}