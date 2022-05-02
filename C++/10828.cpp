#include<iostream>
#include<stack>
#include<string>

int main()
{
	int n, r;
	std::string str;
	std::stack<int> s;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> str;
		
		if (str.compare("push") == 0)
		{
			std::cin >> r;
			s.push(r);
		}
		if (str.compare("pop") == 0)
		{
			if (s.empty() != true)
			{
				std::cout << s.top() << '\n';
				s.pop();
			}
			else
				std::cout << -1 << '\n';
		}
		if (str.compare("top") == 0)
		{
			if (s.empty() != true)
				std::cout << s.top() << '\n';
			else
				std::cout << -1 << '\n';

		}
		if (str.compare("size") == 0)
			std::cout << s.size() << '\n';
		if (str.compare("empty") == 0)
			std::cout << s.empty()<<'\n';
	}
}