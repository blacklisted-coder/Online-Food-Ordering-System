
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char fullname[30], piz1[]="Margerita Pizza" ,piz2[]="Jamaican Pizza" ,piz3[]="Super Pizza" ,piz4[]="Paneer Pizza", drinks1[]="Maaza", drinks2[]="Pepsi", drinks3[]="Fizz",burger_1[]="Double  Cheese Burger",burger_2[]="Chicken Burger",burger_3[]="Amp Special Burger";
	char sandwich_1[]="Club Sandwich", sandwich_2[]="Chicken Crispy Sandwich", sandwich_3[]="Extream Veg Sandwich";
	char fried1[]="Chicken Fried", fried2[]="Fish Fried", fried3[]="AMP Special veg Fried",gotobeginning ;
	int option=0,pizzaoption,pizzaoption1, qty;// time=40
	starting:
	system("cls");
	cout<<"\t\t\t=======================================================\n";
	cout<<"\t\t\t                       A-M-P FAST FOOD                 \n";
	cout<<"\t\t\t=======================================================\n\n";
	
	
	
	
	cout<<"Welcome back Peeyush...!!!\n\nWhat would you like to order?\n\n";

	
	cout<<"[1] Pizzas\n";
	cout<<"[2] Burgers\n";
	cout<<"[3] Sandwich\n";
	cout<<"[4] Drinks\n";
	cout<<"[5] Fried\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>option;

	if(option==1)
	 {
		cout<<"\n1) "<<piz1<<"\n";
		cout<<"2) "<<piz2<<"\n";
		cout<<"3) "<<piz3<<"\n";
		cout<<"4) "<<piz4<<"\n";
		cout<<"\nWhich Pizza Flavor would you like to have?:";
		cin>>pizzaoption;
		if(pizzaoption>=1 && pizzaoption<=5)
		{
			cout<<"\n1) Small Rs. 250.00\n"<<"2) Regular Rs. 350.00\n"<<"3) Large Rs. 500.00\n";
			cout<<"\nWhat size do you prefer:";
			cin>>pizzaoption1;
			if(pizzaoption1>=1 && pizzaoption1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(pizzaoption1)
			{
			case 1: option = 250.00*qty;
			break;

			case 2: option = 350.00*qty;
			break;

			case 3: option = 500.00*qty;
			break;


			      }
			system("cls");
			switch (pizzaoption1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz1;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From A-M-P Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<piz2;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz3;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz4;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  //return 0;
			}



		}

	 }


	 else if(option==2)
	 {
		cout<<"\n1 "<<burger_1<<" Rs. 60"<<"\n";
		cout<<"2 "<<burger_2<<" Rs. 80"<<"\n";
		cout<<"3 "<<burger_3<<" Rs. 100"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nWhich Burger you would like to have?: ";
		cin>>pizzaoption1;
		if(pizzaoption1>=1 && pizzaoption1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(pizzaoption1)
			{
			case 1: option = 60.00*qty;
			break;

			case 2: option = 80.00*qty;
			break;

			case 3: option = 100.00*qty;
			break;

			}
			system("cls");
			switch (pizzaoption1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<burger_1;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<burger_2;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Pizza\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<burger_3;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  //return 0;
			}

 }
}
	else if(option==3)
	 {
		cout<<"\n1  "<<sandwich_1<<" Rs. 25.00"<<"\n";
		cout<<"2  "<<sandwich_2<<" Rs. 60.00"<<"\n";
		cout<<"3  "<<sandwich_3<<" Rs. 40.00"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nWhich Sandwich you would like to have?:";
		cin>>pizzaoption1;
		if(pizzaoption1>=1 && pizzaoption1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(pizzaoption1)
			{
			case 1: option = 25.00*qty;
			break;

			case 2: option = 60.00*qty;
			break;

			case 3: option = 40.00*qty;
			break;

			}
			system("cls");
			switch (pizzaoption1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<sandwich_1;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<sandwich_2;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<sandwich_2;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  //return 0;
			}
			}
			}


	 else if(option==4)
	 {
		cout<<"\n1 "<<drinks1<<" Rs.15.00"<<"\n";
		cout<<"2 "<<drinks2<<" Rs.20.00"<<"\n";
		cout<<"3 "<<drinks3<<" Rs.30.00"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pizzaoption1;
		if(pizzaoption1>=1 && pizzaoption1<=3)
		{
			cout<<"\nHow Much Drinks Do you want: ";
			cin>>qty;
			switch(pizzaoption1)
			{
			case 1: option = 15.00*qty;
			break;

			case 2: option = 20.00*qty;
			break;

			case 3: option = 30.00*qty;
			break;

			}
			system("cls");
			switch (pizzaoption1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<drinks1;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 5 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<drinks2;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 5 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<drinks3;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 5 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;


			}

 }
}
	else if(option==5)
	 {
		cout<<"\n1 "<<fried1<<" Rs.100.00"<<"\n";
		cout<<"2 "<<fried2<<" Rs.140.00"<<"\n";
		cout<<"3 "<<fried3<<" Rs.160.00"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nWhich Fried you would like to have?:";
		cin>>pizzaoption1;
		if(pizzaoption1>=1 && pizzaoption1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(pizzaoption1)
			{
			case 1: option = 100.00*qty;
			break;

			case 2: option = 140.00*qty;
			break;

			case 3: option = 160.00*qty;
			break;

			}
			system("cls");
			switch (pizzaoption1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fried1;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 15 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<fried2;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 15 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fried3;
			 cout<<"\nYour Total Bill is \nRs."<<option<<"\nYour Order Will be delivered in 15 Minutes";
			 cout<<"\nThank you For Ordering From A-M-P Fast Food\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  //return 0;
			}
			}
			}

			else
			{
				system("cls");
				cout<<"Please Select Right Choice: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotobeginning;

				if(gotobeginning=='Y' || gotobeginning=='y')
				{
				  goto starting;
			  //return 0;
			}
			}

     getch();
    return 0; 
}
