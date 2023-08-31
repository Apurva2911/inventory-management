#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
public:
    Item(const string name, int quantity) : name(name), quantity(quantity) {}

    void display() const {
        cout << "Name: " << name << ", Quantity: " << quantity << endl;
    }

private:
    string name;
    int quantity;
};

int main() {
    vector<Item> inventory;

    while (true) {
        cout << "1. Add Item\n2. Display Inventory\n3. Exit\n";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                int quantity;

                cout << "Enter item name: ";
                cin >> name;

                cout << "Enter item quantity: ";
                cin >> quantity;

                inventory.emplace_back(name, quantity);
                break;
            }
            case 2: {
                cout << "Inventory:\n";
                for (const Item item : inventory) {
                    item.display();
                }
                break;
            }
            case 3:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}
