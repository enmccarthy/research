/* \file header.h
   \brief Implements an object that was previously represented as a MATLAB array
*/

#ifndef _HEADER_H_
#define _HEADER_H_
using namespace std;

class Header {
 private:
  int versionNumber;
  int recordingTimeYear;
  int recordingTimeMonth;
  int recordingTimeDay;
  int recordingTimeHour;
  int recordingTimeMinute;
  int recordingTimeSecond;
  int recordingTimeMillisec;
  int samplingRate;
  int numChans;
  int boardGain;
  int numConvBits;
  int ampRange;
  int numSamples;
  int numEvents;
 public:
  void setVersionNumber(int);
  void setRecordingTime(int, int, int, int, int, int, int);
  void setSamplingRate(int);
  void setNumChans(int);
  void setBoardGain(int);
  void setNumConvBits(int);
  void setAmpRange(int);
  void setNumSamples(int);
  void setNumEvents(int);
  
  int getVersionNumber();
  int getRecordingTime();
  int getSamplingRate();
  int getNumChans();
  int getBoardGain();
  int getNumConvBits();
  int getAmpRange();
  int getNumSamples();
  int getNumEvents();
