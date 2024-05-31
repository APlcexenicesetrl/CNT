#include "alldocument.h"
using namespace std;
//--Console Function
class console{
	private:
	public:
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
			//Key to the file
			try{
				
			}
		}
		void pause(){
			printf("\nStop run of the program\Press any key go on...\n------Stop------\n");
			_getch();
		}
		void error(string errText){
			log("Create MessageText and assignment");
			
			string MessageText = "Error\nCNT throws an exception\nError Return Text: ";
			MessageText += errText;
			MessageText += "\nPlace repair the CNT based on the error message.";
			log("Windows Function -> MessageBox > NULL, MessageText,'CNT.Error.Message',MessageImage_Error + MessageButton_OK");
			MessageBox(NULL,MessageText.c_str(),"CNT.Error.Message",16+MB_OK);
			
			pause();
			exit(400);
		}
};

//--Program Function

class program{
	private:
		
	public:
		void initialize(){
			system("title CNT.Main.Programs");
			printf("CNT console.log: ");
			console console;
			console.log("Start Program\nGet Config");
			try {
				console.log("Open the file");
		        ifstream file("config.txt");
		
		        if (!file.is_open()) {
		        	console.log("Oops->Open the file\nThrow exception > \"Can't open the file\"");
		            throw runtime_error("Can\'t open the file");
		        }
				
				console.log("Getline the config text");
		        string line;
		        while (getline(file, line)) {
		            config_text += line;
		        }
				
				console.log("Close File");
		        file.close();
		    } catch (const exception& err) {
		    	
		    	console.log("Throw exception -> Catch Error Return Id");
				if(err.what()=="Can\'t open the file"){
					console.log("Create the file -> config.txt('%CNT_InstallPath%/config.txt')");
					try{
						ofstream file("config.txt");
						console.log("Create the file Done..");
						
						if (!file.is_open()) { 
							console.log("Oops->Create the file\nThrow exception > \"Can't creating the file\"");
		            		throw runtime_error("Can't creating the file"); 
		        		}
						
						console.log("Write to config text");
				        file << "user_agreement=true;\nlog=false;" << endl;
				        
				        console.log("Close File");
				        file.close();
					}
					catch(const exception& err){
						console.log("Create MessageText and assignment");
						string MessageText = "Error\nCNT throws an exception\nError Return Text: ";
						MessageText += err.what();
						MessageText += "\nPlace repair the CNT based on the error message.";
						console.log("Windows Function -> MessageBox > NULL, MessageText,'CNT.Error.Message',MessageImage_Error + MessageButton_OK");
						MessageBox(NULL,MessageText.c_str(),"CNT.Error.Message",16+MB_OK);
						pause();
						exit(400);
					}
				}
				else{
					console.error()
				}
		    }
		}
		void ProMain(){
			console.log("Throw it into the main program");
			while(true){
				
			}
		}
};
