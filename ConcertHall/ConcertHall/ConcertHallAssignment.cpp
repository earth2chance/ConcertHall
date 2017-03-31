//Concert Hall Assignment
//Chance Daily
//3-31-2017
#include <iostream>
#include <string>

int main(){
	//prices
	const int orchestra = 25;
	const int mainFloor = 30;
	const int balcony = 15;

	//tickets sold and revenue 
	int orchestraSold, mainFloorSold, balconySold;
	int orchestraRevenue, mainFloorRevenue, balconyRevenue;
	int totalRevenue;

	//user input
	std::cout << "How many Orchestra tickets were sold? " ;
	std::cin >> orchestraSold;

	std::cout << "How many Main Floor tickets were sold? ";
	std::cin >> mainFloorSold;

	std::cout << "How many Balcony tickets were sold? ";
	std::cin >> balconySold;

	//calculations
	orchestraRevenue = orchestra * orchestraSold;
	mainFloorRevenue = mainFloor * mainFloorSold;
	balconyRevenue = balcony * balconySold;
	totalRevenue = orchestraRevenue + mainFloorRevenue + balconyRevenue;

	//output results
	
	std::cout << "Your revenue from Orchestra tickets is: " << orchestraRevenue << std::endl;
	
	std::cout << "Your revenue from Main Floor tickets is: " << mainFloorRevenue << std::endl;

	std::cout << "Your revenue from Balcony tickets is: " << balconyRevenue << std::endl;

	std::cout << "Your total revenue from all tickets is: " << totalRevenue << std::endl;


}