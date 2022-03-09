#include <iostream>
#define MAX_N 1000000

using namespace std;

int nums[MAX_N + 1];
int e[MAX_N + 1];
int n;

void solve()
{
    for (int i = 0; i < n; i++)
    {
        if (!e[nums[i]])
        {
            cout << nums[i] << " ";
            e[nums[i]] = 1;
        }
    }
    cout << endl;
}

main()
{
    freopen("./bai11.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    solve();
}