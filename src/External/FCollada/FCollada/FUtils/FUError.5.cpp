// FUError.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

/* FCollada (FUtils/FUError.cpp): the text of an error code. FCollada has no headers in the kit;
 * what the function uses is declared here (FMath/FMArray.h, FUtils/FUString.h, FUtils/FUError.h). */
typedef unsigned int size_t;

namespace fm
{
	template <class T, bool PRIMITIVE = false>
	class vector
	{
	protected:
		size_t reserved;
		size_t sized;
		T* heapBuffer;

	public:
		inline size_t size() const { return sized; }
		inline const T* begin() const { return heapBuffer; }
	};

	template <class CH>
	class stringT : public fm::vector<CH, true>
	{
	public:
		typedef fm::vector<CH, true> Parent;

		const CH* c_str() const
		{
			static CH empty = 0;
			if (Parent::size() == 0) return &empty;
			return Parent::begin();
		}
	};

	typedef stringT<char> string;
}

class FUError
{
public:
	/* The errors and warnings FCollada reports. Only the code this function treats apart is
	 * named here; the others are numbered from 0 in the order of FUError.h. */
	enum Code
	{
		ERROR_CUSTOM_STRING = 5000
	};

	static const char* GetErrorString(FUError::Code errorCode);

private:
	static fm::string customErrorString;
};

