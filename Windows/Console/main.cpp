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
//Value Config
string user = "root";
string intoCode;

//Funciton Class
void initialize();

//Main Function
int main(int argc, char** argv) {
	console console;
	strings strings;
	code code;
	//Initialize
	initialize();
	
	//Main
	while(true){		
		intoCode = console.input(strings.add(user, "> "));
	}
	return 0;
}

//Function
void initialize(){
	console console;
	strings strings;
	system("title CNT Console");
	
	console.log(strings.add("APlcexenicesetrl CNT Console [Version ",strings.add(__consoleVersion__,"]\n(C) APlcexenicesetrl CNT All rights reserved")));
}
