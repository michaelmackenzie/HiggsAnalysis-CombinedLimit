#ifndef ROOLANDAUCB
#define ROOLANDAUCB

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooAbsReal.h"

class RooLandauCB : public RooAbsPdf {
public:
  RooLandauCB();
  RooLandauCB(const char *name, const char *title,
              RooAbsReal& _x,
              RooAbsReal& _mean,
              RooAbsReal& _a,
              RooAbsReal& _b,
              RooAbsReal& _alpha1,
              RooAbsReal& _n1,
              RooAbsReal& _alpha2,
              RooAbsReal& _n2
           );
  RooLandauCB(const RooLandauCB& other, const char* name=0) ;
  TObject* clone(const char* newname) const override { return new RooLandauCB(*this,newname); }
  inline ~RooLandauCB() override { }
  Int_t getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* rangeName=0) const override ;
  Double_t analyticalIntegral(Int_t code, const char* rangeName=0) const override ;

protected:

  RooRealProxy x ;
  RooRealProxy mean;
  RooRealProxy a;
  RooRealProxy b;
  RooRealProxy alpha1;
  RooRealProxy n1;
  RooRealProxy alpha2;
  RooRealProxy n2;

  Double_t evaluate() const override ;

private:

  ClassDefOverride(RooLandauCB,1)
};
#endif
