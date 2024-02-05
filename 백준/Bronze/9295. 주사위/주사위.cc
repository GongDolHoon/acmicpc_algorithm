#include <bits/stdc++.h>
using namespace std;

int _t;
int _a;
int _b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	int i = 1;
	
	while(_t--)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있으며,
		// 주사위를 두 번 던져 나온 두 수를 입력한다.
		cin >> _a >> _b;
		
		// O-1. 각 테스트 케이스마다 "Case x: "를 출력한 다음,
		// 주사위를 두 번 던져 나온 두 수의 합을 출력한다. 	
		
		cout << "Case " << i++ << ": " << _a + _b << '\n';
	}
	
	return 0;
}