#include<iostream>
#include<math.h>
#include<limits>
using namespace std;
long long factorial(long long &n){
	long long ans=1;
	for(int i=1;i<=n;i++) {
		if(ans > 1000000000000000) return -1;
		else ans *= i;
	}
	return ans;
}

void calc(){
	char operation; long long num1, num2;
	cout << "\n";
	cout << "	***Welcome to Simple Calculator***\n";
	cout << "\n";
	cout << "	Below is available operation: \n";
	cout << "\n";
	cout << "	(+) <---> (addition)  || (-) <---> (subtraction)\n";
	cout << "	(/) <---> (division)  || (*) <---> (multiplication)\n";
	cout << "	(!) <---> (factorial) || (%) <---> (modulo)\n";
	cout << "\n";
	cout << "	Please input operation you want to: ";
	cin >> operation;
	while(cin.fail() || (operation != '+') && (operation != '-') && (operation != '/') && (operation != '*') && (operation != '!') && (operation != '%')){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout << "	Input operation: ";
		cin >> operation;
	}	
	(operation != '!') ? cout << "	Input first number: " : cout << "	Input a number: ";
	cin >> num1;
	while(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout << "	Input first number: ";
		cin >> num1;
	} 
	if(operation != '!')cout << "	Input second number: ",cin >> num2;
	while(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout << "	Input second number: ";
		cin >> num2;
	}
	if(operation == '+') cout << "	Answer:	" << num1+num2 << "\n";
	if(operation == '-') cout << "	Answer:	" << num1-num2 << "\n";
	if(operation == '*') cout << "	Answer:	" << (long long)num1*num2 << "\n";
	if(operation == '/') cout << "	Answer:	" << (double)num1/num2 << "\n";
	if(operation == '!') (factorial(num1) == -1) ? cout << "	The answer too big :( \n" : cout <<  "	The answer is: " << factorial(num1) << "\n"; 
	if(operation == '%'){
		if(num1 < 0) cout << "	Answer: " << -1*((-1*(num1))%num2) + num2 << "\n";
		else cout << "	Answer: " << num1%num2 << "\n"; 
	}
}
