#include <iostream>

#include "Customer.hpp"

int main() {

    Customer customer("Olivier");
    customer.addRental(Rental(Movie("Karate Kid"), 7));
    customer.addRental(Rental(Movie("Avengers: Endgame", Movie::NEW_RELEASE ), 5));
    customer.addRental(Rental(Movie("Snow White", Movie::CHILDREN), 3));

    std::cout << customer.statement() << std::endl;

    return 0;
}