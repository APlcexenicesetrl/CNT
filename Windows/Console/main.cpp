#include <bits/stdc++.h>
#include "console.cpp"
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
		console.wait(2);
		console.input("Input: ", text);
		console.wait(2);
		console.exit(0);
	}
	return 0;
}

//Function
void initialize(){
	console console;
	console.log("APlcexenicesetrl CNT Console [Version 1.0.45.2]\n(C) APlcexenicesetrl CNT All rights reserved\n");
}
