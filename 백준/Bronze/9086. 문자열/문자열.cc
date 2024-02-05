#include <bits/stdc++.h>
using namespace std;

// 1 <= T <= 10
int _t;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력의 첫 줄에는 테스트 케이스의 개수가 주어진다.
	cin >> _t;
	
	string s;
	// I-2. 각 테스트 케이스는 한 줄에 하나의 문자열이 주어진다.
	for(int i = 0; i < _t; ++i)
	{
		cin >> s;
		
		// O-1. 각 테스트 케이스에 대해서 주어진 문자열의 첫 글자와 마지막 글자를 연속하여 출력
		cout << s[0] << s[s.size() - 1] << '\n';
	}
	
	return 0;
}