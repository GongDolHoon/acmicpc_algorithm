#include <bits/stdc++.h>
using namespace std;

vector<bool> _vb(30, false);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 총 28줄로 각 제출자(학생)의 출석번호 n가 한 줄에 하나씩 주어진다.
	// 1 <= temp <= 30
	int temp;
	for(int i = 0; i < 28; ++i)
	{
		cin >> temp;
		
		_vb[temp - 1] = true;
	}
	// O-1. 출력은 2 줄이다.
	// O-1-1. 첫 번째 줄엔 제출하지 않은 학생의 출석번호 중 가장 작은 것을 출력하고
	// O-1-2. 두 번째 줄에선 그 다음 출석번호를 출력한다. 
	for(int i = 0; i < 30; ++i)
	{
		if(_vb[i] == false)
		{
			cout << i + 1 << '\n';	
		}	
	}
	
	return 0;
}