#include "AirlineTicket.hpp"
#include <iostream>
using namespace std;

int main() {
    AirlineTicket myTicket; 
    AirlineTicket myTicket2;
    myTicket.setPassengerName("Sherman T. Socketwrench");
    myTicket.setNumberOfMiles(700);
    double cost { myTicket.calculatePriceInDollars() };
    cout << myTicket.getPassengerName() << " This ticket will cost " << cost << endl;
    cout << myTicket.getFrequentFlyerNumber() << " " << myTicket2.getFrequentFlyerNumber() << endl;
    
    return 0;
}