#include "trip.h"

#include<iostream>
#include<string>

	Trip::Trip():source_city(""), destination_city(""){}
	Trip::Trip(std::string source,std::string destination):source_city(source),destination_city(destination){}
	
std::string Trip::getOrigin()
{
    return source_city;
}
std::string Trip::getDestination()
{
    return destination_city;
}

