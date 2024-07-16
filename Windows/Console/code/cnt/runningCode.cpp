#include <bits/stdc++.h>
#include "cntconfig.h"
#include "winCode.cpp"
using namespace std;

class code{
    private:
        winCode console;
        cntstrings strings;
        void version(){
            cout << "CNT Version: " << __CNT_CONSOLE_VERSION__ << ' ' << __OperatingSystemVersion__ <<endl;
            return ;
        }
        void help(const string codeHelp)
        {
            string helpText = "";
            if (codeHelp == "undefined")
            {
                ifstream ifs;
                ifs.open("test.txt", ios::in);
                if (!ifs.is_open())
                    helpText = "CNT Console is a program used to pave the way for CNT services, you can use the CNT Console to change CNT services.\n\nUsage: CNT <Command>[<args>]\n\nThe following are common CNT commands used in various situations:\n\nThe start command can start a CNT service, for example, the CNT start GUI.\nThe webstart command can start a CNT web service, for example, the CNT webstart https://aplcexenicesetrl.cn/wiki/CNT/webserver/hello\n\nHandle changes (see also: cntChange)\ngo-continue service\nstop-stop service\nremove-remove service status change\nmemo-list running service kill-force off a service log-show log show various types of object \nstatus-show service status growth, Mark and adjust your common history \nservice-list, create or delete service\nreb-re-service \nchange-create, list, delete or validate change validation \ncollaboration (see also: CNT3 help workflow)\nget a statement from APLCEXENICESETRL CNT WINCODE push update remote reference and related changes“CNT help teamwork” lists the available subcommands and some concept guides.\nSee \"CNT Help <page>\" or \"Git Help <Command>\" for specific subcommands or concepts. For an overview of the system, see \"CNT help cntSystem\".\n\nCode List:\n    1.list - Show CNT help hunting list\n    2.version - show CNT version number\n    3.exit - exit CNT Console\n    4.update - update CNT\n    5.start - start service\n    6.webstart - start network service\n    7.go - continue service\n    8.stop - stop the service\n    9.remove - remove the service from the service index\n    10.memo - list the running services\n    11.kill - force a service to close\n    12.log - display logs\n    13.show -  displays various types of objects\n    14.status - displays service status\n    15.service - lists, creates, or deletes service\n    16.reb - revises service changes\n    17.creates, lists, deletes, or verifies changes for use\n    18.(add instructions according to CNT environment variables) ";
                else
                {
                    string line;
                    while (getline(ifs, line))
                    {
                        helpText += line;
                    }
                }
                ifs.close();
            }
            else{
                helpText = "CNT Console is a program used to pave the way for CNT services, you can use the CNT Console to change CNT services."; 
            }
            cout << helpText << endl;
            return;
        }
    public:
        void runCode(const string codeText, const vector<string> codeParameter)
        {
            try{
                if(codeText == "version") version();
                else if(codeText == "help") help(codeParameter[0]);
                else if(codeText == "exit") exit(0);
                else console.winUndefined(codeText);
            }
            catch(const exception& err){
                console.winError("runningCode", strings.add("The calling function throws an exception, the exception message: ", err.what()));
            }
        }
};