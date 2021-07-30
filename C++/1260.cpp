#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;
void DFS(int a, stack <int> &dfs, vector<int> s[1001], vector<char> &c);
void BFS(int a, queue <int>& bfs, vector<int> s[1001], vector<char> &c);

int main()
{
	vector<int> s[1001];
	vector<char> c(10001, 0);
	int n, m, v;
	stack<int> dfs;
	queue<int> bfs;

	cin >> n >> m >> v;

	for (int i = 0, a, b; i < m; i++)
	{
		cin >> a >> b;
		s[a].push_back(b);
		s[b].push_back(a);
	}
	for(int i = 0; i <= n; i++)
		sort(s[i].begin(), s[i].end());

	//DFS
	DFS(v, dfs, s, c);

	c.clear();
	c.assign(10001, 0);
	cout << "\n";

	//BFS
	BFS(v, bfs, s, c);
}

void DFS(int a, stack <int> &dfs, vector<int> s[1001], vector<char> &c)
{

	if (c[a] == 1)
		return;
	c[a] = 1;

	//dfs.push(a);
	cout << a << " ";

	int size = s[a].size();
	for (int i = 0; i <size ; i++)
	{
		int b = s[a][i];
		DFS(b, dfs, s, c);
	}
}

void BFS(int a, queue <int>& bfs, vector<int> s[1001], vector<char> &c)
{
	bfs.push(a);

	c[a] = 1;

	while (!bfs.empty())
	{
		int x = bfs.front();
		cout << x << " ";
		//cout << bfs.front() << "   front \n";
		bfs.pop();

		int size = s[x].size();
		for (int i = 0; i < size; i++)
		{

			int b = s[x][i];
			//cout << b << " !!\n";
			if (c[b] == 0)
			{
				//cout << b << "\n";
				bfs.push(b);
				c[b] = 1;
			}

		}
	}

}