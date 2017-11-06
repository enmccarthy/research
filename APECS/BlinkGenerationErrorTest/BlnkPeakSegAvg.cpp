#include "BlnkPeakSegAvg.h"

BlnkPeakSegAvg::BlnkPeakSegAvg(const string& pbf, const string& rf, const string& ef,
			       string et, bool pe, int bsm, double tl, string ot)
  : _pntrBlnkFile(pbf),
    _rawFile(rf),
    _eegFile(ef),
    _eegTest(et),
    _plotErr(pe),
    _blinkSetNum(bsm),
    _tol(tl),
    _outputType(ot)
{
  
}

void BlnkPeakSegAvg::readRaw(string fileName)
{
  ofstream rawFile;
  /// check if the file name includes .raw
  size_t found = fileName.find(".raw");
  if(found != string::npos){
    rawfile.open(fileName, ios::in | ios::binary | ios::ate);
  }
  else
  {
    rawfile.open(fileName.append(".raw"), ios::in | ios::binary | ios::ate);
  }
    
  
}
void logAction(const string &text)
{
  
}

