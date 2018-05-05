// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Sailboat.h"
#include "MonoHull.h"
#include "MultiHull.h"

int main()
{
	Sailboat mySailboat("Kaelyn's Sailboat");

	MonoHull makeItMono;
	MultiHull makeItMulti;

	int const windSpeed{ 20 };
	int const waterSpeed{ 10 };

	// Lets make our boat
	Boat* myNewBoat(&mySailboat);	// create a pointer to our new boat

	myNewBoat->setHull(&makeItMulti);	// pick a hull type

	myNewBoat->setWindSpeed(windSpeed);	// setup the wind conditions

	myNewBoat->setWaterCurrentSpeed(waterSpeed); // setup the water current

	std::string sailBoatName = mySailboat.getName();	// get our boat name

	//Raft myRaft("KaelynRaft");
	//Canoe myCanoe("Kaelyn");
		
    return 0;
}

