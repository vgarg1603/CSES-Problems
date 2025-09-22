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

    // Take n input from the user

    long long n;
    cin >> n;

    // While loop until n is 1 condition is met
    while (n != 1)
    {
        cout << n << " ";
        // If n is even divide it by 2
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            // n is odd
            n = 3 * n + 1;
        }
    }
    // Finally output 1 as not included in while loop
    cout << "1\n";

    return 0;
}