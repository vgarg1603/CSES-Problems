
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

    string s;
    cin >> s;

    int len = 1, maxLen = 1;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            len++;
        }
        else
        {
            maxLen = max(maxLen, len);
            len = 1;
        }
    }
    maxLen = max(maxLen, len);

    cout << maxLen << "\n";

    return 0;
}