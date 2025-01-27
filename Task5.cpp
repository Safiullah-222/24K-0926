#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string movieName;
    int adultPrice, childPrice, adultsSold, childrenSold;
    int totalRevenue, donationPercentage, amountToCharity;

    cout << "Enter the movie name: ";
    cin >> movieName;
    cout << "Enter the price for adult tickets: ";
    cin >> adultPrice;
    cout << "How many adult tickets were sold? ";
    cin >> adultsSold;
    cout << "Enter the price for children's tickets: ";
    cin >> childPrice;
    cout << "How many children's tickets were sold? ";
    cin >> childrenSold;
    cout << "Enter the percentage of revenue to be donated to charity: " << endl;
    cin >> donationPercentage;
    cout << "Calculating revenue" << endl;

    totalRevenue = (adultsSold * adultPrice) + (childrenSold * childPrice);
    amountToCharity = totalRevenue * donationPercentage / 100;

    cout << "Movie Name: " << movieName << endl;
    cout << "Total Tickets Sold: " << (adultsSold + childrenSold) << endl;
    cout << "Total Revenue: $" << totalRevenue << endl;
    cout << "Amount Donated to Charity: $" << amountToCharity << endl;
    cout << "Remaining Revenue: $" << (totalRevenue - amountToCharity) << endl;

    return 0;
}
