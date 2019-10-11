#include<math.h>
#include<iostream>
#include<limits>
using namespace std;
bool prime[10000001];

void prime_gen(){
	cout << "\n";
	cout << "	*****Welcome to prime generator*****\n";
	cout << "	Please input interval from 1 to 10000000\n";
	long long start,end;
	cout << "	Input start interval: ";
	cin >> start;
	while(cin.fail() || start < 1){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout << "	Input start interval: ";
		cin >> start;
	}
	cout << "	Input end interval: ";
	cin >> end;
	while(cin.fail() || end > 10000000){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout << "	Input end interval: ";
		cin >> end;
	}
	prime[1] = true;
	for(int i=2;i*i<10000001;i++){
		if(!prime[i]){
			for(int j=i*i;j<10000001;j+=i) prime[j] = true;
		}
	}
	int cnt = 0;
	for(int i=start;i<=end;i++) if(!prime[i]) cnt++;
	if(cnt == 0){
		cout << "	No prime number under this interval\n";
		return;
	}
	cout << "	There are " << cnt << " prime number in this interval :  \n";
	cout << "	";
	for(int i=start;i<=end;i++) if(!prime[i]) cout << i << " ";
	cout << "\n";
}
