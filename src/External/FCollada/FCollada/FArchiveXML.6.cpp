// FArchiveXML.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FCollada, FColladaPlugins/FArchiveXML/FArchiveXML.cpp: the tables of per-class XML load and write functions.
struct _xmlNode;
typedef struct _xmlNode xmlNode;

// FUtils/FUObjectType.h
class FUObjectType;
#define DeclareObjectType(_ParentClassName) \
private: \
	static class FUObjectType __classType; \
	typedef _ParentClassName Parent; \
public: \
	static const FUObjectType& GetClassType() { return __classType; } \
private:
// FMath/FMTree.h
namespace fm
{
	template <class KEY, class DATA>
	class tree
	{
	public:
		class node;
		class iterator
		{
			node* currentNode;
		};

	private:
		node* root;
		size_t sized;

	public:
		inline bool empty() const { return sized == 0; }
		iterator insert(const KEY& key, const DATA& data);
	};

	template <class KEY, class DATA>
	class map : public fm::tree<KEY, DATA> {};
}

// The document classes, as far as this file needs them (the effect parameter classes are
// FCDEffectParameterT<> instances in FCollada; they are named here by their class type names).
class FCDObjectWithId;
class FUParameterizable;
class FCDObject { DeclareObjectType(FUParameterizable); };

class FCDExtra { DeclareObjectType(FCDObject); };

class FCDENode { DeclareObjectType(FCDObject); };

class FCDETechnique { DeclareObjectType(FCDENode); };

class FCDEType { DeclareObjectType(FCDObject); };

class FCDAsset { DeclareObjectType(FCDObject); };

class FCDAssetContributor { DeclareObjectType(FCDObject); };

class FCDEntityReference { DeclareObjectType(FCDObject); };

class FCDExternalReferenceManager { DeclareObjectType(FCDObject); };

class FCDPlaceHolder { DeclareObjectType(FCDObject); };

class FCDEntity { DeclareObjectType(FCDObjectWithId); };

class FCDTargetedEntity { DeclareObjectType(FCDEntity); };

class FCDSceneNode { DeclareObjectType(FCDEntity); };

class FCDTransform { DeclareObjectType(FCDObject); };

class FCDTLookAt { DeclareObjectType(FCDTransform); };

class FCDTMatrix { DeclareObjectType(FCDTransform); };

class FCDTRotation { DeclareObjectType(FCDTransform); };

class FCDTScale { DeclareObjectType(FCDTransform); };

class FCDTSkew { DeclareObjectType(FCDTransform); };

class FCDTTranslation { DeclareObjectType(FCDTransform); };

class FCDGeometrySource { DeclareObjectType(FCDObjectWithId); };

class FCDGeometryMesh { DeclareObjectType(FCDObject); };

class FCDGeometry { DeclareObjectType(FCDEntity); };

class FCDGeometryPolygons { DeclareObjectType(FCDObject); };

class FCDGeometrySpline { DeclareObjectType(FCDObject); };

class FCDMorphController { DeclareObjectType(FCDObject); };

class FCDController { DeclareObjectType(FCDEntity); };

class FCDSkinController { DeclareObjectType(FCDObject); };

class FCDEntityInstance { DeclareObjectType(FCDObject); };

class FCDEmitterInstance { DeclareObjectType(FCDEntityInstance); };

class FCDGeometryInstance { DeclareObjectType(FCDEntityInstance); };

class FCDControllerInstance { DeclareObjectType(FCDGeometryInstance); };

class FCDMaterialInstance { DeclareObjectType(FCDEntityInstance); };

class FCDPhysicsForceFieldInstance { DeclareObjectType(FCDEntityInstance); };

class FCDPhysicsModelInstance { DeclareObjectType(FCDEntityInstance); };

class FCDPhysicsRigidBodyInstance { DeclareObjectType(FCDEntityInstance); };

class FCDPhysicsRigidConstraintInstance { DeclareObjectType(FCDEntityInstance); };

class FCDAnimationChannel { DeclareObjectType(FCDObject); };

class FCDAnimationCurve { DeclareObjectType(FCDObject); };

class FCDAnimationMultiCurve { DeclareObjectType(FCDObject); };

class FCDAnimation { DeclareObjectType(FCDEntity); };

class FCDAnimationClip { DeclareObjectType(FCDEntity); };

class FCDCamera { DeclareObjectType(FCDTargetedEntity); };

class FCDEffect { DeclareObjectType(FCDEntity); };

class FCDEffectCode { DeclareObjectType(FCDObject); };

class FCDEffectParameter { DeclareObjectType(FCDObject); };

