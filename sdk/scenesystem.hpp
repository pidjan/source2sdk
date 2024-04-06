#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: scenesystem.dll
// Classes count: 14
// Enums count: 0
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

struct CSceneObject;
struct CPVSData;
struct CSceneObjectReference_t;
struct SceneViewId_t;

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 16
// Size: 0x30
// Has Trivial Destructor
struct CSceneObjectReference_t
{
public:
	VectorAligned m_vecAABBMins; // 0x0	
	VectorAligned m_vecAABBMaxes; // 0x10	
	uint64_t m_nRenderableFlags; // 0x20	
	CSceneObject* m_pObject; // 0x28	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct CPVSData__pvsmask_t
{
public:
	uint32_t m_nOffset; // 0x0	
	uint32_t m_nMask; // 0x4	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x48
// Has Trivial Constructor
// Has Trivial Destructor
class CPVSData
{
public:
	CPVSData* m_pNext; // 0x0	
	uint16_t m_nPVSMasks; // 0x8	
	uint16_t m_nPVSFlags; // 0xa	
	// -> m_nOffset - 0xc
	// -> m_nMask - 0x10
	CPVSData::pvsmask_t m_masks[7]; // 0xc	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 16
// Size: 0x470
struct CSceneObjectExtraData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x440]; // 0x0
public:
	uint64_t m_nCurrentMeshGroupMask; // 0x440	
private:
	[[maybe_unused]] uint8_t __pad0448[0x8]; // 0x448
public:
	CUtlStringToken m_nLayerForceID; // 0x450	
	Vector m_vLightingOrigin; // 0x454	
	float m_flDepthSortBias; // 0x460	
	uint8_t m_nVisibleToPlayer[4]; // 0x464	
	uint16_t m_nAlphaFade; // 0x468	
	int16_t m_nViewProducerIndex; // 0x46a	
	bool m_bLightingOriginIsInWorldSpace; // 0x46c	
	int8_t m_nCurrentLOD; // 0x46d	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 16
// Size: 0xb0
// Has VTable
class CSceneObject
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	ISceneObjectDesc* m_pDesc; // 0x10	
	CSceneObjectReference_t* m_pRefData; // 0x18	
	float m_flStartFadeDistanceSquared; // 0x20	
	float m_flFarCullDistanceSquared; // 0x24	
	uint16_t m_nObjectTypeFlags; // 0x28	
	uint16_t m_nGameRenderCounter; // 0x2a	
private:
	[[maybe_unused]] uint8_t __pad002c[0x3]; // 0x2c
public:
	uint8_t m_nMeshGroupMaskSmall; // 0x2f	
	struct 
	{
		uint8_t m_nDebugLevel: 2; 		
		uint8_t m_nSizeCullBloat: 2; 		
		uint8_t m_nBoundsType: 1; 		
		uint16_t __pad0: 11;
	}; // 16 bits
	uint8_t m_nID; // 0x31	
	int8_t m_nBoundsGroupIndex; // 0x32	
	uint8_t m_nObjectClass; // 0x33	
private:
	[[maybe_unused]] uint8_t __pad0034[0xc]; // 0x34
public:
	matrix3x4a_t m_transform; // 0x40	
	CPVSData* m_pPVSData; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0078[0x10]; // 0x78
public:
	uint64_t m_nOriginalRenderableFlags; // 0x88	
	uint64_t m_nRenderableFlags; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0098[0xc]; // 0x98
public:
	CUtlStringToken m_nLayerMatchID; // 0xa4	
	
	// Static fields:
	static float &Get_s_flSizeCullBloatScale(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("scenesystem.dll")->FindDeclaredClass("CSceneObject")->m_static_fields[0]->m_instance);};
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x10
class CSSDSEndFrameViewInfo
{
public:
	uint64_t m_nViewId; // 0x0	
	CUtlString m_ViewName; // 0x8	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x18
class CSSDSMsg_EndFrame
{
public:
	CUtlVector< CSSDSEndFrameViewInfo > m_Views; // 0x0	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
struct SceneViewId_t
{
public:
	uint64_t m_nViewId; // 0x0	
	uint64_t m_nFrameCount; // 0x8	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x18
class CSSDSMsg_ViewRender
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x38
class CSSDSMsg_LayerBase
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
	int32_t m_nLayerIndex; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	uint64_t m_nLayerId; // 0x20	
	CUtlString m_LayerName; // 0x28	
	CUtlString m_displayText; // 0x30	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x30
class CSSDSMsg_ViewTarget
{
public:
	CUtlString m_Name; // 0x0	
	uint64_t m_TextureId; // 0x8	
	int32_t m_nWidth; // 0x10	
	int32_t m_nHeight; // 0x14	
	int32_t m_nRequestedWidth; // 0x18	
	int32_t m_nRequestedHeight; // 0x1c	
	int32_t m_nNumMipLevels; // 0x20	
	int32_t m_nDepth; // 0x24	
	int32_t m_nMultisampleNumSamples; // 0x28	
	int32_t m_nFormat; // 0x2c	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x30
class CSSDSMsg_ViewTargetList
{
public:
	SceneViewId_t m_viewId; // 0x0	
	CUtlString m_ViewName; // 0x10	
	CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // 0x18	
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x38
class CSSDSMsg_PreLayer : public CSSDSMsg_LayerBase
{
public:
	// No schema binary for binding
};

// Registered binary: scenesystem.dll (project 'scenesystem')
// Alignment: 8
// Size: 0x38
class CSSDSMsg_PostLayer : public CSSDSMsg_LayerBase
{
public:
	// No schema binary for binding
};

