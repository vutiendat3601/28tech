#include <iostream>

using namespace std;

int nums[1001];
int n;

void solve()
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
            count++;
    }
    cout << count << endl;
}

int main()
{
    freopen("./bai10.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        solve();
    }
}