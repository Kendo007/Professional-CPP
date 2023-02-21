// Character array with '\0' (NUL) character 
#include <iostream>
#include <cstring>
#include <initializer_list>
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

// Caller has the responsibility of deleting allocated memory 
char* copyString(const char* str) {
    char* result { new char[strlen(str) + 1]};
    strcpy(result, str);

    return result;
}

char* mergeStrings(initializer_list<const char*> arr) {
    int length {1};

    // Calculating the length of total string
    for (auto i : arr) {
        length += strlen(i);
    }

    // Dynamic Allocating
    char* result { new char[length] };
    cout << format("String Length: {}", length) << endl;

    // Copying and Concatenating using inbuilt c functions
    bool i {true};
    for (auto j : arr) {
        if (i) {
            strcpy(result, j);
            i = false;
        }
        else {
            strcat(result, j);
        }
    }

    return result;
}

int main() {
    char arr[] {"Hello"};
    char *copy {nullptr};

    copy = mergeStrings({arr, " World", "!", " This is ", "an experiment.", "\nPASSED!"});
    cout << copy << endl;

    delete[] copy;
    copy = nullptr;

    return 0;
}