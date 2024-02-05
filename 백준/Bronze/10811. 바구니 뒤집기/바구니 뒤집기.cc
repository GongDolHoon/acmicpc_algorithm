#include <bits/stdc++.h>
using namespace std;

// 1 <= N, M <= 100
int _n, _m;

// 1 <= i <= j <= N
int _i, _j;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 M이 주어진다.
	cin >> _n >> _m;
	
	vector<int> s;
	for(int i = 1; i <= _n; ++i)
	{
		s.push_back(i);
	}
	
	for(int i = 0; i < _m; ++i)
	{
		// I-2. 둘째 줄부터 M개의 줄에는 바구니의 순서를 역순으로 만드는 방법이 주어진다.
		// 방법은 i j로 나타내고, 왼쪽으로부터 i번째 바구니부터 j번째 바구니의 순서를 역순으로 만든다는 뜻이다.	
		cin >> _i >> _j;
		
		reverse(s.begin() + _i - 1, s.begin() + _j);
	}
	
	// O-1. 모든 순서를 바꾼 다음에, 가장 왼쪽에 있는 바구니부터 바구니에 적혀있는 순서를 공백으로 구분해 출력한다. 
	for(int i = 0; i < s.size(); ++i)
	{
		cout << s[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}