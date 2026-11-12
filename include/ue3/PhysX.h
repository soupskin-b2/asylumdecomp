/* PhysX 2.8 (the game's build, older than the public 2.8.x headers) as the engine calls it: the
 * cloth and soft-body interfaces, with each method at the vtable slot the game's code uses. Slots
 * nothing here calls yet are placeholders (_slot_XXX): rename one when you find what it is (the
 * public NxCloth.h / NxSoftBody.h keep the same order but add methods, so count from a known slot). */
#ifndef UE3_PHYSX_H
#define UE3_PHYSX_H

typedef float NxReal;
typedef unsigned int NxU32;
#define NX_SLEEP_INTERVAL (20.0f * 0.02f)
enum NxClothAttachmentFlag { NX_CLOTH_ATTACHMENT_TWOWAY = (1<<0), NX_CLOTH_ATTACHMENT_TEARABLE = (1<<1) };

struct NxVec3 { NxReal x, y, z; };

class NxCloth
{
public:
	virtual void _slot_000() = 0;
	virtual void _slot_004() = 0;
	virtual void _slot_008() = 0;
	virtual void setBendingStiffness(NxReal stiffness) = 0;                 /* 0x0c */
	virtual NxReal getBendingStiffness() const = 0;                          /* 0x10 */
	virtual void setStretchingStiffness(NxReal stiffness) = 0;              /* 0x14 */
	virtual NxReal getStretchingStiffness() const = 0;                       /* 0x18 */
	virtual void setDampingCoefficient(NxReal dampingCoefficient) = 0;      /* 0x1c */
	virtual NxReal getDampingCoefficient() const = 0;                        /* 0x20 */
	virtual void setFriction(NxReal friction) = 0;                          /* 0x24 */
	virtual NxReal getFriction() const = 0;                                  /* 0x28 */
	virtual void setPressure(NxReal pressure) = 0;                          /* 0x2c */
	virtual NxReal getPressure() const = 0;                                  /* 0x30 */
	virtual void setTearFactor(NxReal factor) = 0;                          /* 0x34 */
	virtual NxReal getTearFactor() const = 0;                                /* 0x38 */
	virtual void setAttachmentTearFactor(NxReal factor) = 0;                /* 0x3c */
	virtual NxReal getAttachmentTearFactor() const = 0;                      /* 0x40 */
	virtual void setThickness(NxReal thickness) = 0;                        /* 0x44 */
	virtual NxReal getThickness() const = 0;                                 /* 0x48 */
	virtual NxReal getDensity() const = 0;                                   /* 0x4c */
	virtual NxReal getRelativeGridSpacing() const = 0;                       /* 0x50 */
	virtual NxU32 getSolverIterations() const = 0;                           /* 0x54 */
	virtual void setSolverIterations(NxU32 iterations) = 0;                 /* 0x58 */
	virtual void _slot_05c() = 0;  /* getWorldBounds */
	virtual void _slot_060() = 0;  /* attachToShape */
	virtual void attachToCollidingShapes(NxU32 attachmentFlags) = 0;        /* 0x64 */
#define S(n) virtual void _slot_##n() = 0;
	S(068) S(06c) S(070) S(074) S(078) S(07c) S(080) S(084) S(088) S(08c) S(090) S(094) S(098) S(09c)
	S(0a0) S(0a4) S(0a8) S(0ac) S(0b0) S(0b4) S(0b8) S(0bc) S(0c0) S(0c4) S(0c8) S(0cc) S(0d0) S(0d4)
	S(0d8) S(0dc) S(0e0) S(0e4) S(0e8) S(0ec)
	virtual void setCollisionResponseCoefficient(NxReal coefficient) = 0;   /* 0xf0 */
	virtual NxReal getCollisionResponseCoefficient() const = 0;              /* 0xf4 */
	virtual void setAttachmentResponseCoefficient(NxReal coefficient) = 0;  /* 0xf8 */
	virtual NxReal getAttachmentResponseCoefficient() const = 0;             /* 0xfc */
	S(100) S(104) S(108) S(10c)
	virtual void setExternalAcceleration(NxVec3 acceleration) = 0;          /* 0x110 */
	S(114) S(118) S(11c) S(120) S(124) S(128)
	virtual NxReal getSleepLinearVelocity() const = 0;                       /* 0x12c */
	virtual void setSleepLinearVelocity(NxReal threshold) = 0;              /* 0x130 */
	virtual void wakeUp(NxReal wakeCounterValue = NX_SLEEP_INTERVAL) = 0;   /* 0x134 */
	virtual void putToSleep() = 0;                                          /* 0x138 */
	virtual void setFlags(NxU32 flags) = 0;                                 /* 0x13c */
	virtual NxU32 getFlags() const = 0;                                      /* 0x140 */
};

class NxSoftBody
{
public:
	S(000) S(004) S(008) S(00c) S(010) S(014) S(018) S(01c) S(020) S(024) S(028) S(02c) S(030) S(034)
	S(038) S(03c) S(040) S(044) S(048) S(04c) S(050) S(054) S(058) S(05c) S(060) S(064) S(068) S(06c)
	S(070) S(074) S(078) S(07c) S(080) S(084) S(088) S(08c) S(090) S(094) S(098) S(09c) S(0a0) S(0a4)
	S(0a8) S(0ac) S(0b0) S(0b4) S(0b8) S(0bc) S(0c0) S(0c4) S(0c8) S(0cc) S(0d0) S(0d4) S(0d8) S(0dc)
	S(0e0) S(0e4) S(0e8) S(0ec) S(0f0) S(0f4) S(0f8) S(0fc) S(100) S(104) S(108) S(10c) S(110) S(114)
	virtual void wakeUp(NxReal wakeCounterValue = NX_SLEEP_INTERVAL) = 0;   /* 0x118 */
#undef S
};

#endif
