#include <iostream>
using namespace std;

int main() {
    int N, price, total=0, budgetOrders=0;
    cout << "How many orders? ";
    cin >> N;

    for(int i = 0; i < N; i++) {
        cout << "Enter price for each order: ";
        cin >> price;

        // check budget lessthen 900
        if(price < 900) {
            cout << "Budget Order" << endl;
            budgetOrders++;  
        }
        total = total + price; 
    }
    cout << "\nTotal Revenue: " << total << "\n";
    cout << "Total Budget Orders:  " << budgetOrders << "\n";
    return 0;
}

