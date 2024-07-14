#include "cnt.h"
class console{
	private:
		void setColor(int colorCode) {
		    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		    SetConsoleTextAttribute(hConsole, colorCode);
		}
		string add(string add1, string add2){
			return add1 + add2;
		}
		string date(){
			time_t timep;
			struct tm *OriginalDate;
    		time(&timep);
			OriginalDate = localtime(&timep);
			
			const int year = 1900 + OriginalDate->tm_year;
			const int mon = 1 + OriginalDate->tm_mon;
			const int day = OriginalDate->tm_mday;
			const int hour = OriginalDate->tm_hour;
			const int min = OriginalDate->tm_min;
			const int sec = OriginalDate->tm_sec;
			
			const string date = "[00:00:00 1/1/2000]";
			
			return date;
		}
		void log(const string text){
			cout << date() << "[Log]: " ;
			for(int i = 0 ; i < text.size() ; i++){
				if ( text[i] == '\n' ) cout << endl << date() << "[Log]: ";
				else cout << text[i];
			}
		}
		void error(const string text){
			setColor(_RED_);
    		cout << date() << "[ERROR]: " ;
			for(int i = 0 ; i < text.size() ; i++){
				if ( text[i] == '\n' ) cout << endl << date() << "[ERROR]: ";
				else cout << text[i];
			}
    		setColor(_Recovery_);
		}
		void warning(const string text){
			setColor(FOREGROUND_RED|FOREGROUND_GREEN);
    		cout << date() << "[WARNING]: " ;
			for(int i = 0 ; i < text.size() ; i++){
				if ( text[i] == '\n' ) cout << endl << date() << "[WARNING]: ";
				else cout << text[i];
			}
    		setColor(_Recovery_);
		}
	public:
		void out(const string text, const int type){
			if(type == -1)
				log(text);
			else if(type == 0)
				warning(text);
			else if(type == 1)
				error(text);
			else return ;
		}
};
