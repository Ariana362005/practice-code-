#include <iostream>
#include <vector>
using namespace std;

class Contact {
private:
    string name;
    string phone;
    string email;

public:
    Contact(string n = "", string p = "", string e = "") {
        name = n;
        phone = p;
        email = e;
        if (n != "") {
            cout << "Contact saved: " << name << ", " << phone << ", " << email << "\n\n";
        }
    }

    string getName() { return name; }
    string getPhone() { return phone; }
    string getEmail() { return email; }

    void display() {
        cout << "Name: " << name << ", Phone: " << phone << ", Email: " << email << endl;
    }
};

int main() {
    vector<Contact> contacts;
    string name, phone, email;
    int choice;

    // Start with 3 contacts
    for (int i = 0; i < 3; i++) {
        cout << "Enter the name, phone, and email of your New Contact #" << i + 1 << endl;
        getline(cin, name);
        getline(cin, phone);
        getline(cin, email);
        contacts.push_back(Contact(name, phone, email));
    }

    do {
        cout << "\nWhat would you like to do?" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Search by Name" << endl;
        cout << "3. Display All Contacts" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter name:\n";
            getline(cin, name);
            cout << "Enter phone:\n";
            getline(cin, phone);
            cout << "Enter email:\n";
            getline(cin, email);
            contacts.push_back(Contact(name, phone, email));
            break;

        case 2:
            cout << "Enter name to search:\n";
            getline(cin, name);
            {
                bool found = false;
                for (Contact c : contacts) {
                    if (c.getName() == name) {
                        c.display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Contact not found.\n";
                }
            }
            break;

        case 3:
            cout << "\n--- All Contacts ---\n";
            for (int i = 0; i < contacts.size(); i++) {
                cout << "Contact #" << i + 1 << ": ";
                contacts[i].display();
            }
            break;

        case 4:
            cout << "Exiting program. Goodbye!\n";
            break;

        default:
            cout << "Invalid input.\n";
        }
    } while (choice != 4);

    return 0;
}

