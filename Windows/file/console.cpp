#include <bits/stdc++.h>
#include "windows.h"
#include "colorDefine.h"
using namespace std;
class console {
	private:
		void setColor(int colorCode) {
		    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		    SetConsoleTextAttribute(hConsole, colorCode);
		}
	public:
		void log(string text){
			cout << text << endl;
		}
		void error(string text){
			setColor(RED);
    		cout << "[ERROR]: " << text << endl;
    		setColor(FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		}
};
