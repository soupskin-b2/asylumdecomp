// Engine_1ab0000.cpp (part 5 of 5): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01abc540
undefined4 sub_01abc540(double param_1, double param_2)
{
  if ((param_1 - param_2 < 1.1920928955078125e-07) && (-1.1920928955078125e-07 < param_1 - param_2))
  {
    return 1;
  }
  return 0;
}

struct C
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C* sub_01ab0330();
};

// @baa 0x01ab0330
C* C::sub_01ab0330()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct Sub
{
    void sub_01ab0490();
};

struct C_01ab0880
{
    INT Value;
    Sub Marker;

    void sub_01ab0880();
};

// @baa 0x01ab0880
void C_01ab0880::sub_01ab0880()
{
    Value = 0;
    ((Sub*)((char*)this + 4))->sub_01ab0490();
}

// A free helper: hands the context pointer to the target's operation.
struct FCallbackTarget_
{
	void sub_01ab7b60(void* Context);
};

// @baa 0x01ab8040
void sub_01ab8040(void* Context, FCallbackTarget_* Target)
{
	Target->sub_01ab7b60(Context);
}

// A free helper: hands the context pointer to the target's operation.
struct FCallbackTarget_01abb310
{
	void sub_01abaac0(void* Context);
};

// @baa 0x01abb310
void sub_01abb310(void* Context, FCallbackTarget_01abb310* Target)
{
	Target->sub_01abaac0(Context);
}

// A free helper: hands the context pointer to the target's operation.
struct FCallbackTarget_01abbcd0
{
	void sub_01abb880(void* Context);
};

// @baa 0x01abbcd0
void sub_01abbcd0(void* Context, FCallbackTarget_01abbcd0* Target)
{
	Target->sub_01abb880(Context);
}

// A free helper: hands the context pointer to the target's operation.
struct FCallbackTarget_01abe950
{
	void sub_01abe4f0(void* Context);
};

// @baa 0x01abe950
void sub_01abe950(void* Context, FCallbackTarget_01abe950* Target)
{
	Target->sub_01abe4f0(Context);
}

// A free helper: hands the context pointer to the target's operation.
struct FCallbackTarget_01abe960
{
	void sub_01abe640(void* Context);
};

// @baa 0x01abe960
void sub_01abe960(void* Context, FCallbackTarget_01abe960* Target)
{
	Target->sub_01abe640(Context);
}

// A free helper: hands the context pointer to the target's operation.
struct FCallbackTarget_01abef00
{
	void sub_01abea90(void* Context);
};

// @baa 0x01abef00
void sub_01abef00(void* Context, FCallbackTarget_01abef00* Target)
{
	Target->sub_01abea90(Context);
}

// A free helper: hands the context pointer to the target's operation.
struct FCallbackTarget_01abfc10
{
	void sub_01abfa80(void* Context);
};

// @baa 0x01abfc10
void sub_01abfc10(void* Context, FCallbackTarget_01abfc10* Target)
{
	Target->sub_01abfa80(Context);
}
