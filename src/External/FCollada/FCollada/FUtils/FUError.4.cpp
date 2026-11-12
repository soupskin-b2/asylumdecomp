// FUError.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FUError.cpp
// Constructor of FUFunctor3<FUErrorSimpleHandler, FUError::Level, unsigned long, unsigned long, void>
class FUError
{
public:
    enum Level
    {
        LEV_Warning,
        LEV_Error,
        LEV_Fatal
    };
};

struct FUErrorSimpleHandler;
class FUFunctor3
{
public:
    FUError::Level Level;
    unsigned long Count;

    FUFunctor3(FUError::Level InLevel, unsigned long InCount);

    virtual void sub_0184e000();
};

void FUFunctor3::sub_0184e000()
{
}

// @baa 0x0184de70
FUFunctor3::FUFunctor3(FUError::Level InLevel, unsigned long InCount)
    : Level(InLevel), Count(InCount)
{
}
