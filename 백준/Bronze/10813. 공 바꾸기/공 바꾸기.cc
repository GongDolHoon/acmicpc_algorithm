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
	
	vector<int> vi(_n, 0);
	for(int i = 0; i < _n; ++i)
	{
		vi[i] = i + 1;
	}
	
	for(int i = 0; i < _m; ++i)
	{
		// I-2. 둘째 줄부터 M개의 줄에 걸쳐서 공을 교환하는 방법이 주어진다.
		// I-2-1. 각 방법은 두 정수 i j로 이루어져 있으며, 
		// i번째 바구니와 번 바구니에 들어있는 공을 교환한다는 뜻이다.
		// 도현이는 입력으로 주어진 순서대로 공을 교환한다.	
		cin >> _i >> _j;
		
		int tmp = vi[_i-1];
		vi[_i-1] = vi[_j-1];
		vi[_j-1] = tmp;
	}
	
	// O-1. 1번 바구니부터 N번 바구니에 들어있는 공의 번호를 공백으로 출력한다. 
	for(int i = 0; i < _n; ++i)
	{
		cout << vi[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}