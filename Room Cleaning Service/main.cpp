//PSEUDOCODE:
//    - Promt the user to enter the number of rooms
//    - Display number of rooms
//    - Display price per room
//    - Display cost (Number of room * Price per room)
//    - Display Tax (Number of room * Price per room * tax rate)
//    -Display Total Estimate (Number of rooms * Price per room) + (Number of room * Price per room * Tax rate)


#include <iostream>

using namespace std;

int main()
{
    int noOfRooms {0};
    const double pricePerRoom{99.99};
    const double salesTax {30.59};

    cout << "\n\t\t\tHello!! welcome to Room cleaning service" << "\n\nHow many Rooms would you like to be cleaned ?";
    cin >> noOfRooms;
    cout << "\nNumber of rooms are: " << noOfRooms << endl;
    cout << "The Price per room is: " << pricePerRoom << "\nSales Tax: " << salesTax << endl;
    cout << "-----------------------------------------------------------------------------------" << endl;

    cout << "Your Cost is: Rs" <<noOfRooms*pricePerRoom << endl;
    cout << "Total Estimate: " << (noOfRooms * pricePerRoom) + (salesTax) << endl;
    cout << "This Estimate is valid for 30 days" << "\nThanks for observing us" << endl;



    return 0;
}
