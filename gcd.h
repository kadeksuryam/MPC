#include<iostream>
#include<math.h>
#include<limits>
using namespace std;
long long recur(long long a, long long b){
	if(a == 0) return b;
	return recur(b%a, a);
}

void gcd(){
	cout << "\n";
	cout << "	***Welcome to GCD Finder***\n";
	long long num1,num2;
	cout << "	Input First Number:	";
	cin >> num1;
	while(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout <<  "	Input First Number : ";
		cin >> num1;
	}
	cout << "	Input Second Number: ";
	cin >> num2;
	while(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout <<  "	Input Second Number : ";
		cin >> num2;
	}
	cout << "	Greatest Common Divisor between these two numbers is: ";
	cout << recur(num1,num2) << "\n";
}
