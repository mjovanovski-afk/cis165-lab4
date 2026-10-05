#include <iostream>

int main()
{
    const double ANNUAL_RISE_RATE = 1.5;
    const int YEARS_5 = 5;
    const int YEARS_7 = 7;
    const int YEARS_10 = 10;

    double rise_five_years = YEARS_5 * ANNUAL_RISE_RATE;
    double rise_seven_years = YEARS_7 * ANNUAL_RISE_RATE;
    double rise_ten_years = YEARS_10 * ANNUAL_RISE_RATE;
    
    std::cout<<"After 5 years the ocean level will rise "<<rise_five_years<<"mm.\n";
    std::cout<<"After 7 years the ocean level will rise "<<rise_seven_years<<"mm.\n";
    std::cout<<"After 10 years the ocean level will rise "<<rise_ten_years<<"mm.\n";

    return 0;
}