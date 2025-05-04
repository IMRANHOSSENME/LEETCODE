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
    int n;
    cin >> n;

    int target;
    cin >> target;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = true;
    vector<int> ans;

    for (int i = 0; i < n - 1 && flag; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                flag = false;
            }
        }
    }
    print(v[ans[0]], " ", v[ans[1]], nl);
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