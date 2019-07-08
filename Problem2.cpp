#include <iostream>
#include <conio.h>
#include <iomanip> 

using namespace std ;

int main()

{

double GallonsUsed, PreviousMonth, total;

cout << "Enter unpaid balance from the past month: "; cin >> PreviousMonth;
cout << "Enter number of gallons consumed in the current month: "; cin >> GallonsUsed; 

if (PreviousMonth < 0 && GallonsUsed < 0){
total = 0; 
cout << "Total Amount Due:" << "P" << " " << total << endl; 
}

else if (PreviousMonth > 0)
{
total = 35 + (1.10 * GallonsUsed) + PreviousMonth + 20;
cout << setw(10) << setprecision(2) << fixed << "Total Amount Due:" << "P" << " " << total << endl; 
}

else 
{
total = 35 + (1.10 * GallonsUsed); 
cout << setw(10) << setprecision(2) << fixed << "Total Amount Due: " << " " << "P" << " " << total << endl; 
}

system("pause");
return 0; 
}
