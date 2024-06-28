// CNT - Main Documnet
//Copyrights (C) 2024
//By TaimWay

//Change
/*
	1.TaimWay Upload ("First Create") 
*/

#include "config.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Funciton Class
void initialize();

//Main Function
int main(int argc, char** argv) {
	console console;
	//Initialize
	initialize();
	
	//Main
	while(true){
		string a = console.input("Input: ");
		console.log(a);
		console.error(a);
		console.warn(a);
		console.exit(0);
	}
	return 0;
}

//Function
void initialize(){
	console console;
	string copyrightsText = "APlcexenicesetrl CNT Console [Version ";
	copyrightsText += __consoleVersion__;
	copyrightsText += "]\n(C) APlcexenicesetrl CNT All rights reserved\n";
	console.log(copyrightsText);
}
