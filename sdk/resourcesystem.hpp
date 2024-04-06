#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: resourcesystem.dll
// Classes count: 34
// Enums count: 2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class LightType_t : uint32_t
{
	MATERIAL_LIGHT_DISABLE = 0x0,
	MATERIAL_LIGHT_POINT = 0x1,
	MATERIAL_LIGHT_DIRECTIONAL = 0x2,
	MATERIAL_LIGHT_SPOT = 0x3,
	MATERIAL_LIGHT_ORTHO = 0x4,
	MATERIAL_LIGHT_ENVIRONMENT_PROBE = 0x5,
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Enumerator count: 1
// Alignment: 4
// Size: 0x4
enum class LightSourceShape_t : uint32_t
{
	LIGHT_SOURCE_SHAPE_SPHERE = 0x0,
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vpcf"
class InfoForResourceTypeIParticleSystemDefinition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsnap"
class InfoForResourceTypeIParticleSnapshot
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vanim"
class InfoForResourceTypeCAnimData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vagrp"
class InfoForResourceTypeCAnimationGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vseq"
class InfoForResourceTypeCSequenceGroupData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmat"
class InfoForResourceTypeIMaterial2
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmorf"
class InfoForResourceTypeCMorphSetData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmesh"
class InfoForResourceTypeCRenderMesh
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmdl"
class InfoForResourceTypeCModel
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vtex"
class InfoForResourceTypeCTextureBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsvg"
class InfoForResourceTypeIVectorGraphic
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsndevts"
class InfoForResourceTypeCVSoundEventScriptList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsndstckvseq"
class InfoForResourceTypeCVSoundStackScriptList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsnd"
struct InfoForResourceTypeVSound_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vmix"
class InfoForResourceTypeCVMixListResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vphys"
class InfoForResourceTypeCPhysAggregateData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vsurf"
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vents"
class InfoForResourceTypeCEntityLump
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vwnod"
class InfoForResourceTypeCWorldNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vwrld"
struct InfoForResourceTypeWorld_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vvis"
class InfoForResourceTypeCVoxelVisibility
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vpost"
class InfoForResourceTypeCPostProcessingResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vcss"
class InfoForResourceTypeCPanoramaStyle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vxml"
class InfoForResourceTypeCPanoramaLayout
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vpdi"
class InfoForResourceTypeCPanoramaDynamicImages
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "item"
class InfoForResourceTypeCDotaItemDefinitionResource
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vjs"
class InfoForResourceTypeCPanoramaScript
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vdpn"
class InfoForResourceTypeCDOTAPatchNotesList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vanmgrphvxml"
class InfoForResourceTypeIAnimationGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vcdlist"
class InfoForResourceTypeCChoreoSceneFileData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'resourcesystem')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vdacdefsvsvg"
class InfoForResourceTypeCDACGameDefsData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 4
// Size: 0x104
// Has Trivial Destructor
struct LightDesc_t
{
public:
	LightType_t m_Type; // 0x0	
	Vector m_Color; // 0x4	
	Vector m_BounceColor; // 0x10	
	float m_Range; // 0x1c	
	float m_Falloff; // 0x20	
	float m_Attenuation0; // 0x24	
	float m_Attenuation1; // 0x28	
	float m_Attenuation2; // 0x2c	
	float m_Theta; // 0x30	
	float m_Phi; // 0x34	
	CUtlStringToken m_lightCookie; // 0x38	
	int32_t m_nLightGroupCount; // 0x3c	
	CUtlStringToken m_lightGroups[1]; // 0x40	
	bool m_bCastShadows; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	int32_t m_nShadowWidth; // 0x48	
	int32_t m_nShadowHeight; // 0x4c	
	int32_t m_nShadowCascadeCount; // 0x50	
	float m_flShadowCascadeDistance[4]; // 0x54	
	int32_t m_nShadowCascadeResolution[4]; // 0x64	
	bool m_bUsesIndexedBakedLighting; // 0x74	
private:
	[[maybe_unused]] uint8_t __pad0075[0x3]; // 0x75
public:
	int32_t m_nBakeLightIndex; // 0x78	
	float m_flBakeLightIndexScale; // 0x7c	
	int32_t m_nFogLightingMode; // 0x80	
	bool m_bRenderDiffuse; // 0x84	
	bool m_bRenderSpecular; // 0x85	
	bool m_bRenderTransmissive; // 0x86	
private:
	[[maybe_unused]] uint8_t __pad0087[0x1]; // 0x87
public:
	int32_t m_nPriority; // 0x88	
	LightSourceShape_t m_Shape; // 0x8c	
	float m_flLightSourceDim0; // 0x90	
	float m_flLightSourceDim1; // 0x94	
	float m_flLightSourceSize0; // 0x98	
	float m_flLightSourceSize1; // 0x9c	
	float m_flPrecomputedMaxRange; // 0xa0	
	float m_flFogContributionStength; // 0xa4	
	float m_flNearClipPlane; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x18]; // 0xac
public:
	Vector m_vecUp; // 0xc4	
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
struct AABB_t
{
public:
	Vector m_vMinBounds; // 0x0	
	Vector m_vMaxBounds; // 0xc	
};

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
class FourQuaternions
{
public:
	fltx4 x; // 0x0	
	fltx4 y; // 0x10	
	fltx4 z; // 0x20	
	fltx4 w; // 0x30	
};

