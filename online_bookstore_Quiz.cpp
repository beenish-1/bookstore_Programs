#include <iostream>
using namespace std;

int main() {

    int n, price, total=0, budgetOrders=0;
    
    cout << "How many orders? ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        cout << "Enter price for each order: ";
        cin >> price;

        // check budget lessthen 900
        if(price < 900) {
            cout << "Budget Order" << endl;
            budgetOrders++;  
        }

        total = total + price; 
    }
    cout << "\nTotal Revenue = " << total << endl;
    cout << "Total Budget Orders = " << budgetOrders << endl;

    return 0;
}
