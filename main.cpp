#include <iostream>
#include <conio.h>

#include "Common.h"
#include "Book.h"
#include "Route.h"
#include "Rectangle.h"
#include "Flight.h"
#include "Band.h"

using namespace std;

enum class MainMenu
{
	// Используются ASCII-коды
	DemoBookMain = 49,	// 1
	DemoRouteMain = 50, // 2
	DemoRectangleWithPointMenu = 51, // 3
	DemoFlightWithTime = 52, // 4
	DemoBandMenu = 53,	// 5
	Exit = 27 // ESC
};

int main()
{
	while (true)
	{
		cout << "Main menu:" << endl
			<< "1. Work with DemoBook" << endl
			<< "2. Work with DemoRoute" << endl
			<< "3. Work with DemoRectangleWithPoint" << endl
			<< "4. Work with DemoFlightWithTime" << endl
			<< "5. Work with DemoBand" << endl
			<< "Press ESC for exit";
		MainMenu taskChoice = static_cast <MainMenu> (_getch());
		system("cls");
		switch (taskChoice)
		{
			case MainMenu::DemoBookMain:
			{
				DemoBook();
				break;
			}
			case MainMenu::DemoRouteMain:
			{
				DemoRoute();
				break;
			}
			case MainMenu::DemoRectangleWithPointMenu:
			{
				DemoRectangleWithPoint();
				break;
			}
			case MainMenu::DemoFlightWithTime:
			{
				FlightWithTimeMain();
				break;
			}
			case MainMenu::DemoBandMenu:
			{
				BandMain();
				break;
			}
			case MainMenu::Exit:
			{
				cout << "Good bye!" << endl;
				return 0;
			}
			default:
			{
				cerr << "Error: Incorrect choice, try again" << endl << endl;
				break;
			}
		}
	}
	return 0;
}