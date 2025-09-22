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

    long long n;
    cin >> n;

    // Basic idea is n ^ n = 0 and 0 ^ n = n

    // Precompute xor of all the numbers
    long long xori = 1;
    for (long long i = 2; i <= n; i++)
    {
        xori ^= i;
    }
    // Xor with input values to cancel out
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        xori ^= x;
    }

    // Remaining value in xor will be missing number

    cout << xori << endl;

    return 0;
}