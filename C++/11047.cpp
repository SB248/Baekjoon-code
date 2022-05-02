#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int n, k, c = 0;
	vector<int> v;

	cin >> n >> k;

	v.push_back(0);
	for (int i = 0, a; i < n; i++)
	{
		cin >> a;
		v.push_back(a);
	}

	for (int i = n; i > 0; i--)
	{
		while (v[i] <= k)
		{
			c += 1;
			k -= v[i];
		}
	}
	cout << c;
}