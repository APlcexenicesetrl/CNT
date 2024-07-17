#ifndef CNTLOG_CPP
#define CNTLOG_CPP
#include <bits/stdc++.h>
#include "winCode.cpp"
#include "colorDefine.h"
using namespace std;

namespace cnt{
    class cntLogs{
        private:
            winCode console;
            vector <string> logID, logTime, logUser, logCommit;
        public:
            void add(const string Commit, const string User){
                string dateTime = console.getTime();
                logUser.push_back(User);
                logCommit.push_back(Commit);
                logTime.push_back(dateTime);
                //TIME
                const size_t length = 10;
                const string CHARACTERS = "0123456789abcdef";
                random_device random_device;
                mt19937 generator(random_device());
                uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);
                string random_string;
                for (size_t i = 0; i < length; ++i) random_string += CHARACTERS[distribution(generator)];
                stringstream ss;
                time_t now = time(0);
                tm *ltm = localtime(&now);
                ss << put_time(ltm, "%Y%m%d%H%M%S");
                ss << random_string;
                logID.push_back(ss.str());
            }
            void list(){
                if(logID.size() > 1){
                    for (int i = 0; i < min({logID.size(), logUser.size(), logCommit.size(), logTime.size()}); ++i)
                    {
                        console.setColor(ORANGE);
                        cout << "ID: " << logID[i] << endl;
                        console.setColor(GREEN);
                        cout << "Executive: " << logUser[i] << endl;
                        console.setColor(WHITE);
                        cout << "Time Date: " << logTime[i] << endl;
                        console.setColor(YELLOW);
                        cout << "   Commit: "<< logCommit[i] << endl;
                        console.setColor(WHITE);
                    }
                }
                else{
                    console.setColor(RED);
                    cout << "Error: no log is displayed" << endl;
                    console.setColor(WHITE);
                }
            }
    };
}
#endif