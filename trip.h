#ifndef __TRIP_H_
#define __TRIP_H_

const int mile_rate = 10;
const int speed = 500;
#include<iostream>

using namespace std;

class Trip{
	private:
		std::string source_city;
		std::string destination_city;
		
		public:
		Trip();
		Trip(std::string, std::string);
		virtual double computeFare()=0;
		virtual double computeTravelTime()=0;
		std:: string getOrigin();
  		std:: string getDestination();
};

#endif