// @baa 0x0184d1a0
const char* FUError::GetErrorString(FUError::Code errorCode)
{
	switch (errorCode)
	{
	case 0: return "Generic Error.";
	case 1: return "Corrupted COLLADA document: malformed XML.";
	case 2: return "Exception caught while parsing a COLLADA document from file.";
	case 3: return "Invalid or unexpected XML element.";
	case 4: return "Missing, necessary XML element.";
	case 5: return "Unknown element: parsing error.";
	case 6: return "Missing necessary COLLADA <input>.";
	case 7: return "Incomplete or invalid URI fragment.";
	case 8: return "Unable to write COLLADA document to file.";
	case 9: return "Missing necessary XML property.";
	case 10: return "No plug-in available for this task.";
	case 11: return "Unable to find animation curve driver.";
	case 12: return "Expecting sources to be the same size.";
	case 13: return "No inverted bind matrix input in controller.";
	case 14: return "Expecting <vcount> element in combiner for controller.";
	case 15: return "Expecting <v> element after <vcount> element in combiner for controller.";
	case 16: return "Joint count and bind pose matrix count aren't equal for controller.";
	case 17: return "The <vcount> element list should contains the number of values determined by the <vertex_weights>'s 'count' attribute.";
	case 18: return "Parsing programming error in controller.";
	case 19: return "Unknown child in <geometry> with id.";
	case 20: return "Unknown geometry for creation of convex hull of.";
	case 21: return "Mesh has source with an unknown id.";
	case 22: return "Found non-ascending U knot vector";
	case 23: return "Found non-ascending V knot vector";
	case 25: return "Not enough elements in the U knot vector.";
	case 24: return "Not enough elements in the V knot vector.";
	case 26: return "Found unexpected number of control vertices.";
	case 27: return "No <control_vertices> element in NURBS surface.";
	case 28: return "Unknown polygons element in geometry.";
	case 29: return "No polygon <p>/<vcount> element found in geometry.";
	case 30: return "Cannot find 'VERTEX' polygons' input within geometry.";
	case 31: return "No or empty <vcount> element found in geometry.";
	case 32: return "<vcount> is only expected with the <polylist> element in geometry.";
	case 33: return "Unknown element found in <ph> element for geometry.";
	case 34: return "Face count for polygons node doesn't match actual number of faces found in <p> element(s) in geometry.";
	case 35: return "Geometry source has duplicate 'id'.";
	case 36: return "Numbers of CVs and weights are different in NURB spline.";
	case 37: return "Invalid spline. Equation \"n = k - d - 1\" is not respected.";
	case 38: return "Unknown effect code type.";
	case 39: return "Bad value for float parameter in integer parameter.";
	case 40: return "Bad value for boolean parameter in effect.";
	case 41: return "Bad float value for float parameter.";
	case 42: return "Bad value for float2 parameter.";
	case 43: return "Bad value for float3 parameter.";
	case 44: return "Bad value for float4 parameter.";
	case 45: return "Bad value for matrix parameter.";
	case 46: return "Unable to find the program node for standard effect.";
	case 47: return "Unexpected texture sampler on some parameters for material.";
	case 48: return "Cannot find parameter node referenced by.";
	case 49: return "Invalid filename for image: ";
	case 50: return "Unknown texture sampler element.";
	case 51: return "Unable to find common technique for physics material.";
	case 52: return "Technique node not specified.";
	case 53: return "A cycle was found in the physics model.";
	case 54: return "Cannot Resize the ParticleMutationsList";
	case 55: return "3D Studio Max does not support both UV Offset and UV Frame Translate";
	case 56: return "Missing or invalid URI target.";
	case 57: return "Unknown <asset> child element";
	case 58: return "Unknown <asset><contributor> child element.";
	case 59: return "Unknown base node type.";
	case 60: return "Unable to find instantiated entity.";
	case 61: return "Invalid material binding in geometry instantiation.";
	case 62: return "Unknown material id or semantic.";
	case 63: return "Couldn't find rigid constraint for instantiation.";
	case 64: return "Animation library contains unknown element.";
	case 65: return "Animation Channel target is invalid";
	case 66: return "Unknown element in animation clip library.";
	case 67: return "Invalid start/end pair for animation clip.";
	case 68: return "No curves instantiated by animation.";
	case 69: return "Empty animation clip.";
	case 70: return "Camera library contains unknown element.";
	case 71: return "No standard program type for camera.";
	case 72: return "Cannot find parameter root node for camera.";
	case 73: return "Unknown program type for camera.";
	case 74: return "Unknown parameter for camera.";
	case 75: return "Light library contains unknown element.";
	case 76: return "Unknown light type value for light.";
	case 77: return "Unknown element under <light><technique_common> for light.";
	case 78: return "Unknown program parameter for light.";
	case 79: return "Unexpected node in controller library.";
	case 80: return "A controller cannot be both a skin and a morpher.";
	case 81: return "No base type element, <skin> or <morph>, found for controller.";
	case 82: return "Unknown processing method from morph controller.";
	case 83: return "Cannot find base target for morph controller.";
	case 84: return "Unknown morph targets input type in morph controller.";
	case 85: return "Unable to find target geometry.";
	case 86: return "Target not found for controller.";
	case 87: return "Unknown vertex input in skin controller.";
	case 88: return "Unable to clone/find the target geometry for controller.";
	case 89: return "Joint index out of bounds in combiner for controller.";
	case 90: return "Weight index out of bounds in combiner for controller.";
	case 91: return "Unknown joint.";
	case 92: return "Geometry library contains unknown element.";
	case 93: return "No mesh, spline or NURBS surfaces found within geometry.";
	case 94: return "No <vertices> element in mesh.";
	case 95: return "No vertex position input node in mesh.";
	case 96: return "Empty <vertices> element in geometry.";
	case 97: return "No tessellation found for mesh.";
	case 98: return "Unknown or missing polygonal material symbol in geometry.";
	case 99: return "There should never be more than one 'VERTEX' input in a mesh: skipping extra 'VERTEX' inputs.";
	case 100: return "Unknown polygons set input.";
	case 101: return "Unknown polygon child element in geometry.";
	case 102: return "Primitive count for mesh node doesn't match actual number of primitives found in <p> element(s) in geometry.";
	case 103: return "Geometry source with no 'id' is unusable.";
	case 104: return "Geometry has source with no data.";
	case 105: return "Polygons is empty.";
	case 106: return "No control vertice input in spline.";
	case 107: return "No <control_vertices> element in spline.";
	case 108: return "Geometry contains different kinds of splines.";
	case 109: return "Unknown element in effect library.";
	case 110: return "Unsupported profile or unknown element in effect.";
	case 111: return "<code>/<include> nodes must have an 'sid' attribute to identify them.";
	case 112: return "Annotation has none-supported type.";
	case 113: return "No reference attribute on generator parameter.";
	case 114: return "No reference attribute on modifier parameter.";
	case 115: return "Unable to find sampler node for sampler parameter.";
	case 116: return "Empty surface source value for sampler parameter.";
	case 117: return "<init_from> element is empty in surface parameter.";
	case 118: return "Empty image name for surface parameter.";
	case 119: return "Pass contains unknown element.";
	case 120: return "Pass shader contains unknown element.";
	case 121: return "Unnamed effect pass shader found.";
	case 122: return "Unknown stage for effect pass shader.";
	case 123: return "Invalid profile input node for effect";
	case 124: return "Unknown element as standard material base.";
	case 125: return "Expecting <technique> within the <profile_COMMON> element for effect.";
	case 126: return "Unknown input semantic in material.";
	case 127: return "Unknown input texture.";
	case 128: return "Unsupported shader program type.";
	case 129: return "Unknown parameter name for material.";
	case 130: return "Technique contains unknown element.";
	case 131: return "Image library contains unknown element.";
	case 132: return "Texture library contains unknown element.";
	case 133: return "Unknown channel usage for texture.";
	case 134: return "Unknown input semantic for texture.";
	case 135: return "Unknown or external image source for texture.";
	case 136: return "Unknown element in material library.";
	case 137: return "Externally referenced effects are not supported. Material.";
	case 138: return "Empty material's <instance_effect> definition. Should instantiate an effect from the effect's library. Material.";
	case 139: return "Unable to find effect for material.";
	case 140: return "Force field library contains unknown element.";
	case 141: return "Unknown element.";
	case 142: return "Box is not of the right type.";
	case 143: return "Plane is not of the right type.";
	case 144: return "Sphere is not of the right type.";
	case 145: return "Capsule is not of the right type.";
	case 146: return "Tapered Capsule is not of the right type.";
	case 147: return "Tapered cylinder is not of the right type.";
	case 148: return "Unknown element in physics material library.";
	case 149: return "PhysicsModel library contains unknown element.";
	case 150: return "Unable to retrieve instance for scene node.";
	case 151: return "PhysicsRigidBody library contains unknown element.";
	case 152: return "Error: Instantiated physics material in rigid body was not found.";
	case 153: return "No physics material defined in rigid body.";
	case 154: return "PhysicsRigidConstraint library contains unknown element.";
	case 155: return "Invalid node transform.";
	case 156: return "Reference-frame rigid body/scene node not defined in rigid constraint.";
	case 157: return "Reference-frame rigid body/scene node specified in rigid_constraint not found in physics model.";
	case 158: return "Target rigid body/scene node not defined in rigid constraint.";
	case 159: return "Target rigid body/scene node specified in rigid_constraint not found in physics model.";
	case 160: return "PhysicsShape library contains unknown element.";
	case 161: return "Unable to retrieve FCDGeometry instance for scene node. ";
	case 162: return "Invalid shape.";
	case 164: return "Unknown node type for scene's <node> element.";
	case 165: return "A cycle was found in the visual scene at node.";
	case 166: return "Unable to retrieve node instance for scene node.";
	case 167: return "Unable to retrieve weakly-typed instance for scene node.";
	case 168: return "FCollada does not support external references for this element/entity.";
	case 169: return "Found more than one asset present in scene node.";
	case 170: return "Unknown element or bad transform in scene node.";
	case 171: return "Unable to find target scene node for object.";
	case 173: return "XRef imported but not instanciated.";
	case 172: return "Unsupported external reference node.";
	case 163: return "Shape node missing.";
	case 174: return "Mass and density missing.";
	case 175: return "COLLADA document loaded successfully.";
	case 176: return "COLLADA document written successfully.";
	case ERROR_CUSTOM_STRING: return customErrorString.c_str();
	default: return "Unknown error code.";
	}
}
