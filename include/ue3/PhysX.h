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

/* NxActor.h: a rigid body. Same order as the public 2.8.3 header; the slots the engine's code calls agree with it
 * (getGlobalPose 0x24, getNbShapes 0x4c, setDominanceGroup 0x5c, isDynamic 0x74, getLinearVelocity 0xe8,
 * addForceAtPos 0x110, addTorque 0x128, isSleeping 0x140, wakeUp 0x15c, putToSleep 0x160, readBodyFlag 0x16c). */
typedef unsigned short NxU16;
typedef NxU16 NxActorGroup;
typedef NxU16 NxDominanceGroup;
typedef NxU16 NxForceFieldMaterial;
enum NxForceMode { NX_FORCE, NX_IMPULSE, NX_VELOCITY_CHANGE, NX_SMOOTH_IMPULSE, NX_SMOOTH_VELOCITY_CHANGE, NX_ACCELERATION };
enum NxActorFlag
{
	NX_AF_DISABLE_COLLISION = (1<<0), NX_AF_DISABLE_RESPONSE = (1<<1), NX_AF_LOCK_COM = (1<<2), NX_AF_FLUID_DISABLE_COLLISION = (1<<3),
	NX_AF_CONTACT_MODIFICATION = (1<<4), NX_AF_FORCE_CONE_FRICTION = (1<<5), NX_AF_USER_ACTOR_PAIR_FILTERING = (1<<6)
};
enum NxBodyFlag
{
	NX_BF_DISABLE_GRAVITY = (1<<0), NX_BF_FROZEN_POS_X = (1<<1), NX_BF_FROZEN_POS_Y = (1<<2), NX_BF_FROZEN_POS_Z = (1<<3),
	NX_BF_FROZEN_ROT_X = (1<<4), NX_BF_FROZEN_ROT_Y = (1<<5), NX_BF_FROZEN_ROT_Z = (1<<6), NX_BF_KINEMATIC = (1<<7),
	NX_BF_VISUALIZATION = (1<<8), NX_BF_POSE_SLEEP_TEST = (1<<9), NX_BF_FILTER_SLEEP_VEL = (1<<10), NX_BF_ENERGY_SLEEP_TEST = (1<<11)
};
struct NxQuat { NxReal x, y, z, w; };
struct NxMat33 { NxReal m[3][3]; }; /* row-major (NxMat33 keeps a 3x3 array) */
struct NxMat34 { NxMat33 M; NxVec3 t; };
class NxScene;
class NxShape;
class NxShapeDesc;
class NxActorDescBase;
class NxBodyDesc;
class NxCompartment;
class NxSweepCache;
struct NxSweepQueryHit;
template<class T> class NxUserEntityReport;

