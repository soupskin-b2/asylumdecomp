// FUError.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class FUError {
public:
    enum Level { DEBUG_LEVEL = 0, WARNING_LEVEL, ERROR_LEVEL };
};

class FUErrorSimpleHandler {
public:
    void OnError(FUError::Level errorLevel, unsigned long errorCode, unsigned long lineNumber);
};

template <class Arg1, class Arg2, class Arg3, class ReturnType>
class IFunctor3 {
public:
    virtual ~IFunctor3() {}
    virtual ReturnType operator()(Arg1 argument1, Arg2 argument2, Arg3 argument3) const = 0;
};

template <class Class, class Arg1, class Arg2, class Arg3, class ReturnType>
class FUFunctor3 : public IFunctor3<Arg1, Arg2, Arg3, ReturnType> {
private:
    Class* m_pObject;
    ReturnType (Class::*m_pFunction)(Arg1, Arg2, Arg3);
public:
    FUFunctor3(Class* object, ReturnType (Class::*function)(Arg1, Arg2, Arg3))
        : m_pObject(object), m_pFunction(function) {}
    virtual ~FUFunctor3() {}
    virtual ReturnType operator()(Arg1 argument1, Arg2 argument2, Arg3 argument3) const
    {
        return ((*m_pObject).*m_pFunction)(argument1, argument2, argument3);
    }
};

// @baa 0x0184de90
template class FUFunctor3<FUErrorSimpleHandler, FUError::Level, unsigned long, unsigned long, void>;
