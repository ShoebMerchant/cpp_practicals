#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

class District
{
    int district_code;
    char district_name[30];
    int area_sqft;
    int population;
    float literacy_rate;

public:
    void getData()
    {
        cout << "Enter district code: ";
        cin >> district_code;
        cout << "Enter district name: ";
        cin >> district_name;
        cout << "Enter area in sqft: ";
        cin >> area_sqft;
        cout << "Enter population: ";
        cin >> population;
        cout << "Enter literacy rate: ";
        cin >> literacy_rate;
        cout << endl;
    }

    void putData()
    {
        printf("District code:- %d\nDistrict name:- %s\nArea :- %d\nPopulation :- %d\nLiteracy rate :- %f\n",
               district_code, district_name, area_sqft, population, literacy_rate);
    }

    float get_literacy_rate()
    {
        return literacy_rate;
    }
};

int main()
{
    int n;
    cout << "Enter number of Districts: ";
    cin >> n;
    District *dist_arr = new District[n];
    for (int i = 0; i < n; i++)
        dist_arr[i].getData();
    cout << "\n\n";
    for (int i = 0; i < n; i++)
        dist_arr[i].putData();
    int HLRD_idx = -1; // Highest literacy rate district index
    float h = 0.0f;
    for (int i = 0; i < n; i++)
        if (h < dist_arr[i].get_literacy_rate())
        {
            h = dist_arr[i].get_literacy_rate();
            HLRD_idx = i;
        }
    if (HLRD_idx != -1)
    {
        cout << "District with hishest Literacy rate -> " << endl;
        dist_arr[HLRD_idx].putData();
    }
    return 0;
}