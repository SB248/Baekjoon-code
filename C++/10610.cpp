#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	int len, sum = 0, zero = 0;

	cin >> s;

	len = s.length();

	sort(s.begin(), s.end());

	for (int i = 0; i < len; i++)
	{
		if (s.at(i) == '0')
			zero = 1;
		sum += (s.at(i) - '0');
	}

	if (sum % 3 == 0 && zero == 1)
		for (int i = len - 1; i >= 0; i--)
			cout << s[i];
	else
		cout << -1;

}
//3, 6, 9    10의 자리 0, 1의 자리 3 6 9
//12,15,18	 10의 자리 1, 1의 자리 2 5 8 (3n + 2)
//21,24,27	 10의 자리 2, 1의 자리 1 4 7 (3n + 1)

/*	for (int i = len, n = 0; i > 0; i--)
	{
		if (i == len && v[len] != 0)
		{
			len = 0;
			break;
		}
		else if (len == 1 && v[i - 1] % 3 == 0)
			continue;


		if ((v[i] == 3 || v[i] == 6 || v[i] == 9))
		{
			v[i - 1] -= 0;
			v[i] %= 3 - 0;
		}
		else if ((v[i] == 2 || v[i] == 5 || v[i] + n == 8))
		{
			v[i - 1] -= 1;
			v[i] %= 3 - 1;
		}
		else if ((v[i] == 1 || v[i] == 4 || v[i] == 7))
		{
			v[i - 1] -= 2;
			v[i] %= 3 - 2;
		}
		else if (v[i] + n == 0)
			n = 0;
		if (v[i] < 0)
			len = 0;
		cout << len << "  " << v[i] << "\n";
	}
	if (len == 0)
		cout << -1;
	else
		for (int i = 0; i <= len; i++)
			cout << an[i];*/