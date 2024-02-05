#include <bits/stdc++.h>
using namespace std;

// 3 <= N <= 100
int _n;

long long _ret;

long long fact(int n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	
	return n * fact(n-1);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	
	//nC(n-4) = n! / (n-(n-4))!(n-4)!
	_ret = _n * (_n-1) * (_n-2) * (_n-3) / 24;
	
	// O-1. 첫째 줄에 교차점의 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}