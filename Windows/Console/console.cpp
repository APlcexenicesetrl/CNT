// CNT - Console Class Documnet
//Copyrights (C) 2024
//By TaimWay

//Change
/*
	1.TaimWay Upload ("First Create") 
*/




#include <bits/stdc++.h>
#include "windows.h"
#include "colorDefine.h"
using namespace std;
class console {
	private:
		////Function
		void setColor(int colorCode) {
		    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		    SetConsoleTextAttribute(hConsole, colorCode);
		}


	public:
		///Config
		vector <string> windows;

		////Funciton
		void log(string text, bool end = true){
			cout << text;
			if(end) cout << endl;
		}
		void error(string text, bool end = true){
			setColor(RED);
    		cout << "[ERROR]: " << text;
    		setColor(Recovery);
    		if(end) cout << endl;
		}
		void warn(string text, bool end = true){
			setColor(YELLOW);
			cout << "[WARNING]: " << text;
			setColor(Recovery);
			if(end) cout << endl;
		}
		void exit(int code){
			exit(code);
		}
		void wait(double time){
			Sleep(time * 1000);		
		}
		string input(string tips){
			log(tips, false);
			string input;
			getline(cin, input);
			return input;
		}	
};
class strings{
	private:
		
	public:
		string add(string add1, string add2){
			return add1 + add2;
		}
		int size(string text){
			return text.size(); 
		}
		/*void split(const string& str, const string& split, vector<string>& res)
		{
			regex reg(split);
			sregex_token_iterator pos(str.begin(), str.end(), reg, -1);
			decltype(pos) end; 
			for (;pos != end; ++pos)
			{
				res.push_back(pos->str());
			}
		}*/

};
class code{
	private:
		void getCodeObject(const string& code, vector<string>& ReturnList){
			/*strings strings;
			vector <string> Object;
			strings.split(coder," ", Object);
			*/
			ReturnList.push_back("NULL");
		}
	public:
		void run(string code){
			vector <string> Object;
			getCodeObject(code, Object);
		}
};
