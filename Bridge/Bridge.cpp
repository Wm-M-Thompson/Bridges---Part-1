// Bridge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{

	/*

	Verrazano Narrows Bridge
	The estimate I got for the radius from the graph is 6369650

	George Washington Bridge
	The estimate I got for the radius from the graph is 636945

	Yi Sun-sin Bridge
	The estimate I got for the radius from the graph is 6371660

	Russky Bridge
	The estimate I got for the radius from the graph is 6368650

	Akashi-Kaikyo Bridge
	The estimate I got for the radius from the graph is 6371760

		Circumference = 2 π r
		r is the radius of the circle 
		*/
	    
	double pi = 3.1415926535897932;

/*
	// Verrazano Narrows Bridge
	double radius = 6369650;

	// George Washington Bridge
	double radius = 6369450;

	// Yi Sun-sin Bridge
	double radius = 6371660;

	// Verrazano Narrows Bridge
	double radius = 6369650;
	
	// Russky Bridge
	double radius = 6368650;

	// Akashi-Kaikyo Bridge
	double radius = 6371760;
*/

	double radius = 0;
	double height = 0;
	double baseDistance = 0;

	cout << "Using the Geodetic Data chart for the radius at the latitude ";
	cout << "where the bridge stands plus, enter the radius in meters:";

	cin >> radius;

	cout << "Enter the number in meters for the height of the towers:";

	cin >> height;

	cout << "Enter the number in meters for the distance between the base of the towers:";

	cin >> baseDistance;




	double circumference = 2 * pi * radius;
/*
	// Verrazano Narrows Bridge
	double height = 198;
	double baseDistance = 1280;
	// calculated top span  1280.0397841191366	

	// George Washington Bridge
	double height = 184;
	double baseDistance = 1067;
	// calculated top span   1067.0308216394412

	// Yi Sun-sin Bridge
	double height = 270;
	double baseDistance = 1545;
	//  calculated top span   1545.0654232276997

	// Russky Bridge
	double height = 320.9;
	double baseDistance = 1104;
	//  calculated top span  1104.0556088899077

	// Akashi-Kaikyo Bridge
	double height = 282.8;
	double baseDistance = 1991;
	//  calculated top span  1991.0884422367835
*/

	/*

	baseDistance            degreeofwhole
	--------------   =      -------------
	circumference               360

	*/

	double degreeofwhole = (baseDistance * 360) / circumference;

	double halfdegree = degreeofwhole / 2;
	double hypotenuse = height + radius;

	// we have to change to radians
	float radianValue = pi / 180 * halfdegree;

	float degreeValue = radianValue * 180.0 / pi;
	
	double oursine = sin(radianValue);


	double result = oursine * hypotenuse;
	result = 2 * result;


	cout << result;

    return 0;
}

