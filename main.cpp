#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int glob=0; //global variables
int global=10;

class d_booking //class  for domestic booking
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7]; //protected members
    long int dateofjourney;
    int choice,city,des;
public://public member functions
    void d_pnr()
    {
        glob++; // increment variable
        pnr=glob;
    }
    int j_detail() // function declaration and definition for domestic journey
    {
        cout << "\nKindly Enter The Date Of Journey(DDMMYY)." << "\nKindly enter a correct date.\n\n " <<  endl;
        cin >> dateofjourney;
        cout << "\n1.Mumbai 2.Delhi 3.Bangalore 4.Hyderabad 5.Ahmedabad 6.Chennai \n\n7.Kolkata 8.Surat 9.Pune 10.Jaipur\n\n" << endl << endl;
        cout << "Please Enter Your City" << endl;
        cin >> city;
        cout << "Please Enter destination" << endl;
        cin >> des;
        if((city==1 && des==2) || (city==2 && des==1))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }

        else if((city==1 && des==3) || (city==3 && des==1))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }

        else if((city==1 && des==4) || (city==4 && des==1))//condition
        {
             cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }

        else if((city==1 && des==5) || (city==5 && des==1))//condition
        {
             cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==1 && des==6) || (city==6 && des==1))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==1 && des==7) || (city==7 && des==1))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==1 && des==8) || (city==8 && des==1))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==1 && des==9) || (city==9 && des==1))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==1 && des==10) || (city==10 && des==1))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }

        else if((city==2 && des==3) || (city==3 && des==2))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }

        else if((city==2 && des==4) || (city==4 && des==2))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==2 && des==5) || (city==5 && des==2))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
         else if((city==2 && des==6) || (city==6 && des==2))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";
            cout << "5.Air India EXpress \t22:00\t\t03:05\t\tRs.6000\t\tRefundable\n";
        }
         else if((city==2 && des==7) || (city==7 && des==2))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
         else if((city==2 && des==8) || (city==8 && des==2))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
         else if((city==2 && des==9) || (city==9 && des==2))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
         else if((city==2 && des==10) || (city==10 && des==2))//condition
        {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";
            cout << "5.Air India EXpress \t22:00\t\t03:05\t\tRs.6000\t\tRefundable\n";
        }
        else if((city==3 && des==4) || (city==4 && des==3))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==3 && des==5) || (city==5 && des==3))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==3 && des==6) || (city==6 && des==3))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==3 && des==7) || (city==7 && des==3))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==3 && des==8) || (city==8 && des==3))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";
            cout << "5.Air India EXpress \t22:00\t\t03:05\t\tRs.6000\t\tRefundable\n";
        }
        else if((city==3 && des==9) || (city==9 && des==3))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==3 && des==10) || (city==10 && des==3))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==4 && des==5) || (city==5 && des==4))//condition
         {
           cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==4 && des==6) || (city==6 && des==4))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==4 && des==7) || (city==7 && des==4))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==4 && des==8) || (city==8 && des==4))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==4 && des==9) || (city==9 && des==4))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==4 && des==10) || (city==10 && des==4))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==5 && des==6) || (city==6 && des==5))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==5 && des==7) || (city==7 && des==5))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==5 && des==8) || (city==8 && des==5))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==5 && des==8) || (city==8 && des==5))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==5 && des==9) || (city==9 && des==5))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==5 && des==10) || (city==10 && des==5))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==6 && des==7) || (city==7 && des==6))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==6 && des==8) || (city==8 && des==6))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==6 && des==9) || (city==9 && des==6))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
    else if((city==6 && des==10) || (city==7 && des==10))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==7 && des==8) || (city==8 && des==7))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==7 && des==9) || (city==9 && des==7))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==7 && des==10) || (city==10 && des==7))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==8 && des==9) || (city==9 && des==8))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==8 && des==10) || (city==10 && des==8))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if((city==9 && des==10) || (city==10 && des==9))//condition
         {
            cout << "         Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India \t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.IndiGo \t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.SpiceJet \t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
            cout << "4.Go First \t20:00\t\t01:05\t\tRs.5500\t\tRefundable\n";

        }
        else if(city==des)//condition
        {
            cout << "\nYour City and destination cannot be same.\n\nPlease Try again.\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"Incorrect Information is Entered.\n\nPlease Try again.\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight() //function declaration and definition for selecting flight
    {   cout << "\nPlease Enter your choice" << endl;
        cin >> choice;
        switch(choice) // switch case
        {
          case 1://condition
                cout << "\nFlight selected:"<<endl;
                cout << "Air India"<<endl;
                strcpy(f_d,"Air India");//copy to string
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00"); //copy to string
                strcpy(toja,"11:05");// copy to string
                break;
          case 2://condition
                cout << "\nFlight selected:"<<endl;
                cout << "IndiGo"<<endl;
                strcpy(f_d,"IndiGo");//copy to string
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");//copy to string
                strcpy(toja,"17:05");//copy to string
                break;
          case 3://condition
                cout << "\nFlight selected:" << endl;
                cout << "SpiceJet" << endl;
                strcpy(f_d,"SpiceJet");//copy to string
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");//copy to string
                strcpy(toja,"22:05");//copy to string
                break;
          case 4:
                cout << "\nFlight selected:" << endl;
                cout << "Go First" << endl;
                strcpy(f_d,"Go First");//copy to string
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"20:00");//copy to string
                strcpy(toja,"01:05");//copy to string
                break;

          default://condition
                cout << "Incorrect Information is Entered.\n\nPlease Try again" << endl;
                return select_flight();
        }
    }
};

