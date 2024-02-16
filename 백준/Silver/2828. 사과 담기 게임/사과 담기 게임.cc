#include <bits/stdc++.h>
using namespace std;

// 1 <= M < N <= 10
int _n, _m;
// 1 <= J <= 20
int _j;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 M이 주어진다.
	cin >> _n >> _m;
	
	// I-2. 둘째 줄에 떨어지는 사과의 개수 J가 주어진다.
	cin >> _j;
	// I-3. 다음 J개 줄에는 사과가 떨어지는 위치가 순서대로 주어진다.
	
	int left = 1;
	int right = left + (_m - 1);
	
	int tmp;
	for(int i = 0; i < _j; ++i)
	{
		cin >> tmp;
		
		if(left >= tmp && right <= tmp)
		{
			
		}
		else if(tmp < left)
		{
			_ret += (left - tmp);
			left = tmp;
			right = left + (_m - 1);
		}
		else if(tmp > right)
		{
			_ret += (tmp - right);
			right = tmp;
			left = right - (_m - 1);
		}
	}
	
	// O-1. 모든 사과를 담기 위해서 바구니가 이동해야 하는 거리의 최솟값을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}