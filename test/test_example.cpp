#include "gtest/gtest.h"
#include "Customer.h"

TEST(CustomerTest, StatementTest) {
    Customer customer("Jaques");

    customer.addRental(Rental(Movie("Rrrrrrrrrrrrrs"), 4));

    ASSERT_EQ(customer.statement(),
    "Rental Record for Jaques\n\tRrrrrrrrrrrrrs\t5\nAmount owed is 5\nYou earned 1 frequent renter points");
}