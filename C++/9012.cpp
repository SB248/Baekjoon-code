#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	stack<char> s;
	string str;
	int n;

	cin >> n;

	for (int i = 0, len; i < n; i++)
	{
		cin >> str;
		len = str.length();
		
		while (s.empty() == 0)
			s.pop();

		for (int j = 0; j < len; j++)
		{
			if (str.at(j) == ')' && s.empty() == 0 && s.top() == '(')
			{
				s.pop();
			}
			else
				s.push(str.at(j));
		}

		if (s.empty() == 1)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';


	}


}