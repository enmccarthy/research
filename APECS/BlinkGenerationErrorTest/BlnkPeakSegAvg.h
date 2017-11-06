/*! \file BlnkPeakSegAvg.h
    \brief Implements BlnkPeakSegAvg 
 */
#ifndef _BLNKCLASS_H_
#define _BLNKCLASS_H_
#include <fstream>
#include <iostream>
using namespace std;

class BlnkPeakSegAvg {
 private:
  /// \todo {what is the format of these data files and how can it be generalized outside of matlab}
  string _pntrBlnkFile; ///< Data file containing pointers to blink-locked segments
  string _rawFile; /*!< Raw file containing either filtered EEG (eegTest = 'E') 
		     or extracted blinks (eegTest = 'B'). */
  /// \todo {eegTest maybe should be a flag, same with tol, plotErr, etc. it feels like a lot of args} 
  /// \todo {this expects data a certain way, can we take in raw data and do this ourself ?? }
  string _eegFile; /*!< This is either a data file containing blink-free baseline EEG data in a NumChannels by NumSamples array name blinkFreeEeg (if eegTest is 'E') or a data file containing simulated blinks in detector space, in an array named blinkStreamAtDetectors and pointers to the blink and blink-free segments (if eegTest is 'B' */
  string _eegTest; /*!< 'E' for filtered EEG to baseline comparison, 
		     'B' for extracted blinks to simulated blinks comparison. */
  bool _plotErr; /// 1 for plot of error, 0 for no plot 
  int _blinkSetNum; /// Simulated blink type 
  double _tol; /// Blink template tolerance for error analysis spreadsheets
  string _outputType; /// Excel spreadsheet ('S'), text file ('T') or both ('B')

 public:
  BlnkPeakSegAvg(const string& pbf, const string& rf, const string& ef,
		 string et, bool pe, int bsm, double tl, string ot);
  /// Takes in rawFile
  void readRaw(string fileName);
  /// \todo {Can change this to write to a file, if that would be better}
  void logAction(const string);
};
#endif
