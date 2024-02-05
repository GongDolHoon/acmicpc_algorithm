#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100,000,000,000,000
long long _n;
string _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 자연수 N이 주어진다.
	cin >> _n;
	
	while(_n > 0)
	{
		_ret += to_string(_n % 2);
		_n /= 2;
	}
	
	reverse(_ret.begin(), _ret.end());
	
	// O-1. N을 이진수로 바꿔서 출력한다. 이진수는 0으로 시작하면 안 된다. 
	cout << _ret << '\n';
	
	return 0;
}