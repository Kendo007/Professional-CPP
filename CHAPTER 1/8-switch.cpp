#include <iostream>
#include <format>
using namespace std;

int main() {
    // Switch statements can only be used with integral values like int, double or enums etc..
    int mydir;
    enum class Direction { Up, Down, Left, Right };
    cin >> mydir;

    switch (int n {5}; static_cast<Direction>(mydir))
    {
        using enum Direction;
        case Up:
            cout << "UP" << endl;
            cout << format("Initialiser available in this scope {}", n) << endl;
            break;
        case Down: // FallTrough will happen on this case
            cout << "DOWN" << endl;
        case Left:
            cout << "LEFT" << endl;
            break;
        case Right:
            cout << "RIGHT" << endl;
            break;
        default:
            break;
    }

    return 0;
}