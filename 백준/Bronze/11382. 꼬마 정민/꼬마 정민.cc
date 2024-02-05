#include <bits/stdc++.h>
using namespace std;

// 1 <= A, B, C <= 10^12
long long _a, _b, _c;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 A, B, C이 공백을 사이에 두고 주어진다.
	cin >> _a >> _b >> _c;
	
	long long ret = _a + _b + _c;
	
	// O-1. A + B + C의 값을 출력한다. 
	cout << ret << '\n';
	
	return 0;
}