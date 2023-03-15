#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: rendersystemdx11.dll
// Class Count: 10
// Enum Count: 7
///////////////////////////////////////////

// Aligment: 4
// Size: 20
enum class TextureSpecificationFlags_t : uint32_t
{
	TSPEC_FLAGS = 0x0,
	TSPEC_RENDER_TARGET = 0x1,
	TSPEC_VERTEX_TEXTURE = 0x2,
	TSPEC_UNFILTERABLE_OK = 0x4,
	TSPEC_RENDER_TARGET_SAMPLEABLE = 0x8,
	TSPEC_SUGGEST_CLAMPS = 0x10,
	TSPEC_SUGGEST_CLAMPT = 0x20,
	TSPEC_SUGGEST_CLAMPU = 0x40,
	TSPEC_NO_LOD = 0x80,
	TSPEC_CUBE_TEXTURE = 0x100,
	TSPEC_VOLUME_TEXTURE = 0x200,
	TSPEC_TEXTURE_ARRAY = 0x400,
	TSPEC_TEXTURE_GEN_MIP_MAPS = 0x800,
	TSPEC_LINE_TEXTURE_360 = 0x1000,
	TSPEC_LINEAR_ADDRESSING_360 = 0x2000,
	TSPEC_USE_TYPED_IMAGEFORMAT = 0x4000,
	TSPEC_SHARED_RESOURCE = 0x8000,
	TSPEC_UAV = 0x10000,
	TSPEC_INPUT_ATTACHMENT = 0x20000,
	TSPEC_CUBE_CAN_SAMPLE_AS_ARRAY = 0x40000,
};

// Aligment: 4
// Size: 6
enum class CubeMapFace_t : uint32_t
{
	CUBEMAP_FACE_POSITIVE_X = 0x0,
	CUBEMAP_FACE_NEGATIVE_X = 0x1,
	CUBEMAP_FACE_POSITIVE_Y = 0x2,
	CUBEMAP_FACE_NEGATIVE_Y = 0x3,
	CUBEMAP_FACE_POSITIVE_Z = 0x4,
	CUBEMAP_FACE_NEGATIVE_Z = 0x5,
};

// Aligment: 4
// Size: 3
enum class RenderSlotType_t : uint32_t
{
	RENDER_SLOT_INVALID = 0xffffffffffffffff,
	RENDER_SLOT_PER_VERTEX = 0x0,
	RENDER_SLOT_PER_INSTANCE = 0x1,
};

// Aligment: 4
// Size: 8
enum class RenderBufferFlags_t : uint32_t
{
	RENDER_BUFFER_USAGE_VERTEX_BUFFER = 0x1,
	RENDER_BUFFER_USAGE_INDEX_BUFFER = 0x2,
	RENDER_BUFFER_USAGE_SHADER_RESOURCE = 0x4,
	RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 0x8,
	RENDER_BUFFER_BYTEADDRESS_BUFFER = 0x10,
	RENDER_BUFFER_STRUCTURED_BUFFER = 0x20,
	RENDER_BUFFER_APPEND_CONSUME_BUFFER = 0x40,
	RENDER_BUFFER_UAV_COUNTER = 0x80,
};

// Aligment: 4
// Size: 45
enum class RenderPrimitiveType_t : uint32_t
{
	RENDER_PRIM_POINTS = 0x0,
	RENDER_PRIM_LINES = 0x1,
	RENDER_PRIM_LINES_WITH_ADJACENCY = 0x2,
	RENDER_PRIM_LINE_STRIP = 0x3,
	RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 0x4,
	RENDER_PRIM_TRIANGLES = 0x5,
	RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 0x6,
	RENDER_PRIM_TRIANGLE_STRIP = 0x7,
	RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 0x8,
	RENDER_PRIM_INSTANCED_QUADS = 0x9,
	RENDER_PRIM_HETEROGENOUS = 0xa,
	RENDER_PRIM_1_CONTROL_POINT_PATCHLIST = 0xb,
	RENDER_PRIM_2_CONTROL_POINT_PATCHLIST = 0xc,
	RENDER_PRIM_3_CONTROL_POINT_PATCHLIST = 0xd,
	RENDER_PRIM_4_CONTROL_POINT_PATCHLIST = 0xe,
	RENDER_PRIM_5_CONTROL_POINT_PATCHLIST = 0xf,
	RENDER_PRIM_6_CONTROL_POINT_PATCHLIST = 0x10,
	RENDER_PRIM_7_CONTROL_POINT_PATCHLIST = 0x11,
	RENDER_PRIM_8_CONTROL_POINT_PATCHLIST = 0x12,
	RENDER_PRIM_9_CONTROL_POINT_PATCHLIST = 0x13,
	RENDER_PRIM_10_CONTROL_POINT_PATCHLIST = 0x14,
	RENDER_PRIM_11_CONTROL_POINT_PATCHLIST = 0x15,
	RENDER_PRIM_12_CONTROL_POINT_PATCHLIST = 0x16,
	RENDER_PRIM_13_CONTROL_POINT_PATCHLIST = 0x17,
	RENDER_PRIM_14_CONTROL_POINT_PATCHLIST = 0x18,
	RENDER_PRIM_15_CONTROL_POINT_PATCHLIST = 0x19,
	RENDER_PRIM_16_CONTROL_POINT_PATCHLIST = 0x1a,
	RENDER_PRIM_17_CONTROL_POINT_PATCHLIST = 0x1b,
	RENDER_PRIM_18_CONTROL_POINT_PATCHLIST = 0x1c,
	RENDER_PRIM_19_CONTROL_POINT_PATCHLIST = 0x1d,
	RENDER_PRIM_20_CONTROL_POINT_PATCHLIST = 0x1e,
	RENDER_PRIM_21_CONTROL_POINT_PATCHLIST = 0x1f,
	RENDER_PRIM_22_CONTROL_POINT_PATCHLIST = 0x20,
	RENDER_PRIM_23_CONTROL_POINT_PATCHLIST = 0x21,
	RENDER_PRIM_24_CONTROL_POINT_PATCHLIST = 0x22,
	RENDER_PRIM_25_CONTROL_POINT_PATCHLIST = 0x23,
	RENDER_PRIM_26_CONTROL_POINT_PATCHLIST = 0x24,
	RENDER_PRIM_27_CONTROL_POINT_PATCHLIST = 0x25,
	RENDER_PRIM_28_CONTROL_POINT_PATCHLIST = 0x26,
	RENDER_PRIM_29_CONTROL_POINT_PATCHLIST = 0x27,
	RENDER_PRIM_30_CONTROL_POINT_PATCHLIST = 0x28,
	RENDER_PRIM_31_CONTROL_POINT_PATCHLIST = 0x29,
	RENDER_PRIM_32_CONTROL_POINT_PATCHLIST = 0x2a,
	RENDER_PRIM_COMPUTE_SHADER = 0x2b,
	RENDER_PRIM_TYPE_COUNT = 0x2c,
};

