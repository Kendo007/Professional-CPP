#ifndef _AIRLINE_TICKET_H_
#define _AIRLINE_TICKET_H_
#include <string>

class AirlineTicket {
    private:
        std::string m_passengerName;
        int m_numberOfMiles;
        int m_frequentFlyerNumber;
        bool m_hasSuperEliteRewardStatus;

    public:
        AirlineTicket ();
        ~AirlineTicket ();

        double calculatePriceInDollars ();

        const std::string& getPassengerName() const { return m_passengerName; }
        void setPassengerName(const std::string& name) { m_passengerName = name; }

        const int& getNumberOfMiles () const { return m_numberOfMiles; }
        void setNumberOfMiles (const int& miles) { m_numberOfMiles = miles; }

        const bool& hasSuperEliteRewardStatus () const { return m_hasSuperEliteRewardStatus; }
        void setHasSuperEliteRewardStatus (const bool& status) { m_hasSuperEliteRewardStatus = status; }

        const int& getFrequentFlyerNumber() const { return m_frequentFlyerNumber; }
};

#endif