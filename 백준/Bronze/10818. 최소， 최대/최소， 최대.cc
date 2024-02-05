#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1000000
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 정수의 개수 N이 주어진다.
	cin >> _n;
	
	int temp;
	int min = INT_MAX;
	int max = INT_MIN;
	// I-2. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 
	for(int i = 0; i < _n; ++i)
	{
		cin >> temp;
		
		if(temp < min)
		{
			min = temp;
		}
		
		if(temp > max)
		{
			max = temp;
		}
	}
	
	// O-1. 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해서 출력한다. 
	cout << min << ' ' << max << '\n';
	
	return 0;
}