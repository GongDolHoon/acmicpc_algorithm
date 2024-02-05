#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 한 줄에 최대 100글자씩 주어진다.
	string s;
	int ret = 0;
	
	while(getline(cin, s))
	{
		ret++;	
	}
	
	// O-1. 입력으로 몇 줄이 주어졌는지를 추력한다. 
	cout << ret << '\n';
	
	return 0;
}