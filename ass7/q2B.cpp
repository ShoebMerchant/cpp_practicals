/**
 *  Create a Base class Train containing protected data membersas
 *  Train_no,Train_Name.Derive a class Route(Route_id,Sorce,Destination) from Train class.
 *  Also derive a class Reservation(Number_of_Seats,Train_Class,Fare,Travel_Date) from Route.
 *  Write a program to perform following necessary functions:
 ** a. Enter details of "n" reservations
 ** b. Display details of all reservations
 ** c. Display reservation details of a specified Train class
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Train
{
protected:
    int train_no;
    string train_name;
};
class Route : protected Train
{
protected:
    int route_id;
    string source;
    string destination;
};
class Reservation : protected Route
{
    int number_of_seats;
    string train_class;
    int fare;
    int travel_date;

public:
    void reserve()
    {
        cout << "Enter train number : ";
        cin >> train_no;
        cout << "Enter train name : ";
        cin >> train_name;
        cout << "Enter route id : ";
        cin >> route_id;
        cout << "Enter source : ";
        cin >> source;
        cout << "Enter destination : ";
        cin >> destination;
        cout << "Enter number of seats : ";
        cin >> number_of_seats;
        cout << "Enter Train class : ";
        cin >> train_class;
        cout << "Enter fare : ";
        cin >> fare;
        cout << "Enter travel date in the following (DDMMYYYY) format : ";
        cin >> travel_date;
    }
    void show_reservation()
    {
        cout << endl
             << "---------------------------------" << endl;
        cout << "Train number : " << train_no << endl;
        cout << "Train name : " << train_name << endl;
        cout << "Route id : " << route_id << endl;
        cout << "Source : " << source << endl;
        cout << "Destination : " << destination << endl;
        cout << "Number of seats : " << number_of_seats << endl;
        cout << "Train class : " << train_class << endl;
        cout << "Fare : " << fare << endl;
        cout << "Travel Date (DDMMYYYY) : " << travel_date << endl
             << endl;
    }
    int get_train_no()
    {
        return train_no;
    }
};

int main()
{
    int n;
    cout << "Enter number of Reservation : ";
    cin >> n;
    Reservation *reservations = new Reservation[n];
    for (int i = 0; i < n; i++)
        reservations[i].reserve();
    for (int i = 0; i < n; i++)
        reservations[i].show_reservation();
    int tno;
    cout << "Enter Train number to search : ";
    cin >> tno;
    for (int i = 0; i < n; i++)
    {
        if (reservations[i].get_train_no() == tno)
        {
            cout << "Found your reservation : ";
            reservations[i].show_reservation();
            exit(1);
        }
    }
    cout << "No reservation found" << endl;
    return 0;
}