#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: schemasystem.dll
// Classes count: 2
// Enums count: 1
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: schemasystem.dll (project 'schemasystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ThreeState_t : uint32_t
{
	TRS_FALSE = 0x0,
	TRS_TRUE = 0x1,
	TRS_NONE = 0x2,
};

// Registered binary: schemasystem.dll (project 'schemasystem')
// Alignment: 16
// Size: 0x150
class CSchemaSystemInternalRegistration
{
public:
	Vector2D m_Vector2D; // 0x0	
	Vector m_Vector; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0014[0xc]; // 0x14
public:
	VectorAligned m_VectorAligned; // 0x20	
	QAngle m_QAngle; // 0x30	
	RadianEuler m_RadianEuler; // 0x3c	
	DegreeEuler m_DegreeEuler; // 0x48	
	Quaternion m_Quaternion; // 0x54	
	matrix3x4_t m_matrix3x4_t; // 0x64	
private:
	[[maybe_unused]] uint8_t __pad0094[0xc]; // 0x94
public:
	matrix3x4a_t m_matrix3x4a_t; // 0xa0	
	Color m_Color; // 0xd0	
	Vector4D m_Vector4D; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00e4[0xc]; // 0xe4
public:
	CTransform m_CTransform; // 0xf0	
	KeyValues* m_pKeyValues; // 0x110	
	CUtlBinaryBlock m_CUtlBinaryBlock; // 0x118	
	CUtlString m_CUtlString; // 0x130	
	CUtlSymbol m_CUtlSymbol; // 0x138	
private:
	[[maybe_unused]] uint8_t __pad013a[0x2]; // 0x13a
public:
	CUtlStringToken m_stringToken; // 0x13c	
	CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x140	
};

// Registered binary: schemasystem.dll (project 'resourcefile')
// Alignment: 1
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vrman"
class InfoForResourceTypeCResourceManifestInternal
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

