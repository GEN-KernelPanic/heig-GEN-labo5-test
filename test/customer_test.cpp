/*
 -----------------------------------------------------------------------------------
 Labo        : 
 File        : customer_test.cpp
 Author(s)   : Clarisse Fleurimont, Matthieu Burguburu et Alexandre Simik
 Date        : 21.06.2020
 Remark(s)   :
 -----------------------------------------------------------------------------------
*/
#include "gtest/gtest.h"
#include "Customer.h"

TEST(CustomerTest, StatementTest) {
    Customer customer("Jaques");

    customer.addRental(Rental(Movie("Rrrrrrrrrrrrrs"), 4));

    ASSERT_EQ(customer.statement(),
    "Rental Record for Jaques\n\tRrrrrrrrrrrrrs\t5\nAmount owed is 5\nYou earned 1 frequent renter points");
}