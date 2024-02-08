#include <bits/stdc++.h>
using namespace std;

// 1 <= M <= N <= 99
int _m, _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 M과 N이 주어진다.
	cin >> _m >> _n;
	map<string, int> msi;
	
	vector<string> vs(10);
	vs[0] = "zero";
	vs[1] = "one";
	vs[2] = "two";
	vs[3] = "three";
	vs[4] = "four";
	vs[5] = "five";
	vs[6] = "six";
	vs[7] = "seven";
	vs[8] = "eight";
	vs[9] = "nine";
	
	string tmp;
	int origin = 0;
	for(int i = _m; i <= _n; ++i)
	{
		origin = i;
		tmp = "";
		while(origin != 0)
		{
			tmp.insert(0,vs[origin%10]);
			origin /= 10;	
		}
		
		msi[tmp] = i;
	}
	
	// O-1. M이상 N이하의 정수를 문제 조건에 맞게 정렬하여 한 줄에 10개씩 출력한다. 
	int cycle = 0;
	
	for(auto data: msi)
	{
		if(cycle == 10)
		{
			cycle = 0;
			cout << '\n';
		}
		cout << data.second << ' ';
		cycle++;
	}
	
	return 0;	
}
