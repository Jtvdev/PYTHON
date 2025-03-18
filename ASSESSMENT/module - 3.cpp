#include<iostream>
#include <cmath>  // For ceil() function
using namespace std;
class Eventmanagement{
	public:
		string name;
		int guest,minute;
		double hoursworked,minutesworked,totalcost;
		int numberOfGuests, numberOfMinutes;
		create()
		{
			cout<<"********EVENT MANAGEMENT SYSTEM********"<<endl;
			
			
		}
		myfun2()
		{
			
			cout<<"Enter the name of event :"<<endl;
			cin>>name;
			cout<<"Enter the first and last name of customer :"<<endl;
			cin>>name;
			
		}
		myfun3()
		{
			cout<<"Number of guest : "<<endl;
			cin>>guest;
			cout<<"Enter the number of minutes in event : "<<endl;
			cin>>minute;
			
		}
		myfun4()
		{
			const double costperhour = 18.50;
			const double costperminute = 0.40;
			const double costofdinner = 20.70;
			
			
			
			cout<<"Enter hours worked:";
			cin>>hoursworked;
			cout<<"Enter minutes worked : ";
			cin>>minutesworked;
			
			
			double totalcost = (hoursworked*costperhour)+(minutesworked*costperminute)+costofdinner;;
			
			cout << "The total cost for ";
			
		}
		
		
		myfun5()
		{
			 
    const double CostPerHour = 18.50;
    const double CostPerMinute = 0.40;
    const double CostOfDinner = 20.70;

    
    

    
    cout << "Enter the number of guests: ";
    cin >> numberOfGuests;

    cout << "Enter the number of minutes for the event: ";
    cin >> numberOfMinutes;

    
    int numberOfServers = ceil(numberOfGuests / 20.0);  

    
    double Cost1 = (numberOfMinutes / 60) * CostPerHour;  
    double Cost2 = (numberOfMinutes % 60) * CostPerMinute;  
    double CostForOneServer = Cost1 + Cost2;  

    
    double TotalFoodCost = numberOfGuests * CostOfDinner;  

    
    double AverageCost = TotalFoodCost / numberOfGuests;  

    
    double TotalCost = TotalFoodCost + (CostForOneServer * numberOfServers);  

    
    cout << "\nEvent Cost Estimation:\n";
    cout << "----------------------------------\n";
    cout << "Number of Servers required: " << numberOfServers << endl;
    cout << "Cost for One Server: INR\t" << CostForOneServer << endl;
    cout << "Total Food Cost: INR\t" << TotalFoodCost << endl;
    cout << "Average Cost Per Person: INR\t" << AverageCost << endl;
    cout << "Total Event Cost: INR\t" << TotalCost << endl;

    return 0;
		}
		
};
main()
{
	Eventmanagement obj;
	obj.create();
	obj.myfun2();
	obj.myfun3();
	obj.myfun4();
	obj.myfun5();	
}

