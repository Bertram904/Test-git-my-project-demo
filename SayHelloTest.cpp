#include <bits/stdc++.h>

using namespace std;

int n;

int a[11];
bool xuoi[11] = {};
bool nguoc[11] = {};

void display ()
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i];
	}
}

void Try (int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (a[i] && xuoi[i - j + n] && nguoc[i + j - 1])
		{
			a[i] = j;
			xuoi[j] = false;
			nguoc[j] = false;
			if (i == n) display();
			else{
				Try(i + 1);
				xuoi[j] = true;
				nguoc[j] = true;
			}
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		Try(1);
		cout << endl;
	}
}