class NxActor
{
public:
	virtual ~NxActor() {}                                                                    /* 0x00 */
	virtual NxScene& getScene() const = 0;                                                   /* 0x04 */
	virtual void saveToDesc(NxActorDescBase& desc) = 0;                                      /* 0x08 */
	virtual void setName(const char* name) = 0;                                              /* 0x0c */
	virtual const char* getName() const = 0;                                                 /* 0x10 */
	virtual void setGlobalPose(const NxMat34& mat) = 0;                                      /* 0x14 */
	virtual void setGlobalPosition(const NxVec3& vec) = 0;                                   /* 0x18 */
	virtual void setGlobalOrientation(const NxMat33& mat) = 0;                               /* 0x1c */
	virtual void setGlobalOrientationQuat(const NxQuat& mat) = 0;                            /* 0x20 */
	virtual NxMat34 getGlobalPose() const = 0;                                               /* 0x24 */
	virtual NxVec3 getGlobalPosition() const = 0;                                            /* 0x28 */
	virtual NxMat33 getGlobalOrientation() const = 0;                                        /* 0x2c */
	virtual NxQuat getGlobalOrientationQuat() const = 0;                                     /* 0x30 */
	virtual void moveGlobalPose(const NxMat34& mat) = 0;                                     /* 0x34 */
	virtual void moveGlobalPosition(const NxVec3& vec) = 0;                                  /* 0x38 */
	virtual void moveGlobalOrientation(const NxMat33& mat) = 0;                              /* 0x3c */
	virtual void moveGlobalOrientationQuat(const NxQuat& quat) = 0;                          /* 0x40 */
	virtual NxShape* createShape(const NxShapeDesc& desc) = 0;                               /* 0x44 */
	virtual void releaseShape(NxShape& shape) = 0;                                           /* 0x48 */
	virtual NxU32 getNbShapes() const = 0;                                                   /* 0x4c */
	virtual NxShape* const* getShapes() const = 0;                                           /* 0x50 */
	virtual void setGroup(NxActorGroup actorGroup) = 0;                                      /* 0x54 */
	virtual NxActorGroup getGroup() const = 0;                                               /* 0x58 */
	virtual void setDominanceGroup(NxDominanceGroup dominanceGroup) = 0;                     /* 0x5c */
	virtual NxDominanceGroup getDominanceGroup() const = 0;                                  /* 0x60 */
	virtual void raiseActorFlag(NxActorFlag actorFlag) = 0;                                  /* 0x64 */
	virtual void clearActorFlag(NxActorFlag actorFlag) = 0;                                  /* 0x68 */
	virtual bool readActorFlag(NxActorFlag actorFlag) const = 0;                             /* 0x6c */
	virtual void resetUserActorPairFiltering() = 0;                                          /* 0x70 */
	virtual bool isDynamic() const = 0;                                                      /* 0x74 */
	virtual void setCMassOffsetLocalPose(const NxMat34& mat) = 0;                            /* 0x78 */
	virtual void setCMassOffsetLocalPosition(const NxVec3& vec) = 0;                         /* 0x7c */
	virtual void setCMassOffsetLocalOrientation(const NxMat33& mat) = 0;                     /* 0x80 */
	virtual void setCMassOffsetGlobalPose(const NxMat34& mat) = 0;                           /* 0x84 */
	virtual void setCMassOffsetGlobalPosition(const NxVec3& vec) = 0;                        /* 0x88 */
	virtual void setCMassOffsetGlobalOrientation(const NxMat33& mat) = 0;                    /* 0x8c */
	virtual void setCMassGlobalPose(const NxMat34& mat) = 0;                                 /* 0x90 */
	virtual void setCMassGlobalPosition(const NxVec3& vec) = 0;                              /* 0x94 */
	virtual void setCMassGlobalOrientation(const NxMat33& mat) = 0;                          /* 0x98 */
	virtual NxMat34 getCMassLocalPose() const = 0;                                           /* 0x9c */
	virtual NxVec3 getCMassLocalPosition() const = 0;                                        /* 0xa0 */
	virtual NxMat33 getCMassLocalOrientation() const = 0;                                    /* 0xa4 */
	virtual NxMat34 getCMassGlobalPose() const = 0;                                          /* 0xa8 */
	virtual NxVec3 getCMassGlobalPosition() const = 0;                                       /* 0xac */
	virtual NxMat33 getCMassGlobalOrientation() const = 0;                                   /* 0xb0 */
	virtual void setMass(NxReal mass) = 0;                                                   /* 0xb4 */
	virtual NxReal getMass() const = 0;                                                      /* 0xb8 */
	virtual void setMassSpaceInertiaTensor(const NxVec3& m) = 0;                             /* 0xbc */
	virtual NxVec3 getMassSpaceInertiaTensor() const = 0;                                    /* 0xc0 */
	virtual NxMat33 getGlobalInertiaTensor() const = 0;                                      /* 0xc4 */
	virtual NxMat33 getGlobalInertiaTensorInverse() const = 0;                               /* 0xc8 */
	virtual bool updateMassFromShapes(NxReal density, NxReal totalMass) = 0;                 /* 0xcc */
	virtual void setLinearDamping(NxReal linDamp) = 0;                                       /* 0xd0 */
	virtual NxReal getLinearDamping() const = 0;                                             /* 0xd4 */
	virtual void setAngularDamping(NxReal angDamp) = 0;                                      /* 0xd8 */
	virtual NxReal getAngularDamping() const = 0;                                            /* 0xdc */
	virtual void setLinearVelocity(const NxVec3& linVel) = 0;                                /* 0xe0 */
	virtual void setAngularVelocity(const NxVec3& angVel) = 0;                               /* 0xe4 */
	virtual NxVec3 getLinearVelocity() const = 0;                                            /* 0xe8 */
	virtual NxVec3 getAngularVelocity() const = 0;                                           /* 0xec */
	virtual void setMaxAngularVelocity(NxReal maxAngVel) = 0;                                /* 0xf0 */
	virtual NxReal getMaxAngularVelocity() const = 0;                                        /* 0xf4 */
	virtual void setCCDMotionThreshold(NxReal thresh) = 0;                                   /* 0xf8 */
	virtual NxReal getCCDMotionThreshold() const = 0;                                        /* 0xfc */
	virtual void setLinearMomentum(const NxVec3& linMoment) = 0;                             /* 0x100 */
	virtual void setAngularMomentum(const NxVec3& angMoment) = 0;                            /* 0x104 */
	virtual NxVec3 getLinearMomentum() const = 0;                                            /* 0x108 */
	virtual NxVec3 getAngularMomentum() const = 0;                                           /* 0x10c */
	virtual void addForceAtPos(const NxVec3& force, const NxVec3& pos, NxForceMode mode = NX_FORCE, bool wakeup = true) = 0;           /* 0x110 */
	virtual void addForceAtLocalPos(const NxVec3& force, const NxVec3& pos, NxForceMode mode = NX_FORCE, bool wakeup = true) = 0;      /* 0x114 */
	virtual void addLocalForceAtPos(const NxVec3& force, const NxVec3& pos, NxForceMode mode = NX_FORCE, bool wakeup = true) = 0;      /* 0x118 */
	virtual void addLocalForceAtLocalPos(const NxVec3& force, const NxVec3& pos, NxForceMode mode = NX_FORCE, bool wakeup = true) = 0; /* 0x11c */
	virtual void addForce(const NxVec3& force, NxForceMode mode = NX_FORCE, bool wakeup = true) = 0;                                   /* 0x120 */
	virtual void addLocalForce(const NxVec3& force, NxForceMode mode = NX_FORCE, bool wakeup = true) = 0;                              /* 0x124 */
	virtual void addTorque(const NxVec3& torque, NxForceMode mode = NX_FORCE, bool wakeup = true) = 0;                                 /* 0x128 */
	virtual void addLocalTorque(const NxVec3& torque, NxForceMode mode = NX_FORCE, bool wakeup = true) = 0;                            /* 0x12c */
	virtual NxReal computeKineticEnergy() const = 0;                                         /* 0x130 */
	virtual NxVec3 getPointVelocity(const NxVec3& point) const = 0;                          /* 0x134 */
	virtual NxVec3 getLocalPointVelocity(const NxVec3& point) const = 0;                     /* 0x138 */
	virtual bool isGroupSleeping() const = 0;                                                /* 0x13c */
	virtual bool isSleeping() const = 0;                                                     /* 0x140 */
	virtual NxReal getSleepLinearVelocity() const = 0;                                       /* 0x144 */
	virtual void setSleepLinearVelocity(NxReal threshold) = 0;                               /* 0x148 */
	virtual NxReal getSleepAngularVelocity() const = 0;                                      /* 0x14c */
	virtual void setSleepAngularVelocity(NxReal threshold) = 0;                              /* 0x150 */
	virtual NxReal getSleepEnergyThreshold() const = 0;                                      /* 0x154 */
	virtual void setSleepEnergyThreshold(NxReal threshold) = 0;                              /* 0x158 */
	virtual void wakeUp(NxReal wakeCounterValue = NX_SLEEP_INTERVAL) = 0;                    /* 0x15c */
	virtual void putToSleep() = 0;                                                           /* 0x160 */
	virtual void raiseBodyFlag(NxBodyFlag bodyFlag) = 0;                                     /* 0x164 */
	virtual void clearBodyFlag(NxBodyFlag bodyFlag) = 0;                                     /* 0x168 */
	virtual bool readBodyFlag(NxBodyFlag bodyFlag) const = 0;                                /* 0x16c */
	virtual bool saveBodyToDesc(NxBodyDesc& bodyDesc) = 0;                                   /* 0x170 */
	virtual void setSolverIterationCount(NxU32 iterCount) = 0;                               /* 0x174 */
	virtual NxU32 getSolverIterationCount() const = 0;                                       /* 0x178 */
	virtual NxReal getContactReportThreshold() const = 0;                                    /* 0x17c */
	virtual void setContactReportThreshold(NxReal threshold) = 0;                            /* 0x180 */
	virtual NxU32 getContactReportFlags() const = 0;                                         /* 0x184 */
	virtual void setContactReportFlags(NxU32 flags) = 0;                                     /* 0x188 */
	virtual NxU32 linearSweep(const NxVec3& motion, NxU32 flags, void* userData, NxU32 nbShapes, NxSweepQueryHit* shapes, NxUserEntityReport<NxSweepQueryHit>* callback, const NxSweepCache* sweepCache = 0) = 0; /* 0x18c */
	virtual NxCompartment* getCompartment() const = 0;                                       /* 0x190 */
	virtual NxForceFieldMaterial getForceFieldMaterial() const = 0;                          /* 0x194 */
	virtual void setForceFieldMaterial(NxForceFieldMaterial) = 0;                            /* 0x198 */

