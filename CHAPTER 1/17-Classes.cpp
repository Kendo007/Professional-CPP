#include <iostream>
#include "Airline_ticket.cxx"
#include "/root/CPPMasterclass/Professional C++/format"
using namespace std;

int main() {
    AirlineTicket myTicket;
    myTicket.setPassengerName("Thomas Roll");
    myTicket.setNumberOfMiles(700);

    double price {myTicket.calculatePriceInDollars()};
    cout << format("Mr.{} this ticket will cost ${}", myTicket.getPassengerName(), price) << endl;

    return 0;
}