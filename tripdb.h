#ifndef __TRIPDB_H_
#define __TRIPDB_H_
#include "trip.h"
#include "flighttrip.h"

#include <iostream>
#include <list>
#include <iterator>

class FlightTripDatabase
{
    std::list <FlightTrip> trips;

public:

   void addTrip(std::string source,std::string destination,std::string flight_num, std::string flight_operator,float distance);
   void removeTrip(std::string);
   FlightTrip* findTripById(std::string);
   int countAll();
   double computeMaxFare();
   double computeMinTravelTime();
   int countTripsByOperator(std::string);
   
};

#endif
