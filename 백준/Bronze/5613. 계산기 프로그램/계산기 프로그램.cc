#include <bits/stdc++.h>
using namespace std;

vector<int> _vi(2, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s;
	cin >> _vi[0];
	while(true)
	{
		// I-1. 입력의 각 줄에는 +, -, *, /, = 중 하나가 교대로 주어진다.
		// I-1-1. 첫 번째 줄은 수이다.
		// 연산자의 우선 순위는 생각하지 않으며, 입력 순서대로 계산을 하고, =가 주어지면, 그때까지의 결과를 출력한다.
		cin >> s;
		
		if(s == "=")
		{
			break;
		}
		
		cin >> _vi[1];
		
		if(s == "+")
		{
			_vi[0] = _vi[0] + _vi[1];	
		}
		else if(s == "-")
		{
			_vi[0] = _vi[0] - _vi[1];
		}
		else if(s == "*")
		{
			_vi[0] = _vi[0] * _vi[1];
		}
		else if(s == "/")
		{
			_vi[0] = _vi[0] / _vi[1];
		}
	}	
	
	// O-1. 첫째 줄에 계산 결과를 출력한다. 
	cout << _vi[0] << '\n';
	
	return 0;
}