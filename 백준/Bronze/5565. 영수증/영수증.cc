#include <bits/stdc++.h>
using namespace std;

int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 10권의 총 가격이 주어진다.
	cin >> _n;
	
	// I-2. 둘째 줄부터 9개 줄에는 가격을 읽을 수 있는 책 9권의 가격이 주어진다.
	int tmp;
	for(int i = 0; i < 9; ++i)
	{
		cin >> tmp;
		
		_n -= tmp;
	}
	
	// O-1. 첫째 줄에 가격을 읽을 수 없는 책의 가격을 출력한다. 
	cout << _n << '\n';
	
	return 0;
}