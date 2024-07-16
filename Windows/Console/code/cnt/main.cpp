#include <bits/stdc++.h>
#include "winCode.cpp"
#include "runningCode.cpp"
using namespace std;


int main(int argc, char **argv)
{
    code runningCode;
    winCode winCode;
    vector <string> codeParameter;
    if (argc == 1){
        codeParameter.push_back("undefined");
        runningCode.runCode("help", codeParameter);
    }
    else
    {
        if(argc > 2) for (int i = 2; i < argc; ++i) codeParameter.push_back(argv[i]);
        runningCode.runCode(argv[1], codeParameter);
    }
    return 0;
}