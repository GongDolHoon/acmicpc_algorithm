#include <bits/stdc++.h>
using namespace std;

// 2 <= n <= 3
int _n; 

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 n이 주어진다.  
	cin >> _n;
	vector<int> vi(_n, 0);
	// I-2. 둘째 줄에는 공약수를 구해야 하는 자연수 n개가 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vi[i];
	}
	
	int cd = 0;
	
	if( _n == 2)
	{
		cd = gcd(vi[0], vi[1]);
	}
	else
	{
		cd = gcd(vi[0], vi[1]);
		cd = gcd(cd, vi[2]);
	}
	
	// O-1. 입력으로 줭진 n개 수의 공약수를 한 줄에 하나씩 증가하는 순서대로 출력한다. 
	for(int i = 1; i <= cd; ++i)
	{
		if(cd % i == 0)
		{
			cout << i << '\n';
		}
	}
	
	return 0;
}