// Specification file for the Time class
#ifndef TIME_H
#define TIME_H
#include <string>

class Time
{
protected:
	int hour;
	int min;
	int sec;

public:
	// Default constructor
	Time()
	{ hour = 0; min = 0; sec = 0; }
	// Constructor
	Time(int h, int m, int s)
	{ hour = h; min = m; sec = s; }
	// Accessor functions
	int getHour() const
	{ return hour; }
	int getMin() const
	{ return min; }
	int getSec() const
	{ return sec; }
	// Set functions
	void setHour(int h)
	{ hour = h; }
	void setMin(int m)
	{ min = m; }
	void setSec(int s)
	{ sec = s; }
};

/*

Create a simple GUI that the user uses to enter a time in military format. The GUI should then display the time in both military and standard format.*/

/* MILTIME - MILITARY TIME:
 * Converts time in military (24-hour) format to the standard (AM/PM) time format used by the Time class.*/
class MilTime: public Time {
protected:
	int milHours; //Contains the hour in 24 hour format. 1:00PM would be stored as 1300 hours; 4:30PM would be stored as 1630
	int milMinutes;
	int milSeconds; //Contains the seconds in standard format.
public:
	MilTime(int h, int m, int s, int mh)//should accept parameters for the hour and the seconds in military format. The time should then be converted to standard time and stored in the hour, min, and sec variables of the Time class.
	{ 
			setTime(h, m, s, mh); 
	}; 
	
	void setTime(int h, int m, int s, int mh) //Accepts parameters to be stored in the milHour and milSeconds variables. The time should then be converted to standard time and stored in the hour, min and sec variables of the Time class.
	{
		
		//Set military time: Hour
		milHours = mh;
		//std::string temp = std::to_string(static_cast<long long>(h)) + std::to_string(static_cast<long long>(m));
		//milHours = std::stoi(temp);
		//milMinutes = m;
		milSeconds = s; //Set military time: Seconds

		if(h <= 12) // set standard hour
			setHour(h); // if military hour is less than 12, keep number in std
		else
			setHour(abs(h - 12)); // if military hour is more than 12, convert to std by subtracting 12
		setMin(m); // sets standard min
		setSec(s); // sets standard sec
	};

	int getHour() { return milHours; }; //Returns the hour in military format.
	
	int getStandHr() 
	{
		/*std::string hr = std::to_string(static_cast<long long>(hour));
		std::string mn = std::to_string(static_cast<long long>(min));
		return std::stoi(hr + mn);*/
		return hour;
	}; //Returns the hour in standard format.

	int getMin() { return min; }; //Returns minutes (same in both formats)
	int getSec() { return sec; }; //Returns seconds (same in both formats)
};
#endif