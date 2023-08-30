#include <iostream>
#include <format>
using namespace std;

int main() {
    // Default value is 0, 1, 2.......
    enum class PieceType {
        King = 1,
        Queen,
        Rook = 10,
        Pawn
    };

    PieceType piece { PieceType::King };

    {
        using enum PieceType;
        PieceType piece2 { Pawn };
    }

    return 0;
}