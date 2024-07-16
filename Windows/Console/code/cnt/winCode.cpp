#include <bits/stdc++.h>
#include "colorDefine.h"
#include "windows.h"
using namespace std;

#ifndef CNTSTRINGS_CPP
#define CNTSTRINGS_CPP
class cntstrings
{
public:
    string add(const string add1, const string add2)
    {
        return add1 + add2;
    }
    bool isAllSpace(const string Context)
    {
        for (int i = 0; i < Context.size(); ++i)
            if (Context[i] == ' ')
                return false;
        return true;
    }
};
#endif
#ifndef WINCODE_CPP
#define WINCODE_CPP

class winCode{
    private:
        cntstrings strings;
        void setColor(int colorCode)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, colorCode);
        }
    public:
        string getTime(){
            auto now = chrono::system_clock::now();
            time_t now_time_t = chrono::system_clock::to_time_t(now);
            tm now_tm = *localtime(&now_time_t);
            ostringstream timeStream;
            timeStream << put_time(&now_tm, "%m/%d/%y %H:%M:%S");
            return timeStream.str();
        }
        void winError(const string codeName, const string codeTip)
        {
            setColor(RED);
            cout << "The \'" << codeName << "\' code returns an exception from the instruction set and throws it. Control Taichung, check to see if there is a problem with the instruction parameters you entered. If there is no problem, consult the developer and provide a solution." << endl
                << "Message return: " << codeTip << endl
                << "[CNT for console]";
            setColor(Recovery);
        }
        void console(const string typeInformation, const string outText, const int mode)
        {
            if (typeInformation == "undefined")
            {
                winError("console", "Invalid words should not be 'undefined'");
                return;
            }
            if (strings.isAllSpace(outText))
            {
                winError("console", "The prompt can not be all white space");
            }
            if (mode <= 2 && mode >= 0)
            {
                winError("console", "The pattern values do not match");
            }
            // get Time & Date and change string
            string dateTip = getTime();
            
            switch (mode)
            {
            case 0:
                break;
            case 1:
                setColor(RED);
                break;
            case 2:
                setColor(YELLOW);
            default:
                winError("console", "You Can't have a pattern value less than 0 and greater than 2");
                break;
            }
            cout << "[" << dateTip << "][" << typeInformation << "] " << outText << endl;
        }
        void winUndefined(const string codeName){
            setColor(RED);
            cout << "\"" << codeName << "\" is not CNT internal code or native code, please check that your code is declared, and check that your code is not misspelled." << endl;
            setColor(Recovery);
        }
};
#endif