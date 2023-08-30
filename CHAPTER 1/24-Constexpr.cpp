#include <iostream>
#include <format>
using namespace std;

class Rect {     
public:
    constexpr Rect(size_t width, size_t height)             
    : m_width { width }, m_height { height } {}           
    
    constexpr size_t getArea() const { 
        return m_width * m_height; 
}     

private:
    size_t m_width { 0 }, m_height { 0 };
};

int main() {
    // Expressions evaluated at compile time 
    constexpr Rect r { 8, 2 };
    cout << r.getArea() << endl;
    int myArray[r.getArea()];

    return 0;
}