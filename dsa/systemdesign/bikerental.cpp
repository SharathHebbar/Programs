#include <bits/stdc++.h>

using namespace std;

class BikeRental
{
    int available_bikes = 0;
    double total = 0;
    double amount = 0;
    int total_rental = 0;
    int hourly_rental = 0;
    int weekly_rental = 0;
    int daily_rental = 0;

public:
    BikeRental()
    {
        available_bikes = 100;
    }
    void availableBikes(BikeRental b)
    {
        cout << "Total number of bikes available are: " << available_bikes << endl;
    }

    void hourly_basis(BikeRental b)
    {
        amount += 5;
        total += 5;
        hourly_rental++;
        available_bikes--;
        cout << "Rented bike on hourly basis\n";
    }

    void daily_basis(BikeRental b)
    {
        amount += 20;
        total += 20;
        daily_rental++;
        available_bikes--;
        cout << "Rented bike on hourly basis\n";
    }

    void weekly_basis(BikeRental b)
    {
        amount += 60;
        total += 60;
        weekly_rental++;
        available_bikes--;
        cout << "Rented bike on hourly basis\n";
    }

    void printBill()
    {
        cout << "------------------------------Printing final bill ------------------------------\n";
        total_rental = daily_rental + weekly_rental + hourly_rental;
        if (total_rental >= 3 and total_rental <= 5)
        {
            total = (70 * total) / 100;
            cout << "Family Rental Promotion you got 30% discount on your rentals\n";
        }

        cout << "Total bikes rented for hourly basis "
             << hourly_rental << endl;
        cout << "Total bikes rented for daily basis "
             << daily_rental << endl;
        cout << "Total bikes rented for weekly basis "
             << weekly_rental << endl;
        cout << "Total amount to be paid is Rs." << total << endl
             << endl;
    }
};

int main()
{
    BikeRental b;
    int choice;
    while (1)
    {
        cout << "--------------------------Bike rental System---------------------------------\n";
        cout << "Enter your choice:\n";
        cout << "1. Available Bikes\n";
        cout << "2. Rent bikes on hourly basis for 5rs per hour\n";
        cout << "3. Rent bikes on daily basis for 20rs per day\n";
        cout << "4. Rent bikes on weekly basis for 60rs per week\n";
        cout << "5. Print the bill\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            b.availableBikes(b);
            break;
        case 2:
            b.hourly_basis(b);
            break;
        case 3:
            b.daily_basis(b);
            break;
        case 4:
            b.weekly_basis(b);
            break;
        case 5:

            b.printBill();
            break;
        default:
            exit(0);
        }
    }
}