class FCDEffectParameterBool { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterFloat { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterFloat2 { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterFloat3 { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterColor3 { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterInt { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterMatrix { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterSampler { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterString { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterSurface { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterVector { DeclareObjectType(FCDEffectParameter); };

class FCDEffectParameterColor4 { DeclareObjectType(FCDEffectParameter); };

class FCDEffectPass { DeclareObjectType(FCDObject); };

class FCDEffectPassShader { DeclareObjectType(FCDObject); };

class FCDEffectPassState { DeclareObjectType(FCDObject); };

class FCDEffectProfile { DeclareObjectType(FCDObject); };

class FCDEffectProfileFX { DeclareObjectType(FCDEffectProfile); };

class FCDEffectStandard { DeclareObjectType(FCDEffectProfile); };

class FCDEffectTechnique { DeclareObjectType(FCDObject); };

class FCDTexture { DeclareObjectType(FCDObject); };

class FCDImage { DeclareObjectType(FCDEntity); };

class FCDMaterial { DeclareObjectType(FCDEntity); };

class FCDEmitter { DeclareObjectType(FCDEntity); };

class FCDForceField { DeclareObjectType(FCDEntity); };

class FCDPhysicsAnalyticalGeometry { DeclareObjectType(FCDEntity); };

class FCDPASBox { DeclareObjectType(FCDPhysicsAnalyticalGeometry); };

class FCDPASCapsule { DeclareObjectType(FCDPhysicsAnalyticalGeometry); };

class FCDPASTaperedCapsule { DeclareObjectType(FCDPASCapsule); };

class FCDPASCylinder { DeclareObjectType(FCDPhysicsAnalyticalGeometry); };

class FCDPASTaperedCylinder { DeclareObjectType(FCDPASCylinder); };

class FCDPASPlane { DeclareObjectType(FCDPhysicsAnalyticalGeometry); };

class FCDPASSphere { DeclareObjectType(FCDPhysicsAnalyticalGeometry); };

class FCDPhysicsMaterial { DeclareObjectType(FCDEntity); };

class FCDPhysicsModel { DeclareObjectType(FCDEntity); };

class FCDPhysicsRigidBody { DeclareObjectType(FCDEntity); };

class FCDPhysicsRigidConstraint { DeclareObjectType(FCDEntity); };

class FCDPhysicsScene { DeclareObjectType(FCDEntity); };

class FCDPhysicsShape { DeclareObjectType(FCDObject); };

class FCDSpline { DeclareObjectType(FCDObject); };

class FCDBezierSpline { DeclareObjectType(FCDSpline); };

class FCDLinearSpline { DeclareObjectType(FCDSpline); };

class FCDNURBSSpline { DeclareObjectType(FCDSpline); };

class FCDLight { DeclareObjectType(FCDTargetedEntity); };

typedef bool (*XMLLoadFunc)(FCDObject*, xmlNode*);

typedef xmlNode* (*XMLWriteFunc)(FCDObject*, xmlNode*);

typedef fm::map<const FUObjectType*, XMLLoadFunc> XMLLoadFuncMap;

typedef fm::map<const FUObjectType*, XMLWriteFunc> XMLWriteFuncMap;

extern XMLLoadFuncMap xmlLoadFunctions;
extern XMLWriteFuncMap xmlWriteFunctions;
class FArchiveXML
{
public:
	static void Initialize();

