#include<iostream>
#include<string>

int main()
{
	int len = 0;
	std::string str;

	std::cin >> str;
	len = str.length();

	for (int i = 0; i < len; i += 10)
	{
		//std::cout << i <<"  " <<i+10 << '\n';
		std::cout << str.substr(i, 10) << '\n';
		
	}

	



}