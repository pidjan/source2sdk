#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: soundsystem.dll
// Classes count: 15
// Enums count: 7
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ActionType_t : uint32_t
{
	// MPropertyFriendlyName "None"
	SOS_ACTION_NONE = 0x0,
	// MPropertyFriendlyName "Limiter"
	SOS_ACTION_LIMITER = 0x1,
	// MPropertyFriendlyName "Time Limiter"
	SOS_ACTION_TIME_LIMIT = 0x2,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SosActionStopType_t : uint32_t
{
	// MPropertyFriendlyName "None"
	SOS_STOPTYPE_NONE = 0x0,
	// MPropertyFriendlyName "Elapsed Time"
	SOS_STOPTYPE_TIME = 0x1,
	// MPropertyFriendlyName "Opvar"
	SOS_STOPTYPE_OPVAR = 0x2,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SosActionSortType_t : uint32_t
{
	// MPropertyFriendlyName "Highest"
	SOS_SORTTYPE_HIGHEST = 0x0,
	// MPropertyFriendlyName "Lowest"
	SOS_SORTTYPE_LOWEST = 0x1,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SosGroupType_t : uint32_t
{
	// MPropertyFriendlyName "Dynamic"
	SOS_GROUPTYPE_DYNAMIC = 0x0,
	// MPropertyFriendlyName "Static"
	SOS_GROUPTYPE_STATIC = 0x1,
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class SosEditItemType_t : uint32_t
{
	SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
	SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
	SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
	SOS_EDIT_ITEM_TYPE_STACK = 0x3,
	SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
	SOS_EDIT_ITEM_TYPE_FIELD = 0x5,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 8
// Alignment: 2
// Size: 0x2
enum class vmix_filter_type_t : uint16_t
{
	FILTER_UNKNOWN = 0xffffffffffffffff,
	FILTER_LOWPASS = 0x0,
	FILTER_HIGHPASS = 0x1,
	FILTER_BANDPASS = 0x2,
	FILTER_NOTCH = 0x3,
	FILTER_PEAKING_EQ = 0x4,
	FILTER_LOW_SHELF = 0x5,
	FILTER_HIGH_SHELF = 0x6,
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Enumerator count: 12
// Alignment: 2
// Size: 0x2
enum class vmix_processor_type_t : uint16_t
{
	VPROCESSOR_UNKNOWN = 0x0,
	VPROCESSOR_STEAMAUDIO_REVERB = 0x1,
	VPROCESSOR_RT_PITCH = 0x2,
	VPROCESSOR_STEAMAUDIO_HRTF = 0x3,
	VPROCESSOR_DYNAMICS = 0x4,
	VPROCESSOR_PRESETDSP = 0x5,
	VPROCESSOR_DELAY = 0x6,
	VPROCESSOR_FULLWAVE_INTEGRATOR = 0x7,
	VPROCESSOR_FILTER = 0x8,
	VPROCESSOR_STEAMAUDIO_PATHING = 0x9,
	VPROCESSOR_EQ8 = 0xa,
	VPROCESSOR_ENVELOPE = 0xb,
};

struct CSosGroupMatchPattern;
struct CSosGroupBranchPattern;
struct vmix_filter_desc_t;

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MPropertyElementNameFn
class CSosGroupActionSchema
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Action Type"
	ActionType_t m_actionType; // 0x10	
	// MPropertySuppressField
	ActionType_t m_actionInstanceType; // 0x14	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
class CSosGroupActionLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18	
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Stop Type"
	SosActionStopType_t m_nStopType; // 0x1c	
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x20	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// Has VTable
class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Time"
	float m_flMaxDuration; // 0x18	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
class CSosGroupBranchPattern
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Event Name"
	bool m_bMatchEventName; // 0x8	
	// MPropertyFriendlyName "Sub-String"
	bool m_bMatchEventSubString; // 0x9	
	// MPropertyFriendlyName "Source Entity Index"
	bool m_bMatchEntIndex; // 0xa	
	// MPropertyFriendlyName "Operator Variable"
	bool m_bMatchOpvar; // 0xb	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
class CSosGroupMatchPattern : public CSosGroupBranchPattern
{
public:
	// MPropertyFriendlyName "Event Name"
	CUtlString m_matchSoundEventName; // 0x10	
	// MPropertyFriendlyName "Sub-String"
	CUtlString m_matchSoundEventSubString; // 0x18	
	// MPropertyFriendlyName "Entity Index"
	float m_flEntIndex; // 0x20	
	// MPropertyFriendlyName "Operator Variable Value"
	float m_flOpvar; // 0x24	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0xd0
// 
// MPropertyElementNameFn
class CSosSoundEventGroupSchema
{
public:
	// MPropertyFriendlyName "Group Name"
	CUtlString m_name; // 0x0	
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Group Type"
	SosGroupType_t m_nType; // 0x8	
	// MPropertyFriendlyName "Blocks Events"
	bool m_bIsBlocking; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	// MPropertyFriendlyName "Block Max Count"
	int32_t m_nBlockMaxCount; // 0x10	
	// MPropertyFriendlyName "Invert Match"
	bool m_bInvertMatch; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	// MPropertyFriendlyName "Match Rules"
	// -> m_matchSoundEventName - 0x28
	// -> m_matchSoundEventSubString - 0x30
	// -> m_flEntIndex - 0x38
	// -> m_flOpvar - 0x3c
	CSosGroupMatchPattern m_matchPattern; // 0x18	
	// MPropertyFriendlyName "Branch Rules"
	// -> m_bMatchEventName - 0x48
	// -> m_bMatchEventSubString - 0x49
	// -> m_bMatchEntIndex - 0x4a
	// -> m_bMatchOpvar - 0x4b
	CSosGroupBranchPattern m_branchPattern; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0050[0x60]; // 0x50
public:
	// MPropertyFriendlyName "Actions"
	CSosGroupActionSchema* m_vActions[4]; // 0xb0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
class CSosSoundEventGroupListSchema
{
public:
	// MPropertyAutoExpandGroup
	// MPropertyFriendlyName "Groups"
	CUtlVector< CSosSoundEventGroupSchema > m_groupList; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x30
struct SosEditItemInfo_t
{
public:
	SosEditItemType_t itemType; // 0x0	
	CUtlString itemName; // 0x8	
	CUtlString itemTypeName; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	CUtlString itemKVString; // 0x20	
	Vector2D itemPos; // 0x28	
};

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
struct SelectedEditItemInfo_t
{
public:
	CUtlVector< SosEditItemInfo_t > m_EditItems; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
struct vmix_filter_desc_t
{
public:
	vmix_filter_type_t m_nFilterType; // 0x0	
	bool m_bEnabled; // 0x2	
private:
	[[maybe_unused]] uint8_t __pad0003[0x1]; // 0x3
public:
	float m_fldbGain; // 0x4	
	float m_flCutoffFreq; // 0x8	
	float m_flQ; // 0xc	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x80
// Has Trivial Destructor
struct vmix_eq8_desc_t
{
public:
	// -> m_nFilterType - 0x0
	// -> m_bEnabled - 0x2
	// -> m_fldbGain - 0x4
	// -> m_flCutoffFreq - 0x8
	// -> m_flQ - 0xc
	vmix_filter_desc_t m_stages[8]; // 0x0	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x28
// Has Trivial Destructor
struct vmix_delay_desc_t
{
public:
	// -> m_nFilterType - 0x0
	// -> m_bEnabled - 0x2
	// -> m_fldbGain - 0x4
	// -> m_flCutoffFreq - 0x8
	// -> m_flQ - 0xc
	vmix_filter_desc_t m_feedbackFilter; // 0x0	
	bool m_bEnableFilter; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flDelay; // 0x14	
	float m_flDirectGain; // 0x18	
	float m_flDelayGain; // 0x1c	
	float m_flFeedbackGain; // 0x20	
	float m_flWidth; // 0x24	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x28
// Has Trivial Constructor
// Has Trivial Destructor
struct vmix_dynamics_desc_t
{
public:
	float m_fldbGain; // 0x0	
	float m_fldbNoiseGateThreshold; // 0x4	
	float m_fldbCompressionThreshold; // 0x8	
	float m_fldbLimiterThreshold; // 0xc	
	float m_fldbKneeWidth; // 0x10	
	float m_flRatio; // 0x14	
	float m_flLimiterRatio; // 0x18	
	float m_flAttackTimeMS; // 0x1c	
	float m_flReleaseTimeMS; // 0x20	
	float m_flRMSTimeMS; // 0x24	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0xc
// Has Trivial Constructor
// Has Trivial Destructor
struct vmix_envelope_desc_t
{
public:
	float m_flAttackTimeMS; // 0x0	
	float m_flHoldTimeMS; // 0x4	
	float m_flReleaseTimeMS; // 0x8	
};

// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct vmix_pitch_shift_desc_t
{
public:
	int32_t m_nGrainSampleCount; // 0x0	
	float m_flPitchShift; // 0x4	
};

