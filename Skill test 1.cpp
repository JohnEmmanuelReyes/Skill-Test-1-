#include <iostream>
using namespace std; 
 

int main()
{
	float payrate, salary, tax, salarytax, spenda, spendat, spendb, spendbt, spendc, spendct;
	int spendp, spendpt;
	float h1, h2, h3, h4, h5, totalhours, h;

	
	// hours and pay rate per hour 
	cout <<"Input the total number of hours working per week" << endl;
	cout <<" Input working hours for week 1 " << endl; 
	cin >> h1;
	cout <<" Week 1: " << h1 << endl; 
	cout <<" Input working hours for week 2 " << endl; 
	cin >> h2;
	cout <<" Week 2: " << h2 << endl; 
	cout <<" Input working hours for week 3 " << endl; 
	cin >> h3;
	cout <<" Week 3: " << h3 << endl; 
	cout <<" Input working hours for week 4 " << endl; 
	cin >> h4;
	cout <<" Week 4: " << h4 << endl; 
	cout <<" Input working hours for week 5 " << endl; 
	cin >> h5;
	cout <<" Week 5: " << h5 << endl; 
	totalhours= h1+h2+h3+h4+h5; 
	cout <<" Total hours within 5 weeks: " << totalhours <<endl; 

	cout<<" Pay Rate per hour "<< endl; 
	cin>> payrate;
	h = totalhours * payrate ; 
	cout<<" Total Pay rate  " << h << endl; 


	// income after tax
	cout <<" A. Your income before and after taxes from your summer job" << endl;
	cout <<" Income before tax = " << h <<endl;
	tax = h*.14;
	salarytax = h-tax; 
	cout <<" Income after tax = " << salarytax <<endl; 
	cout << "   " << endl;

	// money spend on school supplies 
	cout <<" B. The money you spend on clothes and other accessories. "<< endl;
	spenda= salarytax * .10;
	cout <<" Total spent on clothes and accessories " << spenda << endl;
	spendat= salarytax-spenda;
	cout <<" Remaining balance : " << spendat <<endl; 
	cout << "   " << endl;



	// The money you spend on school supplies 
	cout <<" C. The money you spend on school supplies " << endl;
		spendb = spendat*.01; 
	cout <<" Total spent on school supplies " << spendb << endl;
	 spendbt = spendat-spendb; 
	 cout <<" Remaining Balance: "<< spendbt << endl; 
	 cout << "   " << endl;

	 // The money you spend to buy savings bonds
	 cout <<" D. The money you spend to buy savings bonds. " << endl; 
		spendc = spendbt*.25; 
	cout <<" Money you spend to buy saving bonds " << spendc << endl;
		spendct= spendbt-spendc;
	cout <<"Remaining Balance: " << spendct <<endl;
	cout << "   " << endl;

	// The money your parents spend to buy additional savings bonds for you.
	cout <<" E. The money your parents spend to buy additional savings bonds for you. " << endl; 
		spendp = spendc*.50; 
	cout <<" Amount of money your parents spend to buy additional savings bonds for you = "  << spendp << endl; 
		cout << "   " << endl;


	system("pause");
	return 0;



}