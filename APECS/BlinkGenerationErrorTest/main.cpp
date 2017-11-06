#ifndef _MAIN_H_
#define _MAIN_H_

#include <iostream>
#include "BlnkPeakSegAvg.h"
using namespace std;

int main(int argc, char **argv)
{
  string rawFile, pntrBlnkFile, eegFile, eegTest, outputType;
  if(argc == 1) {
    cout << "Please enter the name of the .raw ICA file: ";
    cin >> rawFile;
    cout << "Please enter the name of the blink-locked pointers file";
    cin >> pntrBlnkFile;
    cout << "Please enter E for Test Filtered EEG or B for Extracted Blinks";
    cin >> eegTest;
    if (tolower(eegTest) == 'e'){
      cout << "Please enter the name of the baseline (blink-free) EEG data file";
    }
    else
    {
      cout << "Please enter the name of the simulated blink file";
    }
    cin >> eegFile;
    
  }
  
  cout<<"This compiled yay"; 
  return 0;
}


#endif
