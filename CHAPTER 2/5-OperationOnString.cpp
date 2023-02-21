#include <iostream>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main() {
    string strHello {"Hello!! "};
    string strWorld {"The World..."};
    string strSub {strHello.substr(3, 2)};

    auto position {strHello.find("!!")};
    // if size is 0 then it will simply insert the given string
    if (position != string::npos) {
        strHello.replace(position, 2, strWorld);
    }

    cout << strSub << endl;
    cout << strHello << endl;
    cout << boolalpha << strHello.starts_with("Hel") << noboolalpha << endl;

    return 0;
}