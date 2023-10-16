#include <iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
    int day;
    string month;
    string sign_;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g, January, February): ";
    cin >> month;
    sign_ = findZodiacSign(day, month);
    cout << "Zodiac Aries: " << sign_;
}

string findZodiacSign(int day, string month)

{
    string sign;

    if ((month == "march" && day > 20) || (month == "april" && day < 20))
    {
        sign = "Aries";
        return sign;
    }

    {
        if ((month == "april" && day > 19) || (month == "may" && day < 20))

            sign = "Taurus";
        return sign;
    }

    {
        if ((month == "may" && day > 21) || (month == "june" && day < 20))

            sign = "Gemini";
        return sign;
    }
    {
        if ((month == "june" && day > 20) || (month == "july" && day < 22))

            sign = "Cancer";
        return sign;
    }

    {
        if ((month == "july" && day > 23) || (month == "august" && day < 22))

            sign = "Leo";
        return sign;
    }

    {
        if ((month == "august" && day > 23) || (month == "september" && day < 22))

            sign = "Virgo";
        return sign;
    }
    {
        if ((month == "sepember" && day > 23) || (month == "october" && day < 22))

            sign = "Libra";
        return sign;
    }

    {
        if ((month == "october" && day > 23) || (month == "noember" && day < 21))

            sign = "Scorpio";
        return sign;
    }

    {
        if ((month == "november" && day > 22) || (month == "december" && day < 21))

            sign = "Sagittarius";
        return sign;
    }
    {
        if ((month == "december" && day > 22) || (month == "january" && day < 19))

            sign = "Capricorn";
        return sign;
    }

    {
        if ((month == "january" && day > 20) || (month == "february" && day < 18))

            sign = "Aquarius";
        return sign;
    }

    {
        if ((month == "February" && day > 19) || (month == "march" && day < 20))

            sign = "Aries";
        return sign;
    }
}