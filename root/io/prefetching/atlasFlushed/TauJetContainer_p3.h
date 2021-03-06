//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TauJetContainer_p3_h
#define TauJetContainer_p3_h
class TauJetContainer_p3;

#include "Riostream.h"
#include <vector>
#include "TauJet_p3.h"
#include <string>

class TauJetContainer_p3 : public vector<TauJet_p3> {

public:
// Nested classes declaration.

public:
// Data Members.
   string      m_ROIauthor;    //

   TauJetContainer_p3();
   TauJetContainer_p3(const TauJetContainer_p3 & );
   virtual ~TauJetContainer_p3();

};
#endif
