#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		int dem = 0;
		for (int i = 0; i < n; i++)
		{
			if (binary_search(a, a + n, k - a[i]))
			{
				++dem;
			}
		}
		cout << dem;
		cout << endl;
	}
}