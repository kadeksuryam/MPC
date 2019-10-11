#include<iostream>
#include<math.h>
#include<limits>
using namespace std;

void isprime(){
	long long num;
	cout << "\n";
	cout << "	***Welcome to Number Primality Test***\n";
	cout << "	Input a number:	";
	cin >> num;
	while(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout <<  "	Input a number : ";
		cin >> num;
	}
	bool flag = true;
	for(int i=2;i*i<=num;i++) if(num%i == 0){
		flag = false;
		break;
	} 
	if(flag && num != 1) cout << "	" <<  num << " is a Prime Number\n";
	else cout << "	" << num << " is not a Prime Number\n";
}


