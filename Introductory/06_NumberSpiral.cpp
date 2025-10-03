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
    int t;
    cin >> t;

    while (t--)
    {
        long long y, x;
        cin >> y >> x;

        long long m = max(y, x);
        long long m_squared = m * m;
        long long ans = 0;


        // Max(x, y) is odd
        if (m % 2 == 1)
        {
            if (x == m) // if it is on rightmost column
            {
                ans = m_squared - (y - 1);
            }
            else // Bottom Row
            {
                ans = (m - 1) * (m - 1) + x;
            }
        }
        else
        {
            if (y == m) // Bottom Row
            {
                ans = m_squared - (x - 1);
            }
            else // Rightmost column
            {
                ans = (m - 1) * (m - 1) + y;
            }
        }

        cout << ans << endl;
    }

    return 0;
}