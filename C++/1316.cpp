#include<iostream>
#include<string>

int main()
{
	int n = 0, len = 0, an = 0;
	std::string str, alphabet;

	std::cin >> n;
	an = n;
	for (int i = 0; i < n; i++)
	{
		alphabet.clear();
		alphabet.resize(30, 0);

		std::cin >> str;
		len = str.size();

		for (int index = 0; index < len; index++)
			if (index == 0 || alphabet[str[index] - 'a'] <= 0 || str[index - 1] == str[index])
				alphabet[str[index] - 'a'] += 1;
			else
			{
				an -= 1;
				//std::cout << str;
			    break;
			}


	}

	std::cout << an;
}
