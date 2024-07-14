#include <bits/stdc++.h>
#include "colorDefine.h"
using namespace std;

class winCodes{
    private:
        void setColor(int colorCode)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, colorCode);
        }
        string add(const string add1, const string add2)
        {
            return add1 + add2;
        }
    public: 
        void winError(const string codeName, const string codeTip)
        {
            setColor(RED);
            cout << "「" << codeName << "」代码从指令集中返回了一个异常并抛入 控制台 中，请检查你输入的指令参数是否有问题，若并没有问题请请咨询开发商，并给出解决方案。" << endl << "信息返回:「" << codeTip << "」" << endl << "「CNT for console」" ;
            setColor(Recovery);
        }
        
}

class cntconfig{
    private:
        bool CheckAuthenticityOfConfigurationFile(const string configText)
        {
            /*
                The original text:
                    [Config]>
                        "AllowConsoleOutUseIllegal":"false",
                        "ColorOutput":"true"
                Later text:
                    [Config]>"AllowConsoleOutUseIllegal":"false","ColorOutput":"true"
                Ideas:
                    1.整个字符串不能少于 11 个字符:
                        [A]>"B":"C"
                        ^^^^^^^^^^^ // 11 个字符
                    2.一定有 "[Text]>" 在开头
            */
            if(configText.size() < 11) return false;
            //Header
            int firsk;
            for (int i = 0; i < configText.size() ; ++i) if(configText[i] == '>') firsk = i;
            if(firsk < 4) return false;
            if(!(configText[0] == '[' && configText[firsk - 1] == ']')) return false;
            return true;
        }
    public:
        string getConfigText(const string path, const string configName)
        {
            ifstream configFile(add(configName, ".cntconfig"));
            string fileText = "", returnText = "", line = "";
            if (!configFile.is_open())
            {
                return "null";
            }
            while (getline(configFile, line))
            {
                fileText += line;
            }
            configFile.close();
            // Spilt Text
            for (int i = 0; i < fileText.size(); ++i)
            {
                if (fileText[i] != ' ')
                    returnText += fileText[i];
            }
            return returnText;
        }
        string getConfigObject(const string configText, const string object)
        {
            if (!CheckAuthenticityOfConfigurationFile)
                return "null";
            // Any Code
        }
}