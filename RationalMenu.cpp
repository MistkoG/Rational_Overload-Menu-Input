#include <iostream> 
using namespace std;
#include "Rational.h"

	int menu;
	int cn, dn, en;
	int cd, dd, ed;


	int main()
{		
		//cout << "Start menu" << endl << endl;
		cout << "Fractions are set the following way: " << endl;
		cout << "(c/c), (d/d), and (e/e) 'e will only compare if equal to d'" << endl;
		cout << "Enter the numerator of c: ";
		cin >> cn;
		cout << "Enter the denominator of c: ";
		cin >> cd;
		cout << "Enter the numerator of d: ";
		cin >> dn;
		cout << "Enter the denominator of d: ";
		cin >> dd;
		cout << "Enter the numerator of e: ";
		cin >> en;
		cout << "Enter the denominator of e: ";
		cin >> ed;

	Rational c(cn, cd), d(dn, dd), e(en, ed), x;
	do{

		//Start menu
		cout << "\t_________________________________" << endl;
		cout << "\t|" << "\t" << "\tMenu\t" << "\t" << "|" << endl;
		cout << "\t---------------------------------" << endl;
		cout << "\t" << "1. Addition of c and d" << "\t" << endl;
		cout << "\t" << "2. Subtraction of c and d" <<"\t" << endl;
		cout << "\t" << "3. Multiplication of c and d" << "\t" << endl;
		cout << "\t" << "4. Division of c and d" << "\t" << endl;
		cout << "\t" << "5. Compare if <c> is equal to <d>"<< "\t" << endl;
		cout << "\t" << "6. Compare if <c> is greater than <d>" << "\t" << endl;
		cout << "\t" << "7. Compare if <d> is less than <d>" << "\t" << endl;
		cout << "\t" << "8. Compare if <d> is equal to <e>" << "\t" << endl;
		cout << "\t" << "9. Display all of the results" << "\t" << endl;
		cout << "\t" << "10. Enter -1 to exit" << "\t" << endl << endl;
		//End of menu

		//User selection
		cout << "\tSelect from menu: ";
		cin >> menu;
		cout << endl;
		//system("CLS");
		
		//Addition 
		if (menu == 1) {
			cout << "\tAddition:" << endl;
			cout << "\t   "; c.printRational();
			cout << "\t + ";
			d.printRational();
			x = c + d;
			cout << "\t--------------" << endl;
			cout << "\t = ";
			x.printRational();
			cout << '\n';
			cout << "\tReduction: ";
			x.printRational();
			x.printRationalAsDouble();
			cout << "\n\n";
		}//End of addition 
		
		//Subtraction 
		if (menu == 2) {
			cout << "\tSubtraction:" << endl;
			cout << "\t   "; c.printRational();
			cout << "\t - ";
			d.printRational();
			x = c - d;
			cout << "\t----------------" << endl;
			cout << "\t = ";
			x.printRational();
			cout << '\n';
			cout << "\tReduction: ";
			x.printRational();
			x.printRationalAsDouble();
			cout << "\n\n";
		}
		//End of subtraction 


		//Multiplication
		if (menu == 3) 
		{
			cout << "\tMultiplication:" << endl;
			cout << "\t   "; c.printRational();
			cout << "\t x ";
			d.printRational();
			x = c * d;
			cout << "\t--------------" << endl;
			cout << "\t = ";
			x.printRational();
			cout << '\n';
			cout << "\tReduction: ";
			x.printRational();
			x.printRationalAsDouble();
			cout << "\n\n";
		}
		//End of multiplication

		//Division 
		if (menu == 4)
		{

			cout << "\tDivision:" << endl;
			cout << "\t   "; c.printRational();
			cout << "\t / ";
			d.printRational();
			x = c / d;
			cout << "\t--------------" << endl;
			cout << "\t = ";
			x.printRational();
			cout << '\n';
			cout << "\tReduction: ";
			x.printRational();
			x.printRationalAsDouble();
			cout << endl << endl;
		}
		//End of division

		//c=d loop
		if (menu == 5) {

			//cout << "Is c equal to d ?" << endl;
			if (c == d)
			{
				cout << "\tYes, c = d" << endl;
				cout << "\tc: "; c.printRational();
				cout << "\td: "; d.printRational();
			}
			else
			{
				cout << "\tNo, c != d" << endl;
				cout << "\tc: "; c.printRational();
				cout << "\td: "; d.printRational();
			}
			cout << endl << endl;
		}

		//c>d loop
		if (menu == 6)
		{

			//cout << "Is c greater than d?" << endl;
			if (c > d)
			{
				cout << "\tYes, c > d" << endl;
				cout << "\tc: "; c.printRational();
				cout << "\td: "; d.printRational();
			}
			else
			{
				cout << "\tNo, c > d" << endl;
				cout << "\tc: "; c.printRational();
				cout << "\td: "; d.printRational();
			}
			cout << endl << endl;
		}

		//c<d loop
		if (menu == 7)
		{
			//cout << "Is c less than d?" << endl;
			if (c < d)
			{
				cout << "\tYes, c < d" << endl;
				cout << "\tc: "; c.printRational();
				cout << "\td: "; d.printRational();
			}
			else
			{
				cout << "\tNo, c < d" << endl;
				cout << "\tc: "; c.printRational();
				cout << "\td: "; d.printRational();
			}
			cout << endl << endl;
		}

		//d = e loop
		if (menu == 8)
		{
			//cout << "Is d equal to e?" << endl;
			if (d == e)
			{
				cout << "\tYes, d = e" << endl;
				cout << "\td: "; d.printRational();
				cout << "\te: "; e.printRational();
			}
			else
			{
				cout << "\tNo, d != e" << endl;
				cout << "\td: "; d.printRational();
				cout << "\te: "; e.printRational();
			}
			cout << endl << endl;
		}
		//Display all results
		if (menu == 9)
		{
			cout << "Addition:" << endl;
			cout << "   "; c.printRational();
			cout << " + ";
			d.printRational();
			x = c + d;
			cout << "--------------" << endl;
			cout << " = ";
			x.printRational();
			cout << '\n';
			cout << "Reduction: ";
			x.printRational();
			x.printRationalAsDouble();
			cout << "\n\n";

			cout << "Substraction:" << endl;
			cout << "   "; c.printRational();
			cout << " - ";
			d.printRational();
			x = c - d;
			cout << "----------------" << endl;
			cout << " = ";
			x.printRational();
			cout << '\n';
			cout << "Reduction: ";
			x.printRational();
			x.printRationalAsDouble();
			cout << "\n\n";

			cout << "Multiplication:" << endl;
			cout << "   "; c.printRational();
			cout << " x ";
			d.printRational();
			x = c * d;
			cout << "--------------" << endl;
			cout << " = ";
			x.printRational();
			cout << '\n';
			cout << "Reduction: ";
			x.printRational();
			x.printRationalAsDouble();
			cout << "\n\n";

			cout << "Division:" << endl;
			cout << "   "; c.printRational();
			cout << " / ";
			d.printRational();
			x = c / d;
			cout << "--------------" << endl;
			cout << " = ";
			x.printRational();
			cout << '\n';
			cout << "Reduction: ";
			x.printRational();
			x.printRationalAsDouble();
			cout << endl << endl;

			cout << "Is c equal to d ?" << endl;
			if (c == d)
			{
				cout << "Yes c = d" << endl;
				cout << "c: "; c.printRational();
				cout << "d: "; d.printRational();
			}
			else
			{
				cout << "No c != d" << endl;
				cout << "c: "; c.printRational();
				cout << "d: "; d.printRational();
			}
			cout << endl << endl;

			cout << "Is c greater than d?" << endl;
			if (c > d)
			{
				cout << "Yes c > d" << endl;
				cout << "c: "; c.printRational();
				cout << "d: "; d.printRational();
			}
			else
			{
				cout << "No c > d" << endl;
				cout << "c: "; c.printRational();
				cout << "d: "; d.printRational();
			}
			cout << endl << endl;

			cout << "Is c less than d?" << endl;
			if (c < d)
			{
				cout << "Yes c < d" << endl;
				cout << "c: "; c.printRational();
				cout << "d: "; d.printRational();
			}
			else
			{
				cout << "No c < d" << endl;
				cout << "c: "; c.printRational();
				cout << "d: "; d.printRational();
			}
			cout << endl << endl;

			cout << "Is d equal to e?" << endl;
			if (d == e)
			{
				cout << "Yes d = e" << endl;
				cout << "d: "; d.printRational();
				cout << "e: "; e.printRational();
			}
			else
			{
				cout << "No d != e" << endl;
				cout << "d: "; d.printRational();
				cout << "e: "; e.printRational();
			}
			cout << endl << endl;
		}
	}while (menu != -1);//Loop until user enters -1
	return 0;
}

//Alberto Garib
