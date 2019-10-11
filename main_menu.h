#include<iostream>
#include "quadratic.h"
#include "isprime.h"
#include "prime_gen.h"
#include "gcd.h"
#include "thanks.h"
#include "calc.h"
using namespace std;

void main_menu(){
	cout << "\n";
	printf("	Welcome to Main Menu :)	\n");
	cout << "\n";
	printf("	1. Solving Quadratic Equation			2. Check If a Number is Prime\n");
	cout <<  "\n";
	printf("	3. Prime Generator From a Interval		4. Find Greatest Common Divisor of Two Number\n");
	cout << "\n";
	printf("	5. Just a Simple Calculator :)\n");
	cout << "\n";
	printf("	Choose number which menu you want: ");
	int input;
	cin >> input;
	if(input == 1) quadratic();
	if(input == 2) isprime();
	if(input == 3) prime_gen();
	if(input == 4) gcd();
	if(input == 5) calc();
	char cek;
	cout << "\n";
	cout << "	Press Q if you want QUIT the application... \n";
	cout << "	Press M if you want to BACK to main menu... \n";
	cin >> cek;
	while(cek != 'Q' && cek != 'M'){
		cin.clear();
		cout << "\n";
		cout << "	Press Q if you want QUIT the application... \n";
		cout << "	Press M if you want to BACK to main menu... \n";
		cin >> cek;
	}
	if(cek == 'Q') thanks();
	if(cek == 'M') main_menu();	
}
