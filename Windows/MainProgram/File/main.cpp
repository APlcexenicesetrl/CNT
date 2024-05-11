#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#include "cnt.h"
#include "language.h"
using namespace std;

/*system("pause");*/
//Value
string config_text = "";

//Class Function
//--Console Function
void pause(){
	printf("\nStop run of the program\Press any key go on...\n------Stop------\n");
	_getch();
}
void log(string text){
	//Print
	printf("\n[Log]: ");
	for(var i = 0;i<text.size();i++){
		if(text[i]=='\n'){
			if(text[i+1]!='\0') cout<<endl<<"[Log]: ";
			else break;
		} 
		else{
			cout<<text[i];
		}
	}
}

var main(var argc, str** argv) {
	system("title CNT.Main.Programs");
	printf("CNT Log: ");
	Log("Start Program\nGet Config");
	
	try {
		Log("Open the file");
        ifstream file("config.txt");

        if (!file.is_open()) {
        	Log("Oops->Open the file\nThrow exception > \"Can't open the file\"");
            throw runtime_error("Can\'t open the file");
        }
		
		Log("Getline the config text");
        string line;
        while (getline(file, line)) {
            config_text += line;
        }
		
		Log("Close File");
        file.close();
    } catch (const exception& err) {
    	
    	Log("Throw exception -> Catch Error Return Id");
		if(err.what()=="Can\'t open the file"){
			Log("Create the file -> config.txt('%CNT_InstallPath%/config.txt')");
			try{
				ofstream file("config.txt");
				Log("Create the file Done..");
				
				if (!file.is_open()) { 
					Log("Oops->Create the file\nThrow exception > \"Can't creating the file\"");
            		throw runtime_error("Can't creating the file"); 
        		}
				
				Log("Write to config text");
		        file << "user_agreement=true;\nlog=false;" << endl;
		        
		        Log("Close File");
		        file.close();
			}
			catch(const exception& err){
				Log("Create MessageText and assignment");
				string MessageText = "Error\nCNT throws an exception\nError Return Text: ";
				MessageText += err.what();
				MessageText += "\nPlace repair the CNT based on the error message.";
				Log("Windows Function -> MessageBox > NULL, MessageText,'CNT.Error.Message',MessageImage_Error + MessageButton_OK");
				MessageBox(NULL,MessageText.c_str(),"CNT.Error.Message",16+MB_OK);
				pause();
				exit(400);
			}
		}
		else{
			Log("Create MessageText and assignment");
			string MessageText = "Error\nCNT throws an exception\nError Return Text: ";
			MessageText += err.what();
			MessageText += "\nPlace repair the CNT based on the error message.";
			Log("Windows Function -> MessageBox > NULL, MessageText,'CNT.Error.Message',MessageImage_Error + MessageButton_OK");
			MessageBox(NULL,MessageText.c_str(),"CNT.Error.Message",16+MB_OK);
			pause();
			exit(400);
		}
    }
	
	Log("Throw it into the main program");
	while(true){
		
	}
}
