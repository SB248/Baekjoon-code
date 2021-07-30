#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, k;
	vector<int> v;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		v.push_back(i);

	int i = k;
	cout << "<" << v[i - 1];
	v.erase(v.begin() + i - 1);
	n--;
	while (v.empty() == 0)
	{
		i += (k - 1);

		if (i >= n)
		{
			i %= n;
			if (i == 0)
				i = n;
		}

		cout << ", " << v[i - 1];
		v.erase(v.begin() + i - 1);
		n--;

	}
	cout << ">";

}