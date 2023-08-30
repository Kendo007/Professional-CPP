#include <iostream>
#include <cstdlib>
#include <format>
using namespace std;

// issues warning to compiler of returned value is not used.
[[nodiscard]] int func() {
    return 42;
}

// Used to suppress the compiler from issuing a warning when something is unused
int func(int param1, [[maybe_unused]] int param2) {    
    return 42;
}

// function means that it never returns control to the call site.
[[noreturn]] void forceprogramtermination() {     
    exit(1);  // defined in <cstdlib> in std namespace  
}

bool isdongleavailable() {     
    bool isavailable { false };
    // check whether a licensing dongle is available...
    return isavailable;
}
 
bool isfeaturelicensed(int featureid) {     
    if (!isdongleavailable()) {         // no licensing dongle found, abort program execution!
        forceprogramtermination();
    } else {
        bool islicensed { featureid == 42 };
        // dongle available, perform license check of the given feature...
        return islicensed;
    } 
}  

// To warn the user to avoid the given function
[[depreceated]] auto dep() {
    return 42;
}

int main() {
    // func();
    func(4, 5);
    bool islicensed { isfeaturelicensed(42) };
    dep();

    cout << islicensed << endl;

    // To tell the compiler which branch might possibly be taken
    int value { 10 };

    if (value > 11) 
    [[unlikely]] { 
        /* Do something ... */ 
    } 
    else { 
        /* Do something else... */ 
    }   
    
    switch (value) {     
        [[likely]] case 1:
            // Do something ...
            break;
        case 2:
            // Do something...
            break;
        [[unlikely]] case 12:
            // Do something...
            break;
        }

    return 0;
}