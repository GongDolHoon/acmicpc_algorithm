#include <bits/stdc++.h>
using namespace std;

// N은 언제나 2의 제곱수, 1 <= N <= 64 
int _n;

// 각 문자열은 0 또는 1의 숫자로 이루어져 있음 
vector<string> _vs_area;

string _ret;

bool CheckZero(pair<int, int> pivot, int offset)
{
	bool trig = false;
	
	for(int i = pivot.first; i < pivot.first + offset; ++i)
	{
		for(int j = pivot.second; j < pivot.second + offset; ++j)
		{
			if(_vs_area[i][j] == '1')
			{
				trig = true;		
				break;
			}		
		}
		
		if(trig == true)
		{
			break;
		}
	}
	
	return (trig == false);
}

bool CheckOne(pair<int, int> pivot, int offset)
{
	bool trig = false;
	
	for(int i = pivot.first; i < pivot.first + offset; ++i)
	{
		for(int j = pivot.second; j < pivot.second + offset; ++j)
		{
			if(_vs_area[i][j] == '0')
			{
				trig = true;		
				break;
			}		
		}
		
		if(trig == true)
		{
			break;
		}
	}
	
	return (trig == false);
}

void EncodeVideo(pair<int, int> pivot, int offset)
{
	bool trig_zero = CheckZero(pivot, offset);
	bool trig_one = CheckOne(pivot, offset);
	
	if(trig_zero == true)
	{
		_ret.push_back('0');
		return;
	}
	
	if(trig_one == true)
	{
		_ret.push_back('1');
		return;
	}
	
	_ret.push_back('(');
	
	EncodeVideo({pivot.first, pivot.second},offset/2);
	EncodeVideo({pivot.first, pivot.second + offset/2},offset/2);
	EncodeVideo({pivot.first + offset/2, pivot.second},offset/2);
	EncodeVideo({pivot.first + offset/2, pivot.second + offset/2},offset/2);
	
	_ret.push_back(')');
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 영상의 크기를 나타내는 숫자 N이 주어진다.
	cin >> _n; 
	// I-2. 두 번째 줄부터는 길이 N의 문자열이 N개 들어온다.
	string tmp;
	for(int i = 0; i < _n; ++i)
	{
		cin >> tmp;
		_vs_area.push_back(tmp);
	}
	
	EncodeVideo({0, 0}, _n);
	
	// O-1. 영상을 압축한 결과를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}