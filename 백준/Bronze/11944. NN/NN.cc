#include <bits/stdc++.h>
using namespace std;

// 1 <= N, M <= 2016
string _n, _m;
string _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에는 N, M이 주어진다.
	cin >> _n >> _m;
	
	int cycle = stoi(_n);
	int thres = stoi(_m);
	
	int mod = _n.size();
	
	for(int i = 0; i < cycle * mod; ++i)
	{
		if(i < thres)
		{
			_ret.push_back(_n[i % mod]);
		}
		else
		{
			break;
		}
	}
	// O-1. N을 N번 출력한다. 만약 답이 길어지면 답의 앞 M자리를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}