#include <iostream>
#include <string>
#define taxRate 0.15

using namespace std;

int main() {

    //The following code is used to analyse product sales amd inventory for a store
    //the complied language is c++

    string productName;
    int productCategory;
   
    int initialInventoryQuantity;
    float productPrice;
    int soldItems;
    const double constTaxRate = 0.20;



    

    cout << "Enter the product name you want to store: ";
    cin >> productName;

    cout << "Please enter its category: ";
    cin >> productCategory;

    cout << "Enter the initial quantity of " << productName<<": ";
    cin >> initialInventoryQuantity;

    cout << "Enter the price of " << productName<< ": ";
    cin >> productPrice;

    cout << "How many of " << productName << " is sold?  ";
    cin >> soldItems;



    decltype(initialInventoryQuantity) newInventory = initialInventoryQuantity - soldItems;
    auto totalSalesAmount = productPrice * soldItems;


    string inventoryStatus;
    
    if (newInventory < 10 ){

        inventoryStatus = "Low inventory";
    }
    else{
        inventoryStatus = "Sufficient inventory";
    }

    
    




cout<< "the tax rate is " <<  taxRate << endl;
cout<< "the constant tax rate is " << constTaxRate << endl;
cout<< "product name: " << productName << endl;
switch (productCategory)
    {
    case 1:
       cout<< "Category 1: Electronics"<< endl;
        break;
    case 2:
        cout<<"Category 2: Groceries"<< endl;
        break;
    case 3:
       cout<< "Category 3: clothing"<<endl;
        break;
    case 4:
       cout<< "Category 4: Stationary"<<endl;
        break;
    case 5:
       cout<< "Category 5: Miscellaneous"<<endl;
        break;
    default:
        cout<< "No category"<<endl;
        break;
    }




cout<< "initial inventory quantity: " << initialInventoryQuantity<< endl;
cout<< "product price: " << productPrice << endl;
cout<< "numbers of sold items: " << soldItems << endl;


for(int i = 1; i <= soldItems; i++){
    cout<< "sold item " << i << ":" << "price= " << productPrice << endl;


}

cout<< "total sales amount: " << totalSalesAmount <<endl;

cout<< "new inventory amount: " << newInventory <<endl;

cout<< "the inventory status: " << inventoryStatus <<endl;



return 0;




}



