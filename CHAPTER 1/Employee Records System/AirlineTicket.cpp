#include "AirlineTicket.hpp"
#include <string>

int num = 100; 
AirlineTicket::AirlineTicket() 
    : m_passengerName {"Unkown Passenger"}
    , m_numberOfMiles { 0 }
    , m_hasSuperEliteRewardStatus { false }
    , m_frequentFlyerNumber {num++}
    {}

AirlineTicket::~AirlineTicket() {}

double AirlineTicket::calculatePriceInDollars () {
    if (hasSuperEliteRewardStatus()) {
        return 0;
    }

    return getNumberOfMiles() * 0.1;
}