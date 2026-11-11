// FCollada.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FCollada 3.05b: FUObjectContainer<ObjectClass>::at (FUtils/FUObject.h), with the element
// accessor of FMath/FMArray.h (line 506) and its FUAssert inlined. The accessor returns the
// element by value: through a T& the compiler emits lea+mov instead of the original's one mov.
typedef unsigned int size_t;

typedef unsigned int uint32;

class FUAssertion
{
public:
	static bool OnAssertionFailed(const char* file, uint32 line);
};

#define FUBreak FUAssertion::OnAssertionFailed(__FILE__, __LINE__)
#define FUFail(command) { FUBreak; command; }
#define FUAssert(condition, command) { if (!(condition)) { FUFail(command); } }
namespace fm
{
	template <class T, bool PRIMITIVE>
	class vector
	{
	protected:
		size_t reserved;
		size_t sized;
		T* heapBuffer;

	};

	template <class T>
	class pvector : public vector<T*, true>
	{
		typedef vector<T*, true> Parent;
	public:
		T* at(size_t index)
		{
#line 506 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h"
			FUAssert(index < Parent::sized, return Parent::heapBuffer[index]);
			return Parent::heapBuffer[index];
		}
	};
}

class FUObject;
class FUObjectOwner
{
public:
	virtual ~FUObjectOwner() {}
	virtual void OnOwnedObjectReleased(FUObject* object) = 0;
};

template <class ObjectClass>
class FUObjectContainer : private fm::pvector<ObjectClass>, FUObjectOwner
{
	typedef fm::pvector<ObjectClass> Parent;
public:
	ObjectClass* at(size_t index);
};

template <class ObjectClass>
ObjectClass* FUObjectContainer<ObjectClass>::at(size_t index)
{
	return Parent::at(index);
}

// @baa 0x0183e450
template class FUObjectContainer<FUObject>;

#line 73 "candidate.cpp"
