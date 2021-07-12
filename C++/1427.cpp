#include<iostream>
#include<string>
#include<algorithm> //sort()

using namespace std;

int main()
{
	string s;

	cin >> s;

	sort(s.begin(), s.end(), greater<int>());
	//sort(start,end,compare)를 이용하면 사용자가 정한 함수(compare)를 기준으로 정렬
	//greater은 std::greater 이다. 

	std::cout << s;
}
