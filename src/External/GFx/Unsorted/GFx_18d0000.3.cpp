// GFx_18d0000.cpp (part 3 of 3): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct GAcquireInterface {
    virtual void v0();
    virtual bool CanAcquire();
};

struct GEvent {
    virtual void Wait();
    virtual void ResetEvent();
    virtual bool IsSignaled();
    virtual GAcquireInterface * GetAcquireInterface();
    virtual bool CanAcquire();
    virtual void * TryAcquire();
    virtual bool TryAcquireCommit();
    virtual bool TryAcquireCancel();
    virtual ~GEvent();
};

// @baa 0x018d42e0
bool GEvent::CanAcquire()
{
    GAcquireInterface * iface = (GAcquireInterface *)((char *)this - 0x14);
    return iface->CanAcquire();
}

struct I { void sub_018d6af0(); };

struct GMutex { char _pad0[1]; bool sub_018d6b30(); };

// @baa 0x018d6b30
bool GMutex::sub_018d6b30()
{
	((I*)((char*)this - 0x14))->sub_018d6af0();
	return true;
}

// GFx: non-atomic reference count release; the block frees itself.
void __stdcall sub_018d7170(void* Block);
struct GRefCountedBlock
{
    int RefCount;

    void sub_018d3cf0();
};

// @baa 0x018d3cf0
void GRefCountedBlock::sub_018d3cf0()
{
    if (--RefCount == 0)
        sub_018d7170(this);
}

// GFx: atomic increment of the reference count at the start of the object.
extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(volatile long* Addend, long Value);
struct GAtomicRefCount
{
    volatile long RefCount;

    long sub_018d48f0(int Unused);
};

// @baa 0x018d48f0
long GAtomicRefCount::sub_018d48f0(int Unused)
{
    return InterlockedExchangeAdd(&RefCount, 1);
}

// GFx: setter that returns the object, for chaining.
struct GFxSettings
{
    int Mode;
    int Flags;
    int Value;

    GFxSettings& sub_018ddcc0(int NewValue);
};

// @baa 0x018ddcc0
GFxSettings& GFxSettings::sub_018ddcc0(int NewValue)
{
    Value = NewValue;
    return *this;
}

struct S_018d9610
{
	void sub_018d9610(unsigned char A, unsigned char B, unsigned char C);
};

// @baa 0x018d9610
void S_018d9610::sub_018d9610(unsigned char A, unsigned char B, unsigned char C)
{
	*(char*)((char*)this - 2) = (char)((B << 7) | A);
	*(char*)((char*)this - 1) = (char)C;
}

struct GFxObject_ {
    virtual void sub_018d9000();
    virtual void sub_018d9100();
    virtual void sub_018d9200();
    virtual void sub_018d9300();
    virtual void sub_018d9400();
    virtual void sub_018d9500();
    virtual int sub_018d9700(int arg);
};

struct GFxHost_ {
    char pad_0x504[0x504];
    GFxObject_* Object;

    void sub_018d9840(int arg);
};

// @baa 0x018d9840
void GFxHost_::sub_018d9840(int arg)
{
    Object->sub_018d9700(arg - 4);
}
