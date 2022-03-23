#pragma once
#include "headers.h"

class Date
{
    public:
        Date(const int& y, const int& m, const int& d);

        int GetYear() const;
        int GetMonth() const;
        int GetDay() const;

    private:
        int Year;
        int Month;
        int Day;
};

Date ParseDate(istream& date_stream);

ostream& operator << (ostream& stream, const Date& date);

bool operator < (const Date& lhs, const Date& rhs);

bool operator <= (const Date& lhs, const Date& rhs);

bool operator > (const Date& lhs, const Date& rhs);

bool operator >= (const Date& lhs, const Date& rhs);

bool operator == (const Date& lhs, const Date& rhs);

bool operator != (const Date& lhs, const Date& rhs);
