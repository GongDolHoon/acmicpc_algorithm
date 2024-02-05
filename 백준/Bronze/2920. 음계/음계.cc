#include <bits/stdc++.h>
using namespace std;

vector<int> _vi(8, 0);

bool _asc_trig = true;
bool _des_trig = true;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 8개 숫자가 주어진다. 
	for(int i = 0; i < 8; ++i)
	{
		cin >> _vi[i];
	}
	
	if(_vi[0] == 1)
	{
		_des_trig = false;
		for(int i = 1; i < 8; ++i)
		{
			if(_vi[i] != i + 1)
			{
				_asc_trig = false; 	
			}	
		}	
	}
	else if(_vi[0] == 8)
	{
		_asc_trig = false;
		for(int i = 1; i < 8; ++i)
		{
			if(_vi[i] != 8 - i)
			{
				_des_trig = false;
			}
		}
	}
	else 
	{
		_asc_trig = false;
		_des_trig = false;
	}
	
	// O-1. 첫째 줄에 ascending, descending, mixed 중 하나를 출력한다. 
	if(_asc_trig == true)
	{
		cout << "ascending\n";
	}
	else if(_des_trig == true)
	{
		cout << "descending\n";
	}
	else
	{
		cout << "mixed\n";
	}
	
	return 0;
}