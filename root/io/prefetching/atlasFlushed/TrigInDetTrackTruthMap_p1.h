//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigInDetTrackTruthMap_p1_h
#define TrigInDetTrackTruthMap_p1_h
class TrigInDetTrackTruthMap_p1;

#include "ElementLinkVector_p1_unsigned_int_.h"
#include "Riostream.h"
#include <vector>
#include "TPObjRef.h"

class TrigInDetTrackTruthMap_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   ElementLinkVector_p1<unsigned int> m_elink_vec;    //
   vector<TPObjRef>                   m_truth_vec;    //

   TrigInDetTrackTruthMap_p1();
   TrigInDetTrackTruthMap_p1(const TrigInDetTrackTruthMap_p1 & );
   virtual ~TrigInDetTrackTruthMap_p1();

};
#endif
