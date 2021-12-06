#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int linearSearch(const string arr[], string x, int size, int& count)
{
    int i;
    for (i = 0; i < size; i++, count++)
        if (arr[i] == x)
            return i;
    return -1;
}

int binarySearch(const string arr[], string x, int size, int& count)
{
    int first = 0,             
        last = size - 1,       
        middle,                
        position = -1;         
    bool found = false;       

    while (!found && first <= last)
    {
        middle = (first + last) / 2;     
        if (arr[middle] == x)      
        {
            found = true;
            position = middle;
        }
        else if (arr[middle] > x)  
            last = middle - 1;
        else
            first = middle + 1;           
        count++;
    }
    return position;
}


string convertToUppercase(string userInput)
{
    for (int i = 0; i < userInput.size(); i++)
        userInput.at(i) = toupper(userInput.at(i));
    return userInput;
}

int main()
{
    // Declare needed main variables
    string filename, str, name;
    ifstream file;
    string nameArray[50];
    int i = 0;
    // Take user input for file name & open the file
    cout << "Enter a file name: " << endl;
    cin >> filename;
    file.open(filename);
    // Verify file opened properly
    while (!file.is_open())
    {
        cout << "Failure to open specified file" << endl;
        cout << "Enter a new file name:" << endl;
        cin >> filename;
        file.open(filename);
    }
    cout << "Enter the desired name to be found: " << endl;;
    // Enter the name to search for
    cin >> name;
    name = convertToUppercase(name);
    // Read line by line from file into array object
    while (getline(file, str))
    {
        nameArray[i] = str;
        i++;
    }
    // Convert array to uppercase
    for (int j = 0; j < 50; j++)
    {
        nameArray[j] = convertToUppercase(nameArray[j]);
    }
    int lscount = 0, bscount = 0;

    int resulta = linearSearch(nameArray, name, 50, lscount);

    if (resulta == -1)
    {
        cout << "Element not found by linear search" << endl;
    }
    else
    {
        cout << "Element found by linear search after " << lscount << " iterations." << endl;
    }

    int resultb = binarySearch(nameArray, name, 50, bscount);
   
    if (resultb == -1)
    {
        cout << "Element not found by binary search" << endl;
    }
    else
    {
        cout << "Element found by binary search after " << bscount << " iterations." << endl;
    }
}