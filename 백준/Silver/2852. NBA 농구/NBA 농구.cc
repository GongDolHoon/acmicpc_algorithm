#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n;

// 1 or 2 
int _team_num;
// MM:SS
// 분과 초가 한자리일 경우 첫째 자리가 0이다.
// 0 <= MM <= 47, 0 <= SS <= 59 
string _goal_time;

string _ret_a = "00:00";
string _ret_b = "00:00";

vector<int> _vi_score(2, 0);

void CalculateTime(string goal, string prev, bool isTeamOne)
{
	int min = 0;
	int second = 0;
	
	second = stoi(goal.substr(3, 2)) - stoi(prev.substr(3, 2));
	if(second < 0)
	{
		min = -1; 
		second += 60;
	}
	
	min += (stoi(goal.substr(0, 2)) - stoi(prev.substr(0, 2)));
	
	if(isTeamOne == true)
	{
		int base_min = stoi(_ret_a.substr(0, 2));
		int base_second = stoi(_ret_a.substr(3, 2));
		
		base_second += second;
		if(base_second >= 60)
		{
			base_second -= 60;
			base_min += 1;
		}
		
		base_min += min;
		
		if(base_second < 10)
		{
			_ret_a[3] = '0';
			_ret_a[4] = (char)base_second + '0';
		}
		else
		{
			_ret_a[4] = (char)(base_second % 10) + '0';
			base_second /= 10;
			_ret_a[3] = (char)(base_second % 10) + '0';
		}
		
		if(base_min < 10)
		{
			_ret_a[0] = '0';
			_ret_a[1] = (char)base_min + '0';
		}
		else
		{
			_ret_a[1] = (char)(base_min % 10) + '0';
			base_min /= 10;
			_ret_a[0] = (char)(base_min % 10) + '0';
		}
	}
	else
	{
		int base_min = stoi(_ret_b.substr(0, 2));
		int base_second = stoi(_ret_b.substr(3, 2));
		
		base_second += second;
		if(base_second >= 60)
		{
			base_second -= 60;
			base_min += 1;
		}
		
		base_min += min;
		
		if(base_second < 10)
		{
			_ret_b[3] = '0';
			_ret_b[4] = (char)base_second + '0';
		}
		else
		{
			_ret_b[4] = (char)(base_second % 10) + '0';
			base_second /= 10;
			_ret_b[3] = (char)(base_second % 10) + '0';
		}
		
		if(base_min < 10)
		{
			_ret_b[0] = '0';
			_ret_b[1] = (char)base_min + '0';
		}
		else
		{
			_ret_b[1] = (char)(base_min % 10) + '0';
			base_min /= 10;
			_ret_b[0] = (char)(base_min % 10) + '0';
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 골이 들어간 횟수 N이 주어진다.
	cin >> _n;
	
	// I-2. 둘째 줄부터 N개의 줄에 득점 정보가 주어진다.
	// 득점 정보는 득점함 팀의 번호와 득점한 시간으로 이루어져 있다.
	// 득점 시간이 겹치는 경우는 없다.
	string prev_goal_time;
	int trigger = 0;
	for(int i = 0; i < _n; ++i)
	{
		cin >> _team_num >> _goal_time;
		
		switch(trigger)
		{
			case 0:
				break;
			case 1:
				CalculateTime(_goal_time, prev_goal_time, true);
				break;
			case 2:
				CalculateTime(_goal_time, prev_goal_time, false);
				break;
			default:
				break;
		}
		
		_vi_score[_team_num-1]++;
		
		if(_vi_score[0] == _vi_score[1])
		{
			trigger = 0;
		}
		else if(_vi_score[0] > _vi_score[1])
		{
			trigger = 1;
		}
		else
		{
			trigger = 2;
		}
		
		prev_goal_time = _goal_time;
	}
	
	_goal_time = "48:00";
	
	switch(trigger)
	{
		case 0:
			break;
		case 1:
			CalculateTime(_goal_time, prev_goal_time, true);
			break;
		case 2:
			CalculateTime(_goal_time, prev_goal_time, false);
			break;
		default:
			break;
	}
	
	// O-1. 첫째 줄에 1번 팀이 이기고 있던 시간,
	// O-2. 둘째 줄에 2번 팀이 이기고 있던 시간을 출력한다.
	// 시간은 입력과 같은 형식으로 출력한다. 
	cout << _ret_a << '\n';
	cout << _ret_b << '\n';
	
	return 0;
}