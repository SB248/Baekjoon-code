#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
	int n;
	string str;
	queue<int> q;

	cin >> n;

	for (int i = 0, a; i < n; i++)
	{
		cin >> str;

		if (str == "push")
		{
			cin >> a;
			q.push(a);
		}
		else if (str == "pop" || str == "front" || str == "back")
		{
			if (q.empty() == 1)
				cout << -1 << '\n';
			else
			{
				if (str == "back")
					cout << q.back() << '\n';
				else
					cout << q.front() << '\n';
				if (str == "pop")
					q.pop();
			}
		}
		else if (str == "size")
			cout << q.size() << '\n';
		else if (str == "empty")
			cout << q.empty() << '\n';
	}

}