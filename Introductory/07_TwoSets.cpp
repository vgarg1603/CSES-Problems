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

    long long sum = ((long long)t * ((long long)t + 1)) / 2;

    if (sum % 2 != 0)
    {
        cout << "NO\n";
    }
    else
    {
        vector<int> set1, set2;

        cout << "YES\n";

        if (t % 4 == 0)
        {
            for (int i = 1; i <= t / 2; i++)
            {
                if (i % 2 == 1)
                {
                    set1.push_back(i);
                    set1.push_back(t - i + 1);
                }
                else
                {
                    set2.push_back(i);
                    set2.push_back(t - i + 1);
                }
            }
        }
        else if (t % 4 == 3)
        {
            set1.push_back(1);
            set1.push_back(2);
            set2.push_back(3);
            for (int i = 4; i <= t; i++)
            {
                if ((i - 3) % 4 <= 1)
                    set1.push_back(i);
                else
                    set2.push_back(i);
            }
        }
        cout << set1.size() << "\n";
        for (int x : set1)
            cout << x << " ";
        cout << "\n";
        cout << set2.size() << "\n";
        for (int x : set2)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}