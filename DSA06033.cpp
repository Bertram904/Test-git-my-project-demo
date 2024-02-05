#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		int res = INT_MIN;
		int k;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (j - i > res && a[j] > a[i])
				{
					k = j - i;
				}
			}
		}
		cout << k;
		cout << endl;
	}
}