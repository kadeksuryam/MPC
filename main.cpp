#include<iostream>
#include "main_menu.h"

using namespace std;

int main(){
	printf("\n");
	printf("	*****************************************************    \n");
	printf("			Welcome To MPC!						 \n");
	printf("		We Hope You Enjoy Our Application!					 \n");
	printf("	*****************************************************    \n");
	printf("	First, do you want QUIT or PROCESS to our application menu? \n");
	while(true){
		char tmp;
		printf("	Write P for PROCESS and Q for QUIT : ");
		cin >> tmp;
		if(tmp == 'Q'){
			thanks();
			return 0;
		}
		if(tmp == 'P') break;
	}
	main_menu();
	return 0;
}