	void* userData; /* 0x04: UE3 keeps the owning URB_BodyInstance here */
};

/* NxScene.h: the game's scene interface is not the public 2.8.3 order (releaseActor is at 0x28 here, 0x20 there), so
 * only the slot the engine's code is known to call is named. */
class NxScene
{
public:
#define S(n) virtual void _slot_##n() = 0;
	S(000) S(004) S(008) S(00c) S(010) S(014) S(018) S(01c) S(020) S(024)
#undef S
	virtual void releaseActor(NxActor& actor) = 0;                                           /* 0x28 */
};

/* UnNovodexSupport.h: converting between Unreal and PhysX units (PhysX is in metres: 1 = 50 Unreal units).
 * FVector and FMatrix come from Classes.h, so include it first. */
struct FVector;
struct FMatrix;
NxVec3 U2NVectorCopy(const FVector& uVec); /* 0x009d7b70 */
NxVec3 U2NPosition(const FVector& uVec); /* 0x009d7b90: times 0.02 */
FMatrix N2UTransform(const NxMat34& nTM); /* 0x009d7c00: the rotation transposed, the translation times 50 */
FVector N2UVectorCopy(const NxVec3& nVec); /* 0x009d7cc0 */
FVector N2UPosition(const NxVec3& nVec); /* 0x009d7ce0: times 50 */

