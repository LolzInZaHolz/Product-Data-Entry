#include <iostream>
using namespace std;

// Define a structure for Product
struct Product {
    string name;
    int modelNumber;
    float price;
};

// Function to enter product details
void enterProductDetails(Product* p) {
    cout << "Enter product name: ";
    cin.ignore();
    getline(cin, p->name);

    cout << "Enter model number: ";
    cin >> p->modelNumber;

    cout << "Enter price: ";
    cin >> p->price;
}

// Function to display product details
void displayProductDetails(Product* p) {
    cout << "\nProduct Details:" << endl;
    cout << "Name: " << p->name << endl;
    cout << "Model Number: " << p->modelNumber << endl;
    cout << "Price: $" << p->price << endl;
}

int main() {
    int n;
    cout << "Enter the number of products: ";
    cin >> n;

    // Dynamically allocate memory for products
    Product* products = new Product[n];

    // Input details for each product
    for (int i = 0; i < n; i++) {
        cout << "\nEntering details for product " << i + 1 << ":" << endl;
        enterProductDetails(&products[i]);
    }

    // Display all product details
    cout << "\nDisplaying all products:\n";
    for (int i = 0; i < n; i++) {
        displayProductDetails(&products[i]);
    }

    // Free allocated memory
    delete[] products;

    cin.ignore();
    cout << "Press Enter to exit !" << endl;
    cin.get();
    
    return 0;
}