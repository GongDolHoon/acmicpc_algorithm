#include <bits/stdc++.h>
using namespace std;

// 1 <= T <= 1000
int _t;

int _idx;
string _target;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수가 주어진다.
	cin >> _t;
	
	while(_t--)
	{
		// I-2. 각 테스트 케이스는 한 줄로 구성되어 있다.
		// I-2-1. 첫 숫자는 창영이가 오타를 낸 위치이고
		// I-2-2. 두 번째 문자열은 창영이가 친 문자열이다. 
		cin >> _idx >> _target;
		
		// O-1. 각 테스트 케이스에 대해 오타를 지운 문자열을 출력한다. 	
		for(int i = 0; i < _idx - 1; ++i)
		{
			cout << _target[i];
		}
		
		for(int i = _idx; i < _target.size(); ++i)
		{
			cout << _target[i];
		}
		
		cout << '\n';
	}
	
	
	return 0;
}