/* LAB 4 Military Clock GUI
 * Amy Luo
 * CSC 330
 * 11/04/13
 */


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





/*** MILTIME - MILITARY TIME:
 * Converts time in military (24-hour) format to the standard (AM/PM) time format used by the Time class.
 * 
 * Create a simple GUI that the user uses to enter a time in military format. The GUI should then display 
 * the time in both military and standard format.
 */
class MilTime: public Time {
protected:
	int milHours; //Contains the hour in 24 hour format. 1:00PM would be stored as 1300 hours; 4:30PM would be stored as 1630
	int milSeconds; //Contains the seconds in standard format.
public:
	
	/*Default Constructor: Initializes variables*/
	MilTime()
	{ milHours = 0; milSeconds = 0; }
	
	/*Constructor: Sets Time Values*/
	MilTime(int h, int s)
	{ setTime(h, s); }; 
	
	/*Set Time: Converts military time to standard, and then sets the time for both*/
	void setTime(int h, int s) 
	{
		milHours = h;//Set military time: Hour
		milSeconds = s; //Set military time: Seconds

		//Calculating and Setting Standard Time
		 min = (h % 1000) % 100; // set standard min
		 
		 hour = (milHours - min)/100; // if military hour is less than 12, keep number for std time
		 if(hour > 12) // set standard hour 
			setHour(abs(hour - 12)); // if military hour is more than 12, convert to std by subtracting 12
		 
		 sec = s; // set standard seconds
	};

	/*Return: Military Time*/
	int getHour() { return milHours; }; //Returns the hour in military format.
	int getStandHr() { return hour; }; //Returns the hour in standard format.
	int getMin() { return min; }; //Returns minutes (same in both formats)
	int getSec() { return sec; }; //Returns seconds (same in both formats)
};


/*** TIMECLOCK - ELAPSED TIME COUNTER:
 * Measures offset between inputted starting time and inputted ending time.
 * 
 * Enhance your simple GUI above to allow the user to enter a starting time and an ending time 
 * (both in military format), and your program will output the elapsed time (in military format) 
 * to a text box on the GUI.
 */
class TimeClock: public MilTime{
protected:
	int milEndHr; // End Hour
	int milEndMin; // End Minutes
	int milEndSec; // End Seconds
	int milStartHr; // Starting Hour
	int milStartMin; // Starting Minutes
	int milStartSec; // Starting Seconds

public:

	/*Default Constructor: Initializes variables*/
	TimeClock()
	{ milEndHr = 0; milEndMin = 0; milEndSec = 0; milStartHr = 0; milStartMin = 0; milStartSec = 0; }

	/*Constructor: Sets Time Values*/
	TimeClock(int hS, int mS, int sS, int hE, int mE, int sE){
		milStartHr = hS; // Start Time (h, m, s)
		milStartMin = mS;
		milStartSec = sS;
		
		milEndHr = hE; // End Time (h, m, s)
		milEndMin = mE;
		milEndSec = sE;
	};

	/*Time Difference: Calculates the time elapsed*/
	void TimeDif(){
		// If number of sec being subtracted is less than original sec
		if(milEndSec < milStartSec){
			sec = 60 - (milStartSec - milEndSec); // Subtract difference in sec from 60 (max sec)
			milStartMin += 1; // add 1 to starting min
		}
		else
			sec = abs(milStartSec - milEndSec); //else, subtract sec regularly

		
		// If number of min being subtracted is less than original min
		if(milEndMin < milStartMin){
			min = 60 - (milStartMin - milEndMin); // Subtract difference in min from 60 (max min)
			milStartHr += 1; // add 1 to starting hour
		}
		else
			min = abs(milStartMin - milEndMin); //else, subtract min regularly
		
		// If number of hrs being subtracted is less than original hrs
		if(milEndHr < milStartHr)
			hour = 24 - (milStartHr - milEndHr); //Subtract difference in hours from 24 (max hrs)
		else
			hour = abs(milStartHr - milEndHr); //else, subtract hour regularly
	};

	/*Return: Elapsed Time*/
	int getHour(){return hour;}; // returns elapsed hours
	int getMin(){return min;}; // returns elapsed minutes
	int getSec(){return sec;}; // returns elapsed seconds

};
#endif