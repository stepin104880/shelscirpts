#ifndef __FLIGHTTRIP_H_
#define __FLIGHTTRIP_H_

#include "trip.h"
#include<string>
#include<iostream>

class FlightTrip  : public Trip{
	
	private:
		std::string flight_number;
		std::string flight_operator;
		float distance;
	public:
		FlightTrip();
		FlightTrip(std::string, std::string, std::string, std::string, float);
		double computeFare();
		double computeTravelTime();
		std::string getFlightNumber();
		std::string getOperator();
		double getDistance();
};
#endif
	



