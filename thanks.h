#include<iostream>

using namespace std;

void thanks(){
	cout << "\n";
	printf("	Thanks For Using Our Application!\n");
	do {
    	cout << '\n' << "	Press the Any key to continue...";
   } while (!cin.get());
	return;
}
