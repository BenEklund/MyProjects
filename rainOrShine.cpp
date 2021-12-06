#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    // Declare Variables Needed For Writing File To 3 Arrays
    string monthA[30],
        monthB[30],
        monthC[30],
        line;
    int elementa = 0, 
        elementb = 0, 
        elementc = 0, 
        count = 0;
    // Create File Object And Open The File
    ifstream rainOrShine;
    rainOrShine.open("RainOrShine.txt");
    while (getline(rainOrShine, line))
    {
        if (count >= 0 && count < 30) // The First 30 Values Will Be Assigned To Month A
        {
            monthA[elementa] = line;
            elementa++;
        }
        else if (count >= 30 && count < 60) // The Next 30 Values Will Be Assigned To Month B
        {
            monthB[elementb] = line;
            elementb++;
        }
        else if (count >= 60 && count < 90) // The Final 30 Values Will Be Assigned To Month C
        {
            monthC[elementc] = line;
            elementc++;
        }
        count++;
    }

    // Close The File

    rainOrShine.close();

    // Declare Variables Needed For Month A, B, C, and Totals

    int monthARainyDays = 0,
        monthACloudyDays = 0,
        monthASunnyDays = 0,

        monthBRainyDays = 0,
        monthBCloudyDays = 0,
        monthBSunnyDays = 0,

        monthCRainyDays = 0,
        monthCCloudyDays = 0,
        monthCSunnyDays = 0,

        totalRainyDays,
        totalCloudyDays,
        totalSunnyDays;
    // For Each Month 
    // How Many Days Were Rainy?
    // How Many Days Were Cloudy?
    // How Many Days Were Sunny?
    for (int i = 0; i < 30; i++)
    {
        if (monthA[i] == "R")
        {
            monthARainyDays++;
        }
        else if (monthA[i] == "C")
        {
            monthACloudyDays++;
        }
        else if (monthA[i] == "S")
        {
            monthASunnyDays++;
        }
    }
    for (int j = 0; j < 30; j++)
    {
        if (monthB[j] == "R")
        {
            monthBRainyDays++;
        }
        else if (monthB[j] == "C")
        {
            monthBCloudyDays++;
        }
        else if (monthB[j] == "S")
        {
            monthBSunnyDays++;
        }
    }
    for (int k = 0; k < 30; k++)
    {
        if (monthC[k] == "R")
        {
            monthCRainyDays++;
        }
        else if (monthC[k] == "C")
        {
            monthCCloudyDays++;
        }
        else if (monthC[k] == "S")
        {
            monthCSunnyDays++;
        }
    }
    // For The Whole Period
    // How Many Days Were Rainy?
    // How Many Days Were Cloudy?
    // How Many Days Were Sunny?
    totalRainyDays = monthARainyDays + monthBRainyDays + monthCRainyDays;
    totalCloudyDays = monthACloudyDays + monthBCloudyDays + monthCCloudyDays;
    totalSunnyDays = monthASunnyDays + monthBSunnyDays + monthCSunnyDays;
    // Which Month Had The Most Rainy Days?
    char most;
    if (monthARainyDays >= monthBRainyDays && monthARainyDays >= monthCRainyDays)
    {
        most = 'A';
    }
    else if (monthBRainyDays >= monthARainyDays && monthBRainyDays >= monthCRainyDays)
    {
        most = 'B';
    }
    else if (monthCRainyDays >= monthARainyDays && monthCRainyDays >= monthBRainyDays)
    {
        most = 'C';
    }
    // Report Data
    cout << "Month A had " << monthARainyDays << " Rainy Days, " << monthACloudyDays << " Cloudy Days, and " << monthASunnyDays << " Sunny Days." << endl;
    cout << "Month B had " << monthBRainyDays << " Rainy Days, " << monthBCloudyDays << " Cloudy Days, and " << monthBSunnyDays << " Sunny Days." << endl;
    cout << "Month C had " << monthCRainyDays << " Rainy Days, " << monthCCloudyDays << " Cloudy Days, and " << monthCSunnyDays << " Sunny Days." << endl << endl;
    cout << "In total, there were " << totalRainyDays << " Rainy Days, " << totalCloudyDays << " Cloudy Days, and " << totalSunnyDays << " Sunny Days." << endl;
    cout << "Month " << most << " had the most rainy days." << endl << endl;
    return 0;
}