class i_booking//class for international booking
{
protected://protected members
    int pnr1;
    char f_i[10],tojai[7],tojdi[7];
    long int dateofjourney1;
    int city1,des1,choice1;
public://public member functions
    void i_pnr()
    {
        global++;//increment variable
        pnr1=global;
    }
    //brought to you by code-projects.org
    int j_detaili()// function declaration and definition for journey details
    {
        cout << "Please Enter Date Of Journey(DDMMYY)." << "\nKindly Enter a Correct date." << endl;;
        cin >> dateofjourney1;
        cout << "\n1.Paris 2.London 3.Madrid 4.Barcelona 5.Dhaka 6.Moscow 7.Tokyo 8.Delhi 9.Mumbai 10.Brasilia\n\n" << endl << endl;
        cout << "Enter Source" << endl;
        cin >> city1;
        cout << "\nPlease Enter destination" ;
        cin >> des1;
        cout << "        Flights Found" << endl << endl;

        if((city1==1 && des1==2) || (city1==2 && des1==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if((city1==1 && des1==3) || (city1==3 && des1==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }

        else if((city1==1 && des1==4) || (city1==4 && des1==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }

        else if((city1==1 && des1==5) || (city1==5 || des1==1))//condition
        {
           cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if((city1==1 && des1==6) || (city1==6 && des1==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if((city1==1 && des1==7) || (city1==7 && des1==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if((city1==1 && des1==8) || (city1==8 && des1==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if((city1==1 && des1==9) || (city1==9 && des1==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if((city1==1 && des1==10) || (city1==10 && des1==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }

        else if((city1==2 && des1==3) || (city1==3 && des1==2))//condition
        {
           cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }

        else if((city1==2 && des1==4) || (city1==4 && des1==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
                    }

        else if(city1==2 && des1==5 || (city1==5 && des1==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==2 && des1==6 || (city1==6 && des1==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==2 && des1==7 || (city1==7 && des1==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==2 && des1==8 || (city1==8 && des1==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==2 && des1==9 || (city1==9 && des1==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==2 && des1==10 || (city1==10 && des1==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==3 && des1==4 || (city1==4 && des1==3))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==3 && des1==5 || (city1==5 && des1==3))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==3 && des1==6 || (city1==6 && des1==3))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==3 && des1==7 || (city1==7 && des1==3))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==3 && des1==8 || (city1==8 && des1==3))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==3 && des1==9 || (city1==9 && des1==3))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==3 && des1==10 || (city1==10 && des1==3))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==4 && des1==5 || (city1==5 && des1==4))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==4 && des1==6 || (city1==6 && des1==4))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==4 && des1==7 || (city1==7 && des1==4))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==4 && des1==8 || (city1==8 && des1==4))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==4 && des1==9 || (city1==9 && des1==4))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==4 && des1==10 || (city1==10 && des1==4))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==5 && des1==6 || (city1==6 && des1==5))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==5 && des1==7 || (city1==7 && des1==5))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==5 && des1==8 || (city1==8 && des1==5))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==5 && des1==9 || (city1==9 && des1==5))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==5 && des1==10 || (city1==10 && des1==5))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==6 && des1==7 || (city1==7 && des1==6))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==6 && des1==8 || (city1==8 && des1==6))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==6 && des1==9 || (city1==9 && des1==6))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==6 && des1==10 || (city1==10 && des1==6))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==7 && des1==8 || (city1==8 && des1==7))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==7 && des1==9 || (city1==9 && des1==7))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==7 && des1==10 || (city1==10 && des1==7))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
         else if(city1==8 && des1==9 || (city1==9 && des1==8))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==8 && des1==10 || (city1==10 && des1==8))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==9 && des1==10 || (city1==10 && des1==8))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates Airlines 10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Qatar Airways 14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Etihad Airways 18:00\t\t22:05\t\tRs.24000\tRefundable\n";
            cout << "4.British Airways 19:00\t\t02:05\t\tRs.24000\tRefundable\n";
        }
        else if(city1==des1)//condition
        {
            cout << "Incorrect Information is Entered.\n\nPlease Try again\n\n\n"<< endl;
            return j_detaili();
        }
        else//condition
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()//function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice" << endl;
        cin >> choice1;
        switch(choice1)//switch case
        {
        case 1://condition
            cout << "\nFlight selected:" <<endl;
            cout << "Emirates Airlines" << endl;
            strcpy(f_i,"Emirates Airlines");//copy to string
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");//copy to string
            strcpy(tojai,"14:05");//copy to string
            break;
        case 2://condition
               cout << "\nFlight selected:" << endl;
               cout << "Qatar Airways" << endl;
               strcpy(f_i,"Qatar Airways");//copy to string
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");//copy to string
                strcpy(tojai,"18:05");//copy to string
                break;
        case 3://condition
            cout << "\nFlight selected:" << endl;
            cout << "Etihad Airways" << endl;
            strcpy(f_i,"Etihad Airways");//copy to string
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");//copy to string
            strcpy(tojai,"22:05");//copy to string
            break;
        case 4:
            cout << "\nFlight selected:" << endl;
            cout << "British Airways" << endl;
            strcpy(f_i,"Etihad Airways");//copy to string
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");//copy to string
            strcpy(tojai,"22:05");//copy to string
            break;
        default://condition
            cout << "\nIncorrect Information is Entered" << endl;
            return select_flighti();
        }
    }
};


