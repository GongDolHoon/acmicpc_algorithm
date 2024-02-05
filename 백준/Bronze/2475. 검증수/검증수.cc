#include <bits/stdc++.h>
using namespace std;

int _a, _b, _c, _d, _e;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 고유번호의 처음 5자리의 숫자들이 빈 칸을 사이에 두고 하나씩 주어진다.
	cin >> _a >> _b >> _c >> _d >> _e;
	
	_ret = (_a * _a + _b * _b + _c * _c + _d * _d + _e * _e) % 10;
	
	// O-1. 첫째 줄에 검증수를 출력한다. 
	cout << _ret << "\n";
	
	return 0;
}