#include <bits/stdc++.h>
#include "winCode.cpp"
using namespace std;

class winCode{
    private:
        void console(const string typeInformation, const string outText)
        {
            if(typeInformation == "undefine"){
                winError("console", "Invalid words should not be 'Undefine'");
                return ;
            }
            if(){
                
            }
            // get Time & Date and change string
            auto now = chrono::system_clock::now();
            time_t now_time_t = chrono::system_clock::to_time_t(now);
            tm now_tm = *localtime(&now_time_t);

            ostringstream timeStream;
            timeStream << put_time(&now_tm, "%m/%d/%y %H:%M:%S");

            return timeStream.str();
        }
    public:
        void __init__(char **information){
            
        }
}


int main(int argc, char **argv)
{
    if (argc < 3)
        return 0;
    cout << "[" << getCurrentTimeAsString() << "][" << argv[1] << "]: " << argv[2] << endl;
    //_getch();
}

/*
    Input Request:
        1.cnt console [type:log|error|warning] [string text]
    Out:
        [1/1/2000 00:00][Log]: This is a text
        [1/1/2000 00:00][Error]: This is a text
        [1/1/2000 00:00][Warning]: This is a text
*/