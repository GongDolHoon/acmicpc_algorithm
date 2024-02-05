#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
	return a < b;
}

// 1 <= n <= 50
int _n; 
// 2 <= RET <= 1000000
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N의 진짜 약수의 개수가 주어진다.
	cin >> _n;
	
	vector<int> vi(_n, 0);
	// I-2. 둘째 줄에는 N의 진짜 약수가 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vi[i];
	}
	
	sort(vi.begin() , vi.end(), cmp);
	
	_ret = vi[0] * vi[vi.size() - 1];
	
	// O-1. 첫째 줄에 N을 출력한다.  
	cout << _ret << '\n';
	
	return 0;
}