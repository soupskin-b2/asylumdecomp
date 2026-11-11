// GFx_18d0000.cpp (part 3 of 3): 2 functions
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
