#ifndef PrimaryGeneratorMessenger_h
#define PrimaryGeneratorMessenger_h 1

#include "globals.hh" 
#include "G4UImessenger.hh"


#include "G4UIdirectory.hh" 
#include "G4UIcmdWith3VectorAndUnit.hh"
#include "G4UIcmdWithoutParameter.hh" 
#include "G4UIcmdWithAString.hh"
#include "G4SystemOfUnits.hh" 
//#include "G4UIcmdWithABool.hh"
//#include "G4UIcmdWithAnInteger.hh"
#include "G4UIcmdWithADoubleAndUnit.hh"
//#include "G4UIcmdWith3Vector.hh"

class PrimaryGenerator;


class PrimaryGeneratorMessenger: public G4UImessenger
{
    public:
        PrimaryGeneratorMessenger(PrimaryGenerator* primGenerator);
        ~PrimaryGeneratorMessenger();
        void SetNewValue(G4UIcommand*, G4String);

    private:
        PrimaryGenerator* fPrimGen;
        
        G4UIdirectory* fDirectory;
        G4UIcmdWithAString* fSourceType;

        G4UIcmdWithADoubleAndUnit* fGammaBeamSetEnergy;
        G4UIcmdWith3VectorAndUnit* fGammaBeamSetPosition;
        G4UIcmdWith3VectorAndUnit* fGammaBeamSetMomentum;
        //G4UIcmdWith3Vector* fGammaBeamSetPolarization;


        //G4UIcmdWith3Vector* fGammaBeamSetRelativePolarization;

        //fTargetSetShape;
        //fTargetSourceType;
        //fTargetSetMaterialProperties;

};

#endif
