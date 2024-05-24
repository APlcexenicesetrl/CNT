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
		}
		void pause(){
			printf("\nStop run of the program\Press any key go on...\n------Stop------\n");
			_getch();
		}
};
