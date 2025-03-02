// Customer.cpp
#include <sstream>
#include <vector>
#include "Customer.hpp"

using std::ostringstream;
using std::vector;

using namespace std;


Customer::Customer() {}

Customer::Customer(const std::string& name)
        : _name(name) {}

void Customer::addRental(const Rental& arg) {
    _rentals.push_back(arg);
}

std::string Customer::getName() const {
    return _name;
}

string Customer::statement() {
    double totalAmount = 0;
    int frequentRenterPoints = 0;
    ostringstream result;

    result << "Rental Record for " << getName() << "\n";

    for (const Rental& rental : _rentals) {

        // add frequent renter points
        ++frequentRenterPoints;
        // add bonus for a two day new release rental
        if ((rental.getMovie().getPriceCode() == Movie::NEW_RELEASE) && rental.getDaysRented() > 1)
            ++frequentRenterPoints;

        // show figures for this rental
        result << "\t" << rental.getMovie().getTitle()
               << "\t" << rental.getMovie().getAmount(rental.getDaysRented()) << "\n";
        totalAmount += rental.getMovie().getAmount(rental.getDaysRented());
    }
    // add footer lines
    result << "Amount owed is " << totalAmount << "\n"
           << "You earned "     << frequentRenterPoints
           << " frequent renter points";
    return result.str();
}