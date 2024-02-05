#include <bits/stdc++.h>
using namespace std;

int _a, _b;
int _max = -1;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 각 역에서 내린 사람 수와 탄 사람 수가 빈칸을 사이에 두고 
	// 첫째 줄부터 열 번째 줄까지 역 순서대로 한 줄에 하나씩 주어진다.
	int total = 0;
	for(int i = 0; i < 10; ++i)
	{
		cin >> _a >> _b;
		total += (_b - _a);
		if(total > _max)
		{
			_max = total;
		}
	}
	
	// O-1. 첫째 줄에 최대 사람 수를 출력한다. 
	cout << _max << '\n';
	
	return 0;
}