#include <bits/stdc++.h>
#include "windows.h"
#include "colorDefine.h"
using namespace std;
enum smittype{
	number = 0,
	text = 1,
	all = 2
};
class console {
	private:
		////Function
		void setColor(int colorCode) {
		    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		    SetConsoleTextAttribute(hConsole, colorCode);
		}
		
		////Template
		int extractNumber(const string& input) {
	        stringstream ss;
	        for (char c :input) {
	            if (isdigit(c)) {
	                ss << c;
	            }
	        }
	        int result;
	        ss >> result;
	        return result;
	    }
	
	    string extractText(const string& input) {
	        stringstream ss;
	        for (char c : input) {
	            if (isalpha(c) || isspace(c)) {
	                ss << c;
	            }
	        }
	        return ss.str();
	    }


	public:
		////Template
		template<typename T>
    	T intercept(int type, const string& input);
		
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
			cout << "[Warn]: " << text;
			setColor(Recovery);
			if(end) cout << endl;
		}
		void exit(int code){
			exit(code);
		}
		void wait(double time){
			Sleep(time * 1000);		
		}
		string input(string tips, smittype type){
			tlog(tips, false);
			string input;
			getline(cin, input);
			try {
		        // 测试传入0返回截取数字部分的结果
		        int numberResult = intercept<int>(0, input);
		        cout << "Extracted number: " << numberResult << endl;
		
		        // 测试传入1返回截取文字部分的结果
		        string textResult = intercept<string>(1, input);
		        cout << "Extracted text: " << textResult << endl;
		    } catch (const exception& e) {
		        cerr << "Error: " << e.what() << endl;
		    }

		}
};

template<typename T>
T console::intercept(int type, const string& input) {
    if (type == 0) {
        // 截取数字部分并返回整数类型的值
        return static_cast<T>(extractNumber(input));
    } else if (type == 1) {
        // 截取文字部分并返回字符串类型的值
        return static_cast<T>(extractText(input));
    } else {
        // 处理未知的type参数
        throw invalid_argument("Invalid type parameter.");
    }
}

