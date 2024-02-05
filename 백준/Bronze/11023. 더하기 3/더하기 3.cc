#include <bits/stdc++.h>
using namespace std;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int num;
	// I-1. 첫째 줄에 N개의 수가 공백으로 구분되어서 주어진다.
	while(cin >> num)
	{
		_ret += num;
	}
	
	// O-1. 입력받은 수 N개의 합을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}