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

void print() { cout << ""; }
template <typename T, typename... Args>
void print(T x, Args... args)
{
    cout << x;
    print(args...);
}

void solution()
{
    string s;
    int row;
    cin >> s >> row;

    int n = s.length();
    vector<string> ans(row, "");
    int crow = 0;
    bool down = false;

    if (row == 1 || row >= n)
    {
        print(s, nl);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        ans[crow] += s[i];
        if (crow == 0)
        {
            down = true;
        }
        else if (crow == row - 1)
        {
            down = false;
        }
        if (down)
        {
            crow++;
        }
        else
        {
            crow--;
        }
    }
    string result = "";
    for (int i = 0; i < ans.size(); i++)
    {
        result += ans[i];
    }

    print(result, nl);
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