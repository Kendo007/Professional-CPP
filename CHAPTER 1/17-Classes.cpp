#include <iostream>
#include <format>
using namespace std;

class AirlineTicket {
public:
    AirlineTicket() = default;

    void setPassengerName(string name) {
        mPassengerName = name;
    }

    void setNumberOfMiles(int miles) {
        mNumberOfMiles = miles;
    }

    double calculatePriceInDollars() {
        if (mNumberOfMiles > 2000) {
            if (mHasEliteSuperRewardsStatus) {
                return 0;
            }

            return 0.10 * mNumberOfMiles;
        }

        return 0;
    }

    const string& getPassengerName() {
        return mPassengerName;
    }
    
private:
    string mPassengerName;
    int mNumberOfMiles;
    bool mHasEliteSuperRewardsStatus;
};

int main() {
    AirlineTicket myTicket;
    myTicket.setPassengerName("Thomas Roll");
    myTicket.setNumberOfMiles(700);

    double price {myTicket.calculatePriceInDollars()};
    cout << format("Mr.{} this ticket will cost ${}", myTicket.getPassengerName(), price) << endl;

    return 0;
}