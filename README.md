# Assignment
Developing a few classes with C++ to model a `CAR PARK`

## Coding Guidlines
<https://google.github.io/styleguide/cppguide.html#C++11>


## Use Case:
 
Design a car park which has capacity to park vehicles (two wheeler, car, trucks).
<https://github.com/atulkumarpccs/Assignment/tree/master/Design>

## Requirement:

Trucks take 2 slot for park, Car takes one and two wheelers take half a slot for parking.
Two types of parking is available in terms of security, once with CCTV and other without.
Car park system should show the record of each vehicle parked with details like time (entry time and exit time), charge, type of vehicle.


## Assumption:
 
Parking charges at CCTV location is more than without CCTV location
Parking charges for truck is double as of car.s.
Parking charges for two wheeler is half as of car's.
Parking charges overnight is more than during day time.

## Solution:
 
To generate a record of the parkings, i have considered type of vehicle (light vehicle, heavy vehicle ,two wheeler), duration of parking, location of parking (with cctv or without cctv), time of parking (day time or night time).
I have categorised the vehicles broadly in three categories : Heavy vehicle, light vehicle and two wheelers
 
|Heavy Vehicle -> Trucks, Buses |
|Light Vehicles -> Car, van, mini bus etc |
|Two wheelers -> motorcycle, scooter etc |

## Known Issues :
This is just draft version `as per requirement document` so the implementation files `.cpp` are not implemented.
On some places constructer has been invoked and some places uniform initialization has been invoked.uard
In place of `pragma once` ``header gaurd`` are used for older compiler support.
As `.cpp`  are not added so most of function can be seen in red marked in IDE.

