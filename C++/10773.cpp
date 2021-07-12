#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	int n, sum = 0;

	cin >> n;

	for (int i = 0, a; i < n; i++)
	{
		cin >> a;

		if (a == 0)
			v.pop_back();
		else
			v.push_back(a);
	}
	for (int i = v.size() - 1; i >= 0; i--)
		sum += v[i];

	cout << sum;
}