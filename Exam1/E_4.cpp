#include <iostream>
using namespace std;

int main() {
	
	double Amount, bill, TB;
	cout << "Enter Base Amount: ";
	cin >> Amount;

	cout << "Enter GST%: ";
	cin >> bill;

	TB = Amount + (Amount * bill / 100);
	cout << "Total Bill Amount = " << TB << endl;

	return 0;
}