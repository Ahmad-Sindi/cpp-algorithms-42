// Algorithm Challenge
// 42 Task Duration in Seconds
// Calculate total task duration in seconds based on days, hours, minutes, and seconds

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float num_days, num_hours, num_minutes, num_seconds, total_seconds;

    // Ask user for the number of days
    cout << "Enter the number of days you worked: ";
    cin >> num_days;

    // Ask user for the number of hours
    cout << "Enter the number of hours you worked: ";
    cin >> num_hours;

    // Ask user for the number of minutes
    cout << "Enter the number of minutes you worked: ";
    cin >> num_minutes;

    // Ask user for the number of seconds
    cout << "Enter the number of seconds you worked: ";
    cin >> num_seconds;

    // Calculate total seconds
    total_seconds = (num_days * 24 * 60 * 60) // days to seconds
                    + (num_hours * 60 * 60)   // hours to seconds
                    + (num_minutes * 60)      // minutes to seconds
                    + num_seconds;            // add remaining seconds

    // Display the total duration in seconds
    cout << "Total task duration: " << total_seconds << " Seconds\n";

    return 0;
}
