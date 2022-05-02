#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	int n = 0, len;

	cin >> s;
	len = s.length();

	for (int i = 0; i < len; i++)
	{
		if (s.at(i) == '=' || s.at(i) == '-')
		{
			if (i > 1 && s.at(i - 1) == 'z' && s.at(i - 2) == 'd')
				n--;
			n--;
		}
		if (i > 0 && s.at(i) == 'j' && (s.at(i - 1) == 'n' || s.at(i - 1) == 'l'))
			n--;

		n++;
	}
	cout << n;
	
}