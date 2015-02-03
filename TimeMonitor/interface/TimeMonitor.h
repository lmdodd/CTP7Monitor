#ifndef TIMEMONITOR_h
#define TIMEMONITOR_h

#include <vector>
#include <stdint.h>

// a simple class
struct TimeMonitor
{
	explicit TimeMonitor(uint16_t ddmm, uint32_t mn):
		date_(ddmm),
		minute_(mn){ }
	TimeMonitor():date_(0),minute_(0) { }
	uint16_t date_;
	uint32_t minute_;
        uint16_t date() const { return date_; }
        uint32_t minute() const { return minute_; }

};


// this is our new product, it is simply a 
// collection of SampleProd held in an std::vector
//typedef std::vector<TimeMonitor> TimeMonitorCollection;
typedef std::vector<TimeMonitor> TimeMonitorCollection;


#endif
