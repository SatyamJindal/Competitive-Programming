#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, r; 
	cin >> n >> r;
	vector<int> a(n);
	vector<int> cnt(n);
	int ans = 0;
	for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if (a[i])ans++;
        if (a[i])
            for (int j = max(0, i - r + 1); j < min(n, i + r); ++j)
                cnt[j]++;
    }
    for(int i=0;i<n;i++)
        if (!cnt[i])
        {
            cout << -1;
            return 0;
        }
    for(int i=0;i<n;i++)
    {
        bool fl = true;
        if (a[i])
            for (int j = max(0, i - r + 1); j < min(n, i + r); ++j)
                if (cnt[j] == 1)
                {
                    fl = false;
                    break;
                }
        if (fl && a[i])
        {
            ans--;
            for (int j = max(0, i - r + 1); j < min(n, i + r); ++j)
                cnt[j]--;
        }
    }
    cout << ans;

}
