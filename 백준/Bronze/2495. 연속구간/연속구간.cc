#include <bits/stdc++.h>
using namespace std;

// 각 줄에 하나씩 세 개의 여덟자리 양의 정수가 주어진다. 
string _s;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for(int i = 0; i < 3; ++i)
	{
		// I-1. 첫째 줄부터 셋째 줄까지 각 줄에 하나씩 세 개의 여덟 자리 양의 정수가 주어진다.
		cin >> _s;
		
		vector<int> vi(8, 1);
	
		for(int j = 1; j < 8; ++j)
		{
			if(_s[j] == _s[j-1])
			{
				vi[j] = vi[j-1] + 1;
			}
		}
	
		_ret = *max_element(vi.begin(), vi.end());
		// O-1. 첫째 줄에서 셋째 줄까지 한 줄에 하나씩 각 입력된 수 내에서 같은 숫자가 연속하여 나오는
		// 가장 긴 길이를 입력 순서대로 출력한다. 	
		cout << _ret << '\n';
	}
	
	
	return 0;
}