	static bool LoadObject(FCDObject* object, xmlNode* node);
	static bool LoadExtra(FCDObject* object, xmlNode* node);
	static bool LoadExtraNode(FCDObject* object, xmlNode* node);
	static bool LoadExtraTechnique(FCDObject* object, xmlNode* node);
	static bool LoadExtraType(FCDObject* object, xmlNode* node);
	static bool LoadAsset(FCDObject* object, xmlNode* node);
	static bool LoadAssetContributor(FCDObject* object, xmlNode* node);
	static bool LoadEntityReference(FCDObject* object, xmlNode* node);
	static bool LoadExternalReferenceManager(FCDObject* object, xmlNode* node);
	static bool LoadPlaceHolder(FCDObject* object, xmlNode* node);
	static bool LoadEntity(FCDObject* object, xmlNode* node);
	static bool LoadTargetedEntity(FCDObject* object, xmlNode* node);
	static bool LoadSceneNode(FCDObject* object, xmlNode* node);
	static bool LoadTransform(FCDObject* object, xmlNode* node);
	static bool LoadTransformLookAt(FCDObject* object, xmlNode* node);
	static bool LoadTransformMatrix(FCDObject* object, xmlNode* node);
	static bool LoadTransformRotation(FCDObject* object, xmlNode* node);
	static bool LoadTransformScale(FCDObject* object, xmlNode* node);
	static bool LoadTransformSkew(FCDObject* object, xmlNode* node);
	static bool LoadTransformTranslation(FCDObject* object, xmlNode* node);
	static bool LoadGeometrySource(FCDObject* object, xmlNode* node);
	static bool LoadGeometryMesh(FCDObject* object, xmlNode* node);
	static bool LoadGeometry(FCDObject* object, xmlNode* node);
	static bool LoadGeometryPolygons(FCDObject* object, xmlNode* node);
	static bool LoadGeometrySpline(FCDObject* object, xmlNode* node);
	static bool LoadMorphController(FCDObject* object, xmlNode* node);
	static bool LoadController(FCDObject* object, xmlNode* node);
	static bool LoadSkinController(FCDObject* object, xmlNode* node);
	static bool LoadEntityInstance(FCDObject* object, xmlNode* node);
	static bool LoadEmitterInstance(FCDObject* object, xmlNode* node);
	static bool LoadGeometryInstance(FCDObject* object, xmlNode* node);
	static bool LoadControllerInstance(FCDObject* object, xmlNode* node);
	static bool LoadMaterialInstance(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsForceFieldInstance(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsModelInstance(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsRigidBodyInstance(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsRigidConstraintInstance(FCDObject* object, xmlNode* node);
	static bool LoadAnimationChannel(FCDObject* object, xmlNode* node);
	static bool LoadAnimationCurve(FCDObject* object, xmlNode* node);
	static bool LoadAnimationMultiCurve(FCDObject* object, xmlNode* node);
	static bool LoadAnimation(FCDObject* object, xmlNode* node);
	static bool LoadAnimationClip(FCDObject* object, xmlNode* node);
	static bool LoadCamera(FCDObject* object, xmlNode* node);
	static bool LoadEffect(FCDObject* object, xmlNode* node);
	static bool LoadEffectCode(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameter(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterBool(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterFloat(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterFloat2(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterFloat3(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterInt(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterMatrix(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterSampler(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterString(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterSurface(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterVector(FCDObject* object, xmlNode* node);
	static bool LoadEffectPass(FCDObject* object, xmlNode* node);
	static bool LoadEffectPassShader(FCDObject* object, xmlNode* node);
	static bool LoadEffectPassState(FCDObject* object, xmlNode* node);
	static bool LoadEffectProfile(FCDObject* object, xmlNode* node);
	static bool LoadEffectProfileFX(FCDObject* object, xmlNode* node);
	static bool LoadEffectStandard(FCDObject* object, xmlNode* node);
	static bool LoadEffectTechnique(FCDObject* object, xmlNode* node);
	static bool LoadTexture(FCDObject* object, xmlNode* node);
	static bool LoadImage(FCDObject* object, xmlNode* node);
	static bool LoadMaterial(FCDObject* object, xmlNode* node);
	static bool LoadEmitter(FCDObject* object, xmlNode* node);
	static bool LoadForceField(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsAnalyticalGeometry(FCDObject* object, xmlNode* node);
	static bool LoadPASBox(FCDObject* object, xmlNode* node);
	static bool LoadPASCapsule(FCDObject* object, xmlNode* node);
	static bool LoadPASTaperedCapsule(FCDObject* object, xmlNode* node);
	static bool LoadPASCylinder(FCDObject* object, xmlNode* node);
	static bool LoadPASTaperedCylinder(FCDObject* object, xmlNode* node);
	static bool LoadPASPlane(FCDObject* object, xmlNode* node);
	static bool LoadPASSphere(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsMaterial(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsModel(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsRigidBody(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsRigidConstraint(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsScene(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsShape(FCDObject* object, xmlNode* node);
	static bool LoadSpline(FCDObject* object, xmlNode* node);
	static bool LoadBezierSpline(FCDObject* object, xmlNode* node);
	static bool LoadLinearSpline(FCDObject* object, xmlNode* node);
	static bool LoadNURBSSpline(FCDObject* object, xmlNode* node);
	static bool LoadLight(FCDObject* object, xmlNode* node);

	static xmlNode* WriteObject(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteExtra(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteExtraNode(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteExtraTechnique(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteExtraType(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAsset(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAssetContributor(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEntityReference(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteExternalReferenceManager(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePlaceHolder(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEntity(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTargetedEntity(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteSceneNode(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransform(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformLookAt(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformMatrix(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformRotation(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformScale(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformSkew(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformTranslation(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteGeometrySource(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteGeometryMesh(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteGeometry(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteGeometryPolygons(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteGeometrySpline(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteMorphController(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteController(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteSkinController(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEntityInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEmitterInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteGeometryInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteControllerInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteMaterialInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsForceFieldInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsModelInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsRigidBodyInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsRigidConstraintInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAnimationChannel(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAnimationCurve(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAnimationMultiCurve(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAnimation(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAnimationClip(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteCamera(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffect(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectCode(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameter(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterBool(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterFloat(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterFloat2(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterFloat3(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterInt(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterMatrix(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterSampler(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterString(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterSurface(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterVector(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectPass(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectPassShader(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectPassState(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectProfile(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectProfileFX(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectStandard(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectTechnique(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTexture(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteImage(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteMaterial(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEmitter(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteForceField(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsAnalyticalGeometry(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASBox(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASCapsule(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASTaperedCapsule(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASCylinder(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASTaperedCylinder(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASPlane(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASSphere(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsMaterial(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsModel(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsRigidBody(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsRigidConstraint(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsScene(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsShape(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteLight(FCDObject* object, xmlNode* parentNode);
};

// @baa 0x01893680
void FArchiveXML::Initialize()
{
	if (xmlLoadFunctions.empty())
	{
		xmlLoadFunctions.insert(&FCDObject::GetClassType(), FArchiveXML::LoadObject);
		xmlLoadFunctions.insert(&FCDExtra::GetClassType(), FArchiveXML::LoadExtra);
		xmlLoadFunctions.insert(&FCDENode::GetClassType(), FArchiveXML::LoadExtraNode);
		xmlLoadFunctions.insert(&FCDETechnique::GetClassType(), FArchiveXML::LoadExtraTechnique);
		xmlLoadFunctions.insert(&FCDEType::GetClassType(), FArchiveXML::LoadExtraType);
		xmlLoadFunctions.insert(&FCDAsset::GetClassType(), FArchiveXML::LoadAsset);
		xmlLoadFunctions.insert(&FCDAssetContributor::GetClassType(), FArchiveXML::LoadAssetContributor);
		xmlLoadFunctions.insert(&FCDEntityReference::GetClassType(), FArchiveXML::LoadEntityReference);
		xmlLoadFunctions.insert(&FCDExternalReferenceManager::GetClassType(), FArchiveXML::LoadExternalReferenceManager);
		xmlLoadFunctions.insert(&FCDPlaceHolder::GetClassType(), FArchiveXML::LoadPlaceHolder);
		xmlLoadFunctions.insert(&FCDEntity::GetClassType(), FArchiveXML::LoadEntity);
		xmlLoadFunctions.insert(&FCDTargetedEntity::GetClassType(), FArchiveXML::LoadTargetedEntity);
		xmlLoadFunctions.insert(&FCDSceneNode::GetClassType(), FArchiveXML::LoadSceneNode);
		xmlLoadFunctions.insert(&FCDTransform::GetClassType(), FArchiveXML::LoadTransform);
		xmlLoadFunctions.insert(&FCDTLookAt::GetClassType(), FArchiveXML::LoadTransformLookAt);
		xmlLoadFunctions.insert(&FCDTMatrix::GetClassType(), FArchiveXML::LoadTransformMatrix);
		xmlLoadFunctions.insert(&FCDTRotation::GetClassType(), FArchiveXML::LoadTransformRotation);
		xmlLoadFunctions.insert(&FCDTScale::GetClassType(), FArchiveXML::LoadTransformScale);
		xmlLoadFunctions.insert(&FCDTSkew::GetClassType(), FArchiveXML::LoadTransformSkew);
		xmlLoadFunctions.insert(&FCDTTranslation::GetClassType(), FArchiveXML::LoadTransformTranslation);
		xmlLoadFunctions.insert(&FCDGeometrySource::GetClassType(), FArchiveXML::LoadGeometrySource);
		xmlLoadFunctions.insert(&FCDGeometryMesh::GetClassType(), FArchiveXML::LoadGeometryMesh);
		xmlLoadFunctions.insert(&FCDGeometry::GetClassType(), FArchiveXML::LoadGeometry);
		xmlLoadFunctions.insert(&FCDGeometryPolygons::GetClassType(), FArchiveXML::LoadGeometryPolygons);
		xmlLoadFunctions.insert(&FCDGeometrySpline::GetClassType(), FArchiveXML::LoadGeometrySpline);
		xmlLoadFunctions.insert(&FCDMorphController::GetClassType(), FArchiveXML::LoadMorphController);
		xmlLoadFunctions.insert(&FCDController::GetClassType(), FArchiveXML::LoadController);
		xmlLoadFunctions.insert(&FCDSkinController::GetClassType(), FArchiveXML::LoadSkinController);
		xmlLoadFunctions.insert(&FCDEntityInstance::GetClassType(), FArchiveXML::LoadEntityInstance);
		xmlLoadFunctions.insert(&FCDEmitterInstance::GetClassType(), FArchiveXML::LoadEmitterInstance);
		xmlLoadFunctions.insert(&FCDGeometryInstance::GetClassType(), FArchiveXML::LoadGeometryInstance);
		xmlLoadFunctions.insert(&FCDControllerInstance::GetClassType(), FArchiveXML::LoadControllerInstance);
		xmlLoadFunctions.insert(&FCDMaterialInstance::GetClassType(), FArchiveXML::LoadMaterialInstance);
		xmlLoadFunctions.insert(&FCDPhysicsForceFieldInstance::GetClassType(), FArchiveXML::LoadPhysicsForceFieldInstance);
		xmlLoadFunctions.insert(&FCDPhysicsModelInstance::GetClassType(), FArchiveXML::LoadPhysicsModelInstance);
		xmlLoadFunctions.insert(&FCDPhysicsRigidBodyInstance::GetClassType(), FArchiveXML::LoadPhysicsRigidBodyInstance);
		xmlLoadFunctions.insert(&FCDPhysicsRigidConstraintInstance::GetClassType(), FArchiveXML::LoadPhysicsRigidConstraintInstance);
		xmlLoadFunctions.insert(&FCDAnimationChannel::GetClassType(), FArchiveXML::LoadAnimationChannel);
		xmlLoadFunctions.insert(&FCDAnimationCurve::GetClassType(), FArchiveXML::LoadAnimationCurve);
		xmlLoadFunctions.insert(&FCDAnimationMultiCurve::GetClassType(), FArchiveXML::LoadAnimationMultiCurve);
		xmlLoadFunctions.insert(&FCDAnimation::GetClassType(), FArchiveXML::LoadAnimation);
		xmlLoadFunctions.insert(&FCDAnimationClip::GetClassType(), FArchiveXML::LoadAnimationClip);
		xmlLoadFunctions.insert(&FCDCamera::GetClassType(), FArchiveXML::LoadCamera);
		xmlLoadFunctions.insert(&FCDEffect::GetClassType(), FArchiveXML::LoadEffect);
		xmlLoadFunctions.insert(&FCDEffectCode::GetClassType(), FArchiveXML::LoadEffectCode);
		xmlLoadFunctions.insert(&FCDEffectParameter::GetClassType(), FArchiveXML::LoadEffectParameter);
		xmlLoadFunctions.insert(&FCDEffectParameterBool::GetClassType(), FArchiveXML::LoadEffectParameterBool);
		xmlLoadFunctions.insert(&FCDEffectParameterFloat::GetClassType(), FArchiveXML::LoadEffectParameterFloat);
		xmlLoadFunctions.insert(&FCDEffectParameterFloat2::GetClassType(), FArchiveXML::LoadEffectParameterFloat2);
		xmlLoadFunctions.insert(&FCDEffectParameterFloat3::GetClassType(), FArchiveXML::LoadEffectParameterFloat3);
		xmlLoadFunctions.insert(&FCDEffectParameterColor3::GetClassType(), FArchiveXML::LoadEffectParameterFloat3);
		xmlLoadFunctions.insert(&FCDEffectParameterInt::GetClassType(), FArchiveXML::LoadEffectParameterInt);
		xmlLoadFunctions.insert(&FCDEffectParameterMatrix::GetClassType(), FArchiveXML::LoadEffectParameterMatrix);
		xmlLoadFunctions.insert(&FCDEffectParameterSampler::GetClassType(), FArchiveXML::LoadEffectParameterSampler);
		xmlLoadFunctions.insert(&FCDEffectParameterString::GetClassType(), FArchiveXML::LoadEffectParameterString);
		xmlLoadFunctions.insert(&FCDEffectParameterSurface::GetClassType(), FArchiveXML::LoadEffectParameterSurface);
		xmlLoadFunctions.insert(&FCDEffectParameterVector::GetClassType(), FArchiveXML::LoadEffectParameterVector);
		xmlLoadFunctions.insert(&FCDEffectParameterColor4::GetClassType(), FArchiveXML::LoadEffectParameterVector);
		xmlLoadFunctions.insert(&FCDEffectPass::GetClassType(), FArchiveXML::LoadEffectPass);
		xmlLoadFunctions.insert(&FCDEffectPassShader::GetClassType(), FArchiveXML::LoadEffectPassShader);
		xmlLoadFunctions.insert(&FCDEffectPassState::GetClassType(), FArchiveXML::LoadEffectPassState);
		xmlLoadFunctions.insert(&FCDEffectProfile::GetClassType(), FArchiveXML::LoadEffectProfile);
		xmlLoadFunctions.insert(&FCDEffectProfileFX::GetClassType(), FArchiveXML::LoadEffectProfileFX);
		xmlLoadFunctions.insert(&FCDEffectStandard::GetClassType(), FArchiveXML::LoadEffectStandard);
		xmlLoadFunctions.insert(&FCDEffectTechnique::GetClassType(), FArchiveXML::LoadEffectTechnique);
		xmlLoadFunctions.insert(&FCDTexture::GetClassType(), FArchiveXML::LoadTexture);
		xmlLoadFunctions.insert(&FCDImage::GetClassType(), FArchiveXML::LoadImage);
		xmlLoadFunctions.insert(&FCDMaterial::GetClassType(), FArchiveXML::LoadMaterial);
		xmlLoadFunctions.insert(&FCDEmitter::GetClassType(), FArchiveXML::LoadEmitter);
		xmlLoadFunctions.insert(&FCDForceField::GetClassType(), FArchiveXML::LoadForceField);
		xmlLoadFunctions.insert(&FCDPhysicsAnalyticalGeometry::GetClassType(), FArchiveXML::LoadPhysicsAnalyticalGeometry);
		xmlLoadFunctions.insert(&FCDPASBox::GetClassType(), FArchiveXML::LoadPASBox);
		xmlLoadFunctions.insert(&FCDPASCapsule::GetClassType(), FArchiveXML::LoadPASCapsule);
		xmlLoadFunctions.insert(&FCDPASTaperedCapsule::GetClassType(), FArchiveXML::LoadPASTaperedCapsule);
		xmlLoadFunctions.insert(&FCDPASCylinder::GetClassType(), FArchiveXML::LoadPASCylinder);
		xmlLoadFunctions.insert(&FCDPASTaperedCylinder::GetClassType(), FArchiveXML::LoadPASTaperedCylinder);
		xmlLoadFunctions.insert(&FCDPASPlane::GetClassType(), FArchiveXML::LoadPASPlane);
		xmlLoadFunctions.insert(&FCDPASSphere::GetClassType(), FArchiveXML::LoadPASSphere);
		xmlLoadFunctions.insert(&FCDPhysicsMaterial::GetClassType(), FArchiveXML::LoadPhysicsMaterial);
		xmlLoadFunctions.insert(&FCDPhysicsModel::GetClassType(), FArchiveXML::LoadPhysicsModel);
		xmlLoadFunctions.insert(&FCDPhysicsRigidBody::GetClassType(), FArchiveXML::LoadPhysicsRigidBody);
		xmlLoadFunctions.insert(&FCDPhysicsRigidConstraint::GetClassType(), FArchiveXML::LoadPhysicsRigidConstraint);
		xmlLoadFunctions.insert(&FCDPhysicsScene::GetClassType(), FArchiveXML::LoadPhysicsScene);
		xmlLoadFunctions.insert(&FCDPhysicsShape::GetClassType(), FArchiveXML::LoadPhysicsShape);
		xmlLoadFunctions.insert(&FCDSpline::GetClassType(), FArchiveXML::LoadSpline);
		xmlLoadFunctions.insert(&FCDBezierSpline::GetClassType(), FArchiveXML::LoadBezierSpline);
		xmlLoadFunctions.insert(&FCDLinearSpline::GetClassType(), FArchiveXML::LoadLinearSpline);
		xmlLoadFunctions.insert(&FCDNURBSSpline::GetClassType(), FArchiveXML::LoadNURBSSpline);
		xmlLoadFunctions.insert(&FCDLight::GetClassType(), FArchiveXML::LoadLight);
	}

	if (xmlWriteFunctions.empty())
	{
		xmlWriteFunctions.insert(&FCDObject::GetClassType(), FArchiveXML::WriteObject);
		xmlWriteFunctions.insert(&FCDExtra::GetClassType(), FArchiveXML::WriteExtra);
		xmlWriteFunctions.insert(&FCDENode::GetClassType(), FArchiveXML::WriteExtraNode);
		xmlWriteFunctions.insert(&FCDETechnique::GetClassType(), FArchiveXML::WriteExtraTechnique);
		xmlWriteFunctions.insert(&FCDEType::GetClassType(), FArchiveXML::WriteExtraType);
		xmlWriteFunctions.insert(&FCDAsset::GetClassType(), FArchiveXML::WriteAsset);
		xmlWriteFunctions.insert(&FCDAssetContributor::GetClassType(), FArchiveXML::WriteAssetContributor);
		xmlWriteFunctions.insert(&FCDEntityReference::GetClassType(), FArchiveXML::WriteEntityReference);
		xmlWriteFunctions.insert(&FCDExternalReferenceManager::GetClassType(), FArchiveXML::WriteExternalReferenceManager);
		xmlWriteFunctions.insert(&FCDPlaceHolder::GetClassType(), FArchiveXML::WritePlaceHolder);
		xmlWriteFunctions.insert(&FCDEntity::GetClassType(), FArchiveXML::WriteEntity);
		xmlWriteFunctions.insert(&FCDTargetedEntity::GetClassType(), FArchiveXML::WriteTargetedEntity);
		xmlWriteFunctions.insert(&FCDSceneNode::GetClassType(), FArchiveXML::WriteSceneNode);
		xmlWriteFunctions.insert(&FCDTransform::GetClassType(), FArchiveXML::WriteTransform);
		xmlWriteFunctions.insert(&FCDTLookAt::GetClassType(), FArchiveXML::WriteTransformLookAt);
		xmlWriteFunctions.insert(&FCDTMatrix::GetClassType(), FArchiveXML::WriteTransformMatrix);
		xmlWriteFunctions.insert(&FCDTRotation::GetClassType(), FArchiveXML::WriteTransformRotation);
		xmlWriteFunctions.insert(&FCDTScale::GetClassType(), FArchiveXML::WriteTransformScale);
		xmlWriteFunctions.insert(&FCDTSkew::GetClassType(), FArchiveXML::WriteTransformSkew);
		xmlWriteFunctions.insert(&FCDTTranslation::GetClassType(), FArchiveXML::WriteTransformTranslation);
		xmlWriteFunctions.insert(&FCDGeometrySource::GetClassType(), FArchiveXML::WriteGeometrySource);
		xmlWriteFunctions.insert(&FCDGeometryMesh::GetClassType(), FArchiveXML::WriteGeometryMesh);
		xmlWriteFunctions.insert(&FCDGeometry::GetClassType(), FArchiveXML::WriteGeometry);
		xmlWriteFunctions.insert(&FCDGeometryPolygons::GetClassType(), FArchiveXML::WriteGeometryPolygons);
		xmlWriteFunctions.insert(&FCDGeometrySpline::GetClassType(), FArchiveXML::WriteGeometrySpline);
		xmlWriteFunctions.insert(&FCDMorphController::GetClassType(), FArchiveXML::WriteMorphController);
		xmlWriteFunctions.insert(&FCDController::GetClassType(), FArchiveXML::WriteController);
		xmlWriteFunctions.insert(&FCDSkinController::GetClassType(), FArchiveXML::WriteSkinController);
		xmlWriteFunctions.insert(&FCDEntityInstance::GetClassType(), FArchiveXML::WriteEntityInstance);
		xmlWriteFunctions.insert(&FCDEmitterInstance::GetClassType(), FArchiveXML::WriteEmitterInstance);
		xmlWriteFunctions.insert(&FCDGeometryInstance::GetClassType(), FArchiveXML::WriteGeometryInstance);
		xmlWriteFunctions.insert(&FCDControllerInstance::GetClassType(), FArchiveXML::WriteControllerInstance);
		xmlWriteFunctions.insert(&FCDMaterialInstance::GetClassType(), FArchiveXML::WriteMaterialInstance);
		xmlWriteFunctions.insert(&FCDPhysicsForceFieldInstance::GetClassType(), FArchiveXML::WritePhysicsForceFieldInstance);
		xmlWriteFunctions.insert(&FCDPhysicsModelInstance::GetClassType(), FArchiveXML::WritePhysicsModelInstance);
		xmlWriteFunctions.insert(&FCDPhysicsRigidBodyInstance::GetClassType(), FArchiveXML::WritePhysicsRigidBodyInstance);
		xmlWriteFunctions.insert(&FCDPhysicsRigidConstraintInstance::GetClassType(), FArchiveXML::WritePhysicsRigidConstraintInstance);
		xmlWriteFunctions.insert(&FCDAnimationChannel::GetClassType(), FArchiveXML::WriteAnimationChannel);
		xmlWriteFunctions.insert(&FCDAnimationCurve::GetClassType(), FArchiveXML::WriteAnimationCurve);
		xmlWriteFunctions.insert(&FCDAnimationMultiCurve::GetClassType(), FArchiveXML::WriteAnimationMultiCurve);
		xmlWriteFunctions.insert(&FCDAnimation::GetClassType(), FArchiveXML::WriteAnimation);
		xmlWriteFunctions.insert(&FCDAnimationClip::GetClassType(), FArchiveXML::WriteAnimationClip);
		xmlWriteFunctions.insert(&FCDCamera::GetClassType(), FArchiveXML::WriteCamera);
		xmlWriteFunctions.insert(&FCDEffect::GetClassType(), FArchiveXML::WriteEffect);
		xmlWriteFunctions.insert(&FCDEffectCode::GetClassType(), FArchiveXML::WriteEffectCode);
		xmlWriteFunctions.insert(&FCDEffectParameter::GetClassType(), FArchiveXML::WriteEffectParameter);
		xmlWriteFunctions.insert(&FCDEffectParameterBool::GetClassType(), FArchiveXML::WriteEffectParameterBool);
		xmlWriteFunctions.insert(&FCDEffectParameterFloat::GetClassType(), FArchiveXML::WriteEffectParameterFloat);
		xmlWriteFunctions.insert(&FCDEffectParameterFloat2::GetClassType(), FArchiveXML::WriteEffectParameterFloat2);
		xmlWriteFunctions.insert(&FCDEffectParameterFloat3::GetClassType(), FArchiveXML::WriteEffectParameterFloat3);
		xmlWriteFunctions.insert(&FCDEffectParameterColor3::GetClassType(), FArchiveXML::WriteEffectParameterFloat3);
		xmlWriteFunctions.insert(&FCDEffectParameterInt::GetClassType(), FArchiveXML::WriteEffectParameterInt);
		xmlWriteFunctions.insert(&FCDEffectParameterMatrix::GetClassType(), FArchiveXML::WriteEffectParameterMatrix);
		xmlWriteFunctions.insert(&FCDEffectParameterSampler::GetClassType(), FArchiveXML::WriteEffectParameterSampler);
		xmlWriteFunctions.insert(&FCDEffectParameterString::GetClassType(), FArchiveXML::WriteEffectParameterString);
		xmlWriteFunctions.insert(&FCDEffectParameterSurface::GetClassType(), FArchiveXML::WriteEffectParameterSurface);
		xmlWriteFunctions.insert(&FCDEffectParameterVector::GetClassType(), FArchiveXML::WriteEffectParameterVector);
		xmlWriteFunctions.insert(&FCDEffectParameterColor4::GetClassType(), FArchiveXML::WriteEffectParameterVector);
		xmlWriteFunctions.insert(&FCDEffectPass::GetClassType(), FArchiveXML::WriteEffectPass);
		xmlWriteFunctions.insert(&FCDEffectPassShader::GetClassType(), FArchiveXML::WriteEffectPassShader);
		xmlWriteFunctions.insert(&FCDEffectPassState::GetClassType(), FArchiveXML::WriteEffectPassState);
		xmlWriteFunctions.insert(&FCDEffectProfile::GetClassType(), FArchiveXML::WriteEffectProfile);
		xmlWriteFunctions.insert(&FCDEffectProfileFX::GetClassType(), FArchiveXML::WriteEffectProfileFX);
		xmlWriteFunctions.insert(&FCDEffectStandard::GetClassType(), FArchiveXML::WriteEffectStandard);
		xmlWriteFunctions.insert(&FCDEffectTechnique::GetClassType(), FArchiveXML::WriteEffectTechnique);
		xmlWriteFunctions.insert(&FCDTexture::GetClassType(), FArchiveXML::WriteTexture);
		xmlWriteFunctions.insert(&FCDImage::GetClassType(), FArchiveXML::WriteImage);
		xmlWriteFunctions.insert(&FCDMaterial::GetClassType(), FArchiveXML::WriteMaterial);
		xmlWriteFunctions.insert(&FCDEmitter::GetClassType(), FArchiveXML::WriteEmitter);
		xmlWriteFunctions.insert(&FCDForceField::GetClassType(), FArchiveXML::WriteForceField);
		xmlWriteFunctions.insert(&FCDPhysicsAnalyticalGeometry::GetClassType(), FArchiveXML::WritePhysicsAnalyticalGeometry);
		xmlWriteFunctions.insert(&FCDPASBox::GetClassType(), FArchiveXML::WritePASBox);
		xmlWriteFunctions.insert(&FCDPASCapsule::GetClassType(), FArchiveXML::WritePASCapsule);
		xmlWriteFunctions.insert(&FCDPASTaperedCapsule::GetClassType(), FArchiveXML::WritePASTaperedCapsule);
		xmlWriteFunctions.insert(&FCDPASCylinder::GetClassType(), FArchiveXML::WritePASCylinder);
		xmlWriteFunctions.insert(&FCDPASTaperedCylinder::GetClassType(), FArchiveXML::WritePASTaperedCylinder);
		xmlWriteFunctions.insert(&FCDPASPlane::GetClassType(), FArchiveXML::WritePASPlane);
		xmlWriteFunctions.insert(&FCDPASSphere::GetClassType(), FArchiveXML::WritePASSphere);
		xmlWriteFunctions.insert(&FCDPhysicsMaterial::GetClassType(), FArchiveXML::WritePhysicsMaterial);
		xmlWriteFunctions.insert(&FCDPhysicsModel::GetClassType(), FArchiveXML::WritePhysicsModel);
		xmlWriteFunctions.insert(&FCDPhysicsRigidBody::GetClassType(), FArchiveXML::WritePhysicsRigidBody);
		xmlWriteFunctions.insert(&FCDPhysicsRigidConstraint::GetClassType(), FArchiveXML::WritePhysicsRigidConstraint);
		xmlWriteFunctions.insert(&FCDPhysicsScene::GetClassType(), FArchiveXML::WritePhysicsScene);
		xmlWriteFunctions.insert(&FCDPhysicsShape::GetClassType(), FArchiveXML::WritePhysicsShape);
		xmlWriteFunctions.insert(&FCDLight::GetClassType(), FArchiveXML::WriteLight);
	}
}
