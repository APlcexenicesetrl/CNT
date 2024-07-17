#include <bits/stdc++.h>
#include "winCode.cpp"
#include "runningCode.cpp"
#include "log.cpp"
using namespace std;
using namespace cnt;

int main(int argc, char **argv)
{
    cntLogs log;
    code runningCode;
    winCode winCode;
    log.add("Start Programs", winCode.getUserName());
    vector <string> codeParameter;
    if (argc == 1){
        codeParameter.push_back("undefined");
        runningCode.runCode("help", codeParameter);
    }
    else
    {
        if(argc > 2) for (int i = 2; i < argc; ++i) codeParameter.push_back(argv[i]);
        else codeParameter.push_back("undefined");
        runningCode.runCode(argv[1], codeParameter);
    }
    return 0;
}