class passenger: public d_booking,public i_booking//class passenger publicly inherited from class d_booking and i_booking
{
protected://protected members
    char PF_name[20],PL_name[20],email[50];
    int age,gender;
    long long int c_no;
public://public member functions
    void p_detail(int x)//function declaration and definition
    {   if(x==1)//if else for domestic and international booking selection
        { j_detail();//function call
          select_flight();//function call
        }
          else
          {  j_detaili();//function call1353
             select_flighti();//function call
          }
        cout << "\n\nPlease Enter passenger details";
        cout << "\nPassenger's First Name:";
        cin >> PF_name;
        cout << "Passengers Last Name:";
        cin >> PL_name;
    }
    int gender_check()//to check gender input as valid
    {
        cout << "\nGender:\nMale-Kindly press:1::\nFemale-Kindly press:2:\n";
        cin >> gender;
        if(gender>2)//condition
        {
            cout << "\nIncorrect Information is Entered.\nPlease Try again.\n\n" << endl;
            return gender_check();//function call
        }
    }
       void more_details()//to take more details of the passenger
       {
        cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no.(10 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << PF_name << " " << PL_name << endl;
        cout << "Gender:" << gender << endl;      //displaying details
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


     int getpnr()//function to get pnr for domestic booking
        {
            return pnr;
        }

     int getpnri()//function to get pnr for international booking
     {
         return pnr1;
     }

     void disp()//function to display details for domestic booking
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << PF_name << " " << PL_name << endl;
         cout<<"DOJ:" << dateofjourney  << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }

      void dispi()//function to display details for international booking
     {
         cout<<"PNR:" << pnr1 << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << PF_name << " " << PL_name << endl;
         cout<<"DOJ:" << dateofjourney1 << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
     }
};



class payment//class for payment
{
protected://protected members
    long
    int choice2,bank,card,date,cvv,user_id;
    char password[10];
public://public members functions
    void pay_detail()//function declaration and definition for payment method
    {     cout << "\n\nHow would you like to pay money?\n\n";
        cout << "1.Debit Card 2.Credit Card 3.Net Banking";
        cout << "\n\nEnter your choice\n";
        cin >> choice2;
        switch(choice2)//switch case
        {
        case 1://condition
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2://condition
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3://condition
            cout << "Banks Available : 1.Western Bank 2.Bank Of Baroda 3.ICICI Bank 4.Punjab National Bank 5.Others";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default://condition
            cout << "\nIncorrect Information is Entered.\nPlease Try again\n\n";
            return pay_detail();
        }
    }

};

void createfile(passenger p)//file creation for domestic booking
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}

