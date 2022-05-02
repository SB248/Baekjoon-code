#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	while (1)
	{

		int r[3];

		cin >> r[0] >> r[1] >> r[2];

		if (r[0] == 0 && r[1] == 0 && r[2] == 0)
			break;

		sort(r, r + 3, greater<int>());

		if (r[0] * r[0] == r[1] * r[1] + r[2] * r[2])
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';

	}

}