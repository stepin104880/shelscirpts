#include "tripdb.h"
#include "trip.h"
#include "flighttrip.h"

#include<list>
#include<iterator>

void FlightTripDatabase::addTrip(std::string source,std::string destination,std::string flight_num, std::string flight_operator, float distance)
{
	    trips.push_back(FlightTrip(source,destination,flight_num,flight_operator,distance));
}

void FlightTripDatabase::removeTrip(std::string flight_num)
{
	    std::list<FlightTrip> :: iterator iter;
	    
	    for(iter=trips.begin();iter!=trips.end();iter++)
	    {
        if(iter->getFlightNumber()== flight_num)
        {
           trips.erase(iter);
           break;
        }
    	}
}

FlightTrip* FlightTripDatabase::findTripById(std::string flight_num)
{
		 std::list<FlightTrip> :: iterator iter;
		 
		 for(iter=trips.begin();iter!=trips.end();iter++)
		 {
		 	
        if(flight_num == iter->getFlightNumber())
        {
            return &(*iter);
        }
    }
    return NULL;
}

int FlightTripDatabase::countAll()
{
   return trips.size();
}



int FlightTripDatabase::countTripsByOperator(std::string flight_operator)
{
	 int count=0;
   std::list <FlightTrip> :: iterator iter;
   for(iter=trips.begin();iter!=trips.end();iter++)
   {
       if(iter->getOperator() == flight_operator)
        count++;
   }
   return count;
}




