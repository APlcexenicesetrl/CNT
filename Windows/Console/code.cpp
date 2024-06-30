// CNT - Code List
//Copyrights (C) 2024
//By TaimWay

//Change
/*
	1.TaimWay Upload ("First Create") 
*/

class number{
	private:
	public:
		int lengthBetweenNumbers(const int startNumber, const int endNumber){
			int length = 0;
			for(int i=startNumber ; i<= endNumber ; i++){
				length ++;
			}
			return length;
		}
		bool isInBetweenNumbers(const int number, const int startNumber, const int endNumber){
			if(number >= startNumber && number <= endNumber) return true;
			else return false;
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
		void split(const string& PrimitiveText, const char splitText, vector<string>& ReturnList) {
		    string Text = PrimitiveText;
		    vector<string> tokens;
		    size_t start = 0, end = Text.find(splitText);
		
		    while (end != string::npos) {
		        tokens.push_back(Text.substr(start, end - start));
		        start = end + 1;
		        end = Text.find(splitText, start);
		    }
		
		    if (start < Text.length()) {
		        tokens.push_back(Text.substr(start));
		    }
		
		    ReturnList = tokens;
		}
			/*	git  //基层 
				coonfig //指令 
				--global //参数 
				user.name //数据 
				"TaimWay" //带流数据 
			*/
		string deleteSpecificText(const string PrimitiveText, const int startLocation, int endLocation){
			string Text = "";
			number number;
			
			for(int i=0 ; i<PrimitiveText.size() ; i++){
				if(!number.isInBetweenNumbers(i, startLocation, endLocation)){
					Text += PrimitiveText[i];
				}
			}
			
			return Text;
		}
		string deleteLeadingText(const string PrimitiveText, const char deleteText){
			string Text = PrimitiveText;
			
			int end = 0;
			for(int i=0 ;i<Text.size() ;i++){
				if(Text[i]!=' '){
					end = i-1;
					break;
				}
			}
			
			deleteSpecificText(Text, 0, end); 
			
			return Text;
		}
};
class code{
	private:
		void getCodeObject(const string& code, vector<string>& ReturnList){
			strings strings;
			vector <string> Object;
			
			strings.split(code,' ', Object);
		}
	public:
		void run(string code){
			vector <string> Object;
			getCodeObject(code, Object);
		}
};

