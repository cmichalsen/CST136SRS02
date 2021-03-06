// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Sailboat.h"
#include "Raft.h"
#include "MonoHull.h"
#include "MultiHull.h"
#include "Canoe.h"


void beginVoyage(Boat* myBoat)
{

	auto const boatSpeed{ myBoat->getCurrentBoatSpeed() }; // speed in knots

	auto const islandCoastRange{ 9300 }; // range in miles

	auto const boatSpeedMPH{ boatSpeed * 1.15 }; // convert from knots to MPH

	auto tripDuration{ (islandCoastRange / boatSpeedMPH) / 24 };

}

int main()
{
	Sailboat mySailboat("Kaelyn's Sailboat");
	Raft myRaft("Kaelyn's Raft");
	Canoe myCanoe("Kaelyn's Canoe");

	MonoHull makeItMono;
	MultiHull makeItMulti;

	auto const windSpeed{ 20 };
	auto const waterSpeed{ 10 };

	// **** Lets make our boat ****

	Boat* myNewBoat(&mySailboat);	// create a pointer to our new boat

	myNewBoat->setHull(&makeItMulti);	// pick a hull type

	myNewBoat->setWindSpeed(windSpeed);	// setup the wind conditions

	myNewBoat->setWaterCurrentSpeed(waterSpeed); // setup the water current

	myNewBoat->bringChart();	// bring a chart

	std::string sailBoatName = myNewBoat->getName();	// return our boat name

	beginVoyage(&mySailboat);	// pass memory address of our boat
		
    return 0;
}

