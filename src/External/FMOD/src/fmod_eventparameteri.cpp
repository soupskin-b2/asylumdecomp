// fmod_eventparameteri.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef int FMOD_RESULT;

namespace FMOD {
class EventParameter;
class EventParameterI {
public:
    virtual FMOD_RESULT __stdcall v00();
    virtual FMOD_RESULT __stdcall v04();
    virtual FMOD_RESULT __stdcall v08();
    virtual FMOD_RESULT __stdcall v0c();
    virtual FMOD_RESULT __stdcall v10();
    virtual FMOD_RESULT __stdcall v14();
    virtual FMOD_RESULT __stdcall v18();
    virtual FMOD_RESULT __stdcall v1c();
    virtual FMOD_RESULT __stdcall v20();
    virtual FMOD_RESULT __stdcall v24(void* Arg);
};
}

FMOD_RESULT sub_017d35b0(FMOD::EventParameter* eventparameter, FMOD::EventParameterI** eventparameteri);
// @baa 0x017d6ea0
 /* EventParameterI::validate */
extern "C" FMOD_RESULT __stdcall sub_017d6ea0(FMOD::EventParameter* eventparameter, void* Arg)
{
    FMOD::EventParameterI* eventparameteri;
    FMOD_RESULT result = sub_017d35b0(eventparameter, &eventparameteri);
    if (result != 0)
    {
        return result;
    }
    return eventparameteri->v24(Arg);
}
