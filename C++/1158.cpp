#include<iostream>
#include<queue>

int main()
{
	int m = 0, k = 0;
	std::queue<int> q;

	std::cin >> m >> k;

	for (int i = 1; i <= m; i++)
		q.push(i);

	std::cout << "<";
	while (q.size() > 1)
	{
		for (int i = 0; i < k - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}

		std::cout << q.front() << ", ";
		q.pop();
	}
	std::cout << q.front() << ">";
}
