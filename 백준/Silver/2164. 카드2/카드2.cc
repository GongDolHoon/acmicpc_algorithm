#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 500,000
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 정수 N이 주어진다.
	cin >> _n;
	
	queue<int> _q;
	
	for(int i = 1; i <= _n; ++i)
	{
		_q.push(i);
	}
	
	for(int i = 0; i < _n - 1; ++i)
	{
		_q.pop();
		_q.push(_q.front());
		_q.pop();
	}
	
	// O-1. 첫째 줄에 남게 되는 카드의 번호를 출력한다. 
	cout << _q.front() << '\n';
	
	return 0;
}