// Aligment: 4
// Size: 6
enum class InputLayoutVariation_t : uint32_t
{
	INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
	INPUT_LAYOUT_VARIATION_STREAM1_MAT3X4 = 0x1,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x2,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_LIGHTMAP_PARAMS = 0x3,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x4,
	INPUT_LAYOUT_VARIATION_MAX = 0x5,
};

// Aligment: 4
// Size: 8
enum class RenderMultisampleType_t : uint32_t
{
	RENDER_MULTISAMPLE_INVALID = 0xffffffffffffffff,
	RENDER_MULTISAMPLE_NONE = 0x0,
	RENDER_MULTISAMPLE_2X = 0x1,
	RENDER_MULTISAMPLE_4X = 0x2,
	RENDER_MULTISAMPLE_6X = 0x3,
	RENDER_MULTISAMPLE_8X = 0x4,
	RENDER_MULTISAMPLE_16X = 0x5,
	RENDER_MULTISAMPLE_TYPE_COUNT = 0x6,
};

// Aligment: 6
// Size: 12
struct TextureDesc_t
{
public:
	uint16_t m_nWidth; // 0x0
	uint16_t m_nHeight; // 0x2
	uint16_t m_nDepth; // 0x4
	int8_t m_nImageFormat; // 0x6
	uint8_t m_nNumMipLevels; // 0x7
	int32_t m_nPicmip0Res; // 0x8
};

// Aligment: 7
// Size: 1404
struct TextureHeader_t : public TextureDesc_t
{
public:
	uint16_t m_nMultisampleType; // 0xc
	uint16_t m_nFlags; // 0xe
	Vector4D m_Reflectivity; // 0x10
	CResourcePointer< Sheet_t > m_pSheet; // 0x20
	int32_t m_nSheetSize; // 0x24
	uint8[1360] m_fallbackTextureBits; // 0x28
	int32_t m_nPicmip0Res; // 0x578
};

// Aligment: 2
// Size: 8
struct SequenceFloatParam_t
{
public:
	CResourceString m_name; // 0x0
	float m_value; // 0x4
};

// Aligment: 9
// Size: 32
struct SheetSequence_t
{
public:
	uint32_t m_nId; // 0x0
	bool m_bClamp; // 0x4
	bool m_bAlphaCrop; // 0x5
	bool m_bNoColor; // 0x6
	bool m_bNoAlpha; // 0x7
	CResourceArray< SheetSequenceFrame_t > m_Frames; // 0x8
	float m_flTotalTime; // 0x10
	CResourceString m_name; // 0x14
	CResourceArray< SequenceFloatParam_t > m_floatParams; // 0x18
};

// Aligment: 2
// Size: 12
struct SheetSequenceFrame_t
{
public:
	float m_flDisplayTime; // 0x0
	CResourceArray< SheetFrameImage_t > m_Images; // 0x4
};

// Aligment: 2
// Size: 32
struct SheetFrameImage_t
{
public:
	Vector2D[2] uvCropped; // 0x0
	Vector2D[2] uvUncropped; // 0x10
};

// Aligment: 1
// Size: 8
struct Sheet_t
{
public:
	CResourceArray< SheetSequence_t > m_Sequences; // 0x0
};

// Aligment: 7
// Size: 56
struct RenderInputLayoutField_t
{
public:
	uint8[32] m_pSemanticName; // 0x0
	int32_t m_nSemanticIndex; // 0x20
	uint32_t m_Format; // 0x24
	int32_t m_nOffset; // 0x28
	int32_t m_nSlot; // 0x2c
	RenderSlotType_t m_nSlotType; // 0x30
	int32_t m_nInstanceStepRate; // 0x34
};

// Aligment: 4
// Size: 196
struct VsInputSignatureElement_t
{
public:
	char[64] m_pName; // 0x0
	char[64] m_pSemantic; // 0x40
	char[64] m_pD3DSemanticName; // 0x80
	int32_t m_nD3DSemanticIndex; // 0xc0
};

// Aligment: 1
// Size: 24
struct VsInputSignature_t
{
public:
	CUtlVector< VsInputSignatureElement_t > m_elems; // 0x0
};

