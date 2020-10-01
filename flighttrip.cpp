#include "flighttrip.h"
#include <iostream>

FlightTrip::FlightTrip():Trip(),flight_number(""),flight_operator(""),distance(0){}
FlightTrip::FlightTrip(std::string origin,std::string destination,std::string flight_num, std::string flight_oper, float dis):Trip(origin,destination),flight_number(flight_num),flight_operator(flight_oper),distance(dis){}
	
double FlightTrip::computeFare()
{	int rate;
	rate = distance*mile_rate;
	return rate;
}

double FlightTrip::computeTravelTime()
{
	int time1,time;
	time1 = (distance*60);
	time = time1/500;
	return time;
}
std::string FlightTrip::getFlightNumber()
{
    return flight_number;
}
std::string FlightTrip::getOperator()
{
    return flight_operator;
}

double FlightTrip::getDistance()
{
    return distance;
}


