#include <iostream>
#include <compare>
#include <format>
using namespace std;

int main() {
    int i { 11 };
    float j { 10.8 };

    // There is strong/weak/partial_ordering for integer and float respectively 
    strong_ordering result { i <=> 0 };
    weak_ordering result2 { i <=> 12 };
    partial_ordering result3 { j <=> 10.7 };

    // Compare using std::is_eq(), is_neq(), is_lt(), is_lteq(), is_gt(), and is_gteq()
    cout << is_neq(result) << endl;
    cout << is_eq(result2) << endl;
    cout << is_gt(result3) << endl;

    return 0;
}