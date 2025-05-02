#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define vpll vector<pair<ll, ll>>
#define vpii vector<pair<int, int>>
#define nl "\n"
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void print()
{
    cout << "";
}

template <typename T, typename... Args>
void print(T x, Args... args)
{
    cout << x;
    print(args...);
}

void solution()
{
    string s;
    cin >> s;
    int n = s.size();

    vector<vector<bool>> table(n, vector<bool>(n, false));

    int ml =1 , st = 0;

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        table[i][i] = true;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            table[i][i + 1] = true;
            st = i;
            ml = 2;
        }
    }

    for (int l = 3; l <= n; l++)
    {
        for (int i = 0; i <= n - l; i++)
        {
            int j = i + l - 1;
            if (s[i] == s[j] && table[i + 1][j - 1])
            {
                table[i][j] = true;

                if (l > ml)
                {
                    st = i;
                    ml = l;
                }
            }
        }
    }

    ans = s.substr(st,ml);

    print(ans, nl);
}

int main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
