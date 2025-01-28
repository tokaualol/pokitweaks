#include <iostream>
#include <windows.h>
#include <shellapi.h>
#include <string>
using namespace std;

int main()
{
    string server;

    cout << "" << endl;
    cout << R"(                      /$$       /$$   /$$                                       /$$                
                     | $$      |__/  | $$                                      | $$                
   /$$$$$$   /$$$$$$ | $$   /$$ /$$ /$$$$$$   /$$  /$$  /$$  /$$$$$$   /$$$$$$ | $$   /$$  /$$$$$$$
  /$$__  $$ /$$__  $$| $$  /$$/| $$|_  $$_/  | $$ | $$ | $$ /$$__  $$ |____  $$| $$  /$$/ /$$_____/
 | $$  \ $$| $$  \ $$| $$$$$$/ | $$  | $$    | $$ | $$ | $$| $$$$$$$$  /$$$$$$$| $$$$$$/ |  $$$$$$ 
 | $$  | $$| $$  | $$| $$_  $$ | $$  | $$ /$$| $$ | $$ | $$| $$_____/ /$$__  $$| $$_  $$  \____  $$
 | $$$$$$$/|  $$$$$$/| $$ \  $$| $$  |  $$$$/|  $$$$$/$$$$/|  $$$$$$$|  $$$$$$$| $$ \  $$ /$$$$$$$/
 | $$____/  \______/ |__/  \__/|__/   \___/   \_____/\___/  \_______/ \_______/|__/  \__/|_______/ 
 | $$                                                                                              
 | $$                                                                                              
 |__/                                                                                              )" << '\n';

    cout << "" << endl;
    cout << "Enter the server IP you want to join" << endl;
    cin >> server;

    cout << "Launching..." << endl;

    // Connect to the localhost + provided server using LunarClient's deeplink.
    ShellExecute(0, 0, L"lunarclient://play?serverAddress=localhost", 0, 0, SW_SHOW);
    wstring wserver = L"lunarclient://play?serverAddress=" + wstring(server.begin(), server.end());
    int ret = (int)ShellExecute(0, 0, wserver.c_str(), 0, 0, SW_SHOW);

    // Check if it failed
    if (ret <= 32) {
        cout << "Failed to connect to the server: " << server << ". Error code: " << ret << endl;
        return 1;
    }

    return 0;
}
