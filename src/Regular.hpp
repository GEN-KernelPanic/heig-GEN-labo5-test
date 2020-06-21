/*
 -----------------------------------------------------------------------------------
 Labo        : 
 File        : Regular.hpp
 Author(s)   : Clarisse Fleurimont
 Date        : 21.06.2020
 Remark(s)   :
 -----------------------------------------------------------------------------------
*/

#ifndef HEIG_POO2_LABO03_REGULAR_HPP
#define HEIG_POO2_LABO03_REGULAR_HPP

#include "Movie.hpp"

class Regular : public Movie {
public:
    Regular(const std::string& title);
    int getPriceCode() const;
    int getAmount(int daysRented) const;
};


#endif //HEIG_POO2_LABO03_REGULAR_HPP
