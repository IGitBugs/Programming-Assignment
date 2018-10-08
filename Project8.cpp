//start
//prompt user for name and how many kwh used
//calculate bill based off of amount of kwh used and price accordingly
//calculate city and state taxes before adding 12% discount
//calculate total amount plus state and city taxes. multiply by .012
// show user total Bill
//end

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

 int main () {

//variables
int  kwh;
string name;
double totalUntax, totalAmount,stateTaxTotal,cityTaxTotal, totalBill;


const double stateTax = .035,
             cityTax = .015,
             discount = .012;

//menu

 cout << "--Municipal Power and Light Bill Estimator--\n\n";
 cout <<"What is your name? \t";
 cin >> name;
 cout << "How much electricity did you use? \t";
 cin >> kwh;

//calculations
if (kwh < 1000) {
    totalUntax = kwh * 0.052;
} else if ((kwh >= 1000) && (kwh < 1300)) {
    totalUntax = 52 + ((kwh - 1000) * .041);
} else if ((kwh >= 1300) && (kwh < 2000)) {
    totalUntax = (52 + 41)*((kwh - 1300) * .035);
} else if ((kwh >= 2000)) {
    totalUntax = (52 + 41 + 35)*((kwh - 2000) * .03);
}


//display user name
    cout << name << endl;
//base, undiscounted, untaxed bill amount
    cout << "Your base payment is: " << totalUntax << endl;

//disounted ammount
    totalAmount = (totalUntax * discount) - totalUntax;

    cout << "Your discounted amount is: " << totalAmount << endl;

//state tax total
    stateTaxTotal = (totalUntax * stateTax) + totalUntax;

    cout << "The state tax amount is: " << stateTaxTotal << endl;

//city tax total
    cityTaxTotal = (totalUntax * cityTax) + totalUntax;

    cout << "The city tax amount is: " << cityTaxTotal << endl;
//total bill due
    totalBill = totalUntax - (stateTaxTotal + cityTaxTotal) * discount + totalBill;

    cout << "The total bill due is: " << totalBill;
}
