#include <iostream>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main() {
    char* test {"Hello"};
    // test[4] = 'k';          // Invalid because test is a stringLiteral

    char test2[] {"Hello"};
    test2[4] = 'k';

    cout << test[4] << endl;
    cout << test2 << endl;

    // Raw-String Literals
    const char* str {R"(Hello\nWorld\t\")"};
    cout << str << endl;

    // Extended Raw String Literals
    const char* str2 {R"A-delimeter(Hello )""( Checking))A-delimeter"};
    cout << str2 << endl;

    return 0;
}