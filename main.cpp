#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Ask for customer name
    string customerName;
    cout << "Welcome to Keema Noodle Shop!" << endl;
    cout << "Please enter your name: ";
    getline(cin, customerName);

    // Display keema noodle menu
    cout << "-------------------------" << endl;
    cout << "KEEMA NOODLE MENU" << endl;
    cout << "-------------------------" << endl;
    cout << "1. Chicken Keema Noodle - Rs. 150" << endl;
    cout << "2. Mutton Keema Noodle - Rs. 200" << endl;
    cout << "3. Egg Keema Noodle - Rs. 120" << endl;
    cout << "4. Veg Keema Noodle - Rs. 100" << endl;
    cout << "5. Buff Keema Noodle - Rs. 130" << endl;

    // Declare variables
    int orderChoice;
    int orderQuantity;
    double totalAmount = 0.0;
    char continueOrder = 'y';

    // Take orders from customer
    while (continueOrder == 'y') {
        // Ask for order choice and quantity
        cout << "Enter your order choice (1-5): ";
        cin >> orderChoice;
        cout << "Enter order quantity: ";
        cin >> orderQuantity;
        // Calculate order price and add to total amount
        double orderPrice = 0.0;
        switch (orderChoice) {
            case 1:
                orderPrice = 150.0 * orderQuantity;
                break;
            case 2:
                orderPrice = 200.0 * orderQuantity;
                break;
            case 3:
                orderPrice = 120.0 * orderQuantity;
                break;
            case 4:
                orderPrice = 100.0 * orderQuantity;
                break;
            case 5:
                orderPrice = 130.0 * orderQuantity;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                continue;
        }
        totalAmount += orderPrice;

        // Ask for drink order
        char drinkChoice;
        cout << "Would you like to order drinks? (y/n): ";
        cin >> drinkChoice;
        if (drinkChoice == 'y') {
            // Display drink menu
            cout << "-------------------------" << endl;
            cout << "KEEMA NOODLE DRINKS" << endl;
            cout << "-------------------------" << endl;
            cout << "1. Coke - Rs. 55" << endl;
            cout << "2. Sprite - Rs. 50" << endl;
            cout << "3. Fanta - Rs. 50" << endl;
            cout << "4. Pepsi - Rs. 50" << endl;

            // Ask for drink choice and quantity
            int drinkChoice;
            int drinkQuantity;
            cout << "Enter your drink choice (1-4): ";
            cin >> drinkChoice;
            cout << "Enter drink quantity: ";
            cin >> drinkQuantity;

            // Calculate drink price and add to total amount
            double drinkPrice = 0.0;
            switch (drinkChoice) {
                case 1:
                    drinkPrice = 50.0 * drinkQuantity;
                    break;
                case 2:
                    drinkPrice = 50.0 * drinkQuantity;
                    break;
                case 3:
                    drinkPrice = 50.0 * drinkQuantity;
                    break;
                case 4:
                    drinkPrice = 50.0 * drinkQuantity;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    continue;
            }
            totalAmount += drinkPrice;
        }

        // Ask if customer wants to continue ordering
        cout << "Do you want to order something more? (y/n): ";
        cin >> continueOrder;
    }

    // Display total amount and goodbye message
    cout << "Thank you, " << customerName << "! Your total bill amount is Rs. " << fixed << setprecision(2) << totalAmount << endl;
    cout << "Please come again." << endl;

    return 0;
}
