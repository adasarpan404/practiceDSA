#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

typedef vector<ll> vll;

int calculate(int num1, int num2)
{
    int sum = (num1 + 2 * num2 - 2) / (2 * num2 - 1);
    return sum;
}
int fact(int n)
{
    if (n == 0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
bool checkValidAnagrams(string s, string checker)
{
    unordered_map<char, int> mp;
    if (s.size() != checker.size())
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        mp[checker[i]]--;
    }
    for (auto m : mp)
    {
        if (m.second)
            return false;
    }
    return true;
}
bool comp(pair<char, int> &a, pair<char, int> &b)
{
    return a.second < b.second;
}

bool isValid(int row, int col, vector<vector<char>> &board, int m, int n)
{

    if (row > 0 && board[row - 1][col] == '#')
        return false;
    if (col > 0 && board[row][col - 1] == '#')
        return false;
    if (row < n)
    {
        if (board[row + 1][col] == '#')
        {
            return false;
        }
    }

    if (col < m)
    {
        if (board[row][col + 1] == '#')
        {
            return false;
        }
    }

    return true;
}

int gcd(int nums1, int nums2)
{
    if (nums2 == 0)
        return nums1;
    return gcd(nums2, nums1 % nums2);
}
bool solveMine(vector<vector<char>> &board, int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == '.')
            {
                if (isValid(i, j, board, m, n))
                {
                    board[i][j] = '#';
                }
            }
        }
    }
    return true;
}

void solveCactus(vector<vector<char>> &board, int m, int n)
{
    solveMine(board, m, n);
}
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] > b[i])
        {
            swap(a[i], b[i]);
        }
        ans += a[i];
    }
    ans += *max_element(b.begin(), b.end());
    ans *= 2;
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int testcases;
    bool multi = true;
    if (multi)
    {
        cin >> testcases;
    }
    else
    {
        testcases = 1;
    }
    while (testcases--)
    {
        solve();
    }
    return 0;
}