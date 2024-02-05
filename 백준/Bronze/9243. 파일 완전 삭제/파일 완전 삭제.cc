#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 20
int _n;
// 비트는 0과 1로만 이루어져 있고, 두 문자열의 길이는 같다. 
// 비트는 최대 1000개의 문자로 이루어져 있다. 
string _s1;
string _s2;

bool trig = true;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	
	// I-2. 둘째 줄에는 파일을 삭제하기 전에 파일이 있었던 곳의 비트가 주어지고,
	cin >> _s1;
	// I-3. 셋째 줄에는 삭제한 후에 비트가 주어진다. 
	cin >> _s2;
	
	if(_n % 2 == 0)
	{
		for(int i = 0; i < _s1.size(); ++i)
		{
			if(_s1[i] != _s2[i])
			{
				trig = false;
				break;
			}
		}
	}
	else
	{
		for(int i = 0; i < _s1.size(); ++i)
		{
			if(_s1[i] == _s2[i])
			{
				trig = false;
				break;
			}
		}
	}
	// O-1. 첫째 줄에 삭제가 성공했으면 "Deletion succeeded"을, 
	// 실패했으면 "Deletion failed"를 출력한다. 
	if(trig == false)
	{
		cout << "Deletion failed\n";
	}
	else
	{
		cout << "Deletion succeeded\n";
	}
	
	return 0;
}