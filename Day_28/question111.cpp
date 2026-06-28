#include <iostream>
#include <string>
using namespace std;

class TicketBooking
{
private:
    string passengerName;
    int ticketNumber;
    int totalSeats;
    bool booked;

public:
    TicketBooking()
    {
        totalSeats = 50;
        booked = false;
    }

    void bookTicket()
    {
        if (totalSeats > 0)
        {
            cin.ignore();

            cout << "Enter Passenger Name: ";
            getline(cin, passengerName);

            cout << "Enter Ticket Number: ";
            cin >> ticketNumber;

            totalSeats--;
            booked = true;

            cout << "\nTicket Booked Successfully!\n";
            cout << "Remaining Seats: " << totalSeats << endl;
        }
        else
        {
            cout << "Sorry! No seats available.\n";
        }
    }

    void cancelTicket()
    {
        if (booked)
        {
            booked = false;
            totalSeats++;
            cout << "Ticket Cancelled Successfully.\n";
            cout << "Available Seats: " << totalSeats << endl;
        }
        else
        {
            cout << "No ticket has been booked.\n";
        }
    }

    void displayTicket()
    {
        if (booked)
        {
            cout << "\n----- Ticket Details -----\n";
            cout << "Passenger Name : " << passengerName << endl;
            cout << "Ticket Number  : " << ticketNumber << endl;
            cout << "Booking Status : Confirmed" << endl;
            cout << "Available Seats: " << totalSeats << endl;
        }
        else
        {
            cout << "No booking found.\n";
        }
    }
};

int main()
{
    TicketBooking ticket;
    int choice;

    do
    {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Display Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            ticket.bookTicket();
            break;

        case 2:
            ticket.cancelTicket();
            break;

        case 3:
            ticket.displayTicket();
            break;

        case 4:
            cout << "Thank You for Using the Ticket Booking System!\n";
            break;

        default:
            cout << "Invalid Choice! Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}