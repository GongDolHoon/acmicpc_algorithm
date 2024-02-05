#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n; 
string _pat;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 파일의 개수 N이 주어진다. 
	cin >> _n;
	// I-2. 둘째 줄에는 패턴이 주어진다.
	cin >> _pat;
	// I-3. 다음 N개의 줄에는 파일 이름이 주어진다. 
	
	string front;
	string rear;
	
	int pos = _pat.find('*');
	front = _pat.substr(0, pos);
	_pat.erase(0, pos + 1);
	rear = _pat;
	
	string input;
	
	for(int i = 0; i < _n; ++i)
	{
		cin >> input;
		bool trig = false;
		
		if(input.size() < front.size() + rear.size())
		{
			trig = true;
		}	
		
		for(int i = 0; i < front.size(); ++i)
		{
			if(input[i] != front[i])
			{
				trig = true;
				break;
			}
		}
		
		for(int i = 0; i < rear.size(); ++i)
		{
			if(input[input.size() - 1 - i] != rear[rear.size()-1-i])
			{
				trig = true;
				break;
			}
		}
		// O-1. 총 N개의 줄에 걸쳐서, 입력으로 주어진 i번째 파일 이름이 패턴과 일치하면 "DA",
		// 일치하지 않으면 "NE"를 출력한다.		
		if(trig == true)
		{
			cout << "NE\n";	
		}
		else
		{
			cout << "DA\n";	
		}
	}
	
	return 0;
}