#include <bits/stdc++.h>
using namespace std;

// 1 <= L <= 10
int _l;
// 1 <= P <= 1000
int _p; 

// vi_i < 100,000
vector<int> _vi(5, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 1m^2당 사람의 수 L과 파티가 열렸던 곳의 넓이 P가 주어진다.
	cin >> _l >> _p;
	
	// I-2. 둘째 줄에는 각 기사에 실려있는 찲가자의 수가 주어진다. 
	for(int i = 0; i < 5; ++i)
	{
		cin >> _vi[i];
	}
	
	int total = _l * _p;
	
	// O-1. 출력은 첫째 줄에 다섯 개의 숫자를 출력해야 한다. 
	// 이 숫자는 상근이가 계산한 참가자의 수와 각 기사에 적혀있는 참가자의 수의 차이이다. 
	for(int i = 0; i < 5; ++i)
	{
		cout << _vi[i] - total << ' ';
	}
	cout << '\n';
	
	return 0;
}