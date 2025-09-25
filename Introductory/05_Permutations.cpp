#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    // If n is 1 no adjacent element hence 1 is correct answer
    if (n == 1)
    {
        cout << "1\n";
    }
    else if (n <= 3) // Impossible
    {
        cout << "NO SOLUTION\n";
    }
    else
    {

        vector<int> arr;

        vector<int> oddNums;
        vector<int> evenNums;
        // Separate Odd and even elements
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                evenNums.push_back(i);
            }
            else
            {
                oddNums.push_back(i);
            }
        }
        // If even numbers of element reverse both sides to get diff > 1 always
        if (n % 2 == 0)
        {
            reverse(evenNums.begin(), evenNums.end());
            reverse(oddNums.begin(), oddNums.end());
        }

        int j = 0, k = 0;

        // Append odd numbers first

        while (j < oddNums.size())
        {
            arr.push_back(oddNums[j]);
            j++;
        }

        // Then append even numbers to the answer array

        while (k < evenNums.size())
        {
            arr.push_back(evenNums[k]);
            k++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}