void cancelticket(int x)//function to cancel ticket
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);//for reading file
   ofstream fin("domestic1.txt",ios::binary|ios::app);//for writing to a new file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to file
      else
     {
         p.disp();//display details
         cout<<"\nYour Above ticket is being cancelled:\n" << "\nRefunded Amount: Rs 1000\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from file
   }
   if(f==0)//if f==0,pnr not found
    cout<<"Ticket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("domestic.txt");//deleting old file
   rename("domestic1.txt","domestic.txt");//renaming new file

}

void checkticket(int x)//function to check pnr or ticket
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()==x)//checking pnr
     {p.disp();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if onr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the same file

   }
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"Ticket not found"<<endl;

}
void createfilei(passenger p)//opening a file for international booking
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}
void cancelticketi(int x)//function to cancel ticket
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);//opening file
   ofstream fin("international1.txt",ios::binary|ios::app);//writing to a new file
   fout.read((char *)&p,sizeof(p));//reading old file
   while(fout)
   {
     if(p.getpnri()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to new file;
      else
     {
         p.dispi();//display details
         cout<<"\nur Above ticket is being deleted:\n"<<"\nfunded Amount: Rs 1000\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from old file
   }
   if(f==0)//if f==0,pnr not found
    cout<<"\nTicket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("international.txt");//deleting old file
   rename("international1.txt","international.txt");//renaming new file

}
void checkticketi(int x)//function to check pnr or ticket
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnri()==x)//checking pnr
     {p.dispi();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if pnr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the file

   }
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"Ticket not found"<<endl;

}




int main()//main function
{

    class d_booking d1;//object for class d_booking
    class i_booking i1;//object for class i_booking
    class passenger p1;//object for class passenger
    class payment p2;//object for class payment
    int ch,ch1,n;//integer variables
    char input;//character variables
    do//do while loop
    {
    	system("CLS");
    cout << "                                                Welcome To The Flight Reservation System" << endl << endl;
    cout <<"                                    <*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>\n";
    cout << "                                    <*>            Book Flight Tickets At Good Prices!                <*>" << endl;
    cout <<"                                    <*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*><*>";

    cout << "\n1.Book Flight \n2.Cancel Fight \n3.Check Ticket \n4.Exit" << endl;
    cout << "\n Kindly Enter your choice : ";
    cin >> ch;
      switch(ch)//witch case
      {
          case 1://condition
          system("CLS");
              cout << "\n1.Domestic Fights \n2.International Flights" << endl;
              cout << "\nKindly Enter your Choice" << endl;
              cin >> ch1;
              switch(ch1)//inner switch case
              {
                   case 1://for booking domestic ticket
                        p1.d_pnr();
                        p1.p_detail(1);//function calls
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);//call to create file
                        break;
                   case 2: //for booking international ticket
                           p1.p_detail(2);//function calls
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);//call to create file
                           break;
                   default://wrong input
                    cout << "\nIncorrect Information is Entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:
              //for canceling ticket
              system("CLS");
              cout << "\n1.Domestic Fights \n2.International Flights" << endl;
                 cout << "\nKindly Enter your Choice" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "\nKindly Enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);//function call for domestic booking cancellation
                }
                 else if(ch1==2)
               {  cout << "\nKindly Enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);//function call for international cancellation
               }
               else
               {
                   cout << "\nIncorrect Information is Entered.\nPlease Try again.\n\n";
                   return main();
               }
               break;
          case 3://for displaying booked ticket details
          system("CLS");
                  cout << "1.Domestic Fights \n2.International Flights" << endl;
                  cout << "\nKindly Enter your Choice" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "\nKindly Enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}//function call to display domestic ticket details
                  else if(ch1==2)
                  {  cout << "\nKindly Enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);//function call to display domestic ticket details
                  }
                   else
               {
                   cout << "\nIncorrect Information is Entered.\nPlease Try again.\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			cout<<"\n\n\t\t  Brought to you by.............";
			return 0;
          default://for wrong input
            cout << "\nIncorrect Information is Entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\nDo you want to  continue:(y/Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');//condition for do while loop
return 0;
}

