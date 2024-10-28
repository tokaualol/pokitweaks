#include <iostream>
#include <windows.h>
#include <shellapi.h>
#include <chrono>
#include <thread>
#include <string>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

// this code is pretty bad as i'm still new to c++ please bare.

int main()
{
    string server;

    cout<<""<<endl;
    cout<<R"(                      /$$       /$$   /$$                                       /$$                
                     | $$      |__/  | $$                                      | $$                
   /$$$$$$   /$$$$$$ | $$   /$$ /$$ /$$$$$$   /$$  /$$  /$$  /$$$$$$   /$$$$$$ | $$   /$$  /$$$$$$$
  /$$__  $$ /$$__  $$| $$  /$$/| $$|_  $$_/  | $$ | $$ | $$ /$$__  $$ |____  $$| $$  /$$/ /$$_____/
 | $$  \ $$| $$  \ $$| $$$$$$/ | $$  | $$    | $$ | $$ | $$| $$$$$$$$  /$$$$$$$| $$$$$$/ |  $$$$$$ 
 | $$  | $$| $$  | $$| $$_  $$ | $$  | $$ /$$| $$ | $$ | $$| $$_____/ /$$__  $$| $$_  $$  \____  $$
 | $$$$$$$/|  $$$$$$/| $$ \  $$| $$  |  $$$$/|  $$$$$/$$$$/|  $$$$$$$|  $$$$$$$| $$ \  $$ /$$$$$$$/
 | $$____/  \______/ |__/  \__/|__/   \___/   \_____/\___/  \_______/ \_______/|__/  \__/|_______/ 
 | $$                                                                                              
 | $$                                                                                              
 |__/                                                                                              )"<<'\n';

    cout<<""<<endl;
    cout<<"Enter the server IP you want to join"<<endl;
    cin>>server;

    cout<<""<<endl;
    cout<<"Launching..."<<endl;

    // Join both servers using Apollo
    ShellExecute(0, 0, L"lunarclient://play?serverAddress=localhost", 0, 0, SW_SHOW);
    sleep_for(nanoseconds(50));

    // Connects to the IP that the user input
    wstring wserver = wstring(server.begin(), server.end());
    wstring command = L"lunarclient://play?serverAddress=" + wserver;

    // chatgpt
    if ((int)ShellExecute(0, 0, command.c_str(), 0, 0, SW_SHOW) <= 32) {
    cout << "Failed to connect to the server: " << server << ". Error code: " << (int)ShellExecute(0, 0, command.c_str(), 0, 0, SW_SHOW) << endl;
    return 1;
    }

    return 0;
}