/* NxForceFieldKernel.h: a force field's kernel (ANxForceField subclasses keep one in Kernel and delete it through the
 * virtual destructor) */
class NxForceFieldKernel
{
public:
    virtual ~NxForceFieldKernel();
};

/* NxStream.h: the SDK's serialization stream (cooked meshes go through it) */
typedef unsigned char NxU8;
typedef unsigned short NxU16;
typedef float NxF32;
typedef double NxF64;
class NxStream
{
public:
    NxStream() {}
    virtual ~NxStream() {}
    virtual NxU8 readByte() const = 0;
    virtual NxU16 readWord() const = 0;
    virtual NxU32 readDword() const = 0;
    virtual NxF32 readFloat() const = 0;
    virtual NxF64 readDouble() const = 0;
    virtual void readBuffer(void* buffer, NxU32 size) const = 0;
    virtual NxStream& storeByte(NxU8 b) = 0;
    virtual NxStream& storeWord(NxU16 w) = 0;
    virtual NxStream& storeDword(NxU32 d) = 0;
    virtual NxStream& storeFloat(NxF32 f) = 0;
    virtual NxStream& storeDouble(NxF64 f) = 0;
    virtual NxStream& storeBuffer(const void* buffer, NxU32 size) = 0;
};

/* UnNovodexSupport.h: an NxStream over a byte array (vtable 01fb3850: destructor 00a046e0, readByte 009e39a0,
 * readWord 009e3a20, readDword 009e3aa0, readFloat 009e3b20, readDouble 009e3ba0, readBuffer 009e3c20, storeByte ..
 * storeDouble 009d7dd0..009d7e50 (each one storeBuffer of its value), storeBuffer 009e3cd0). TArray comes from
 * Classes.h, so include it first. */
template<class T> class TArray;
class FNxMemoryBuffer : public NxStream
{
public:
    TArray<BYTE>* Data; /* 0x04: check(Data) at UnNovodexSupport.cpp 675 */
    mutable NxU32 ReadPos; /* 0x08 */
    FNxMemoryBuffer(TArray<BYTE>* InData) : Data(InData), ReadPos(0) {}
    virtual NxU8 readByte() const; /* 0x009e39a0 */
    virtual NxU16 readWord() const; /* 0x009e3a20 */
    virtual NxU32 readDword() const; /* 0x009e3aa0 */
    virtual NxF32 readFloat() const; /* 0x009e3b20 */
    virtual NxF64 readDouble() const; /* 0x009e3ba0 */
    virtual void readBuffer(void* buffer, NxU32 size) const; /* 0x009e3c20 */
    virtual NxStream& storeByte(NxU8 b); /* 0x009d7dd0 */
    virtual NxStream& storeWord(NxU16 w); /* 0x009d7df0 */
    virtual NxStream& storeDword(NxU32 d); /* 0x009d7e10 */
    virtual NxStream& storeFloat(NxF32 f); /* 0x009d7e30 */
    virtual NxStream& storeDouble(NxF64 f); /* 0x009d7e50 */
    virtual NxStream& storeBuffer(const void* buffer, NxU32 size); /* 0x009e3cd0 */
};

#endif
