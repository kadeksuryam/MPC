#include<iostream>
#include <limits>
#include<math.h>
using namespace std;

void quadratic(){
	cout << "\n";
	cout << "	Input ax^2+bx+c = 0 , in form a,b,c \n";
	cout << "\n";
	int input_a, input_b, input_c;
	cout <<  "	Input a : ";
	cin >> input_a;
	while(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout <<  "	Input a : ";
		cin >> input_a;
	}
	cout << "	Input b : ";
	cin >> input_b;
	while(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout <<  "	Input b : ";
		cin >> input_b;
	}
	cout <<  "	Input c : ";
	cin >> input_c;
	while(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "	Your Input is Wrong! Please Input Again. \n";
		cout <<  "	Input c : ";
		cin >> input_c;
	}
	if(input_b*input_b - 4*input_a*input_c < 0){
		cout << "\n";
		cout << "	No real roots for that equation :( \n";
	}
	cout << "	First root is: " << (double)(-input_b + sqrt(input_b*input_b - 4*input_a*input_c))/2*input_a << "\n";
	cout << "	Second root is: " << (double)(-input_b + sqrt(input_b*input_b - 4*input_a*input_c))/2*input_a << "\n";
}
