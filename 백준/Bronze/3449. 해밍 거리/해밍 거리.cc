#include <bits/stdc++.h>
using namespace std;

int _t;
// 두 이진수의 길이는 서로 같고, 100자리를 넘지 않는다. 
string _a, _b;

int _ret; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		_ret = 0;
		// I-2. 각 테스트 케이스는 두 줄로 이루어져 있다.
		// I-2-1. 각 줄에는 이진수가 하나씩 주어진다. 
		cin >> _a >> _b;
		
		for(int i = 0; i < _a.size(); ++i)
		{
			if(_a[i] != _b[i])
			{
				_ret++;
			}
		}
	
		// O-1. 각 테스트 케이스에 대해서, 해밍 거리를 계산한 뒤, "Hamming distance is X."라고 출력한다.
		// X는 해밍거리이다. 	
		cout << "Hamming distance is " << _ret << ".\n";
	}
	
	
	return 0;
}