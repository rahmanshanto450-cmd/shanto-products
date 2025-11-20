/* C++ Ticket Booking System with Inheritance
Student Name: Shafiullah Shanto  
Roll Number: 2022551013040  
Date: November 20, 2025


Assignment Overview
This assignment demonstrates the use of public, private, and protected inheritance in C++ along with **function overriding and polymorphism through a ticket booking system.
---
## Code Implementation*/

#include <iostream>
#include <string>
using namespace std;

// ==================== Base Class ====================
class Ticket {
protected:
    string ticketID;
    string source;
    string destination;
    float distance;   

public:
    void setTicketInfo() {
        cout << "Enter Ticket ID: ";
        cin >> ticketID;
        
        cout << "Enter Source: ";
        cin >> source;
        
        cout << "Enter Destination: ";
        cin >> destination;
        
        cout << "Enter Distance (km): ";
        cin >> distance;
    }

    void displayTicketInfo() {
        cout << "Ticket ID: " << ticketID << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Distance: " << distance << " km" << endl;
    }

    virtual float calculateFare() {
        return distance * 1.0f;
    }
};

// ==================== Derived Class 1: TrainTicket (Private Inheritance) ====================
class TrainTicket : private Ticket {
private:
    string coachType;   

public:
    void setTrainTicketInfo() {
        setTicketInfo();
        
        cout << "Enter Coach Type (AC / Sleeper / General): ";
        cin >> coachType;
    }

    float calculateFare() override {
        float fare = distance * 1.0f;
        
        if (coachType == "AC")
            fare += 200.0f;
        else if (coachType == "Sleeper")
            fare += 100.0f;
        
        return fare;
    }

    void displayTrainTicket() {
        cout << "\n------ Train Ticket Details ------" << endl;
        displayTicketInfo();
        cout << "Coach Type: " << coachType << endl;
        cout << "Total Fare: " << calculateFare() << " tk" << endl;
        cout << "----------------------------------" << endl;
    }
};

// ==================== Derived Class 2: FlightTicket (Protected Inheritance) ====================
class FlightTicket : protected Ticket {
protected:
    string seatClass;        
    float luggageWeight;     

public:
    void setFlightTicketInfo() {
        setTicketInfo();
        
        cout << "Enter Seat Class (Economy / Business): ";
        cin >> seatClass;
        
        cout << "Enter Luggage Weight (kg): ";
        cin >> luggageWeight;
    }

    float calculateFare() override {
        float fare = distance * 25.0f;
        
        if (seatClass == "Business")
            fare += 20000.0f;
        
        if (luggageWeight > 20.0f) {
            float extraKg = luggageWeight - 20.0f;
            fare += extraKg * 5000.0f;
        }
        
        return fare;
    }

    void displayFlightTicket() {
        cout << "\n------ Flight Ticket Details ------" << endl;
        displayTicketInfo();
        cout << "Seat Class: " << seatClass << endl;
        cout << "Luggage Weight: " << luggageWeight << " kg" << endl;
        cout << "Total Fare: " << calculateFare() << " tk" << endl;
        cout << "-----------------------------------" << endl;
    }
};

// ==================== main() ====================
int main() {
    TrainTicket train;
    FlightTicket flight;
    
    cout << "========== Train Ticket Information ==========\n";
    train.setTrainTicketInfo();
    
    cout << "\n========== Flight Ticket Information ==========\n";
    flight.setFlightTicketInfo();
    
    train.displayTrainTicket();
    flight.displayFlightTicket();
    
    return 0;
}

/* Conclusion
This assignment effectively demonstrates advanced Object-Oriented Programming concepts including inheritance types, function-overriding, and polymorphism through a practical ticket booking system!!. The solution provides a scalable foundation*/