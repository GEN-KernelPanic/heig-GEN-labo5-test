// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie {
public:
    Movie(const std::string& title, int priceCode = REGULAR);

    virtual int getPriceCode() const = 0;
    virtual int getAmount(int daysRented) const = 0;
    std::string getTitle() const;

private:
    std::string _title;
};


#endif // MOVIE_H