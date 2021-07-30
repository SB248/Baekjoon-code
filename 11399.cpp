#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n, sum = 0;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	for (int i = 0, m; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			sum += v[j];
		
	}

	cout << sum;
}