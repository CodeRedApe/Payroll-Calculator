#include <iomanip>
#include <iostream>
using namespace std;

int main() //main method
{
   double hrs, payrate, otpayrate, weeklysalary;
   //variable declaration
   int *whr,*prt,*otprt;
   //pointer
   prt= new int(payrate);
   whr= new int(hrs);
   otprt= new int(otpayrate);
   //user inputs values for hours, hourly wage, and overtime hours
   cout<<"Hours worked: ";
   cin>>hrs;
   cout<<"Hourly wages: ";
   cin>>payrate;
   cout<<"Overtime hours: ";
   cin>>otpayrate;
   //calculating the salary
   weeklysalary=hrs*payrate+(1.5*payrate*otpayrate);
   //calculating output values
   cout<<setw(15);
   //decimal set
   cout<<setprecision(7)<<weeklysalary;
   //output values
   cout<<"\nHourly Pay Rate: "<<payrate;
   cout<<"\nTotal Hours Worked: "<<hrs;
   cout<<"\nTotal Overtime Hours Worked: "<<otpayrate;
   cout<<"\nPaycheck Total: "<<weeklysalary;
   cout<<"\nPointer values"<<endl;
   cout<<"Hourly Pay Rate: "<<prt;
   cout<<"\nTotal Hours Worked: "<<whr;
   cout<<"\nTotal Overtime Hours Worked: "<<otprt;
   //remove pointer
   delete prt;
   delete whr;
   delete otprt;

   return 0;
}
