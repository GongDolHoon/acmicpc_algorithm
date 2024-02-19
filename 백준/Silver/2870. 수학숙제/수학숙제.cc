#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n;

vector<string> _vi_ret;

bool cmp(const string a, const string b)
{
	if(a.size() == b.size())
	{
		return a < b;
	}
	
	return a.size() < b.size();
}

string EraseZero(const string s)
{
	string ret = s;
	
	while(true)
	{
		if(ret.size() == 1 && ret == "0")
		{
			return "0";
		}
		
		if(ret[0] == '0')
		{
			ret.erase(0, 1);
			continue;
		}
		else
		{
			break;
		}
	}
	
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 종이의 줄의 개수 N이 주어진다.
	cin >> _n;
	vector<string> vs_input(_n);
	// I-2. 다음 N개의 줄에는 각 줄의 내용이 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vs_input[i];
		
		string tmp = "";
		
		for(int j = 0; j < vs_input[i].size(); ++j)
		{
			if(vs_input[i][j] >= 'a' && vs_input[i][j] <= 'z')
			{
				if(tmp.size() == 0)
				{
					continue;
				}
				_vi_ret.push_back(EraseZero(tmp));
				tmp.clear();
				continue;
			}
		
			tmp.push_back(vs_input[i][j]);
		}
		
		if(tmp.size() > 0)
		{
			_vi_ret.push_back(EraseZero(tmp));
			tmp.clear();
		}
	}
	
	sort(_vi_ret.begin(), _vi_ret.end(), cmp);
	// O-1. 종이에서 찾은 숫자의 개수를 M이라고 하면, 출력은 M줄로 이루어져야 한다. 
	// 각 줄에는 종이에서 찾은 숫자를 하나씩 출력해야 한다.
	// 이 때, 비 내림차순으로 출력해야 한다. 
	// 비 내림차순은 내림차순 반대의 경우인데, 다음 수가 앞의 수보다 크거나 같은 경우를 말함. 
	for(int i = 0; i < _vi_ret.size(); ++i)
	{
		cout << _vi_ret[i] << '\n';
	}
	
	return 0;
}