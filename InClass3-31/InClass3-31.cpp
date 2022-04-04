#include <iostream>
#include <iomanip>

using namespace std;

double terrorInc = 1000000.50;
double travisCo = 100.23;

void normalBankcheck(double tCoBalance, double tIncBalnace) {
	cout << "Hello Mr. Moore, your balance inquiry is " << tCoBalance << endl;
	cout << "Hello Terror INC, your balance inquiry is " << std::fixed << std::setprecision(2) << tIncBalnace << endl;
}

void hackedBankcheck(double& tCoBalanceHacked, double& tIncBalnaceHacked) {
	double temp;
	temp = tIncBalnaceHacked;
	tIncBalnaceHacked = tCoBalanceHacked;
	tCoBalanceHacked = temp;
	cout << "Hello Mr. Moore, your balance inquiry is " << std::fixed << std::setprecision(2) << tCoBalanceHacked << endl;
	cout << "Hello Terror INC, your balance inquiry is " << tIncBalnaceHacked << endl;
}
int main()
{
	normalBankcheck(travisCo, terrorInc);
	hackedBankcheck(travisCo, terrorInc);
}

