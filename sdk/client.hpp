#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: client.dll
// Classes count: 210
// Enums count: 3
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: client.dll (project 'client')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class NPC_STATE : uint32_t
{
	NPC_STATE_INVALID = 0xffffffffffffffff,
	NPC_STATE_NONE = 0x0,
	NPC_STATE_IDLE = 0x1,
	NPC_STATE_ALERT = 0x2,
	NPC_STATE_COMBAT = 0x3,
	NPC_STATE_SCRIPT = 0x4,
	NPC_STATE_PLAYDEAD = 0x5,
	NPC_STATE_PRONE = 0x6,
	NPC_STATE_DEAD = 0x7,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class C_BaseCombatCharacter__WaterWakeMode_t : uint32_t
{
	C_BaseCombatCharacter::WATER_WAKE_NONE = 0x0,
	C_BaseCombatCharacter::WATER_WAKE_IDLE = 0x1,
	C_BaseCombatCharacter::WATER_WAKE_WALKING = 0x2,
	C_BaseCombatCharacter::WATER_WAKE_RUNNING = 0x3,
	C_BaseCombatCharacter::WATER_WAKE_WATER_OVERHEAD = 0x4,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class PostProcessParameterNames_t : uint32_t
{
	PPPN_FADE_TIME = 0x0,
	PPPN_LOCAL_CONTRAST_STRENGTH = 0x1,
	PPPN_LOCAL_CONTRAST_EDGE_STRENGTH = 0x2,
	PPPN_VIGNETTE_START = 0x3,
	PPPN_VIGNETTE_END = 0x4,
	PPPN_VIGNETTE_BLUR_STRENGTH = 0x5,
	PPPN_FADE_TO_BLACK_STRENGTH = 0x6,
	PPPN_DEPTH_BLUR_FOCAL_DISTANCE = 0x7,
	PPPN_DEPTH_BLUR_STRENGTH = 0x8,
	PPPN_SCREEN_BLUR_STRENGTH = 0x9,
	PPPN_FILM_GRAIN_STRENGTH = 0xa,
	PPPN_TOP_VIGNETTE_STRENGTH = 0xb,
	POST_PROCESS_PARAMETER_COUNT = 0xc,
};

struct ChangeAccessorFieldPathIndex_t;
struct sky3dparams_t;
struct audioparams_t;
struct C_RopeKeyframe;
struct CDecalInfo;
struct C_BasePlayer;
struct CNetworkedSequenceOperation;
struct C_BaseAnimatingController;
struct ParticleIndex_t;
struct CEntityIdentity;
struct CScriptComponent;
struct C_CSequenceTransitioner2;
struct CGameSceneNode;
struct CNetworkVarChainer;
struct CSkeletonInstance;
struct CBodyComponent;
struct CNetworkTransmitComponent;
struct CRenderComponent;
struct CCollisionProperty;
struct CNetworkVelocityVector;
struct CParticleProperty;
struct C_CEnvWindShared;
struct C_SkyCamera;
struct CInterpolatedValue;
struct CAttributeList;
struct C_SingleplayRules;
struct CEntityIOOutput;
struct CTimeOfDayDynamicKeys;
struct fogparams_t;
struct C_PointCamera;
struct C_BaseAnimatingOverlayController;
struct CGlowProperty;
struct CNetworkViewOffsetVector;
struct CClientAlphaProperty;
struct C_RopeKeyframe::CPhysicsDelegate;
struct CPointOffScreenIndicatorUi;
struct C_PointClientUIWorldPanel;
struct CLightComponent;
struct CHitboxComponent;
struct C_BaseAnimating;
struct CBaseAnimatingEasings_t;
struct CInteractionManager;
struct C_CombatWeaponClone;
struct CAttributeContainer;
struct PlayerSlot_t;
struct DACAbilityID_t;
struct CountdownTimer;
struct UnderlordID_t;
struct C_PlayerLocalData;
struct C_PlayerState;
struct C_CommandContext;
struct TimedEvent;
struct C_fogplayerparams_t;

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x48
// 
// MNetworkVarNames "ModelConfigHandle_t m_Handle"
// MNetworkVarNames "string_t m_Name"
// MNetworkVarNames "CHandle< CBaseModelEntity > m_AssociatedEntities"
// MNetworkVarNames "string_t m_AssociatedEntityNames"
struct ActiveModelConfig_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	ModelConfigHandle_t m_Handle; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_Name; // 0x10	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_BaseModelEntity > > m_AssociatedEntities; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MNetworkVarNames "int m_nChainIndex"
// MNetworkVarNames "int m_nRuleIndex"
// MNetworkVarNames "Vector m_vTargetPosition"
// MNetworkVarNames "Quaternion m_qTargetOrientation"
// MNetworkVarNames "float m_flWeight"
// MNetworkVarNames "bool m_bIsValid"
class CNetworkedIKProceduralTargetContext
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x14]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nChainIndex; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nRuleIndex; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vTargetPosition; // 0x1c	
	// MNetworkEnable
	// MNetworkEnable
	Quaternion m_qTargetOrientation; // 0x28	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "96"
	float m_flWeight; // 0x38	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsValid; // 0x3c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbc0
// Has VTable
// 
// MNetworkVarNames "bool m_NetBoolVariables"
// MNetworkVarNames "byte m_NetByteVariables"
// MNetworkVarNames "int32 m_NetIntVariables"
// MNetworkVarNames "float m_NetFloatVariables"
// MNetworkVarNames "Vector m_NetVectorVariables"
// MNetworkVarNames "Quaternion m_NetQuaternionVariables"
// MNetworkVarNames "bool m_PredNetBoolVariables"
// MNetworkVarNames "byte m_PredNetByteVariables"
// MNetworkVarNames "int32 m_PredNetIntVariables"
// MNetworkVarNames "float m_PredNetFloatVariables"
// MNetworkVarNames "Vector m_PredNetVectorVariables"
// MNetworkVarNames "Quaternion m_PredNetQuaternionVariables"
// MNetworkVarNames "float m_flLastTeleportTime"
class CAnimGraphNetworkedVariables
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_BoolVariables"
	CUtlVector< bool > m_NetBoolVariables; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_ByteVariables"
	CUtlVector< uint8 > m_NetByteVariables; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_IntVariables"
	CUtlVector< int32 > m_NetIntVariables; // 0x38	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_FloatVariables"
	CUtlVector< float32 > m_NetFloatVariables; // 0x50	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_VectorVariables"
	CUtlVector< Vector > m_NetVectorVariables; // 0x68	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_QuaternionVariables"
	CUtlVector< Quaternion > m_NetQuaternionVariables; // 0x80	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredBoolVariables"
	CUtlVector< bool > m_PredNetBoolVariables; // 0x98	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	CUtlVector< uint8 > m_PredNetByteVariables; // 0xb0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	CUtlVector< int32 > m_PredNetIntVariables; // 0xc8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	CUtlVector< float32 > m_PredNetFloatVariables; // 0xe0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	CUtlVector< Vector > m_PredNetVectorVariables; // 0xf8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	CUtlVector< Quaternion > m_PredNetQuaternionVariables; // 0x110	
	CUtlVector< bool > m_LocalPredBoolVariables; // 0x128	
	CUtlVector< uint8 > m_LocalPredByteVariables; // 0x140	
	CUtlVector< int32 > m_LocalPredIntVariables; // 0x158	
	CUtlVector< float32 > m_LocalPredFloatVariables; // 0x170	
	CUtlVector< Vector > m_LocalPredVectorVariables; // 0x188	
	CUtlVector< Quaternion > m_LocalPredQuaternionVariables; // 0x1a0	
private:
	[[maybe_unused]] uint8_t __pad01b8[0x9fc]; // 0x1b8
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	float m_flLastTeleportTime; // 0xbb4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
class C_BaseFlex::Emphasized_Phoneme
{
public:
	CUtlString m_sClassName; // 0x0	
	float m_flAmount; // 0x18	
	bool m_bRequired; // 0x1c	
	bool m_bBasechecked; // 0x1d	
	bool m_bValid; // 0x1e	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x358
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0	
	int32_t command_number; // 0x350	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hTargetEntity"
// MNetworkVarNames "bool m_bState"
// MNetworkVarNames "bool m_bAlwaysUpdate"
// MNetworkVarNames "float32 m_flLightFOV"
// MNetworkVarNames "bool m_bEnableShadows"
// MNetworkVarNames "bool m_bSimpleProjection"
// MNetworkVarNames "bool m_bLightOnlyTarget"
// MNetworkVarNames "bool m_bLightWorld"
// MNetworkVarNames "bool m_bCameraSpace"
// MNetworkVarNames "float32 m_flBrightnessScale"
// MNetworkVarNames "Color m_LightColor"
// MNetworkVarNames "float32 m_flIntensity"
// MNetworkVarNames "float32 m_flLinearAttenuation"
// MNetworkVarNames "float32 m_flQuadraticAttenuation"
// MNetworkVarNames "bool m_bVolumetric"
// MNetworkVarNames "float32 m_flVolumetricIntensity"
// MNetworkVarNames "float32 m_flNoiseStrength"
// MNetworkVarNames "float32 m_flFlashlightTime"
// MNetworkVarNames "uint32 m_nNumPlanes"
// MNetworkVarNames "float32 m_flPlaneOffset"
// MNetworkVarNames "float32 m_flColorTransitionTime"
// MNetworkVarNames "float32 m_flAmbient"
// MNetworkVarNames "char m_SpotlightTextureName"
// MNetworkVarNames "int32 m_nSpotlightTextureFrame"
// MNetworkVarNames "uint32 m_nShadowQuality"
// MNetworkVarNames "float32 m_flNearZ"
// MNetworkVarNames "float32 m_flFarZ"
// MNetworkVarNames "float32 m_flProjectionSize"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "bool m_bFlipHorizontal"
class CProjectedTextureBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetEntity; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bState; // 0x10	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x11	
private:
	[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightFOV; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableShadows; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x19	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x1a	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightWorld; // 0x1b	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCameraSpace; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flBrightnessScale; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	Color m_LightColor; // 0x24	
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x28	
	// MNetworkEnable
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x2c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x30	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bVolumetric; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x38	
	// MNetworkEnable
	// MNetworkEnable
	float m_flNoiseStrength; // 0x3c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFlashlightTime; // 0x40	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x44	
	// MNetworkEnable
	// MNetworkEnable
	float m_flPlaneOffset; // 0x48	
	// MNetworkEnable
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x4c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flAmbient; // 0x50	
	// MNetworkEnable
	// MNetworkEnable
	char m_SpotlightTextureName[260]; // 0x54	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x158	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	uint32_t m_nShadowQuality; // 0x15c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "500.000000"
	// MNetworkEncodeFlags "1"
	float m_flNearZ; // 0x160	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1500.000000"
	// MNetworkEncodeFlags "1"
	float m_flFarZ; // 0x164	
	// MNetworkEnable
	// MNetworkEnable
	float m_flProjectionSize; // 0x168	
	// MNetworkEnable
	// MNetworkEnable
	float m_flRotation; // 0x16c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x170	
	
	// Static fields:
	static float &Get_m_flVisibleBBoxMinHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CProjectedTextureBase")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MNetworkExcludeByUserGroup "FogController"
// MNetworkVarNames "uint8 m_chAreaBits"
// MNetworkVarNames "uint8 m_chAreaPortalBits"
// MNetworkVarNames "float32 m_flFOVRate"
// MNetworkVarNames "uint32 m_iHideHUD"
// MNetworkVarNames "uint32 m_nDuckTimeMsecs"
// MNetworkVarNames "uint32 m_nDuckJumpTimeMsecs"
// MNetworkVarNames "uint32 m_nJumpTimeMsecs"
// MNetworkVarNames "float32 m_flFallVelocity"
// MNetworkVarNames "float32 m_flStepSize"
// MNetworkVarNames "bool m_bDucked"
// MNetworkVarNames "bool m_bDucking"
// MNetworkVarNames "bool m_bInDuckJump"
// MNetworkVarNames "bool m_bDrawViewmodel"
// MNetworkVarNames "bool m_bWearingSuit"
// MNetworkVarNames "bool m_bPoisoned"
// MNetworkVarNames "bool m_bAllowAutoMovement"
// MNetworkVarNames "bool m_bSlowMovement"
// MNetworkVarNames "bool m_bAutoAimTarget"
// MNetworkVarNames "sky3dparams_t m_skybox3d"
// MNetworkVarNames "audioparams_t m_audio"
// MNetworkVarNames "CHandle<C_PostProcessingVolume> m_PostProcessingVolumes"
class C_PlayerLocalData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_NetworkVar_PathIndex; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0xe]; // 0xa
public:
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_chAreaBits[32]; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_chAreaPortalBits[24]; // 0x38	
	int32_t m_nStepside; // 0x50	
	int32_t m_nOldButtons; // 0x54	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFOVRate; // 0x58	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	uint32_t m_iHideHUD; // 0x5c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	uint32_t m_nDuckTimeMsecs; // 0x60	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nDuckJumpTimeMsecs; // 0x64	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nJumpTimeMsecs; // 0x68	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	float m_flFallVelocity; // 0x6c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkEncodeFlags "2"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "128.000000"
	float m_flStepSize; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
public:
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngle; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0084[0xc]; // 0x84
public:
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngleVel; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad009c[0xc]; // 0x9c
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucked; // 0xa8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucking; // 0xa9	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInDuckJump; // 0xaa	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDrawViewmodel; // 0xab	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWearingSuit; // 0xac	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoisoned; // 0xad	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowAutoMovement; // 0xae	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSlowMovement; // 0xaf	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutoAimTarget; // 0xb0	
private:
	[[maybe_unused]] uint8_t __pad00b1[0x7]; // 0xb1
public:
	// MNetworkEnable
	// MNetworkEnable
	sky3dparams_t m_skybox3d; // 0xb8	
	// MNetworkEnable
	// MNetworkEnable
	audioparams_t m_audio; // 0x140	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01d0[0x4]; // 0x1d0
public:
	bool m_bInLanding; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	float m_flLandingTime; // 0x1d8	
	Vector m_vecClientBaseVelocity; // 0x1dc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x38
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float32 m_flParameters"
struct PostProcessParameters_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flParameters[12]; // 0x8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
class C_RopeKeyframe::CPhysicsDelegate
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	C_RopeKeyframe* m_pKeyframe; // 0x8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has Trivial Constructor
// Has Trivial Destructor
struct C_SceneEntity__QueuedEvents_t
{
public:
	float starttime; // 0x0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x308
// Has VTable
class CFlashlightEffect
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool m_bIsOn; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0xf]; // 0x9
public:
	bool m_bMuzzleFlashEnabled; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	float m_flMuzzleFlashBrightness; // 0x1c	
	Quaternion m_quatMuzzleFlashOrientation; // 0x20	
	Vector m_vecMuzzleFlashOrigin; // 0x30	
	float m_flDT; // 0x3c	
	float m_flFov; // 0x40	
	float m_flFarZ; // 0x44	
	float m_flLinearAtten; // 0x48	
	bool m_bCastsShadows; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	float m_flCurrentPullBackDist; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x58	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x60	
	CWeakHandle< InfoForResourceTypeCTextureBase > m_hCurrentFlashlightTexture; // 0x68	
	char m_textureName[64]; // 0x70	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x308
// Has VTable
class CHeadlightEffect : public CFlashlightEffect
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
class CInterpolatedValue
{
public:
	float m_flStartTime; // 0x0	
	float m_flEndTime; // 0x4	
	float m_flStartValue; // 0x8	
	float m_flEndValue; // 0xc	
	int32_t m_nInterpType; // 0x10	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
class CGlowSprite
{
public:
	Vector m_vColor; // 0x0	
	float m_flHorzSize; // 0xc	
	float m_flVertSize; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CGlowOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_vPos; // 0x8	
	bool m_bDirectional; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	Vector m_vDirection; // 0x18	
	bool m_bInSky; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	float m_skyObstructionScale; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// -> m_vColor - 0x30
	// -> m_flHorzSize - 0x3c
	// -> m_flVertSize - 0x40
	// -> m_hMaterial - 0x48
	CGlowSprite m_Sprites[4]; // 0x30	
	int32_t m_nSprites; // 0xb0	
	float m_flProxyRadius; // 0xb4	
	float m_flHDRColorScale; // 0xb8	
	float m_flGlowObstructionScale; // 0xbc	
	bool m_bCacheGlowObstruction; // 0xc0	
	bool m_bCacheSkyObstruction; // 0xc1	
	int16_t m_bActivated; // 0xc2	
	int16_t m_ListIndex; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
public:
	int32_t m_queryHandle; // 0xc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0	
	float m_fNextEvent; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class CViewAngleKeyFrame
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	QAngle m_vecAngles; // 0x8	
	float m_flTime; // 0x14	
	int32_t m_iFlags; // 0x18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0x60
// Has Trivial Destructor
class JiggleData
{
public:
	int32_t bone; // 0x0	
	int32_t id; // 0x4	
	float lastUpdate; // 0x8	
	Vector basePos; // 0xc	
	Vector baseLastPos; // 0x18	
	Vector baseVel; // 0x24	
	Vector baseAccel; // 0x30	
	Vector tipPos; // 0x3c	
	Vector tipVel; // 0x48	
	Vector tipAccel; // 0x54	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
class CJiggleBones
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has VTable
class C_PlayerState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool deadflag; // 0x8	
	bool hltv; // 0x9	
private:
	[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
public:
	QAngle v_angle; // 0xc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x98
class CDecalInfo
{
public:
	float m_flAnimationScale; // 0x0	
	float m_flAnimationLifeSpan; // 0x4	
	float m_flPlaceTime; // 0x8	
	float m_flFadeStartTime; // 0xc	
	float m_flFadeDuration; // 0x10	
	int32_t m_nVBSlot; // 0x14	
	int32_t m_nBoneIndex; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0xc]; // 0x1c
public:
	CDecalInfo* m_pNext; // 0x28	
	CDecalInfo* m_pPrev; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0038[0x58]; // 0x38
public:
	int32_t m_nDecalMaterialIndex; // 0x90	
	
	// Datamap fields:
	// void m_decalEvent; // 0x38
	// void m_hProjectedDecal; // 0x20
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct C_CEnvWindShared__WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0	
	float m_flAveWindSpeed; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct C_CEnvWindShared__WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0	
	float m_flWindSpeedVariation; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x240
// Has VTable
// 
// MNetworkVarNames "float32 m_flStartTime"
// MNetworkVarNames "uint32 m_iWindSeed"
// MNetworkVarNames "uint16 m_iMinWind"
// MNetworkVarNames "uint16 m_iMaxWind"
// MNetworkVarNames "int32 m_windRadius"
// MNetworkVarNames "uint16 m_iMinGust"
// MNetworkVarNames "uint16 m_iMaxGust"
// MNetworkVarNames "float32 m_flMinGustDelay"
// MNetworkVarNames "float32 m_flMaxGustDelay"
// MNetworkVarNames "float32 m_flGustDuration"
// MNetworkVarNames "uint16 m_iGustDirChange"
// MNetworkVarNames "Vector m_location"
// MNetworkVarNames "uint16 m_iInitialWindDir"
// MNetworkVarNames "float32 m_flInitialWindSpeed"
class C_CEnvWindShared
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinWind; // 0x10	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxWind; // 0x12	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "14"
	int32_t m_windRadius; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinGust; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxGust; // 0x1a	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	float m_flGustDuration; // 0x24	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iGustDirChange; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002a[0x2]; // 0x2a
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_location; // 0x2c	
	int32_t m_iszGustSound; // 0x38	
	int32_t m_iWindDir; // 0x3c	
	float m_flWindSpeed; // 0x40	
	Vector m_currentWindVector; // 0x44	
	Vector m_CurrentSwayVector; // 0x50	
	Vector m_PrevSwayVector; // 0x5c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iInitialWindDir; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006a[0x2]; // 0x6a
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flInitialWindSpeed; // 0x6c	
	float m_flVariationTime; // 0x70	
	float m_flSwayTime; // 0x74	
	float m_flSimTime; // 0x78	
	float m_flSwitchTime; // 0x7c	
	float m_flAveWindSpeed; // 0x80	
	bool m_bGusting; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	float m_flWindAngleVariation; // 0x88	
	float m_flWindSpeedVariation; // 0x8c	
	CEntityIndex m_iEntIndex; // 0x90	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class C_GameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x30
// Has VTable
class C_CHintMessageQueue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float m_tmMessageEnd; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlVector< CHintMessage* > m_messages; // 0x10	
	C_BasePlayer* m_pPlayer; // 0x28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
class C_MultiplayRules : public C_GameRules
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x10]; // 0x8
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "CHandle< CFogController> m_hCtrl"
struct C_fogplayerparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle< C_FogController > m_hCtrl; // 0x8	
	float m_flTransitionTime; // 0xc	
	Color m_OldColor; // 0x10	
	float m_flOldStart; // 0x14	
	float m_flOldEnd; // 0x18	
	float m_flOldMaxDensity; // 0x1c	
	float m_flOldHDRColorScale; // 0x20	
	float m_flOldFarZ; // 0x24	
	Color m_NewColor; // 0x28	
	float m_flNewStart; // 0x2c	
	float m_flNewEnd; // 0x30	
	float m_flNewMaxDensity; // 0x34	
	float m_flNewHDRColorScale; // 0x38	
	float m_flNewFarZ; // 0x3c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
class C_CSequenceTransitioner
{
public:
	CUtlVector< CAnimationLayer > m_animationQueue; // 0x0	
	bool m_bIsInSimulation; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	float m_flSimOrRenderTime; // 0x1c	
	float m_flInterpolatedTime; // 0x20	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x238
// Has VTable
class C_CSequenceTransitioner2
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CNetworkedSequenceOperation m_currentOp; // 0x8	
	float m_flCurrentPlaybackRate; // 0x48	
	float m_flCurrentAnimTime; // 0x4c	
	TransitioningLayer_t m_transitioningLayers[4]; // 0x50	
	C_BaseAnimatingController* m_pOwner; // 0x1d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
class C_SingleplayRules : public C_GameRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MNetworkVarNames "attrib_definition_index_t m_iAttributeDefinitionIndex"
// MNetworkVarNames "float m_flValue"
class C_EconItemAttribute
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x12]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iAttributeDefinitionIndex; // 0x12	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; // 0x14	
};

// Registered binary: client.dll (project 'client')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
struct C_EconEntity__AttachedParticleInfo_t
{
public:
	ParticleIndex_t m_nAttachedParticleIndex; // 0x0	
	CUtlStringToken m_customType; // 0x4	
	bool m_bShouldDestroyImmediately; // 0x8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10
// Has Trivial Constructor
// Has Trivial Destructor
struct C_EconEntity__AttachedModelData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_iModelDisplayFlags; // 0x8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class CGlobalLightBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bSpotLight; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	Vector m_SpotLightOrigin; // 0x14	
	QAngle m_SpotLightAngles; // 0x20	
	Vector m_ShadowDirection; // 0x2c	
	Vector m_AmbientDirection; // 0x38	
	Vector m_SpecularDirection; // 0x44	
	Vector m_InspectorSpecularDirection; // 0x50	
	float m_flSpecularPower; // 0x5c	
	float m_flSpecularIndependence; // 0x60	
	Color m_SpecularColor; // 0x64	
	bool m_bStartDisabled; // 0x68	
	bool m_bEnabled; // 0x69	
	Color m_LightColor; // 0x6a	
	Color m_HeroLightColor; // 0x6e	
	Color m_AOGradientBottomColor; // 0x72	
	bool m_bEnableRainFx; // 0x76	
	Color m_AmbientColor1; // 0x77	
	Color m_AmbientColor2; // 0x7b	
	Color m_AmbientColor3; // 0x7f	
private:
	[[maybe_unused]] uint8_t __pad0083[0x1]; // 0x83
public:
	float m_flSunDistance; // 0x84	
	float m_flFOV; // 0x88	
	float m_flNearZ; // 0x8c	
	float m_flFarZ; // 0x90	
	bool m_bEnableShadows; // 0x94	
	bool m_bOldEnableShadows; // 0x95	
	bool m_bBackgroundClearNotRequired; // 0x96	
private:
	[[maybe_unused]] uint8_t __pad0097[0x1]; // 0x97
public:
	float m_flCloudScale; // 0x98	
	float m_flCloud1Speed; // 0x9c	
	float m_flCloud1Direction; // 0xa0	
	float m_flCloud2Speed; // 0xa4	
	float m_flCloud2Direction; // 0xa8	
	float m_flAmbientScale1; // 0xac	
	float m_flAmbientScale2; // 0xb0	
	float m_flGroundScale; // 0xb4	
	float m_flLightScale; // 0xb8	
	float m_flHeroLightScale; // 0xbc	
	float m_flRainInnerRadius; // 0xc0	
	float m_flRainOuterRadius; // 0xc4	
	float m_flRainInnerAmount; // 0xc8	
	float m_flFoWDarkness; // 0xcc	
	bool m_bEnableSeparateSkyboxFog; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
public:
	Vector m_vFowColor; // 0xd4	
	Vector m_ViewOrigin; // 0xe0	
	QAngle m_ViewAngles; // 0xec	
	float m_flViewFoV; // 0xf8	
	Vector m_WorldPoints[8]; // 0xfc	
private:
	[[maybe_unused]] uint8_t __pad015c[0x38c]; // 0x15c
public:
	Vector2D m_vFogOffsetLayer0; // 0x4e8	
	Vector2D m_vFogOffsetLayer1; // 0x4f0	
	CHandle< C_BaseEntity > m_hEnvWind; // 0x4f8	
	CHandle< C_BaseEntity > m_hEnvSky; // 0x4fc	
	float m_fSmoothedAmount; // 0x500	
	float m_fSlowSmoothedAmount; // 0x504	
	
	// Datamap fields:
	// float m_flAmbientShadowAmount; // 0x4e4
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x190
// Has VTable
// 
// MNetworkVarNames "Color m_LightColor"
// MNetworkVarNames "float m_flIntensity"
// MNetworkVarNames "float m_flLightSize"
// MNetworkVarNames "float m_flSpotFoV"
// MNetworkVarNames "QAngle m_vLightDirection"
// MNetworkVarNames "float m_flStartFalloff"
// MNetworkVarNames "float m_flDistanceFalloff"
// MNetworkVarNames "uint m_nFlags"
// MNetworkVarNames "char m_ProjectedTextureName"
class CDeferredLightBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "32"
	Color m_LightColor; // 0x10	
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x14	
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightSize; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	float m_flSpotFoV; // 0x1c	
	// MNetworkEnable
	// MNetworkEnable
	QAngle m_vLightDirection; // 0x20	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartFalloff; // 0x2c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDistanceFalloff; // 0x30	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nFlags; // 0x34	
	// MNetworkEnable
	// MNetworkEnable
	char m_ProjectedTextureName[260]; // 0x38	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x3f8
// Has VTable
class CLightInfoBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	Vector2D m_origin2D; // 0x10	
	Color m_Color[2]; // 0x18	
	float m_LightScale[2]; // 0x20	
	Color m_HeroColor[2]; // 0x28	
	float m_HeroLightScale[2]; // 0x30	
	Color m_AOGradientBottomColor[2]; // 0x38	
	bool m_bEnableRainFx; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	float m_flRainInnerRadius; // 0x44	
	float m_flRainOuterRadius; // 0x48	
	float m_flRainInnerAmount; // 0x4c	
	Color m_AmbientColor[2]; // 0x50	
	float m_AmbientScale[2]; // 0x58	
	Color m_ShadowColor[2]; // 0x60	
	Color m_ShadowSecondaryColor[2]; // 0x68	
	float m_ShadowScale[2]; // 0x70	
	float m_ShadowGroundScale[2]; // 0x78	
	Color m_SpecularColor[2]; // 0x80	
	float m_flSpecularPower[2]; // 0x88	
	float m_flSpecularIndependence[2]; // 0x90	
	Vector m_SpecularDirection[2]; // 0x98	
	Vector m_InspectorSpecularDirection[2]; // 0xb0	
	Vector m_LightDirection[2]; // 0xc8	
	Vector m_AmbientDirection[2]; // 0xe0	
	Color m_FogColor[2]; // 0xf8	
	float m_FogStart[2]; // 0x100	
	float m_FogEnd[2]; // 0x108	
	float m_HeightFogValue[2]; // 0x110	
	Color m_HeightFogColor[2]; // 0x118	
	float m_FoWDarkness[2]; // 0x120	
	float m_FoWColorR[2]; // 0x128	
	float m_FoWColorG[2]; // 0x130	
	float m_FoWColorB[2]; // 0x138	
	Color m_InspectorViewFogColor[2]; // 0x140	
	QAngle m_windAngle; // 0x148	
	float m_flWindAmount[2]; // 0x154	
	float m_flMinWind; // 0x15c	
	float m_flMaxWind; // 0x160	
	float m_flMinGust; // 0x164	
	float m_flMaxGust; // 0x168	
	float m_flMinGustDelay; // 0x16c	
	float m_flMaxGustDelay; // 0x170	
	float m_flGustDuration; // 0x174	
	float m_flGustDirChange; // 0x178	
	QAngle m_skyboxAngle[2]; // 0x17c	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; // 0x194
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyboxMaterial[2]; // 0x198	
	Color m_vSkyboxTintColor[2]; // 0x1a8	
	uint8_t m_nSkyboxFogType; // 0x1b0	
private:
	[[maybe_unused]] uint8_t __pad01b1[0x3]; // 0x1b1
public:
	float m_flSkyboxAngularFogMaxEnd; // 0x1b4	
	float m_flSkyboxAngularFogMaxStart; // 0x1b8	
	float m_flSkyboxAngularFogMinStart; // 0x1bc	
	float m_flSkyboxAngularFogMinEnd; // 0x1c0	
	Vector4D m_vAngularParams; // 0x1c4	
	Color m_vHeightFogColor[2]; // 0x1d4	
	float m_flFogMaxZ; // 0x1dc	
	float m_flFogDensity[2]; // 0x1e0	
	float m_flFogFalloff; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01ec[0x4]; // 0x1ec
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTexture0; // 0x1f0	
	float m_flFogLayer0Rotation; // 0x1f8	
	float m_flFogLayer0Scale; // 0x1fc	
	float m_flFoglayer0ScrollU[2]; // 0x200	
	float m_flFoglayer0ScrollV[2]; // 0x208	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTexture1; // 0x210	
	float m_flFogLayer1Rotation; // 0x218	
	float m_flFogLayer1Scale; // 0x21c	
	float m_flFoglayer1ScrollU[2]; // 0x220	
	float m_flFoglayer1ScrollV[2]; // 0x228	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTextureOpacity; // 0x230	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hWaterFlowMapTexture; // 0x238	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogFlowMapTexture; // 0x240	
	float m_flFogExclusionInnerRadius; // 0x248	
	float m_flFogExclusionHeightBias; // 0x24c	
private:
	[[maybe_unused]] uint8_t __pad0250[0x4]; // 0x250
public:
	float m_flCausticSpeedScale; // 0x254	
	float m_flCausticAmplitudeScale; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad025c[0x4]; // 0x25c
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hColorWarp; // 0x260	
	float m_flColorWarpBlendToFull; // 0x268	
	float m_fInnerRadius; // 0x26c	
	float m_fOuterRadius; // 0x270	
	float m_flLightning_specular_pow_scale_min; // 0x274	
	float m_flLightning_specular_pow_scale_max; // 0x278	
	Color m_lightningColor; // 0x27c	
	float m_flLightningIntensityMin; // 0x280	
	float m_flLightningIntensityMax; // 0x284	
	float m_flLightningElevation; // 0x288	
	float m_flLightningSpecularIntensity; // 0x28c	
	float m_flFarZOverride; // 0x290	
	float m_flAmbientShadowAmount; // 0x294	
	int32_t m_nWeatherType; // 0x298	
private:
	[[maybe_unused]] uint8_t __pad029c[0x4]; // 0x29c
public:
	CUtlString m_WeatherEffect; // 0x2a0	
	float m_flLightning_period_min; // 0x2a8	
	float m_flLightning_period_max; // 0x2ac	
	float m_flLightning_duration_min; // 0x2b0	
	float m_flLightning_duration_max; // 0x2b4	
	float m_flLightning_fluctuation_min; // 0x2b8	
	float m_flLightning_fluctuation_max; // 0x2bc	
	char m_pszLightningSound[260]; // 0x2c0	
	float m_flNextLightningStartTime; // 0x3c4	
	float m_flNextLightningEndTime; // 0x3c8	
	float m_flLightningFluctuationTimeStart; // 0x3cc	
	float m_flLightningFluctuationTimeEnd; // 0x3d0	
	float m_flLightningNumFluctuations; // 0x3d4	
	float m_flNextLightningSoundTime; // 0x3d8	
	bool m_bPlayLightingSound; // 0x3dc	
private:
	[[maybe_unused]] uint8_t __pad03dd[0x3]; // 0x3dd
public:
	float m_flLightningEventMagnitude; // 0x3e0	
	float m_flLightningScale; // 0x3e4	
	float m_flLightningFluctuation; // 0x3e8	
	float m_flLightningAngle; // 0x3ec	
	float m_flLightningEventPercentage; // 0x3f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
struct GCConsumedIDs_t
{
public:
	CUtlVector< item_definition_index_t > m_vecIDs; // 0x0	
};

// Registered binary: client.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "CEntityIdentity * m_pEntity"
// MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
class CEntityInstance : public IHandleEntity
{
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8	
	// MNetworkEnable
	// MNetworkPriority "112"
	CEntityIdentity* m_pEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	// MNetworkDisable
	CUtlStringToken m_worldGroupId; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0xc]; // 0x24
public:
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; // 0x30	
};

// Registered binary: client.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
class CScriptComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x28]; // 0x8
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x38
// Has VTable
// Is Abstract
class C_GameEntity : public CEntityInstance
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x450
// Has VTable
// 
// MNetworkOverride "m_baseLayer.m_hSequence"
// MNetworkVarNames "CNetworkedSequenceOperation m_baseLayer"
// MNetworkVarNames "float m_flPoseParameter"
// MNetworkVarNames "bool m_bClientSideAnimation"
// MNetworkVarNames "int m_nNewSequenceParity"
// MNetworkVarNames "int m_nResetEventsParity"
class C_BaseAnimatingController : public CSkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18	
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	// MNetworkDisable
	float m_flGroundSpeed; // 0x5c	
	// MNetworkDisable
	float m_flLastEventCycle; // 0x60	
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0x64	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4.000000"
	// MNetworkMaxValue "12.000000"
	// MNetworkEncodeFlags "5"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x68	
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x80	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float m_flPoseParameter[24]; // 0x84	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0xe4	
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0xe5	
	// MNetworkDisable
	uint8_t m_nPrevNewSequenceParity; // 0xe6	
	// MNetworkDisable
	uint8_t m_nPrevResetEventsParity; // 0xe7	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0xe8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	int32_t m_nResetEventsParity; // 0xec	
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0xf0	
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0xf4	
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0xf8	
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0xfc	
private:
	[[maybe_unused]] uint8_t __pad0100[0x28]; // 0x100
public:
	// MNetworkDisable
	// -> m_currentOp - 0x130
	// -> m_flCurrentPlaybackRate - 0x170
	// -> m_flCurrentAnimTime - 0x174
	// -> m_transitioningLayers[4] - 0x178
	// -> m_pOwner - 0x2f8
	C_CSequenceTransitioner2 m_SequenceTransitioner; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad0360[0x40]; // 0x360
public:
	// MNetworkDisable
	HSequence m_hLastAnimEventSequence; // 0x3a0	
	// MNetworkDisable
	uint32_t m_ClientSideAnimationListHandle; // 0x3a4	
	
	// Datamap fields:
	// void m_pAnimGraphInstance; // 0x360
	// float m_flCachedSequenceCycleRate; // 0x118
	// float m_flCachedGroundSpeed; // 0x11c
	// float m_flCachedOneMinusLastVisibleCycle; // 0x120
	// bool m_bModelHasNoPoseParams; // 0x124
	// bool m_bNotifyWhenSequenceFinished; // 0x125
	// void m_iv_AnimOpHistory; // 0x3a8
	// void m_iv_flPoseParameter; // 0x3f8
	// bool useClientSideAnimation; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4b8
// Has VTable
// 
// MNetworkVarNames "CAnimationLayer m_AnimOverlay"
class C_BaseAnimatingOverlayController : public C_BaseAnimatingController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0x450	
	
	// Datamap fields:
	// void m_iv_AnimOverlay; // 0x498
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CBodyComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	CGameSceneNode* m_pSceneNode; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0010[0x10]; // 0x10
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x20	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c0
// Has VTable
// 
// MNetworkVarNames "CGameSceneNode m_sceneNode"
class CBodyComponentPoint : public CBodyComponent
{
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; // 0x40	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x1a0	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x520
// Has VTable
// 
// MNetworkVarNames "CSkeletonInstance m_skeletonInstance"
class CBodyComponentSkeletonInstance : public CBodyComponent
{
public:
	// MNetworkEnable
	CSkeletonInstance m_skeletonInstance; // 0x40	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x500	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has VTable
class CHitboxComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[1]->m_instance);};
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x190
// Has VTable
// 
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "float m_flBrightnessMult"
// MNetworkVarNames "float m_flRange"
// MNetworkVarNames "float m_flFalloff"
// MNetworkVarNames "float m_flAttenuation0"
// MNetworkVarNames "float m_flAttenuation1"
// MNetworkVarNames "float m_flAttenuation2"
// MNetworkVarNames "float m_flTheta"
// MNetworkVarNames "float m_flPhi"
// MNetworkVarNames "CUtlStringToken m_lightCookie"
// MNetworkVarNames "int m_nCascades"
// MNetworkVarNames "int m_nCastShadows"
// MNetworkVarNames "int m_nShadowWidth"
// MNetworkVarNames "int m_nShadowHeight"
// MNetworkVarNames "bool m_bRenderDiffuse"
// MNetworkVarNames "int m_nRenderSpecular"
// MNetworkVarNames "bool m_bRenderTransmissive"
// MNetworkVarNames "float m_flOrthoLightWidth"
// MNetworkVarNames "float m_flOrthoLightHeight"
// MNetworkVarNames "int m_nStyle"
// MNetworkVarNames "CUtlString m_Pattern"
// MNetworkVarNames "float m_flShadowCascadeDistance0"
// MNetworkVarNames "float m_flShadowCascadeDistance1"
// MNetworkVarNames "float m_flShadowCascadeDistance2"
// MNetworkVarNames "float m_flShadowCascadeDistance3"
// MNetworkVarNames "int m_nShadowCascadeResolution0"
// MNetworkVarNames "int m_nShadowCascadeResolution1"
// MNetworkVarNames "int m_nShadowCascadeResolution2"
// MNetworkVarNames "int m_nShadowCascadeResolution3"
// MNetworkVarNames "int m_nBakeLightIndex"
// MNetworkVarNames "float m_flBakeLightIndexScale"
// MNetworkVarNames "bool m_bUsesIndexedBakedLighting"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "int m_nPriority"
// MNetworkVarNames "string_t m_LightGroups"
// MNetworkVarNames "int m_nDirectLight"
// MNetworkVarNames "int m_nIndirectLight"
// MNetworkVarNames "float m_flFadeMinDist"
// MNetworkVarNames "float m_flFadeMaxDist"
// MNetworkVarNames "float m_flShadowFadeMinDist"
// MNetworkVarNames "float m_flShadowFadeMaxDist"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFlicker"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
// MNetworkVarNames "float m_flPrecomputedMaxRange"
// MNetworkVarNames "Vector m_vPrecomputePosition"
// MNetworkVarNames "Vector m_vPrecomputeDirection"
// MNetworkVarNames "Vector m_vPrecomputeUp"
// MNetworkVarNames "int m_nFogLightingMode"
// MNetworkVarNames "float m_flFogContributionStength"
// MNetworkVarNames "float m_flNearClipPlane"
// MNetworkVarNames "Color m_SkyColor"
// MNetworkVarNames "float m_flSkyIntensity"
// MNetworkVarNames "bool m_bLowerHemisphereIsBlack"
// MNetworkVarNames "Color m_SkyAmbientBounce"
// MNetworkVarNames "bool m_bMixedShadows"
// MNetworkVarNames "float m_flLightStyleStartTime"
class CLightComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x40]; // 0x8
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0060[0x15]; // 0x60
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_Color; // 0x75	
private:
	[[maybe_unused]] uint8_t __pad0079[0x3]; // 0x79
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightness; // 0x7c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessMult; // 0x80	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRangeChanged"
	float m_flRange; // 0x84	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFalloff; // 0x88	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation0; // 0x8c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation1; // 0x90	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation2; // 0x94	
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flTheta; // 0x98	
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flPhi; // 0x9c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlStringToken m_lightCookie; // 0xa0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascades; // 0xa4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	int32_t m_nCastShadows; // 0xa8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowWidth; // 0xac	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowHeight; // 0xb0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderDiffuse; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00b5[0x3]; // 0xb5
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nRenderSpecular; // 0xb8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderTransmissive; // 0xbc	
private:
	[[maybe_unused]] uint8_t __pad00bd[0x3]; // 0xbd
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flOrthoLightWidth; // 0xc0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightShapeChanged"
	float m_flOrthoLightHeight; // 0xc4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nStyle; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlString m_Pattern; // 0xd0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance0; // 0xd8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance1; // 0xdc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance2; // 0xe0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance3; // 0xe4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution0; // 0xe8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution1; // 0xec	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution2; // 0xf0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution3; // 0xf4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nBakeLightIndex; // 0xf8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBakeLightIndexScale; // 0xfc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bUsesIndexedBakedLighting; // 0x100	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderToCubemaps; // 0x101	
private:
	[[maybe_unused]] uint8_t __pad0102[0x2]; // 0x102
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nPriority; // 0x104	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlSymbolLarge m_LightGroups; // 0x108	
	// MNetworkEnable
	int32_t m_nDirectLight; // 0x110	
	// MNetworkEnable
	int32_t m_nIndirectLight; // 0x114	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; // 0x118	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; // 0x11c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; // 0x120	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; // 0x124	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; // 0x128	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; // 0x129	
private:
	[[maybe_unused]] uint8_t __pad012a[0x2]; // 0x12a
public:
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; // 0x12c	
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; // 0x138	
	// MNetworkEnable
	float m_flPrecomputedMaxRange; // 0x144	
	// MNetworkEnable
	Vector m_vPrecomputePosition; // 0x148	
	// MNetworkEnable
	Vector m_vPrecomputeDirection; // 0x154	
	// MNetworkEnable
	Vector m_vPrecomputeUp; // 0x160	
	// MNetworkEnable
	int32_t m_nFogLightingMode; // 0x16c	
	// MNetworkEnable
	float m_flFogContributionStength; // 0x170	
	// MNetworkEnable
	float m_flNearClipPlane; // 0x174	
	// MNetworkEnable
	Color m_SkyColor; // 0x178	
	// MNetworkEnable
	float m_flSkyIntensity; // 0x17c	
	// MNetworkEnable
	bool m_bLowerHemisphereIsBlack; // 0x180	
	// MNetworkEnable
	Color m_SkyAmbientBounce; // 0x181	
	// MNetworkEnable
	// MNetworkChangeCallback "MixedShadowsChanged"
	bool m_bMixedShadows; // 0x185	
private:
	[[maybe_unused]] uint8_t __pad0186[0x2]; // 0x186
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flLightStyleStartTime; // 0x188	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[1]->m_instance);};
	
	// Datamap fields:
	// bool m_bShapeChanged; // 0x74
	// SHIM m_bRenderSpecular; // 0xb8
	// SHIM m_bCastShadows; // 0xa8
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa8
// Has VTable
class CRenderComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0028[0x18]; // 0x28
public:
	bool m_bIsRenderingWithViewModels; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	uint32_t m_nSplitscreenFlags; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0048[0x8]; // 0x48
public:
	bool m_bEnableRendering; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x4f]; // 0x51
public:
	bool m_bInterpolationReadyToDraw; // 0xa0	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4d8
// Has VTable
// 
// MNetworkExcludeByName "m_bClientSideRagdoll"
// MNetworkExcludeByName "m_iMaxHealth"
// MNetworkExcludeByUserGroup "Player"
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkExcludeByName "m_spawnflags"
// MNetworkExcludeByName "m_takedamage"
// MNetworkExcludeByName "m_vecAbsVelocity"
// MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
// MNetworkVarNames "int32 m_iMaxHealth"
// MNetworkVarNames "int32 m_iHealth"
// MNetworkVarNames "uint8 m_lifeState"
// MNetworkVarNames "DamageOptions_t m_takedamage"
// MNetworkVarNames "uint8 m_ubInterpolationFrame"
// MNetworkVarNames "float32 m_flAnimTime"
// MNetworkVarNames "float32 m_flSimulationTime"
// MNetworkVarNames "float32 m_flCreateTime"
// MNetworkVarNames "bool m_bClientSideRagdoll"
// MNetworkVarNames "uint8 m_iTeamNum"
// MNetworkVarNames "uint32 m_spawnflags"
// MNetworkVarNames "int32 m_nNextThinkTick"
// MNetworkVarNames "uint32 m_fFlags"
// MNetworkVarNames "Vector m_vecAbsVelocity"
// MNetworkVarNames "CNetworkVelocityVector m_vecVelocity"
// MNetworkVarNames "Vector m_vecBaseVelocity"
// MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
// MNetworkVarNames "MoveCollide_t m_MoveCollide"
// MNetworkVarNames "MoveType_t m_MoveType"
// MNetworkVarNames "gender_t m_Gender"
// MNetworkVarNames "uint8 m_nWaterLevel"
// MNetworkVarNames "uint32 m_fEffects"
// MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
// MNetworkVarNames "float32 m_flFriction"
// MNetworkVarNames "float32 m_flElasticity"
// MNetworkVarNames "bool m_bSimulatedEveryTick"
// MNetworkVarNames "bool m_bAnimatedEveryTick"
// MNetworkVarNames "uint8 m_nMinCPULevel"
// MNetworkVarNames "uint8 m_nMaxCPULevel"
// MNetworkVarNames "uint8 m_nMinGPULevel"
// MNetworkVarNames "uint8 m_nMaxGPULevel"
// MNetworkVarNames "float m_flNavIgnoreUntilTime"
// MNetworkVarNames "uint8 m_iTextureFrameIndex"
class C_BaseEntity : public C_GameEntity
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x10]; // 0x38
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "96"
	CBodyComponent* m_CBodyComponent; // 0x48	
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0190[0xd8]; // 0x190
public:
	CUtlString m_sPredictionCopyComment; // 0x268	
private:
	[[maybe_unused]] uint8_t __pad0270[0x10]; // 0x270
public:
	int32_t m_nLastThinkTick; // 0x280	
private:
	[[maybe_unused]] uint8_t __pad0284[0x4]; // 0x284
public:
	CGameSceneNode* m_pGameSceneNode; // 0x288	
	CRenderComponent* m_pRenderComponent; // 0x290	
	CCollisionProperty* m_pCollision; // 0x298	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; // 0x2a0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "64"
	int32_t m_iHealth; // 0x2a4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "64"
	uint8_t m_lifeState; // 0x2a8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	DamageOptions_t m_takedamage; // 0x2a9	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x2aa	
private:
	[[maybe_unused]] uint8_t __pad02ab[0x1]; // 0x2ab
public:
	CHandle< C_BaseEntity > m_hSceneObjectController; // 0x2ac	
	int32_t m_nNoInterpolationTick; // 0x2b0	
	float m_flProxyRandomValue; // 0x2b4	
	int32_t m_iEFlags; // 0x2b8	
	uint8_t m_nWaterType; // 0x2bc	
	bool m_bInterpolateEvenWithNoModel; // 0x2bd	
	bool m_bPredictionEligible; // 0x2be	
private:
	[[maybe_unused]] uint8_t __pad02bf[0x1]; // 0x2bf
public:
	int32_t m_nSimulationTick; // 0x2c0	
	int32_t m_iCurrentThinkContext; // 0x2c4	
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x2c8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnAnimTimeChanged"
	float m_flAnimTime; // 0x2e0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x2e4	
	uint8_t m_nSceneObjectOverrideFlags; // 0x2e8	
	bool m_bHasSuccessfullyInterpolated; // 0x2e9	
	bool m_bHasAddedVarsToInterpolation; // 0x2ea	
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x2eb	
	int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x2ec	
	uint16_t m_ListEntry[10]; // 0x2f4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flCreateTime; // 0x308	
	float m_flSpeed; // 0x30c	
	int16_t m_EntClientFlags; // 0x310	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x312	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; // 0x313	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x314	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_nNextThinkTick; // 0x318	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	// MNetworkSerializer "CropFlagsToPlayerFlagBitsLength"
	// MNetworkUserGroup "Player"
	uint32_t m_fFlags; // 0x31c	
	// MNetworkEnable
	Vector m_vecAbsVelocity; // 0x320	
private:
	[[maybe_unused]] uint8_t __pad032c[0x4]; // 0x32c
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "64"
	CNetworkVelocityVector m_vecVelocity; // 0x330	
private:
	[[maybe_unused]] uint8_t __pad0390[0x8]; // 0x390
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecBaseVelocity; // 0x398	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; // 0x3a4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	CHandle< C_BaseEntity > m_hOwnerEntity; // 0x3a8	
	// MNetworkEnable
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x3ac	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; // 0x3ad	
	// MNetworkEnable
	// MNetworkEnable
	gender_t m_Gender; // 0x3ae	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	// MNetworkUserGroup "Player"
	uint8_t m_nWaterLevel; // 0x3af	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x3b0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hGroundEntity; // 0x3b4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x3b8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord"
	float m_flElasticity; // 0x3bc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bSimulatedEveryTick; // 0x3c0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x3c1	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint8_t m_nMinCPULevel; // 0x3c2	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint8_t m_nMaxCPULevel; // 0x3c3	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	uint8_t m_nMinGPULevel; // 0x3c4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	uint8_t m_nMaxGPULevel; // 0x3c5	
private:
	[[maybe_unused]] uint8_t __pad03c6[0x2]; // 0x3c6
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flNavIgnoreUntilTime; // 0x3c8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint8_t m_iTextureFrameIndex; // 0x3cc	
private:
	[[maybe_unused]] uint8_t __pad03cd[0x3]; // 0x3cd
public:
	CBitVec< 1 > m_ShadowBits; // 0x3d0	
	float m_flFirstReceivedTime; // 0x3d4	
	float m_flLastMessageTime; // 0x3d8	
	uint16_t m_hThink; // 0x3dc	
private:
	[[maybe_unused]] uint8_t __pad03de[0xa]; // 0x3de
public:
	uint8_t m_fBBoxVisFlags; // 0x3e8	
	bool m_bIsValidIKAttachment; // 0x3e9	
	bool m_bPredictable; // 0x3ea	
	bool m_bRenderWithViewModels; // 0x3eb	
	CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x3ec	
	CHandle< C_BaseEntity > m_hOldMoveParent; // 0x3f0	
private:
	[[maybe_unused]] uint8_t __pad03f4[0x4]; // 0x3f4
public:
	CParticleProperty m_Particles; // 0x3f8	
	CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x420	
	CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x438	
private:
	[[maybe_unused]] uint8_t __pad0450[0x18]; // 0x450
public:
	int32_t m_nNextScriptVarRecordID; // 0x468	
private:
	[[maybe_unused]] uint8_t __pad046c[0xc]; // 0x46c
public:
	int32_t m_nAnimGraphNetVarCreationCommandNumber; // 0x478	
	QAngle m_vecAngVelocity; // 0x47c	
	float m_flGroundChangeTime; // 0x488	
	float m_flGravity; // 0x48c	
	int32_t m_DataChangeEventRef; // 0x490	
private:
	[[maybe_unused]] uint8_t __pad0494[0x4]; // 0x494
public:
	CUtlVector< CEntityHandle > m_dependencies; // 0x498	
	int32_t m_nCreationTick; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b4[0x14]; // 0x4b4
public:
	bool m_bIsDACNPC; // 0x4c8	
	bool m_bIsNPC; // 0x4c9	
	bool m_bAnimTimeChanged; // 0x4ca	
	bool m_bSimulationTimeChanged; // 0x4cb	
	bool m_bIsBlurred; // 0x4cc	
	
	// Static fields:
	static bool &Get_sm_bAccurateTriggerBboxChecks(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[0]->m_instance);};
	static bool &Get_sm_bDisableTouchFuncs(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[1]->m_instance);};
	static bool &Get_m_bAllowPrecache(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[2]->m_instance);};
	static LatchDirtyPermission_t &Get_s_nLatchPermissions(){return *reinterpret_cast<LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[3]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[4]->m_instance);};
	static C_BasePlayer* &Get_m_pPredictionPlayer(){return *reinterpret_cast<C_BasePlayer**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[5]->m_instance);};
	static bool &Get_s_bAbsQueriesValid(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[6]->m_instance);};
	static bool &Get_s_bAbsRecomputationEnabled(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[7]->m_instance);};
	static bool &Get_s_bComputingInterpolatedValues(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[8]->m_instance);};
	static bool &Get_s_bPreventingSetAnimRunAnimEvents(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[9]->m_instance);};
	static CUtlVector< C_BaseEntity* > &Get_gm_UsableObjects(){return *reinterpret_cast<CUtlVector< C_BaseEntity* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[10]->m_instance);};
	
	// Datamap fields:
	// CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// void m_CScriptComponent; // 0x30
	// QAngle angles; // 0x7fffffff
	// Vector origin; // 0x7fffffff
	// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
	// CUtlString ownername; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CLogicalEntity : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkVarNames "float32 m_MinFalloff"
// MNetworkVarNames "float32 m_MaxFalloff"
// MNetworkVarNames "float32 m_flFadeInDuration"
// MNetworkVarNames "float32 m_flFadeOutDuration"
// MNetworkVarNames "float32 m_flMaxWeight"
// MNetworkVarNames "float32 m_flCurWeight"
// MNetworkVarNames "char m_netlookupFilename"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bClientSide"
// MNetworkVarNames "bool m_bExclusive"
class C_ColorCorrection : public C_BaseEntity
{
public:
	Vector m_vecOrigin; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	float m_MinFalloff; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	float m_MaxFalloff; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInDuration; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x4f0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxWeight; // 0x4f4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flCurWeight; // 0x4f8	
	// MNetworkEnable
	// MNetworkEnable
	char m_netlookupFilename[260]; // 0x4fc	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x600	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMaster; // 0x601	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bClientSide; // 0x602	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bExclusive; // 0x603	
	bool m_bEnabledOnClient[1]; // 0x604	
private:
	[[maybe_unused]] uint8_t __pad0605[0x3]; // 0x605
public:
	float m_flCurWeightOnClient[1]; // 0x608	
	bool m_bFadingIn[1]; // 0x60c	
private:
	[[maybe_unused]] uint8_t __pad060d[0x3]; // 0x60d
public:
	float m_flFadeStartWeight[1]; // 0x610	
	float m_flFadeStartTime[1]; // 0x614	
	float m_flFadeDuration[1]; // 0x618	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x718
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class C_EnvWindClientside : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkDisable
	C_CEnvWindShared m_EnvWindShared; // 0x4d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x508
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class C_EntityFlame : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEntAttached; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x24]; // 0x4dc
public:
	CHandle< C_BaseEntity > m_hOldAttached; // 0x500	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCheapEffect; // 0x504	
	
	// Datamap fields:
	// void m_hEffect; // 0x4e0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MNetworkVarNames "float32 m_fLocalContrastStrength"
// MNetworkVarNames "float32 m_fLocalContrastEdgeStrength"
// MNetworkVarNames "float32 m_fVignetteStart"
// MNetworkVarNames "float32 m_fVignetteEnd"
// MNetworkVarNames "float32 m_fVignetteBlurStrength"
// MNetworkVarNames "float32 m_fFadeToBlackStrength"
// MNetworkVarNames "float32 m_fGrainStrength"
// MNetworkVarNames "float32 m_fTopVignetteStrength"
// MNetworkVarNames "float32 m_fFadeTime"
// MNetworkVarNames "bool m_bMaster"
class C_PostProcessController : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_fLocalContrastStrength; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	float m_fLocalContrastEdgeStrength; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	float m_fVignetteStart; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	float m_fVignetteEnd; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	float m_fVignetteBlurStrength; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_fFadeToBlackStrength; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	float m_fGrainStrength; // 0x4f0	
	// MNetworkEnable
	// MNetworkEnable
	float m_fTopVignetteStrength; // 0x4f4	
	// MNetworkEnable
	// MNetworkEnable
	float m_fFadeTime; // 0x4f8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMaster; // 0x4fc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x998
// Has VTable
// 
// MNetworkVarNames "uint32 m_iPing"
// MNetworkVarNames "int32 m_iScore"
// MNetworkVarNames "int32 m_iDeaths"
// MNetworkVarNames "bool m_bConnected"
// MNetworkVarNames "int32 m_iTeam"
// MNetworkVarNames "bool m_bAlive"
// MNetworkVarNames "uint32 m_iHealth"
class C_PlayerResource : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0x18]; // 0x4d8
public:
	CUtlSymbolLarge m_szName[34]; // 0x4f0	
	Color m_Colors[32]; // 0x600	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_iPing[34]; // 0x680	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	int32_t m_iScore[34]; // 0x708	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	int32_t m_iDeaths[34]; // 0x790	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectedFlagsChanged"
	bool m_bConnected[34]; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad083a[0x2]; // 0x83a
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	int32_t m_iTeam[34]; // 0x83c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAlive[34]; // 0x8c4	
private:
	[[maybe_unused]] uint8_t __pad08e6[0x2]; // 0x8e6
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_iHealth[34]; // 0x8e8	
	bool m_bIsFakePlayer[34]; // 0x970	
private:
	[[maybe_unused]] uint8_t __pad0992[0x2]; // 0x992
public:
	int32_t m_nEventPlayerInfo; // 0x994	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x570
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class C_SkyCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	sky3dparams_t m_skyboxData; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x560	
	bool m_bUseAngles; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	C_SkyCamera* m_pNext; // 0x568	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x4e0
	// Vector m_skyboxData.origin; // 0x4e4
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x4f0
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x4f4
	// bool m_skyboxData.fog.enable; // 0x550
	// bool m_skyboxData.fog.blend; // 0x551
	// Vector m_skyboxData.fog.dirPrimary; // 0x500
	// Color m_skyboxData.fog.colorPrimary; // 0x50c
	// Color m_skyboxData.fog.colorSecondary; // 0x510
	// float m_skyboxData.fog.start; // 0x51c
	// float m_skyboxData.fog.end; // 0x520
	// float m_skyboxData.fog.maxdensity; // 0x528
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class C_TintController : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x588
// Has VTable
// 
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "CHandle< C_BasePlayer > m_aPlayers"
// MNetworkVarNames "int32 m_iScore"
// MNetworkVarNames "int32 m_iRoundsWon"
// MNetworkVarNames "char m_szTeamname"
class C_Team : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_BasePlayer > > m_aPlayers; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iScore; // 0x4f0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_iRoundsWon; // 0x4f4	
	// MNetworkEnable
	// MNetworkEnable
	char m_szTeamname[129]; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad0579[0x3]; // 0x579
public:
	int32_t m_iDeaths; // 0x57c	
	int32_t m_iPing; // 0x580	
	int32_t m_iPacketloss; // 0x584	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class C_TriggerCamera : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x30
// Has VTable
// Has Trivial Destructor
class CClientAlphaProperty : public IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	uint8_t m_nRenderFX; // 0x10	
	uint8_t m_nRenderMode; // 0x11	
	struct 
	{
		uint8_t m_bAlphaOverride: 1; 		
		uint8_t m_bShadowAlphaOverride: 1; 		
		uint8_t m_nDistanceFadeMode: 1; 		
		uint8_t m_nReserved: 4; 		
		uint16_t __pad0: 9;
	}; // 16 bits
	uint8_t m_nAlpha; // 0x13	
	uint16_t m_nDesyncOffset; // 0x14	
	uint16_t m_nReserved2; // 0x16	
	uint16_t m_nDistFadeStart; // 0x18	
	uint16_t m_nDistFadeEnd; // 0x1a	
	float m_flFadeScale; // 0x1c	
	float m_flRenderFxStartTime; // 0x20	
	float m_flRenderFxDuration; // 0x24	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x510
// Has VTable
class CViewAngleAnimation : public C_BaseEntity
{
public:
	float m_flAnimStartTime; // 0x4d8	
	bool m_bFinished; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	CUtlVector< CViewAngleKeyFrame* > m_KeyFrames; // 0x4e0	
	QAngle m_vecBaseAngles; // 0x4f8	
	int32_t m_iFlags; // 0x504	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4e0
// Has VTable
// 
// MNetworkVarNames "float32 m_flFadeStartDist"
// MNetworkVarNames "float32 m_flFadeEndDist"
class C_EnvDetailController : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeStartDist; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeEndDist; // 0x4dc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class C_GameRulesProxy : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x530
// Has VTable
// 
// MNetworkVarNames "bool m_bPoseValueParity"
// MNetworkVarNames "float32 m_fPoseValue"
// MNetworkVarNames "float32 m_fInterpolationDuration"
// MNetworkVarNames "bool m_bInterpolationWrap"
// MNetworkVarNames "float32 m_fCycleFrequency"
// MNetworkVarNames "PoseController_FModType_t m_nFModType"
// MNetworkVarNames "float32 m_fFModTimeOffset"
// MNetworkVarNames "float32 m_fFModRate"
// MNetworkVarNames "float32 m_fFModAmplitude"
// MNetworkVarNames "CHandle< CBaseEntity > m_hProps"
// MNetworkVarNames "uint8 m_chPoseIndex"
class C_PoseController : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoseValueParity; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_fPoseValue; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "10.000000"
	float m_fInterpolationDuration; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInterpolationWrap; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-10.000000"
	// MNetworkMaxValue "10.000000"
	float m_fCycleFrequency; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	PoseController_FModType_t m_nFModType; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "1.000000"
	float m_fFModTimeOffset; // 0x4f0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-10.000000"
	// MNetworkMaxValue "10.000000"
	float m_fFModRate; // 0x4f4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "10.000000"
	float m_fFModAmplitude; // 0x4f8	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProps[4]; // 0x4fc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	uint8_t m_chPoseIndex[4]; // 0x50c	
	bool m_bOldPoseValueParity; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x3]; // 0x511
public:
	float m_fCurrentPoseValue; // 0x514	
	float m_fCurrentFMod; // 0x518	
	// -> m_flStartTime - 0x51c
	// -> m_flEndTime - 0x520
	// -> m_flStartValue - 0x524
	// -> m_flEndValue - 0x528
	// -> m_nInterpType - 0x52c
	CInterpolatedValue m_PoseTransitionValue; // 0x51c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
// MNetworkVarNames "int m_iEntityQuality"
// MNetworkVarNames "uint32 m_iEntityLevel"
// MNetworkVarNames "itemid_t m_iItemID"
// MNetworkVarNames "uint32 m_iAccountID"
// MNetworkVarNames "uint32 m_iInventoryPosition"
// MNetworkVarNames "bool m_bInitialized"
// MNetworkVarNames "style_index_t m_nOverrideStyle"
// MNetworkVarNames "CAttributeList m_AttributeList"
class C_EconItemView : public IEconItemInterface
{
public:
	// MNetworkEnable
	// MNetworkEnable
	item_definition_index_t m_iItemDefinitionIndex; // 0x8	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0xc	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	// MNetworkEnable
	// MNetworkEnable
	itemid_t m_iItemID; // 0x18	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x20	
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInitialized; // 0x30	
	// MNetworkEnable
	// MNetworkEnable
	style_index_t m_nOverrideStyle; // 0x31	
	bool m_bIsStoreItem; // 0x32	
	bool m_bIsTradeItem; // 0x33	
	bool m_bHasComputedAttachedParticles; // 0x34	
	bool m_bHasAttachedParticles; // 0x35	
private:
	[[maybe_unused]] uint8_t __pad0036[0x2]; // 0x36
public:
	int32_t m_iEntityQuantity; // 0x38	
	uint8_t m_unClientFlags; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	eEconItemOrigin m_unOverrideOrigin; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0xc]; // 0x44
public:
	char* m_pszGrayedOutReason; // 0x50	
	// MNetworkEnable
	// MNetworkEnable
	CAttributeList m_AttributeList; // 0x58	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4e0
// Has VTable
// 
// MNetworkVarNames "CDACGameRules * m_pGameRules"
class C_DACGameRulesProxy : public C_GameRulesProxy
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	C_SingleplayRules* m_pGameRules; // 0x4d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class C_DacShadowmapBoundary : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa58
// Has VTable
class C_GlobalLight : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0x558]; // 0x4d8
public:
	uint16_t m_WindClothForceHandle; // 0xa30	
	
	// Static fields:
	static C_GlobalLight* &Get_sm_pGlobalLight(){return *reinterpret_cast<C_GlobalLight**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[0]->m_instance);};
	static CUtlStringToken &Get_sm_pSkyboxSlots(){return *reinterpret_cast<CUtlStringToken*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[1]->m_instance);};
	static CUtlVector< C_GlobalLight* > &Get_sm_nonPrimaryGlobalLights(){return *reinterpret_cast<CUtlVector< C_GlobalLight* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->m_static_fields[2]->m_instance);};
	
	// Datamap fields:
	// CGlobalLightBase CGlobalLightBase; // 0x4d8
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// float InputSetLightScale; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8d0
// Has VTable
class C_DOTA_LightInfo : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x618
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_hCubemapTexture"
// MNetworkVarNames "bool m_bCustomCubemapTexture"
// MNetworkVarNames "float m_flInfluenceRadius"
// MNetworkVarNames "Vector m_vBoxProjectMins"
// MNetworkVarNames "Vector m_vBoxProjectMaxs"
// MNetworkVarNames "string_t m_LightGroups"
// MNetworkVarNames "bool m_bMoveable"
// MNetworkVarNames "int m_nHandshake"
// MNetworkVarNames "int m_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_nIndoorOutdoorLevel"
// MNetworkVarNames "int m_nGgxCubemapBlurAccumulationPassCount"
// MNetworkVarNames "float m_flEdgeFadeDist"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bDefaultEnvMap"
// MNetworkVarNames "bool m_bEnabled"
class C_EnvCubemap : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0xe0]; // 0x4d8
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x5b8	
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x5c0	
private:
	[[maybe_unused]] uint8_t __pad05c1[0x3]; // 0x5c1
public:
	// MNetworkEnable
	float m_flInfluenceRadius; // 0x5c4	
	// MNetworkEnable
	Vector m_vBoxProjectMins; // 0x5c8	
	// MNetworkEnable
	Vector m_vBoxProjectMaxs; // 0x5d4	
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x5e0	
	// MNetworkEnable
	bool m_bMoveable; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05e9[0x3]; // 0x5e9
public:
	// MNetworkEnable
	int32_t m_nHandshake; // 0x5ec	
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x5f0	
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x5f4	
	// MNetworkEnable
	int32_t m_nGgxCubemapBlurAccumulationPassCount; // 0x5f8	
	// MNetworkEnable
	float m_flEdgeFadeDist; // 0x5fc	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x600	
	// MNetworkEnable
	bool m_bDefaultEnvMap; // 0x601	
private:
	[[maybe_unused]] uint8_t __pad0602[0xe]; // 0x602
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x610	
	
	// Datamap fields:
	// void m_pSceneObject; // 0x608
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x618
// Has VTable
class C_EnvCubemapBox : public C_EnvCubemap
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x508
// Has VTable
// 
// MNetworkVarNames "float m_flEndDistance"
// MNetworkVarNames "float m_flStartDistance"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "float m_flFogHeightWidth"
// MNetworkVarNames "float m_flFogHeightStart"
// MNetworkVarNames "float m_flFogHeightExponent"
// MNetworkVarNames "float m_flLODBias"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "HRenderTextureStrong m_hFogCubemapTexture"
class C_EnvCubemapFog : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flEndDistance; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDistance; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightStart; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	float m_flLODBias; // 0x4f0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x4f4	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4f5	
private:
	[[maybe_unused]] uint8_t __pad04f6[0x2]; // 0x4f6
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x4f8	
	bool m_bFirstTime; // 0x500	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f8
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "string_t m_LightGroups"
// MNetworkVarNames "bool m_bMoveable"
// MNetworkVarNames "int m_nHandshake"
// MNetworkVarNames "int m_nIndoorOutdoorLevel"
// MNetworkVarNames "int m_nHmdBrightnessLevel"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bEnabled"
class C_EnvLightProbeVolume : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0xfc0]; // 0x4d8
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1498	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x14a0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x14a8	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x14b0	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x14bc	
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x14c8	
	// MNetworkEnable
	bool m_bMoveable; // 0x14d0	
private:
	[[maybe_unused]] uint8_t __pad14d1[0x3]; // 0x14d1
public:
	// MNetworkEnable
	int32_t m_nHandshake; // 0x14d4	
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x14d8	
	// MNetworkEnable
	int32_t m_nHmdBrightnessLevel; // 0x14dc	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e1[0x10]; // 0x14e1
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x14f1	
	
	// Datamap fields:
	// void m_pSceneObject; // 0x14e8
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "HRenderTextureStrong m_hCubemapTexture"
// MNetworkVarNames "bool m_bCustomCubemapTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "string_t m_LightGroups"
// MNetworkVarNames "bool m_bMoveable"
// MNetworkVarNames "int m_nHandshake"
// MNetworkVarNames "int m_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_nIndoorOutdoorLevel"
// MNetworkVarNames "int m_nHmdBrightnessLevel"
// MNetworkVarNames "int m_nGgxCubemapBlurAccumulationPassCount"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bEnabled"
class C_EnvCombinedLightProbeVolume : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0x10a0]; // 0x4d8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Color; // 0x1578	
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_flBrightness; // 0x157c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x1580	
	// MNetworkEnable
	bool m_bCustomCubemapTexture; // 0x1588	
private:
	[[maybe_unused]] uint8_t __pad1589[0x7]; // 0x1589
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1590	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1598	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x15a0	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x15a8	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x15b4	
	// MNetworkEnable
	CUtlSymbolLarge m_LightGroups; // 0x15c0	
	// MNetworkEnable
	bool m_bMoveable; // 0x15c8	
private:
	[[maybe_unused]] uint8_t __pad15c9[0x3]; // 0x15c9
public:
	// MNetworkEnable
	int32_t m_nHandshake; // 0x15cc	
	// MNetworkEnable
	int32_t m_nEnvCubeMapArrayIndex; // 0x15d0	
	// MNetworkEnable
	int32_t m_nIndoorOutdoorLevel; // 0x15d4	
	// MNetworkEnable
	int32_t m_nHmdBrightnessLevel; // 0x15d8	
	// MNetworkEnable
	int32_t m_nGgxCubemapBlurAccumulationPassCount; // 0x15dc	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x15e0	
private:
	[[maybe_unused]] uint8_t __pad15e1[0x18]; // 0x15e1
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x15f9	
	
	// Datamap fields:
	// void m_pEnvMap; // 0x15e8
	// void m_pLightProbeVolume; // 0x15f0
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x2020
// Has VTable
// 
// MNetworkVarNames "CTimeOfDayDynamicKeys m_DynamicKeys"
// MNetworkVarNames "CTimeOfDayDynamicValues m_DynamicValues"
// MNetworkVarNames "float m_flTimeLastUpdate"
class C_EnvTimeOfDay2 : public C_BaseEntity
{
public:
	CEntityIOOutput m_OnSunrise; // 0x4d8	
	CEntityIOOutput m_OnSunset; // 0x500	
	CEntityIOOutput m_OnDayBegin; // 0x528	
	CEntityIOOutput m_OnDayEnd; // 0x550	
	CEntityIOOutput m_OnNightBegin; // 0x578	
	CEntityIOOutput m_OnNightEnd; // 0x5a0	
	CEntityIOOutput m_OnDuskBegin; // 0x5c8	
	CEntityIOOutput m_OnDuskEnd; // 0x5f0	
	CEntityIOOutput m_OnDawnBegin; // 0x618	
	CEntityIOOutput m_OnDawnEnd; // 0x640	
	CEntityIOOutput m_OnMidDay; // 0x668	
	CEntityIOOutput m_OnMidNight; // 0x690	
	// MNetworkEnable
	// MNetworkEnable
	CTimeOfDayDynamicKeys m_DynamicKeys; // 0x6b8	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CTimeOfDayDynamicValues > m_DynamicValues; // 0x740	
private:
	[[maybe_unused]] uint8_t __pad1120[0x30]; // 0x1120
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flTimeLastUpdate; // 0x1150	
	
	// Static fields:
	static C_EnvTimeOfDay2* &Get_sm_pTimeOfDay(){return *reinterpret_cast<C_EnvTimeOfDay2**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_EnvTimeOfDay2")->m_static_fields[0]->m_instance);};
	static int32_t &Get_s_kDynamicValuesArraySize(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_EnvTimeOfDay2")->m_static_fields[1]->m_instance);};
	
	// Datamap fields:
	// CUtlSymbolLarge InputRunCommand; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "float m_flAutoExposureMin"
// MNetworkVarNames "float m_flAutoExposureMax"
// MNetworkVarNames "float m_flTonemapPercentTarget"
// MNetworkVarNames "float m_flTonemapPercentBrightPixels"
// MNetworkVarNames "float m_flTonemapMinAvgLum"
// MNetworkVarNames "float m_flRate"
// MNetworkVarNames "float m_flAccelerateExposureDown"
class C_TonemapController2 : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flAutoExposureMax; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flRate; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	float m_flAccelerateExposureDown; // 0x4f0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// float InputSetMinExposure; // 0x0
	// float InputSetMaxExposure; // 0x0
	// float InputSetPercentTarget; // 0x0
	// float InputSetPercentBrightPixels; // 0x0
	// float InputSetMinAverageLuminosity; // 0x0
	// float InputSetRate; // 0x0
	// float InputSetAccelerateExposureDown; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "float m_flScattering"
// MNetworkVarNames "float m_flAnisotropy"
// MNetworkVarNames "float m_flFadeSpeed"
// MNetworkVarNames "float m_flDrawDistance"
// MNetworkVarNames "float m_flFadeInStart"
// MNetworkVarNames "float m_flFadeInEnd"
// MNetworkVarNames "float m_flIndirectStrength"
// MNetworkVarNames "int m_nIndirectTextureDimX"
// MNetworkVarNames "int m_nIndirectTextureDimY"
// MNetworkVarNames "int m_nIndirectTextureDimZ"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "float m_flStartAnisoTime"
// MNetworkVarNames "float m_flStartScatterTime"
// MNetworkVarNames "float m_flStartDrawDistanceTime"
// MNetworkVarNames "float m_flStartAnisotropy"
// MNetworkVarNames "float m_flStartScattering"
// MNetworkVarNames "float m_flStartDrawDistance"
// MNetworkVarNames "float m_flDefaultAnisotropy"
// MNetworkVarNames "float m_flDefaultScattering"
// MNetworkVarNames "float m_flDefaultDrawDistance"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bEnableIndirect"
// MNetworkVarNames "bool m_bIsMaster"
// MNetworkVarNames "HRenderTextureStrong m_hFogIndirectTexture"
// MNetworkVarNames "int m_nForceRefreshCount"
class C_EnvVolumetricFogController : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flScattering; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flAnisotropy; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeSpeed; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDrawDistance; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInStart; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInEnd; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	float m_flIndirectStrength; // 0x4f0	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x4f4	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x4f8	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x4fc	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMins; // 0x500	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x50c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x3]; // 0x519
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartAnisoTime; // 0x51c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartScatterTime; // 0x520	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDrawDistanceTime; // 0x524	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x528	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartScattering; // 0x52c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x530	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x534	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultScattering; // 0x538	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x53c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x540	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x541	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsMaster; // 0x542	
private:
	[[maybe_unused]] uint8_t __pad0543[0x5]; // 0x543
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x548	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x550	
	bool m_bFirstTime; // 0x554	
	
	// Datamap fields:
	// void InputSetToDefaults; // 0x0
	// float InputSetScattering; // 0x0
	// float InputSetAnisotropy; // 0x0
	// float InputSetFadeSpeed; // 0x0
	// float InputSetDrawDistance; // 0x0
	// bool EnableIndirect; // 0x0
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// void ForceRefresh; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x508
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flStrength"
// MNetworkVarNames "int m_nFalloffShape"
// MNetworkVarNames "float m_flFalloffExponent"
class C_EnvVolumetricFogVolume : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMins; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStartDisabled; // 0x4f4	
private:
	[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStrength; // 0x4f8	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x4fc	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFalloffExponent; // 0x500	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "fogparams_t m_fog"
class C_FogController : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	fogparams_t m_fog; // 0x4d8	
	bool m_bUseAngles; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	int32_t m_iChangedVariables; // 0x53c	
	
	// Datamap fields:
	// float InputSetStartDist; // 0x0
	// float InputSetEndDist; // 0x0
	// float InputSetMaxDensity; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// Color InputSetColor; // 0x0
	// Color InputSetColorSecondary; // 0x0
	// int32_t InputSetFarZ; // 0x0
	// CUtlSymbolLarge InputSetAngles; // 0x0
	// float InputSet2DSkyboxFogFactor; // 0x0
	// Color InputSetColorLerpTo; // 0x0
	// Color InputSetColorSecondaryLerpTo; // 0x0
	// float InputSetStartDistLerpTo; // 0x0
	// float InputSetEndDistLerpTo; // 0x0
	// float InputSetMaxDensityLerpTo; // 0x0
	// float InputSet2DSkyboxFogFactorLerpTo; // 0x0
	// void InputStartFogTransition; // 0x0
	// void C_FogControllerSetLerpValues; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class C_PointEntity : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
// 
// MNetworkVarNames "float m_FOV"
// MNetworkVarNames "float m_Resolution"
// MNetworkVarNames "bool m_bFogEnable"
// MNetworkVarNames "Color m_FogColor"
// MNetworkVarNames "float m_flFogStart"
// MNetworkVarNames "float m_flFogEnd"
// MNetworkVarNames "float m_flFogMaxDensity"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bUseScreenAspectRatio"
// MNetworkVarNames "float m_flAspectRatio"
// MNetworkVarNames "bool m_bNoSky"
// MNetworkVarNames "float m_fBrightness"
// MNetworkVarNames "float m_flZFar"
// MNetworkVarNames "float m_flZNear"
// MNetworkVarNames "float m_flOverrideShadowFarZ"
// MNetworkVarNames "bool m_bDofEnabled"
// MNetworkVarNames "float m_flDofNearBlurry"
// MNetworkVarNames "float m_flDofNearCrisp"
// MNetworkVarNames "float m_flDofFarCrisp"
// MNetworkVarNames "float m_flDofFarBlurry"
// MNetworkVarNames "float m_flDofTiltToGround"
// MNetworkVarNames "float m_flScreenWindowScale"
// MNetworkVarNames "float m_flFogStartMultiplier"
// MNetworkVarNames "float m_flFogEndMultiplier"
class C_PointCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_FOV; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	float m_Resolution; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFogEnable; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	Color m_FogColor; // 0x4e1	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogStart; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogEnd; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x4f0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x4f4	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x4f5	
private:
	[[maybe_unused]] uint8_t __pad04f6[0x2]; // 0x4f6
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flAspectRatio; // 0x4f8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoSky; // 0x4fc	
private:
	[[maybe_unused]] uint8_t __pad04fd[0x3]; // 0x4fd
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_fBrightness; // 0x500	
	// MNetworkEnable
	// MNetworkEnable
	float m_flZFar; // 0x504	
	// MNetworkEnable
	// MNetworkEnable
	float m_flZNear; // 0x508	
	// MNetworkEnable
	// MNetworkEnable
	float m_flOverrideShadowFarZ; // 0x50c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDofEnabled; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x3]; // 0x511
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x514	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x518	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x51c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x520	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x524	
	// MNetworkEnable
	// MNetworkEnable
	float m_flScreenWindowScale; // 0x528	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogStartMultiplier; // 0x52c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFogEndMultiplier; // 0x530	
	float m_TargetFOV; // 0x534	
	float m_DegreesPerSecond; // 0x538	
	bool m_bIsOn; // 0x53c	
private:
	[[maybe_unused]] uint8_t __pad053d[0x3]; // 0x53d
public:
	C_PointCamera* m_pNext; // 0x540	
	
	// Datamap fields:
	// CUtlSymbolLarge InputChangeFOV; // 0x0
	// void InputSetOnAndTurnOthersOff; // 0x0
	// void InputSetOn; // 0x0
	// void InputSetOff; // 0x0
	// void InputForceActive; // 0x0
	// void InputForceInactive; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f0
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hHourHand"
// MNetworkVarNames "CHandle< CBaseEntity> m_hMinuteHand"
// MNetworkVarNames "CHandle< CBaseEntity> m_hSecondHand"
// MNetworkVarNames "float m_flStartGameTime"
// MNetworkVarNames "float m_flStartClockSeconds"
class C_EnvClock : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hHourHand; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hMinuteHand; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hSecondHand; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartGameTime; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartClockSeconds; // 0x4e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x520
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public C_BaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x500	
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x508	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x510	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x511	
	bool m_bCreateAsChildSpawnGroup; // 0x512	
private:
	[[maybe_unused]] uint8_t __pad0513[0x1]; // 0x513
public:
	uint32_t m_hLayerSpawnGroup; // 0x514	
	bool m_bWorldLayerActuallyVisible; // 0x518	
	
	// Datamap fields:
	// void ShowWorldLayer; // 0x0
	// void HideWorldLayer; // 0x0
	// void SpawnEntities; // 0x0
	// void DestroyEntities; // 0x0
	// void ShowWorldLayerAndSpawnEntities; // 0x0
	// void HideWorldLayerAndDestroyEntities; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f0
// Has VTable
// 
// MNetworkVarNames "int m_nMode"
// MNetworkVarNames "Vector m_vBoxSize"
// MNetworkVarNames "bool m_bEnabled"
class C_InfoVisibilityBox : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0x4]; // 0x4d8
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nMode; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vBoxSize; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x4ec	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x990
// Has VTable
// 
// MNetworkVarNames "CBaseAnimatingController m_animationController"
class C_BodyComponentBaseAnimating : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkEnable
	C_BaseAnimatingController m_animationController; // 0x520	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x970	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimating")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimating")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9f0
// Has VTable
// 
// MNetworkVarNames "CBaseAnimatingOverlayController m_animationController"
class C_BodyComponentBaseAnimatingOverlay : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkEnable
	C_BaseAnimatingOverlayController m_animationController; // 0x520	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x9d8	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimatingOverlay")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimatingOverlay")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x520	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
// 
// MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
// MNetworkVarNames "RenderMode_t m_nRenderMode"
// MNetworkVarNames "RenderFx_t m_nRenderFX"
// MNetworkVarNames "Color m_clrRender"
// MNetworkVarNames "CUtlStringToken m_RenderAttributeIDs"
// MNetworkVarNames "Vector4D m_RenderAttributeValues"
// MNetworkVarNames "CUtlStringToken m_LightGroup"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "CCollisionProperty m_Collision"
// MNetworkVarNames "CGlowProperty m_Glow"
// MNetworkVarNames "float m_flGlowBackfaceMult"
// MNetworkVarNames "float32 m_fadeMinDist"
// MNetworkVarNames "float32 m_fadeMaxDist"
// MNetworkVarNames "float32 m_flFadeScale"
// MNetworkVarNames "float32 m_flShadowStrength"
// MNetworkVarNames "int m_nAddDecal"
// MNetworkVarNames "Vector m_vDecalPosition"
// MNetworkVarNames "Vector m_vDecalForwardAxis"
// MNetworkVarNames "float m_flDecalHealBloodRate"
// MNetworkVarNames "float m_flDecalHealHeightRate"
class C_BaseModelEntity : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x4d8	
	int32_t m_nLastAddDecal; // 0x4e0	
	int32_t m_nDecalsAdded; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x4e9	
	bool m_bAllowFadeInView; // 0x4ea	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x4eb	
private:
	[[maybe_unused]] uint8_t __pad04ef[0x1]; // 0x4ef
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	CUtlStringToken m_RenderAttributeIDs[4]; // 0x4f0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	Vector4D m_RenderAttributeValues[4]; // 0x500	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightGroupChanged"
	CUtlStringToken m_LightGroup; // 0x540	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x544	
private:
	[[maybe_unused]] uint8_t __pad0545[0x3]; // 0x545
public:
	// MNetworkEnable
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x548	
	// MNetworkEnable
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x5f0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x638	
	// MNetworkEnable
	// MNetworkEnable
	float m_fadeMinDist; // 0x63c	
	// MNetworkEnable
	// MNetworkEnable
	float m_fadeMaxDist; // 0x640	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeScale; // 0x644	
	// MNetworkEnable
	// MNetworkEnable
	float m_flShadowStrength; // 0x648	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x64c	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x650	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x65c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x668	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x66c	
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x670	
private:
	[[maybe_unused]] uint8_t __pad06d0[0x8]; // 0x6d0
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0x6d8	
	Color m_ClientOverrideTint; // 0x6e0	
	bool m_bUseClientOverrideTint; // 0x6e4	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// CUtlStringToken skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
class CServerOnlyModelEntity : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
class C_ModelPointEntity : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x530
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x4d8	
	CEntityIOOutput m_OnSpawn; // 0x500	
	bool m_bDisabled; // 0x528	
	bool m_bWaitForRefire; // 0x529	
	bool m_bTriggerOnce; // 0x52a	
	bool m_bFastRetrigger; // 0x52b	
	bool m_bPassthoughCaller; // 0x52c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb78
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_hOwnerEntity"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nameStringableIndex"
// MNetworkVarNames "char m_szSnapshotFileName"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "int m_nStopType"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "float32 m_flStartTime"
// MNetworkVarNames "Vector m_vServerControlPoints"
// MNetworkVarNames "uint8 m_iServerControlPointAssignments"
// MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
class C_ParticleSystem : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	char m_szSnapshotFileName[260]; // 0x6e8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bActive; // 0x7ec	
private:
	[[maybe_unused]] uint8_t __pad07ed[0x3]; // 0x7ed
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	int32_t m_nStopType; // 0x7f0	
private:
	[[maybe_unused]] uint8_t __pad07f4[0x4]; // 0x7f4
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x7f8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x800	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0x804	
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0x834	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0x838	
	bool m_bNoSave; // 0x938	
	bool m_bStartActive; // 0x939	
private:
	[[maybe_unused]] uint8_t __pad093a[0x6]; // 0x93a
public:
	CUtlSymbolLarge m_iszEffectName; // 0x940	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0x948	
private:
	[[maybe_unused]] uint8_t __pad0b48[0x20]; // 0xb48
public:
	bool m_bOldActive; // 0xb68	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputSetControlPoint; // 0x0
	// void C_ParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
	// void m_pEffect; // 0xb48
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e0
// Has VTable
// 
// MNetworkVarNames "float m_flParticleSpacing"
// MNetworkVarNames "float m_flSlack"
// MNetworkVarNames "float m_flRadius"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "int m_nEffectState"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "Vector m_PathNodes_Position"
// MNetworkVarNames "Vector m_PathNodes_TangentIn"
// MNetworkVarNames "Vector m_PathNodes_TangentOut"
// MNetworkVarNames "Vector m_PathNodes_Color"
// MNetworkVarNames "bool m_PathNodes_PinEnabled"
// MNetworkVarNames "float m_PathNodes_RadiusScale"
class C_PathParticleRope : public C_BaseEntity
{
public:
	bool m_bStartActive; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	float m_flMaxSimulationTime; // 0x4dc	
	CUtlSymbolLarge m_iszEffectName; // 0x4e0	
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flParticleSpacing; // 0x500	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x504	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x508	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x50c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	// MNetworkBitCount "3"
	int32_t m_nEffectState; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x4]; // 0x514
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x518	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_Position; // 0x520	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_TangentIn; // 0x538	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_TangentOut; // 0x550	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< Vector > m_PathNodes_Color; // 0x568	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	CUtlVector< bool > m_PathNodes_PinEnabled; // 0x580	
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< float32 > m_PathNodes_RadiusScale; // 0x598	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputDisablePin; // 0x0
	// float InputSetRadius; // 0x0
	// float InputSetSlack; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CInfoDynamicShadowHint : public C_PointEntity
{
public:
	bool m_bDisabled; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	float m_flRange; // 0x4dc	
	int32_t m_nImportance; // 0x4e0	
	int32_t m_nLightChoice; // 0x4e4	
	CHandle< C_BaseEntity > m_hLight; // 0x4e8	
	
	// Static fields:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x508
// Has VTable
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint
{
public:
	Vector m_vBoxMins; // 0x4f0	
	Vector m_vBoxMaxs; // 0x4fc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MNetworkVarNames "uint8 m_Flags"
// MNetworkVarNames "uint8 m_LightStyle"
// MNetworkVarNames "float32 m_Radius"
// MNetworkVarNames "int32 m_Exponent"
// MNetworkVarNames "float32 m_InnerAngle"
// MNetworkVarNames "float32 m_OuterAngle"
// MNetworkVarNames "float32 m_SpotRadius"
class C_DynamicLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_Flags; // 0x6e8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_LightStyle; // 0x6e9	
private:
	[[maybe_unused]] uint8_t __pad06ea[0x2]; // 0x6ea
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_Radius; // 0x6ec	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_Exponent; // 0x6f0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_InnerAngle; // 0x6f4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_OuterAngle; // 0x6f8	
	// MNetworkEnable
	// MNetworkEnable
	float m_SpotRadius; // 0x6fc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
// 
// MNetworkVarNames "string_t m_iszOverlayNames"
// MNetworkVarNames "float32 m_flOverlayTimes"
// MNetworkVarNames "float32 m_flStartTime"
// MNetworkVarNames "int32 m_iDesiredOverlay"
// MNetworkVarNames "bool m_bIsActive"
class C_EnvScreenOverlay : public C_PointEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszOverlayNames[10]; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "63.000000"
	float m_flOverlayTimes[10]; // 0x528	
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x550	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	int32_t m_iDesiredOverlay; // 0x554	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsActive; // 0x558	
	bool m_bWasActive; // 0x559	
private:
	[[maybe_unused]] uint8_t __pad055a[0x2]; // 0x55a
public:
	int32_t m_iCachedDesiredOverlay; // 0x55c	
	int32_t m_iCurrentOverlay; // 0x560	
	float m_flCurrentOverlayTime; // 0x564	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4e0
// Has VTable
// 
// MNetworkVarNames "float32 m_flDuration"
// MNetworkVarNames "ScreenEffectType_t m_nType"
class C_EnvScreenEffect : public C_PointEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flDuration; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	ScreenEffectType_t m_nType; // 0x4dc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "bool m_bDOFEnabled"
// MNetworkVarNames "float32 m_flNearBlurDepth"
// MNetworkVarNames "float32 m_flNearFocusDepth"
// MNetworkVarNames "float32 m_flFarFocusDepth"
// MNetworkVarNames "float32 m_flFarBlurDepth"
// MNetworkVarNames "float32 m_flNearBlurRadius"
// MNetworkVarNames "float32 m_flFarBlurRadius"
class C_EnvDOFController : public C_PointEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDOFEnabled; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearBlurDepth; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearFocusDepth; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarFocusDepth; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarBlurDepth; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flNearBlurRadius; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFarBlurRadius; // 0x4f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MNetworkVarNames "float32 m_flFadeStartDist"
// MNetworkVarNames "float32 m_flFadeDist"
// MNetworkVarNames "float32 m_flTranslucencyLimit"
// MNetworkVarNames "HModelStrong m_iBackgroundModelIndex"
class C_FuncAreaPortalWindow : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeStartDist; // 0x6e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeDist; // 0x6ec	
	// MNetworkEnable
	// MNetworkEnable
	float m_flTranslucencyLimit; // 0x6f0	
private:
	[[maybe_unused]] uint8_t __pad06f4[0x4]; // 0x6f4
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iBackgroundModelIndex; // 0x6f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
// 
// MNetworkVarNames "uint32 m_nDisappearMinDist"
// MNetworkVarNames "uint32 m_nDisappearMaxDist"
class C_Func_LOD : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	uint32_t m_nDisappearMinDist; // 0x6e8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	uint32_t m_nDisappearMaxDist; // 0x6ec	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MNetworkVarNames "char m_szMaterialName"
// MNetworkVarNames "char m_szMaterialVar"
// MNetworkVarNames "char m_szMaterialVarValue"
// MNetworkVarNames "int32 m_iFrameStart"
// MNetworkVarNames "int32 m_iFrameEnd"
// MNetworkVarNames "bool m_bWrap"
// MNetworkVarNames "float32 m_flFramerate"
// MNetworkVarNames "bool m_bNewAnimCommandsSemaphore"
// MNetworkVarNames "float32 m_flFloatLerpStartValue"
// MNetworkVarNames "float32 m_flFloatLerpEndValue"
// MNetworkVarNames "float32 m_flFloatLerpTransitionTime"
// MNetworkVarNames "MaterialModifyMode_t m_nModifyMode"
class C_MaterialModifyControl : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	char m_szMaterialName[255]; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	char m_szMaterialVar[255]; // 0x5d7	
	// MNetworkEnable
	// MNetworkEnable
	char m_szMaterialVarValue[255]; // 0x6d6	
private:
	[[maybe_unused]] uint8_t __pad07d5[0xb]; // 0x7d5
public:
	bool m_bHasNewAnimationCommands; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e1[0x3]; // 0x7e1
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_iFrameStart; // 0x7e4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_iFrameEnd; // 0x7e8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWrap; // 0x7ec	
private:
	[[maybe_unused]] uint8_t __pad07ed[0x3]; // 0x7ed
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFramerate; // 0x7f0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNewAnimCommandsSemaphore; // 0x7f4	
	bool m_bOldAnimCommandsSemaphore; // 0x7f5	
private:
	[[maybe_unused]] uint8_t __pad07f6[0x2]; // 0x7f6
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flFloatLerpStartValue; // 0x7f8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFloatLerpEndValue; // 0x7fc	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFloatLerpTransitionTime; // 0x800	
	float m_flAnimationStartTime; // 0x804	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	MaterialModifyMode_t m_nModifyMode; // 0x808	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4e0
// Has VTable
// 
// MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
class C_RagdollManager : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	int8_t m_iCurrentMaxRagdollCount; // 0x4d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f0
// Has VTable
// 
// MNetworkVarNames "Vector m_shadowDirection"
// MNetworkVarNames "Color m_shadowColor"
// MNetworkVarNames "float32 m_flShadowMaxDist"
// MNetworkVarNames "bool m_bDisableShadows"
// MNetworkVarNames "bool m_bEnableLocalLightShadows"
class C_ShadowControl : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	Vector m_shadowDirection; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	Color m_shadowColor; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flShadowMaxDist; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisableShadows; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableLocalLightShadows; // 0x4ed	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4e8
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "float m_flEnableTime"
// MNetworkVarNames "int m_nPlayerIndex"
class C_PointHMDAnchor : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flEnableTime; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_nPlayerIndex; // 0x4e0	
	int32_t m_nLastSimulateFrame; // 0x4e4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class C_PointHMDAnchorOverride : public C_PointHMDAnchor
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CHapticRelay : public CLogicalEntity
{
public:
	float m_flFrequency; // 0x4d8	
	float m_flAmplitude; // 0x4dc	
	float m_flDuration; // 0x4e0	
	
	// Datamap fields:
	// int32_t InputOnHandEvent; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bUpdateOnClient"
// MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
// MNetworkVarNames "float m_flMaximumChangePerSecond"
// MNetworkVarNames "float m_flDisengageDistance"
// MNetworkVarNames "float m_flEngageDistance"
// MNetworkVarNames "bool m_bRequiresUseKey"
// MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
// MNetworkVarNames "CHandle< CBaseEntity > m_hOutputEntities"
// MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
// MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
// MNetworkVarNames "float m_flMomentumModifier"
// MNetworkVarNames "float m_flSnapValue"
// MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
// MNetworkVarNames "float m_flInputOffset"
class C_PointValueRemapper : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x4d8	
	bool m_bDisabledOld; // 0x4d9	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x4da	
private:
	[[maybe_unused]] uint8_t __pad04db[0x1]; // 0x4db
public:
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x4dc	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineStart; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDisengageDistance; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	float m_flEngageDistance; // 0x4f0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x4f4	
private:
	[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
public:
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x500	
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x518	
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x51c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMomentumModifier; // 0x520	
	// MNetworkEnable
	// MNetworkEnable
	float m_flSnapValue; // 0x524	
	float m_flCurrentMomentum; // 0x528	
	// MNetworkEnable
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x52c	
	float m_flRatchetOffset; // 0x530	
	// MNetworkEnable
	// MNetworkEnable
	float m_flInputOffset; // 0x534	
	eLiteralHandType m_nLiteralHand; // 0x538	
	bool m_bEngaged; // 0x53c	
	bool m_bFirstUpdate; // 0x53d	
private:
	[[maybe_unused]] uint8_t __pad053e[0x2]; // 0x53e
public:
	float m_flPreviousValue; // 0x540	
	float m_flPreviousUpdateTickTime; // 0x544	
	Vector m_vecPreviousTestPoint; // 0x548	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "int m_iOpvarIndex"
class C_SoundOpvarSetPointEntity : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x4d8	
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x4e8	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x4f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x960
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
// MNetworkVarNames "char m_FontName"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFullbright"
// MNetworkVarNames "float m_flWorldUnitsPerPx"
// MNetworkVarNames "float m_flFontSize"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
// MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
// MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
class C_PointWorldText : public C_ModelPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad06e8[0x8]; // 0x6e8
public:
	bool m_bForceRecreateNextUpdate; // 0x6f0	
private:
	[[maybe_unused]] uint8_t __pad06f1[0xf]; // 0x6f1
public:
	// MNetworkEnable
	// MNetworkEnable
	char m_messageText[512]; // 0x700	
	// MNetworkEnable
	// MNetworkEnable
	char m_FontName[64]; // 0x900	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x940	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFullbright; // 0x941	
private:
	[[maybe_unused]] uint8_t __pad0942[0x2]; // 0x942
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0x944	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFontSize; // 0x948	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDepthOffset; // 0x94c	
	// MNetworkEnable
	// MNetworkEnable
	Color m_Color; // 0x950	
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x954	
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x958	
	// MNetworkEnable
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0x95c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x718
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class C_EnvWind : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	C_CEnvWindShared m_EnvWindShared; // 0x4d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
class C_BaseToggle : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class C_BaseButton : public C_BaseToggle
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_glowEntity; // 0x6e8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_usable; // 0x6ec	
private:
	[[maybe_unused]] uint8_t __pad06ed[0x3]; // 0x6ed
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x6f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x708
// Has VTable
// 
// MNetworkVarNames "string_t m_sUseString"
// MNetworkVarNames "string_t m_sUseSubString"
class C_ButtonTimed : public C_BaseButton
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_sUseString; // 0x6f8	
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_sUseSubString; // 0x700	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
class C_PrecipitationBlocker : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x788
// Has VTable
// 
// MNetworkVarNames "PrecipitationType_t m_nPrecipType"
class CClient_Precipitation : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	PrecipitationType_t m_nPrecipType; // 0x6e8	
	float m_flDensity; // 0x6ec	
private:
	[[maybe_unused]] uint8_t __pad06f0[0x8]; // 0x6f0
public:
	float m_flParticleInnerDist; // 0x6f8	
private:
	[[maybe_unused]] uint8_t __pad06fc[0x4]; // 0x6fc
public:
	char* m_pParticleInnerNearDef; // 0x700	
	char* m_pParticleInnerFarDef; // 0x708	
	char* m_pParticleOuterDef; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0718[0x60]; // 0x718
public:
	// -> m_TimeBetweenEvents - 0x778
	// -> m_fNextEvent - 0x77c
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x778	
	bool m_bActiveParticlePrecipEmitter[1]; // 0x780	
	bool m_bParticlePrecipInitialized; // 0x781	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x782	
private:
	[[maybe_unused]] uint8_t __pad0783[0x1]; // 0x783
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0x784	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MNetworkVarNames "float32 m_flStartTime"
// MNetworkVarNames "float32 m_flFadeInStart"
// MNetworkVarNames "float32 m_flFadeInLength"
// MNetworkVarNames "float32 m_flFadeOutModelStart"
// MNetworkVarNames "float32 m_flFadeOutModelLength"
// MNetworkVarNames "float32 m_flFadeOutStart"
// MNetworkVarNames "float32 m_flFadeOutLength"
// MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
// MNetworkVarNames "Vector m_vDissolverOrigin"
// MNetworkVarNames "uint32 m_nMagnitude"
class C_EntityDissolve : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad06e8[0x8]; // 0x6e8
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x6f0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInStart; // 0x6f4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeInLength; // 0x6f8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x6fc	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x700	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutStart; // 0x704	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeOutLength; // 0x708	
	float m_flNextSparkTime; // 0x70c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	EntityDisolveType_t m_nDissolveType; // 0x710	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x714	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_nMagnitude; // 0x720	
	bool m_bCoreExplode; // 0x724	
	bool m_bLinkedToServerEnt; // 0x725	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8d8
// Has VTable
class C_EnvProjectedTexture : public C_ModelPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
class C_FuncBrush : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x708
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
// MNetworkVarNames "int m_eBarrierState"
class C_FuncCombineBarrier : public C_FuncBrush
{
private:
	[[maybe_unused]] uint8_t __pad06e8[0x8]; // 0x6e8
public:
	ParticleIndex_t m_nAmbientEffect; // 0x6f0	
private:
	[[maybe_unused]] uint8_t __pad06f4[0x4]; // 0x6f4
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x6f8	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_eBarrierState; // 0x700	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
// MNetworkVarNames "bool m_bState"
class C_FuncElectrifiedVolume : public C_FuncBrush
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0x6e8	
private:
	[[maybe_unused]] uint8_t __pad06ec[0x4]; // 0x6ec
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x6f0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bState; // 0x6f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
class C_FuncOccluder : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
// 
// MNetworkOverride "m_angRotation CGameSceneNode"
// MNetworkOverride "m_flSimulationTime C_BaseEntity"
class C_FuncRotating : public C_BaseModelEntity
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
class C_Breakable : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
class C_PhysBox : public C_Breakable
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xad0
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nMinCPULevel"
// MNetworkIncludeByName "m_nMaxCPULevel"
// MNetworkIncludeByName "m_nMinGPULevel"
// MNetworkIncludeByName "m_nMaxGPULevel"
// MNetworkVarNames "float32 m_flScrollSpeed"
// MNetworkVarNames "uint16 m_RopeFlags"
// MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
// MNetworkVarNames "uint8 m_nSegments"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hStartPoint"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEndPoint"
// MNetworkVarNames "int16 m_iStartAttachment"
// MNetworkVarNames "int16 m_iEndAttachment"
// MNetworkVarNames "uint8 m_Subdiv"
// MNetworkVarNames "int16 m_RopeLength"
// MNetworkVarNames "int16 m_Slack"
// MNetworkVarNames "float32 m_TextureScale"
// MNetworkVarNames "uint8 m_fLockedPoints"
// MNetworkVarNames "uint8 m_nChangeCount"
// MNetworkVarNames "float32 m_Width"
// MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
class C_RopeKeyframe : public C_BaseModelEntity
{
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0x6e8	
	int32_t m_nLinksTouchingSomething; // 0x6ec	
	bool m_bApplyWind; // 0x6f0	
private:
	[[maybe_unused]] uint8_t __pad06f1[0x3]; // 0x6f1
public:
	int32_t m_fPrevLockedPoints; // 0x6f4	
	int32_t m_iForcePointMoveCounter; // 0x6f8	
	bool m_bPrevEndPointPos[2]; // 0x6fc	
private:
	[[maybe_unused]] uint8_t __pad06fe[0x2]; // 0x6fe
public:
	Vector m_vPrevEndPointPos[2]; // 0x700	
	float m_flCurScroll; // 0x718	
	// MNetworkEnable
	// MNetworkEnable
	float m_flScrollSpeed; // 0x71c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_RopeFlags; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0722[0x6]; // 0x722
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad0730[0x270]; // 0x730
public:
	Vector m_LightValues[10]; // 0x9a0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_nSegments; // 0xa18	
private:
	[[maybe_unused]] uint8_t __pad0a19[0x3]; // 0xa19
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0xa1c	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0xa20	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	int16_t m_iStartAttachment; // 0xa24	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	int16_t m_iEndAttachment; // 0xa26	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_Subdiv; // 0xa28	
private:
	[[maybe_unused]] uint8_t __pad0a29[0x1]; // 0xa29
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0xa2a	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0xa2c	
private:
	[[maybe_unused]] uint8_t __pad0a2e[0x2]; // 0xa2e
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0xa30	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	uint8_t m_fLockedPoints; // 0xa34	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint8_t m_nChangeCount; // 0xa35	
private:
	[[maybe_unused]] uint8_t __pad0a36[0x2]; // 0xa36
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_Width; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a3c[0x4]; // 0xa3c
public:
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0xa40	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xa50	
	int32_t m_TextureHeight; // 0xa58	
	Vector m_vecImpulse; // 0xa5c	
	Vector m_vecPreviousImpulse; // 0xa68	
	float m_flCurrentGustTimer; // 0xa74	
	float m_flCurrentGustLifetime; // 0xa78	
	float m_flTimeToNextGust; // 0xa7c	
	Vector m_vWindDir; // 0xa80	
	Vector m_vColorMod; // 0xa8c	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0xa98	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xab0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0xac8	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad1: 4;
	}; // 8 bits
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MNetworkVarNames "bool m_bIsPlayingBack"
// MNetworkVarNames "bool m_bPaused"
// MNetworkVarNames "bool m_bMultiplayer"
// MNetworkVarNames "bool m_bAutogenerated"
// MNetworkVarNames "float32 m_flForceClientTime"
// MNetworkVarNames "uint16 m_nSceneStringIndex"
// MNetworkVarNames "CHandle< C_BaseFlex > m_hActorList"
class C_SceneEntity : public C_PointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x4e0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPaused; // 0x4e1	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMultiplayer; // 0x4e2	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutogenerated; // 0x4e3	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnResetClientTime"
	float m_flForceClientTime; // 0x4e4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	uint16_t m_nSceneStringIndex; // 0x4e8	
	bool m_bClientOnly; // 0x4ea	
private:
	[[maybe_unused]] uint8_t __pad04eb[0x1]; // 0x4eb
public:
	CHandle< C_BaseFlex > m_hOwner; // 0x4ec	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	CUtlVector< CHandle< C_BaseFlex > > m_hActorList; // 0x4f0	
	bool m_bWasPlaying; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0xf]; // 0x509
public:
	CUtlVector< C_SceneEntity::QueuedEvents_t > m_QueuedEvents; // 0x518	
	float m_flCurrentTime; // 0x530	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bClientSidePredicted"
class C_BaseTrigger : public C_BaseToggle
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisabled; // 0x6e8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x6e9	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
class C_TriggerVolume : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
class C_TriggerLerpObject : public C_BaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7a8
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_nRenderFX"
// MNetworkIncludeByName "m_nRenderMode"
// MNetworkIncludeByName "m_clrRender"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkOverride "m_clrRender"
// MNetworkVarNames "float32 m_flFrameRate"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "uint8 m_nNumBeamEnts"
// MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
// MNetworkVarNames "HMaterialStrong m_nHaloIndex"
// MNetworkVarNames "BeamType_t m_nBeamType"
// MNetworkVarNames "uint32 m_nBeamFlags"
// MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
// MNetworkVarNames "uint8 m_nAttachIndex"
// MNetworkVarNames "float32 m_fWidth"
// MNetworkVarNames "float32 m_fEndWidth"
// MNetworkVarNames "float32 m_fFadeLength"
// MNetworkVarNames "float32 m_fHaloScale"
// MNetworkVarNames "float32 m_fAmplitude"
// MNetworkVarNames "float32 m_fStartFrame"
// MNetworkVarNames "float32 m_fSpeed"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
// MNetworkVarNames "bool m_bTurnedOff"
// MNetworkVarNames "Vector m_vecEndPos"
class C_Beam : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25.000000"
	// MNetworkMaxValue "25.000000"
	// MNetworkEncodeFlags "2"
	float m_flFrameRate; // 0x6e8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flHDRColorScale; // 0x6ec	
	float m_flFireTime; // 0x6f0	
	float m_flDamage; // 0x6f4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	uint8_t m_nNumBeamEnts; // 0x6f8	
private:
	[[maybe_unused]] uint8_t __pad06f9[0x3]; // 0x6f9
public:
	int32_t m_queryHandleHalo; // 0x6fc	
private:
	[[maybe_unused]] uint8_t __pad0700[0x20]; // 0x700
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x720	
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x728	
	// MNetworkEnable
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0x730	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	uint32_t m_nBeamFlags; // 0x734	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachEntity[10]; // 0x738	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	uint8_t m_nAttachIndex[10]; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad076a[0x2]; // 0x76a
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fWidth; // 0x76c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fEndWidth; // 0x770	
	// MNetworkEnable
	// MNetworkEnable
	float m_fFadeLength; // 0x774	
	// MNetworkEnable
	// MNetworkEnable
	float m_fHaloScale; // 0x778	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "1"
	float m_fAmplitude; // 0x77c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_fStartFrame; // 0x780	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0x784	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "64"
	float m_flFrame; // 0x788	
	// MNetworkEnable
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0x78c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bTurnedOff; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x3]; // 0x791
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecEndPos; // 0x794	
	CHandle< C_BaseEntity > m_hEndEntity; // 0x7a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
// MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
// MNetworkVarNames "int32 m_nAttachment"
// MNetworkVarNames "float32 m_flSpriteFramerate"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "uint32 m_nBrightness"
// MNetworkVarNames "float32 m_flBrightnessDuration"
// MNetworkVarNames "float32 m_flSpriteScale"
// MNetworkVarNames "float32 m_flScaleDuration"
// MNetworkVarNames "bool m_bWorldSpaceScale"
// MNetworkVarNames "float32 m_flGlowProxySize"
// MNetworkVarNames "float32 m_flHDRColorScale"
class C_Sprite : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad06e8[0x18]; // 0x6e8
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x700	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0x708	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_nAttachment; // 0x70c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0x710	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0x714	
	float m_flDieTime; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad071c[0xc]; // 0x71c
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_nBrightness; // 0x728	
	// MNetworkEnable
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x72c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x730	
	// MNetworkEnable
	// MNetworkEnable
	float m_flScaleDuration; // 0x734	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x738	
private:
	[[maybe_unused]] uint8_t __pad0739[0x3]; // 0x739
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x73c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flHDRColorScale; // 0x740	
	float m_flLastTime; // 0x744	
	float m_flMaxFrame; // 0x748	
	float m_flStartScale; // 0x74c	
	float m_flDestScale; // 0x750	
	float m_flScaleTimeStart; // 0x754	
	int32_t m_nStartBrightness; // 0x758	
	int32_t m_nDestBrightness; // 0x75c	
	float m_flBrightnessTimeStart; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0764[0x4]; // 0x764
public:
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad0770[0xa0]; // 0x770
public:
	int32_t m_nSpriteWidth; // 0x810	
	int32_t m_nSpriteHeight; // 0x814	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
class C_SpriteOriented : public C_Sprite
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x720
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "string_t m_DialogXMLName"
// MNetworkVarNames "string_t m_PanelClassName"
// MNetworkVarNames "string_t m_PanelID"
class C_BaseClientUIEntity : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad06e8[0x8]; // 0x6e8
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x6f0	
private:
	[[maybe_unused]] uint8_t __pad06f1[0x7]; // 0x6f1
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x6f8	
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x700	
	// MNetworkEnable
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x708	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x928
// Has VTable
// 
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "bool m_bLit"
// MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
// MNetworkVarNames "bool m_bOpaque"
// MNetworkVarNames "bool m_bNoDepth"
// MNetworkVarNames "bool m_bRenderBackface"
// MNetworkVarNames "bool m_bUseOffScreenIndicator"
// MNetworkVarNames "bool m_bExcludeFromSaveGames"
// MNetworkVarNames "bool m_bGrabbable"
// MNetworkVarNames "bool m_bOnlyRenderToTexture"
// MNetworkVarNames "bool m_bDisableMipGen"
// MNetworkVarNames "int32 m_nExplicitImageLayout"
class C_PointClientUIWorldPanel : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0720[0x8]; // 0x720
public:
	bool m_bForceRecreateNextUpdate; // 0x728	
	bool m_bMoveViewToPlayerNextThink; // 0x729	
	bool m_bCheckCSSClasses; // 0x72a	
private:
	[[maybe_unused]] uint8_t __pad072b[0x1]; // 0x72b
public:
	matrix3x4_t m_matAnchorDelta; // 0x72c	
private:
	[[maybe_unused]] uint8_t __pad075c[0x16c]; // 0x75c
public:
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x8c8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x8d0	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLit; // 0x8d1	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0x8d2	
private:
	[[maybe_unused]] uint8_t __pad08d3[0x1]; // 0x8d3
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flWidth; // 0x8d4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flHeight; // 0x8d8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDPI; // 0x8dc	
	// MNetworkEnable
	// MNetworkEnable
	float m_flInteractDistance; // 0x8e0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDepthOffset; // 0x8e4	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x8e8	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x8ec	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x8f0	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x8f4	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x8f8	
private:
	[[maybe_unused]] uint8_t __pad08f9[0x7]; // 0x8f9
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CUtlSymbolLarge > m_vecCSSClasses; // 0x900	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bOpaque; // 0x918	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoDepth; // 0x919	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bRenderBackface; // 0x91a	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0x91b	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0x91c	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bGrabbable; // 0x91d	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0x91e	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDisableMipGen; // 0x91f	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0x920	
	
	// Datamap fields:
	// CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0x8c0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x938
// Has VTable
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:
	bool m_bBeenEnabled; // 0x928	
	bool m_bHide; // 0x929	
private:
	[[maybe_unused]] uint8_t __pad092a[0x2]; // 0x92a
public:
	float m_flSeenTargetTime; // 0x92c	
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0x930	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb28
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel
{
public:
	// MNetworkEnable
	// MNetworkEnable
	char m_messageText[512]; // 0x928	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class C_PointHintUi : public C_PointClientUIWorldPanel
{
private:
	[[maybe_unused]] uint8_t __pad0928[0x30]; // 0x928
public:
	CUtlSymbolLarge m_pszLessonName; // 0x958	
	CUtlSymbolLarge m_pszCaption; // 0x960	
	Vector m_vOffset; // 0x968	
	WorldTextAttachmentType_t m_attachType; // 0x974	
	CHandle< C_BaseEntity > m_hIconTarget; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad097c[0x4]; // 0x97c
public:
	CUtlSymbolLarge m_szTargetAttachmentName; // 0x980	
	CUtlSymbolLarge m_pszCustomLayoutFile; // 0x988	
	int32_t m_nTrackedDeviceIndex; // 0x990	
	CHandle< C_PropVRHand > m_hHighlightHand; // 0x994	
	CUtlSymbolLarge m_pszHighlightControllerComponent; // 0x998	
	Vector m_vecLocalHighlightPoint; // 0x9a0	
private:
	[[maybe_unused]] uint8_t __pad09ac[0x4]; // 0x9ac
public:
	CUtlSymbolLarge m_pszHighlightOtherEntityName; // 0x9b0	
	bool m_bUseOffScreenIndicator; // 0x9b8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8e0
// Has VTable
// 
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
class C_PointClientUIHUD : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0720[0x8]; // 0x720
public:
	bool m_bCheckCSSClasses; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad0729[0x16f]; // 0x729
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x898	
private:
	[[maybe_unused]] uint8_t __pad0899[0x3]; // 0x899
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flWidth; // 0x89c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flHeight; // 0x8a0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDPI; // 0x8a4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flInteractDistance; // 0x8a8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flDepthOffset; // 0x8ac	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x8b0	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x8b4	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x8b8	
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x8bc	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c1[0x7]; // 0x8c1
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CUtlSymbolLarge > m_vecCSSClasses; // 0x8c8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x728
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActivator"
class C_PointClientUIDialog : public C_BaseClientUIEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< C_BaseEntity > m_hActivator; // 0x720	
	bool m_bStartEnabled; // 0x724	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x748
// Has VTable
class CDACWorldParticleSystem : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad06e8[0x20]; // 0x6e8
public:
	int32_t m_nType; // 0x708	
private:
	[[maybe_unused]] uint8_t __pad070c[0x4]; // 0x70c
public:
	CUtlSymbolLarge m_szEffectName; // 0x710	
	CUtlSymbolLarge m_szTargetName; // 0x718	
	CUtlSymbolLarge m_szControlPoint; // 0x720	
	HSequence m_hOverrideSequence; // 0x728	
private:
	[[maybe_unused]] uint8_t __pad072c[0x4]; // 0x72c
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hOverrideModel; // 0x730	
	Vector m_vModelScale; // 0x738	
	bool m_bDayTime; // 0x744	
	bool m_bNightTime; // 0x745	
	bool m_bShowInFow; // 0x746	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x8a0
// Has VTable
class C_EnvDeferredLight : public C_ModelPointEntity
{
public:
	// Datamap fields:
	// CDeferredLightBase CDeferredLightBase; // 0x6f0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// Color InputSetLightColor; // 0x0
	// float InputSetLightIntensity; // 0x0
	// CUtlSymbolLarge InputSetLightIntensityOverTime; // 0x0
	// float InputSetLightRadius; // 0x0
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x8a0
// Has VTable
class C_EnvDeferredLightClientOnly : public C_EnvDeferredLight
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "Color m_vTintColor"
// MNetworkVarNames "int m_nFogType"
// MNetworkVarNames "float m_flFogMinStart"
// MNetworkVarNames "float m_flFogMinEnd"
// MNetworkVarNames "float m_flFogMaxStart"
// MNetworkVarNames "float m_flFogMaxEnd"
// MNetworkVarNames "bool m_bEnabled"
class C_EnvSky : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x6e8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0x6f0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0x6f1	
private:
	[[maybe_unused]] uint8_t __pad06f5[0x3]; // 0x6f5
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0x6f8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0x6fc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0x700	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0x704	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0x708	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0x70c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
// 
// MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
class C_LightEntity : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0x6e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
class C_LightSpotEntity : public C_LightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
class C_LightOrthoEntity : public C_LightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
class C_LightDirectionalEntity : public C_LightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
class C_LightEnvironmentEntity : public C_LightDirectionalEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CInfoTarget : public C_PointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CInfoParticleTarget : public C_PointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
// MNetworkVarNames "float m_flFadeDuration"
// MNetworkVarNames "float m_flMinLogExposure"
// MNetworkVarNames "float m_flMaxLogExposure"
// MNetworkVarNames "float m_flMinExposure"
// MNetworkVarNames "float m_flMaxExposure"
// MNetworkVarNames "float m_flExposureCompensation"
// MNetworkVarNames "float m_flExposureFadeSpeedUp"
// MNetworkVarNames "float m_flExposureFadeSpeedDown"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bExposureControl"
class C_PostProcessingVolume : public C_BaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad06f0[0x10]; // 0x6f0
public:
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x700	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFadeDuration; // 0x708	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinLogExposure; // 0x70c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x710	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinExposure; // 0x714	
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxExposure; // 0x718	
	// MNetworkEnable
	// MNetworkEnable
	float m_flExposureCompensation; // 0x71c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x720	
	// MNetworkEnable
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x724	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bMaster; // 0x728	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bExposureControl; // 0x729	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
class C_World : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "bool m_bShouldAnimateDuringGameplayPause"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "uint8 m_nMuzzleFlashParity"
// MNetworkVarNames "CBaseAnimatingEasings_t m_Easings"
class C_BaseAnimating : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x6e8	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vecForce; // 0x700	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	int32_t m_nForceBone; // 0x70c	
	CUtlVector< handposepair_t > m_HandPoses; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0728[0x1]; // 0x728
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bShouldAnimateDuringGameplayPause; // 0x729	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x72a	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	uint8_t m_nMuzzleFlashParity; // 0x72b	
private:
	[[maybe_unused]] uint8_t __pad072c[0x4]; // 0x72c
public:
	C_BaseAnimating* m_pClientsideRagdoll; // 0x730	
	bool m_bInitModelEffects; // 0x738	
	bool m_builtRagdoll; // 0x739	
	bool m_bIsStaticProp; // 0x73a	
	uint8_t m_nOldMuzzleFlashParity; // 0x73b	
private:
	[[maybe_unused]] uint8_t __pad073c[0x5c]; // 0x73c
public:
	int32_t m_iEjectBrassAttachment; // 0x798	
	bool m_bSuppressAnimEventSounds; // 0x79c	
private:
	[[maybe_unused]] uint8_t __pad079d[0xc3]; // 0x79d
public:
	// MNetworkEnable
	// MNetworkEnable
	CBaseAnimatingEasings_t m_Easings; // 0x860	
	
	// Datamap fields:
	// bool InputDisableAnimEventSounds; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// void m_Ropes; // 0x740
	// void m_ejectBrassEffect; // 0x778
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_BaseAnimatingOverlay : public C_BaseAnimating
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8d8
// Has VTable
class CBaseProp : public C_BaseAnimating
{
public:
	bool m_bModelOverrodeBlockLOS; // 0x898	
private:
	[[maybe_unused]] uint8_t __pad0899[0x3]; // 0x899
public:
	int32_t m_iShapeType; // 0x89c	
	bool m_bConformToCollisionBounds; // 0x8a0	
private:
	[[maybe_unused]] uint8_t __pad08a1[0x3]; // 0x8a1
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0x8a4	
	
	// Datamap fields:
	// int32_t glow; // 0x7fffffff
	// void health; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9e8
// Has VTable
// 
// MNetworkVarNames "bool m_noGhostCollision"
// MNetworkVarNames "float m_flClothScale"
class C_BreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad08d8[0x8]; // 0x8d8
public:
	CEntityIOOutput m_OnBreak; // 0x8e0	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x908	
	CEntityIOOutput m_OnTakeDamage; // 0x930	
	float m_impactEnergyScale; // 0x958	
	int32_t m_iMinHealthDmg; // 0x95c	
	float m_flPressureDelay; // 0x960	
	CHandle< C_BaseEntity > m_hBreaker; // 0x964	
	PerformanceMode_t m_PerformanceMode; // 0x968	
	float m_flDmgModBullet; // 0x96c	
	float m_flDmgModClub; // 0x970	
	float m_flDmgModExplosive; // 0x974	
	float m_flDmgModFire; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad097c[0x4]; // 0x97c
public:
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x980	
	CUtlSymbolLarge m_iszBasePropData; // 0x988	
	int32_t m_iInteractions; // 0x990	
	float m_flPreventDamageBeforeTime; // 0x994	
	bool m_bHasBreakPiecesOrCommands; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad0999[0x3]; // 0x999
public:
	float m_explodeDamage; // 0x99c	
	float m_explodeRadius; // 0x9a0	
private:
	[[maybe_unused]] uint8_t __pad09a4[0x4]; // 0x9a4
public:
	float m_explosionDelay; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09ac[0x4]; // 0x9ac
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0x9b0	
	CUtlSymbolLarge m_explosionCustomEffect; // 0x9b8	
	CUtlSymbolLarge m_explosionCustomSound; // 0x9c0	
	CHandle< C_BasePlayer > m_hPhysicsAttacker; // 0x9c8	
	float m_flLastPhysicsInfluenceTime; // 0x9cc	
	float m_flDefaultFadeScale; // 0x9d0	
	CHandle< C_BaseEntity > m_hLastAttacker; // 0x9d4	
	CHandle< C_BaseEntity > m_hFlareEnt; // 0x9d8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_noGhostCollision; // 0x9dc	
private:
	[[maybe_unused]] uint8_t __pad09dd[0x3]; // 0x9dd
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flClothScale; // 0x9e0	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// void C_BreakablePropBreakThink; // 0x0
	// void C_BreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0x9a4
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb18
// Has VTable
// 
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class C_DynamicProp : public C_BreakableProp
{
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0x9e8	
	CEntityIOOutput m_pOutputAnimOver; // 0xa10	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xa38	
	CEntityIOOutput m_OnAnimReachedStart; // 0xa60	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xa88	
	CUtlSymbolLarge m_iszDefaultAnim; // 0xab0	
	CUtlSymbolLarge m_iszInitialAnim; // 0xab8	
	HSequence m_hGoalSequence; // 0xac0	
	int32_t m_iTransitionDirection; // 0xac4	
	bool m_bAnimateOnServer; // 0xac8	
	bool m_bRandomizeCycle; // 0xac9	
	bool m_bHoldAnimation; // 0xaca	
	bool m_bIsHoldingAnimation; // 0xacb	
	bool m_bRandomAnimator; // 0xacc	
private:
	[[maybe_unused]] uint8_t __pad0acd[0x3]; // 0xacd
public:
	float m_flNextRandAnim; // 0xad0	
	float m_flMinRandAnimDuration; // 0xad4	
	float m_flMaxRandAnimDuration; // 0xad8	
	HSequence m_hPendingSequence; // 0xadc	
	bool m_bStartDisabled; // 0xae0	
	bool m_bUpdateAttachedChildren; // 0xae1	
	bool m_bScriptedMovement; // 0xae2	
	bool m_bFiredStartEndOutput; // 0xae3	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xae4	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xae5	
	bool m_bCreateNonSolid; // 0xae6	
	bool m_bIsOverrideProp; // 0xae7	
	int32_t m_iInitialGlowState; // 0xae8	
	int32_t m_nGlowRange; // 0xaec	
	int32_t m_nGlowRangeMin; // 0xaf0	
	Color m_glowColor; // 0xaf4	
	int32_t m_iCachedFrameCount; // 0xaf8	
	Vector m_vecCachedRenderMins; // 0xafc	
	Vector m_vecCachedRenderMaxs; // 0xb08	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetAnimation; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
	// CUtlSymbolLarge InputSetAnimationTransition; // 0x0
	// CUtlSymbolLarge InputSetDefaultAnimation; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputEnableCollision; // 0x0
	// void InputDisableCollision; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// void InputStartGlowing; // 0x0
	// void InputStopGlowing; // 0x0
	// Vector InputSetGlowOverride; // 0x0
	// int32_t InputSetGlowRange; // 0x0
	// void C_DynamicPropAnimThink; // 0x0
	// int32_t health; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb18
// Has VTable
class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb18
// Has VTable
class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "float m_MaxWeight"
// MNetworkVarNames "float m_FadeDuration"
// MNetworkVarNames "float m_Weight"
// MNetworkVarNames "char m_lookupFilename"
class C_ColorCorrectionVolume : public C_BaseTrigger
{
public:
	float m_LastEnterWeight; // 0x6f0	
	float m_LastEnterTime; // 0x6f4	
	float m_LastExitWeight; // 0x6f8	
	float m_LastExitTime; // 0x6fc	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnabled; // 0x700	
private:
	[[maybe_unused]] uint8_t __pad0701[0x3]; // 0x701
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_MaxWeight; // 0x704	
	// MNetworkEnable
	// MNetworkEnable
	float m_FadeDuration; // 0x708	
	// MNetworkEnable
	// MNetworkEnable
	float m_Weight; // 0x70c	
	// MNetworkEnable
	// MNetworkEnable
	char m_lookupFilename[260]; // 0x710	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x990
// Has VTable
// 
// MNetworkVarNames "bool m_bIsTracking"
// MNetworkVarNames "Vector m_vTrackedPosition"
// MNetworkVarNames "QAngle m_qTrackedAngles"
// MNetworkVarNames "Vector m_vPhysicallyConstrainedPosition"
// MNetworkVarNames "QAngle m_qPhysicallyConstrainedAngles"
// MNetworkVarNames "Vector m_vWeldTransformPosition"
// MNetworkVarNames "QAngle m_qWeldTransformAngles"
// MNetworkVarNames "bool m_bClientIsAuthoritativeForTransform"
// MNetworkVarNames "bool m_bIsInContact"
// MNetworkVarNames "bool m_bIsInContactTeleportClip"
// MNetworkVarNames "Vector m_vTeleportClipPos"
// MNetworkVarNames "bool m_bIsInContactSolidPostTeleportClip"
// MNetworkVarNames "Vector m_vSolidPostTeleportClipPos"
// MNetworkVarNames "Vector m_vLocalPosition"
// MNetworkVarNames "QAngle m_qLocalAngles"
class C_PropVRTrackedObject : public C_BaseAnimating
{
private:
	[[maybe_unused]] uint8_t __pad0898[0x18]; // 0x898
public:
	matrix3x4_t m_mClientTransform; // 0x8b0	
	Vector m_vClientScale; // 0x8e0	
private:
	[[maybe_unused]] uint8_t __pad08ec[0x4]; // 0x8ec
public:
	CUtlVector< matrix3x4a_t > m_vecRenderModelComponentTransforms; // 0x8f0	
	// MNetworkEnable
	bool m_bIsTracking; // 0x908	
private:
	[[maybe_unused]] uint8_t __pad0909[0x3]; // 0x909
public:
	// MNetworkEnable
	Vector m_vTrackedPosition; // 0x90c	
	// MNetworkEnable
	QAngle m_qTrackedAngles; // 0x918	
	// MNetworkEnable
	Vector m_vPhysicallyConstrainedPosition; // 0x924	
	// MNetworkEnable
	QAngle m_qPhysicallyConstrainedAngles; // 0x930	
	// MNetworkEnable
	Vector m_vWeldTransformPosition; // 0x93c	
	// MNetworkEnable
	QAngle m_qWeldTransformAngles; // 0x948	
	// MNetworkEnable
	bool m_bClientIsAuthoritativeForTransform; // 0x954	
	// MNetworkEnable
	bool m_bIsInContact; // 0x955	
	// MNetworkEnable
	bool m_bIsInContactTeleportClip; // 0x956	
private:
	[[maybe_unused]] uint8_t __pad0957[0x1]; // 0x957
public:
	// MNetworkEnable
	Vector m_vTeleportClipPos; // 0x958	
	// MNetworkEnable
	bool m_bIsInContactSolidPostTeleportClip; // 0x964	
private:
	[[maybe_unused]] uint8_t __pad0965[0x3]; // 0x965
public:
	// MNetworkEnable
	Vector m_vSolidPostTeleportClipPos; // 0x968	
	// MNetworkEnable
	Vector m_vLocalPosition; // 0x974	
	// MNetworkEnable
	QAngle m_qLocalAngles; // 0x980	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9c0
// Has VTable
// 
// MNetworkVarNames "int m_hLiteralControllerSlots"
// MNetworkVarNames "int m_hLogicalControllerSlots"
// MNetworkVarNames "CHandle< CPropVRHand > m_hVRControllers"
// MNetworkVarNames "CHandle< CPointWorldText> m_hCloseCaption"
class C_PropHMDAvatar : public C_PropVRTrackedObject
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_hLiteralControllerSlots[2]; // 0x990	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_hLogicalControllerSlots[2]; // 0x998	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PropVRHand > m_hVRControllers[4]; // 0x9a0	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PointWorldText > m_hCloseCaption; // 0x9b0	
	bool m_bLocalHMDPoseValid; // 0x9b4	
private:
	[[maybe_unused]] uint8_t __pad09b5[0x3]; // 0x9b5
public:
	float m_flLastZPos; // 0x9b8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1048
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseVRHandAttachment> m_hActiveHandAttachment"
// MNetworkVarNames "CHandle< CPropHMDAvatar> m_hHMDAvatar"
// MNetworkVarNames "bool m_bVrSkeletonActive"
// MNetworkVarNames "int m_nVrBoneCount"
// MNetworkVarNames "uint32_t m_unVrCompressedBoneTransformsSize"
// MNetworkVarNames "byte m_vrCompressedBoneTransforms"
// MNetworkVarNames "CHandle< CBaseVRHandAttachment > m_hAttachments"
// MNetworkVarNames "bool m_bInitialized"
// MNetworkVarNames "bool m_bIsInView"
// MNetworkVarNames "int m_nHandID"
// MNetworkVarNames "float m_flTriggerAnalogValue"
// MNetworkVarNames "float m_flGripAnalogValue"
// MNetworkVarNames "float m_flFinger0"
// MNetworkVarNames "float m_flFinger1"
// MNetworkVarNames "float m_flFinger2"
// MNetworkVarNames "float m_flFinger3"
// MNetworkVarNames "float m_flFinger4"
// MNetworkVarNames "float m_flFingerSplay0"
// MNetworkVarNames "float m_flFingerSplay1"
// MNetworkVarNames "float m_flFingerSplay2"
// MNetworkVarNames "float m_flFingerSplay3"
// MNetworkVarNames "float m_flTrackpadAnalogValueX"
// MNetworkVarNames "float m_flTrackpadAnalogValueY"
// MNetworkVarNames "float m_flJoystickAnalogValueX"
// MNetworkVarNames "float m_flJoystickAnalogValueY"
// MNetworkVarNames "bool m_bCanPerformUse"
// MNetworkVarNames "bool m_bTipTransformInitialized"
// MNetworkVarNames "Vector m_localTipOrigin"
// MNetworkVarNames "QAngle m_localTipAngles"
// MNetworkVarNames "float m_flHapticPulseTime"
// MNetworkVarNames "int16 m_nHapticPulseInterval"
// MNetworkVarNames "eLiteralHandType m_LiteralHandType"
// MNetworkVarNames "bool m_bAttachedToTrackedBody"
class C_PropVRHand : public C_PropVRTrackedObject
{
private:
	[[maybe_unused]] uint8_t __pad0990[0x40]; // 0x990
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseVRHandAttachment > m_hActiveHandAttachment; // 0x9d0	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PropHMDAvatar > m_hHMDAvatar; // 0x9d4	
	// MNetworkEnable
	bool m_bVrSkeletonActive; // 0x9d8	
private:
	[[maybe_unused]] uint8_t __pad09d9[0x3]; // 0x9d9
public:
	// MNetworkEnable
	int32_t m_nVrBoneCount; // 0x9dc	
	// MNetworkEnable
	uint32_t m_unVrCompressedBoneTransformsSize; // 0x9e0	
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	uint8_t m_vrCompressedBoneTransforms[64]; // 0x9e4	
private:
	[[maybe_unused]] uint8_t __pad0a24[0x3e4]; // 0xa24
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CBaseVRHandAttachmentHandle"
	CUtlVector< CHandle< C_BaseVRHandAttachment > > m_hAttachments; // 0xe08	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInitialized; // 0xe20	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsInView; // 0xe21	
private:
	[[maybe_unused]] uint8_t __pad0e22[0x2]; // 0xe22
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nHandID; // 0xe24	
	// MNetworkEnable
	// MNetworkEnable
	float m_flTriggerAnalogValue; // 0xe28	
	// MNetworkEnable
	// MNetworkEnable
	float m_flGripAnalogValue; // 0xe2c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger0; // 0xe30	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger1; // 0xe34	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger2; // 0xe38	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger3; // 0xe3c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinger4; // 0xe40	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay0; // 0xe44	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay1; // 0xe48	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay2; // 0xe4c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFingerSplay3; // 0xe50	
	// MNetworkEnable
	// MNetworkEnable
	float m_flTrackpadAnalogValueX; // 0xe54	
	// MNetworkEnable
	// MNetworkEnable
	float m_flTrackpadAnalogValueY; // 0xe58	
	// MNetworkEnable
	// MNetworkEnable
	float m_flJoystickAnalogValueX; // 0xe5c	
	// MNetworkEnable
	// MNetworkEnable
	float m_flJoystickAnalogValueY; // 0xe60	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCanPerformUse; // 0xe64	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bTipTransformInitialized; // 0xe65	
private:
	[[maybe_unused]] uint8_t __pad0e66[0x2]; // 0xe66
public:
	// MNetworkEnable
	// MNetworkEnable
	Vector m_localTipOrigin; // 0xe68	
	// MNetworkEnable
	// MNetworkEnable
	QAngle m_localTipAngles; // 0xe74	
	// MNetworkEnable
	// MNetworkEnable
	float m_flHapticPulseTime; // 0xe80	
	// MNetworkEnable
	// MNetworkEnable
	int16_t m_nHapticPulseInterval; // 0xe84	
private:
	[[maybe_unused]] uint8_t __pad0e86[0x2]; // 0xe86
public:
	CInteractionManager m_InteractionMgr; // 0xe88	
	matrix3x4_t m_matUseTransform; // 0xf68	
	uint8_t m_nAttachUseIndex; // 0xf98	
private:
	[[maybe_unused]] uint8_t __pad0f99[0x3]; // 0xf99
public:
	matrix3x4_t m_matHoldTransform; // 0xf9c	
	uint8_t m_nAttachHoldIndex; // 0xfcc	
private:
	[[maybe_unused]] uint8_t __pad0fcd[0x3]; // 0xfcd
public:
	matrix3x4_t m_matHoverTransform; // 0xfd0	
	uint8_t m_nAttachHoverIndex; // 0x1000	
	uint8_t m_nAttachOriginIndex; // 0x1001	
private:
	[[maybe_unused]] uint8_t __pad1002[0x2]; // 0x1002
public:
	// MNetworkEnable
	// MNetworkEnable
	eLiteralHandType m_LiteralHandType; // 0x1004	
private:
	[[maybe_unused]] uint8_t __pad1008[0x30]; // 0x1008
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAttachedToTrackedBody; // 0x1038	
	bool m_bWaitingToAttach; // 0x1039	
	
	// Datamap fields:
	// void m_nButtonsUsedOnPickup; // 0x9c8
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x900
// Has VTable
// 
// MNetworkVarNames "CHandle< CPropVRHand> m_hAttachedHand"
// MNetworkVarNames "bool m_bIsAttached"
class C_BaseVRHandAttachment : public C_BaseAnimating
{
public:
	CHandle< C_PropVRHand > m_hOldAttachedHand; // 0x898	
private:
	[[maybe_unused]] uint8_t __pad089c[0x4]; // 0x89c
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialOverride; // 0x8a0	
	CEntityIOOutput m_OnAttachedToHand; // 0x8a8	
	CEntityIOOutput m_OnDetachedFromHand; // 0x8d0	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PropVRHand > m_hAttachedHand; // 0x8f8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsAttached; // 0x8fc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x900
// Has VTable
class C_VRHandModelOverride : public C_BaseVRHandAttachment
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x940
// Has VTable
class C_ClientRagdoll : public C_BaseAnimating
{
public:
	bool m_bFadeOut; // 0x898	
	bool m_bImportant; // 0x899	
private:
	[[maybe_unused]] uint8_t __pad089a[0x2]; // 0x89a
public:
	float m_flEffectTime; // 0x89c	
	float m_gibDespawnTime; // 0x8a0	
	int32_t m_iCurrentFriction; // 0x8a4	
	int32_t m_iMinFriction; // 0x8a8	
	int32_t m_iMaxFriction; // 0x8ac	
	int32_t m_iFrictionAnimState; // 0x8b0	
	bool m_bReleaseRagdoll; // 0x8b4	
private:
	[[maybe_unused]] uint8_t __pad08b5[0x3]; // 0x8b5
public:
	int32_t m_iEyeAttachment; // 0x8b8	
	bool m_bFadingOut; // 0x8bc	
private:
	[[maybe_unused]] uint8_t __pad08bd[0x3]; // 0x8bd
public:
	float m_flScaleEnd[10]; // 0x8c0	
	float m_flScaleTimeStart[10]; // 0x8e8	
	float m_flScaleTimeEnd[10]; // 0x910	
	bool m_bForceShadowCastType; // 0x938	
private:
	[[maybe_unused]] uint8_t __pad0939[0x3]; // 0x939
public:
	ShadowType_t m_forcedShadowCastType; // 0x93c	
	
	// Datamap fields:
	// Color m_clrRender; // 0x4eb
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
// 
// MNetworkVarNames "bool m_bIsUsable"
class C_BaseDoor : public C_BaseToggle
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsUsable; // 0x6e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa58
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "bool m_blinktoggle"
class C_BaseFlex : public C_BaseAnimatingOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0898[0x8]; // 0x898
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_viewtarget; // 0x8a0	
private:
	[[maybe_unused]] uint8_t __pad08ac[0xc]; // 0x8ac
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< float32 >"
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	CUtlVector< float32 > m_flexWeight; // 0x8b8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_blinktoggle; // 0x8d0	
private:
	[[maybe_unused]] uint8_t __pad08d1[0x67]; // 0x8d1
public:
	int32_t m_nLastFlexUpdateFrameCount; // 0x938	
	Vector m_CachedViewTarget; // 0x93c	
private:
	[[maybe_unused]] uint8_t __pad0948[0x8]; // 0x948
public:
	int32_t m_iBlink; // 0x950	
	float m_blinktime; // 0x954	
	bool m_prevblinktoggle; // 0x958	
private:
	[[maybe_unused]] uint8_t __pad0959[0x3]; // 0x959
public:
	int32_t m_iBlinkSlider; // 0x95c	
	int32_t m_iJawOpen; // 0x960	
	float m_flJawOpenAmount; // 0x964	
	float m_flBlinkAmount; // 0x968	
	int32_t m_iMouthAttachment; // 0x96c	
	int32_t m_iEyeAttachment; // 0x970	
	bool m_bResetFlexWeightsOnModelChange; // 0x974	
private:
	[[maybe_unused]] uint8_t __pad0975[0x1b]; // 0x975
public:
	int32_t m_iEyeLidUpDownPP; // 0x990	
	int32_t m_iEyeLidLeftRightPP; // 0x994	
	float m_flMinEyeUpDown; // 0x998	
	float m_flMaxEyeUpDown; // 0x99c	
	float m_flMinEyeLeftRight; // 0x9a0	
	float m_flMaxEyeLeftRight; // 0x9a4	
	int32_t m_nEyeOcclusionRendererBone; // 0x9a8	
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x9ac	
	Vector m_vEyeOcclusionRendererHalfExtent; // 0x9dc	
private:
	[[maybe_unused]] uint8_t __pad09e8[0x10]; // 0x9e8
public:
	// -> m_sClassName - 0x9f8
	// -> m_flAmount - 0xa10
	// -> m_bRequired - 0xa14
	// -> m_bBasechecked - 0xa15
	// -> m_bValid - 0xa16
	C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0x9f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2a98
// Has VTable
class C_FlexCycler : public C_BaseFlex
{
public:
	float m_flextime; // 0xa58	
private:
	[[maybe_unused]] uint8_t __pad0a5c[0x4]; // 0xa5c
public:
	float m_flextarget[2048]; // 0xa60	
	float m_blinktime; // 0x2a60	
	float m_looktime; // 0x2a64	
	Vector m_lookTarget; // 0x2a68	
	float m_speaktime; // 0x2a74	
	int32_t m_istalking; // 0x2a78	
	int32_t m_phoneme; // 0x2a7c	
	HSequence m_hCurrLayerSequence; // 0x2a80	
private:
	[[maybe_unused]] uint8_t __pad2a84[0x4]; // 0x2a84
public:
	CUtlSymbolLarge m_iszSentence; // 0x2a88	
	int32_t m_sentence; // 0x2a90	
	
	// Datamap fields:
	// int32_t m_flexnum; // 0xa5c
	// void InputAddSequenceLayer; // 0x0
	// void InputClearAllSequenceLayers; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2ad8
// Has VTable
// 
// MNetworkVarNames "int m_nTestMode"
class C_GenericFlexCycler : public C_FlexCycler
{
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nTestMode; // 0x2a98	
	int32_t m_nTestIndex; // 0x2a9c	
	CUtlSymbolLarge m_poseParameterName; // 0x2aa0	
	bool m_bDoClientSideAnimation; // 0x2aa8	
private:
	[[maybe_unused]] uint8_t __pad2aa9[0x7]; // 0x2aa9
public:
	CUtlSymbolLarge m_layerSequence[2]; // 0x2ab0	
	int32_t m_nLayerIndex[2]; // 0x2ac0	
	HSequence m_hBaseSequence[2]; // 0x2ac8	
	int32_t m_nBoneOverrideIndex; // 0x2ad0	
	float m_flLastSimTime; // 0x2ad4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a0
// Has VTable
class C_CombatWeaponClone : public C_BaseAnimating
{
public:
	CHandle< C_BaseCombatWeapon > m_hWeaponParent; // 0x898	
	int32_t m_nLastUpdatedWorldModelClone; // 0x89c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9f0
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByName "m_nMuzzleFlashParity"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bAwake"
class C_PhysicsProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAwake; // 0x9e8	
private:
	[[maybe_unused]] uint8_t __pad09e9[0x3]; // 0x9e9
public:
	uint32_t m_spawnflags; // 0x9ec	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb20
// Has VTable
class C_DynamicPropClientside : public C_DynamicProp
{
public:
	bool m_bNoInterpolate; // 0xb18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb60
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByName "m_nMuzzleFlashParity"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "DoorState_t m_eDoorState"
// MNetworkVarNames "bool m_bLocked"
// MNetworkVarNames "Vector m_closedPosition"
// MNetworkVarNames "QAngle m_closedAngles"
// MNetworkVarNames "CHandle< C_BasePropDoor> m_hMaster"
class C_BasePropDoor : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0b18[0x18]; // 0xb18
public:
	// MNetworkEnable
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xb30	
	bool m_modelChanged; // 0xb34	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLocked; // 0xb35	
private:
	[[maybe_unused]] uint8_t __pad0b36[0x2]; // 0xb36
public:
	// MNetworkEnable
	// MNetworkEnable
	Vector m_closedPosition; // 0xb38	
	// MNetworkEnable
	// MNetworkEnable
	QAngle m_closedAngles; // 0xb44	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0xb50	
	Vector m_vWhereToSetLightingOrigin; // 0xb54	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa28
// Has VTable
class C_PhysPropClientside : public C_BreakableProp
{
public:
	float m_flTouchDelta; // 0x9e8	
	float m_fDeathTime; // 0x9ec	
	float m_impactEnergyScale; // 0x9f0	
	uint32_t m_spawnflags; // 0x9f4	
	float m_inertiaScale; // 0x9f8	
	float m_flDmgModBullet; // 0x9fc	
	float m_flDmgModClub; // 0xa00	
	float m_flDmgModExplosive; // 0xa04	
	float m_flDmgModFire; // 0xa08	
private:
	[[maybe_unused]] uint8_t __pad0a0c[0x4]; // 0xa0c
public:
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0xa10	
	CUtlSymbolLarge m_iszBasePropData; // 0xa18	
	int32_t m_iInteractions; // 0xa20	
	bool m_bHasBreakPiecesOrCommands; // 0xa24	
	
	// Datamap fields:
	// float fademaxdist; // 0x7fffffff
	// float fademindist; // 0x7fffffff
	// float fadescale; // 0x7fffffff
	// float scale; // 0x7fffffff
	// CUtlStringToken skin; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x910
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "float32 m_flBlendWeight"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
class C_ServerRagdoll : public C_BaseAnimating
{
private:
	[[maybe_unused]] uint8_t __pad0898[0x8]; // 0x898
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< Vector >"
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "ragAnglesChanged"
	CUtlVector< Vector > m_ragPos; // 0x8a0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< QAngle >"
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	CUtlVector< QAngle > m_ragAngles; // 0x8b8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0x8d0	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; // 0x8d4	
	int32_t m_iEyeAttachment; // 0x8d8	
	float m_flBlendWeightCurrent; // 0x8dc	
	CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0x8e0	
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0x8f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x958
// Has VTable
class C_LocalTempEntity : public C_BaseAnimating
{
private:
	[[maybe_unused]] uint8_t __pad0898[0x18]; // 0x898
public:
	int32_t flags; // 0x8b0	
	float die; // 0x8b4	
	float m_flFrameMax; // 0x8b8	
	float x; // 0x8bc	
	float y; // 0x8c0	
	float fadeSpeed; // 0x8c4	
	float bounceFactor; // 0x8c8	
	int32_t hitSound; // 0x8cc	
	int32_t priority; // 0x8d0	
	Vector tentOffset; // 0x8d4	
	QAngle m_vecTempEntAngVelocity; // 0x8e0	
	int32_t tempent_renderamt; // 0x8ec	
	Vector m_vecNormal; // 0x8f0	
	float m_flSpriteScale; // 0x8fc	
	int32_t m_nFlickerFrame; // 0x900	
	float m_flFrameRate; // 0x904	
	float m_flFrame; // 0x908	
private:
	[[maybe_unused]] uint8_t __pad090c[0x4]; // 0x90c
public:
	char* m_pszImpactEffect; // 0x910	
	char* m_pszParticleEffect; // 0x918	
	bool m_bParticleCollision; // 0x920	
private:
	[[maybe_unused]] uint8_t __pad0921[0x3]; // 0x921
public:
	int32_t m_iLastCollisionFrame; // 0x924	
	Vector m_vLastCollisionOrigin; // 0x928	
	Vector m_vecTempEntVelocity; // 0x934	
	Vector m_vecPrevAbsOrigin; // 0x940	
	Vector m_vecTempEntAcceleration; // 0x94c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_nNextThinkTick"
// MNetworkUserGroupSendProxyRecipientsFilter
// MNetworkVarNames "CHandle< CBaseCombatCharacter> m_hOwner"
// MNetworkVarNames "uint32 m_nViewModelIndex"
// MNetworkVarNames "float32 m_flNextPrimaryAttack"
// MNetworkVarNames "float32 m_flNextSecondaryAttack"
// MNetworkVarNames "int32 m_nQueuedAttack"
// MNetworkVarNames "float32 m_flTimeAttackQueued"
// MNetworkVarNames "HModelStrong m_iViewModelIndex"
// MNetworkVarNames "HModelStrong m_iWorldModelIndex"
// MNetworkVarNames "WeaponState_t m_iState"
// MNetworkVarNames "int32 m_iPrimaryAmmoType"
// MNetworkVarNames "int32 m_iSecondaryAmmoType"
// MNetworkVarNames "int32 m_iClip1"
// MNetworkVarNames "int32 m_iClip2"
// MNetworkVarNames "bool m_bOnlyPump"
// MNetworkVarNames "float32 m_flTimeWeaponIdle"
// MNetworkVarNames "bool m_bInReload"
class C_BaseCombatWeapon : public C_BaseAnimating
{
private:
	[[maybe_unused]] uint8_t __pad0898[0x8]; // 0x898
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseCombatCharacter > m_hOwner; // 0x8a0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0x8a4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttack; // 0x8a8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttack; // 0x8ac	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_nQueuedAttack; // 0x8b0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flTimeAttackQueued; // 0x8b4	
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iViewModelIndex; // 0x8b8	
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_iWorldModelIndex; // 0x8c0	
	// MNetworkEnable
	// MNetworkEnable
	WeaponState_t m_iState; // 0x8c8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iPrimaryAmmoType; // 0x8cc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iSecondaryAmmoType; // 0x8d0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "64"
	int32_t m_iClip1; // 0x8d4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0x8d8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	bool m_bOnlyPump; // 0x8dc	
private:
	[[maybe_unused]] uint8_t __pad08dd[0x3]; // 0x8dd
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "64"
	float m_flTimeWeaponIdle; // 0x8e0	
	float m_flNextEmptySoundTime; // 0x8e4	
	float m_fMinRange1; // 0x8e8	
	float m_fMinRange2; // 0x8ec	
	float m_fMaxRange1; // 0x8f0	
	float m_fMaxRange2; // 0x8f4	
	float m_fFireDuration; // 0x8f8	
	float m_fMinAdvanceToRange1; // 0x8fc	
	int32_t m_Activity; // 0x900	
	int32_t m_iPrimaryAmmoCount; // 0x904	
	int32_t m_iSecondaryAmmoCount; // 0x908	
private:
	[[maybe_unused]] uint8_t __pad090c[0x4]; // 0x90c
public:
	CUtlSymbolLarge m_iszName; // 0x910	
	bool m_bRemoveable; // 0x918	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInReload; // 0x919	
	bool m_bFireOnEmpty; // 0x91a	
	bool m_bFiresUnderwater; // 0x91b	
	bool m_bAltFiresUnderwater; // 0x91c	
	bool m_bReloadsSingly; // 0x91d	
private:
	[[maybe_unused]] uint8_t __pad091e[0x2]; // 0x91e
public:
	HSequence m_hIdealSequence; // 0x920	
	int32_t m_IdealActivity; // 0x924	
	int32_t m_iSubType; // 0x928	
	float m_flUnlockTime; // 0x92c	
	CHandle< C_BaseEntity > m_hLocker; // 0x930	
	int32_t m_nTracerAttachmentIndex; // 0x934	
private:
	[[maybe_unused]] uint8_t __pad0938[0x10]; // 0x938
public:
	int32_t m_iAltFireHudHintCount; // 0x948	
	int32_t m_iReloadHudHintCount; // 0x94c	
	bool m_bAltFireHudHintDisplayed; // 0x950	
	bool m_bReloadHudHintDisplayed; // 0x951	
private:
	[[maybe_unused]] uint8_t __pad0952[0x2]; // 0x952
public:
	float m_flHudHintPollTime; // 0x954	
	float m_flHudHintMinDisplayTime; // 0x958	
	bool m_bJustRestored; // 0x95c	
private:
	[[maybe_unused]] uint8_t __pad095d[0x1]; // 0x95d
public:
	int16_t m_nLastNetworkedModelIndex; // 0x95e	
	int16_t m_nPreDataChangedModelIndex; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0962[0x6]; // 0x962
public:
	C_CombatWeaponClone* m_pWorldModelClone; // 0x968	
private:
	[[maybe_unused]] uint8_t __pad0970[0x8]; // 0x970
public:
	WeaponState_t m_iOldState; // 0x978	
	
	// Datamap fields:
	// void m_pWeaponFileInfo; // 0x938
	// void C_BaseCombatWeaponDefaultTouch; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a0
// Has VTable
class C_ViewmodelWeapon : public C_BaseAnimating
{
public:
	char* m_worldModel; // 0x898	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x928
// Has VTable
// 
// MNetworkIncludeByName "m_clrRender"
// MNetworkVarNames "uint32 m_nViewModelIndex"
// MNetworkVarNames "uint32 m_nAnimationParity"
// MNetworkVarNames "HSequence m_hLayerSequence"
// MNetworkVarNames "uint32 m_nLayer"
// MNetworkVarNames "float32 m_flAnimationStartTime"
// MNetworkVarNames "CHandle< CBaseCombatWeapon> m_hWeapon"
// MNetworkVarNames "CHandle< CBaseEntity > m_hOwner"
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_hModel"
// MNetworkIncludeByName "m_fEffects"
// MNetworkIncludeByName "m_baseLayer.m_hSequence"
// MNetworkIncludeByName "m_animationController.m_flPlaybackRate"
// MNetworkIncludeByName "m_animationController.m_bClientSideAnimation"
// MNetworkIncludeByName "m_nNewSequenceParity"
// MNetworkIncludeByName "m_nResetEventsParity"
// MNetworkIncludeByName "m_nMuzzleFlashParity"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkOverride "m_fEffects"
class C_BaseViewModel : public C_BaseAnimatingOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0898[0x8]; // 0x898
public:
	Vector m_vecLastFacing; // 0x8a0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	uint32_t m_nViewModelIndex; // 0x8ac	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	uint32_t m_nAnimationParity; // 0x8b0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "13"
	HSequence m_hLayerSequence; // 0x8b4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint32_t m_nLayer; // 0x8b8	
	// MNetworkEnable
	// MNetworkEnable
	float m_flAnimationStartTime; // 0x8bc	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponChanged"
	CHandle< C_BaseCombatWeapon > m_hWeapon; // 0x8c0	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOwner; // 0x8c4	
	int32_t m_Activity; // 0x8c8	
private:
	[[maybe_unused]] uint8_t __pad08cc[0x4]; // 0x8cc
public:
	CUtlSymbolLarge m_sVMName; // 0x8d0	
	CUtlSymbolLarge m_sAnimationPrefix; // 0x8d8	
	CHandle< C_ViewmodelWeapon > m_hWeaponModel; // 0x8e0	
	int32_t m_iCameraAttachment; // 0x8e4	
	QAngle m_vecLastCameraAngles; // 0x8e8	
	float m_previousElapsedDuration; // 0x8f4	
	float m_previousCycle; // 0x8f8	
	int32_t m_nOldAnimationParity; // 0x8fc	
	HSequence m_hOldLayerSequence; // 0x900	
	int32_t m_oldLayer; // 0x904	
	float m_oldLayerStartTime; // 0x908	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_PointHintUIButtonHighlightModel : public C_BaseAnimating
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x910
// Has VTable
class C_PointHintUIHighlightModel : public C_BaseAnimating
{
private:
	[[maybe_unused]] uint8_t __pad0898[0x18]; // 0x898
public:
	CUtlVector< matrix3x4a_t > m_vecRenderModelComponentTransforms; // 0x8b0	
	int32_t m_nTrackedDeviceIndex; // 0x8c8	
	CHandle< C_PropVRHand > m_hHighlightHand; // 0x8cc	
private:
	[[maybe_unused]] uint8_t __pad08d0[0x8]; // 0x8d0
public:
	matrix3x4_t m_matLocalHighlight; // 0x8d8	
	bool m_bVisible; // 0x908	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbf0
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_EconEntity : public C_BaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0a58[0x8]; // 0xa58
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xa60	
	bool m_bClientside; // 0xba0	
private:
	[[maybe_unused]] uint8_t __pad0ba1[0x3]; // 0xba1
public:
	EconEntityParticleDisableMode_t m_nDisableMode; // 0xba4	
	bool m_bParticleSystemsCreated; // 0xba8	
	bool m_bForceDestroyAttachedParticlesImmediately; // 0xba9	
private:
	[[maybe_unused]] uint8_t __pad0baa[0x6]; // 0xbaa
public:
	CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // 0xbb0	
	CHandle< C_BaseAnimating > m_hViewmodelAttachment; // 0xbc8	
	int32_t m_iOldTeam; // 0xbcc	
	bool m_bAttachmentDirty; // 0xbd0	
	style_index_t m_iOldStyle; // 0xbd1	
private:
	[[maybe_unused]] uint8_t __pad0bd2[0x2]; // 0xbd2
public:
	CHandle< C_BaseEntity > m_hOldProvidee; // 0xbd4	
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0xbd8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbf0
// Has VTable
class C_BaseAttributableItem : public C_EconEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbf8
// Has VTable
class C_EconWearable : public C_EconEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbf8
// Has VTable
class C_TFWearableItem : public C_EconWearable
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe18
// Has VTable
class C_DAC_NPC : public C_BaseAnimatingOverlay
{
public:
	int32_t m_nServerEntIndex; // 0x898	
	PlayerSlot_t m_unOwnerPlayerSlot; // 0x89c	
private:
	[[maybe_unused]] uint8_t __pad089d[0xb]; // 0x89d
public:
	bool m_bSimulatedFirstSnapshot; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08a9[0xb7]; // 0x8a9
public:
	bool m_bIsSetupSnapshot; // 0x960	
	bool m_bIsOnBench; // 0x961	
	bool m_bIsShopUnit; // 0x962	
	bool m_bOverPopulation; // 0x963	
	bool m_bUnderPopulation; // 0x964	
	bool m_bUnitKeywordHighlight; // 0x965	
private:
	[[maybe_unused]] uint8_t __pad0966[0x2]; // 0x966
public:
	float m_flDeathStateChangeTime; // 0x968	
private:
	[[maybe_unused]] uint8_t __pad096c[0xc]; // 0x96c
public:
	bool m_bSuppressPostCombatCelebration; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0x3]; // 0x979
public:
	int32_t m_nHealth; // 0x97c	
	int32_t m_nArmor; // 0x980	
	int32_t m_nDPS; // 0x984	
	int32_t m_nDamageBonus; // 0x988	
	int32_t m_nDamageMin; // 0x98c	
	int32_t m_nDamageMax; // 0x990	
	int32_t m_nRangeBonus; // 0x994	
	float m_flAttacksPerSecond; // 0x998	
	int32_t m_nMana; // 0x99c	
	int32_t m_nMaxMana; // 0x9a0	
	int32_t m_nRank; // 0x9a4	
	float m_flKillCount; // 0x9a8	
	int32_t m_nKillStreak; // 0x9ac	
	int32_t m_nUnderlordPower; // 0x9b0	
	int32_t m_nDuelBonusDamage; // 0x9b4	
	int32_t m_nLastForcedUnderlordSlotNum; // 0x9b8	
	float m_flBaseUnitModelScale; // 0x9bc	
	float m_flItemScaling; // 0x9c0	
	float m_flCooldownMultiplier; // 0x9c4	
	bool m_bPlayPlacedOnBoardAnim; // 0x9c8	
	bool m_bPlaySpawnAnim; // 0x9c9	
	bool m_bPlayTeleportIn; // 0x9ca	
private:
	[[maybe_unused]] uint8_t __pad09cb[0x1]; // 0x9cb
public:
	float m_flZOffset; // 0x9cc	
	float m_flLastAttackEndTime; // 0x9d0	
	float m_flPreviousLastAttackEndTime; // 0x9d4	
	float m_flLastAttackSpeed; // 0x9d8	
private:
	[[maybe_unused]] uint8_t __pad09dc[0x20]; // 0x9dc
public:
	float m_flCooldownRatio; // 0x9fc	
private:
	[[maybe_unused]] uint8_t __pad0a00[0x70]; // 0xa00
public:
	Vector m_vecSnapshotPosition; // 0xa70	
	QAngle m_angSnapshotAngles; // 0xa7c	
	Vector m_vecStartingPosition; // 0xa88	
	float m_flDesiredModelScale; // 0xa94	
	CUtlVectorFixedGrowable< CUtlString > m_vecAttachmentNames; // 0xa98	
	int32_t m_nAttackLayer; // 0xaf0	
	int32_t m_nAttackActivity; // 0xaf4	
	int32_t m_nModifierLayer; // 0xaf8	
	int32_t m_nAbilityLayer; // 0xafc	
	bool m_bDragging; // 0xb00	
	bool m_bIsDraggingInWorldspace; // 0xb01	
private:
	[[maybe_unused]] uint8_t __pad0b02[0x2]; // 0xb02
public:
	Vector m_vecDragPosition; // 0xb04	
	QAngle m_angDragAngles; // 0xb10	
	bool m_bOverridePosition; // 0xb1c	
	bool m_bOverrideBench; // 0xb1d	
	bool m_bRestorePosition; // 0xb1e	
	bool m_bSelected; // 0xb1f	
	bool m_bIsSummoned; // 0xb20	
	bool m_bForceUseBigHealthbar; // 0xb21	
private:
	[[maybe_unused]] uint8_t __pad0b22[0x2]; // 0xb22
public:
	int32_t m_nSummonOwnerEntIndex; // 0xb24	
	bool m_bClientCanBeSold; // 0xb28	
	bool m_bClientCanMoveToBench; // 0xb29	
	bool m_bClientRecommendedForPopcap; // 0xb2a	
private:
	[[maybe_unused]] uint8_t __pad0b2b[0x5]; // 0xb2b
public:
	uint64_t m_uPredictedSequenceNumber; // 0xb30	
	Vector m_vPredictedPosition; // 0xb38	
	QAngle m_angPredictedAngles; // 0xb44	
	bool m_bPredictHidden; // 0xb50	
	bool m_bNoInterp; // 0xb51	
	bool m_bShowManaBar; // 0xb52	
	bool m_bInvisibleUntilFirstUpdate; // 0xb53	
	bool m_bIsModifierRenderOutlineOnly; // 0xb54	
private:
	[[maybe_unused]] uint8_t __pad0b55[0x3]; // 0xb55
public:
	int32_t m_nLastCheerRound; // 0xb58	
	bool m_bUseUnitScaleFactor; // 0xb5c	
private:
	[[maybe_unused]] uint8_t __pad0b5d[0x3]; // 0xb5d
public:
	UnitStatusLabel m_eStatusLabel; // 0xb60	
private:
	[[maybe_unused]] uint8_t __pad0b64[0x4]; // 0xb64
public:
	CUtlVector< UnitStatusLabel > m_vecAllStatusLabels; // 0xb68	
	ParticleIndex_t m_nStatusEffectIndex; // 0xb80	
private:
	[[maybe_unused]] uint8_t __pad0b84[0x1ac]; // 0xb84
public:
	DACAbilityID_t m_unEquippedItem; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d34[0x1c]; // 0xd34
public:
	bool m_bForceShowRank; // 0xd50	
private:
	[[maybe_unused]] uint8_t __pad0d51[0x3]; // 0xd51
public:
	float m_flHealthBarBaseOffset; // 0xd54	
private:
	[[maybe_unused]] uint8_t __pad0d58[0x18]; // 0xd58
public:
	CHandle< C_DynamicPropClientside > m_hatProp; // 0xd70	
private:
	[[maybe_unused]] uint8_t __pad0d74[0x8c]; // 0xd74
public:
	CountdownTimer m_dragScaleBump; // 0xe00	
	int32_t m_nSellValue; // 0xe10	
	DACAbilityID_t m_itemOverride; // 0xe14	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc30
// Has VTable
// 
// MNetworkDisable
class C_DAC_Wearable : public C_EconWearable
{
public:
	bool m_bOwnerModelChanged; // 0xbf8	
	bool m_bIsGeneratingEconItem; // 0xbf9	
	bool m_bIsItemVisibleOnGeneratedEntity; // 0xbfa	
private:
	[[maybe_unused]] uint8_t __pad0bfb[0x1]; // 0xbfb
public:
	float m_fZDelta; // 0xbfc	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // 0xc00	
private:
	[[maybe_unused]] uint8_t __pad0c18[0x10]; // 0xc18
public:
	int32_t m_nOwnerRank; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
class C_DAC_Banner : public C_DynamicProp
{
public:
	bool m_bDirty; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b19[0x3]; // 0xb19
public:
	uint32_t m_unTeamID; // 0xb1c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xad8
// Has VTable
class C_DAC_Underlord : public C_BaseFlex
{
public:
	uint32_t m_unTeamID; // 0xa58	
	int32_t m_nLastForcedUnderlordSlotNum; // 0xa5c	
	UnderlordID_t m_unForcedUnderlord; // 0xa60	
private:
	[[maybe_unused]] uint8_t __pad0a61[0x1]; // 0xa61
public:
	UnderlordID_t m_unUnderlord; // 0xa62	
private:
	[[maybe_unused]] uint8_t __pad0a63[0x1]; // 0xa63
public:
	int32_t m_nIdleActivity; // 0xa64	
	HSequence m_hIdleSequence; // 0xa68	
	CHandle< C_SceneEntity > m_hScene; // 0xa6c	
	CUtlString m_sQueuedScene; // 0xa70	
private:
	[[maybe_unused]] uint8_t __pad0a78[0x58]; // 0xa78
public:
	bool m_bOutfitUpdateQueued; // 0xad0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb30
// Has VTable
class C_DAC_ChallengeMapClaim : public C_DynamicProp
{
public:
	CUtlSymbolLarge m_iszClaimName; // 0xb18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb60
// Has VTable
class C_DAC_ChallengeMapChallenge : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0b18[0x28]; // 0xb18
public:
	bool m_bPrestige; // 0xb40	
	
	// Datamap fields:
	// uint16_t m_eventChallengeSlotID; // 0xb18
	// bool m_bClaimable; // 0xb25
	// bool m_bClaimed; // 0xb24
	// Vector m_vecSourceNode; // 0xb44
	// Vector m_vecTargetNode; // 0xb50
	// uint32_t m_unPuzzleID; // 0xb1c
	// uint32_t m_unStreetFightID; // 0xb20
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x900
// Has VTable
class C_DAC_Reward_Preview : public C_BaseAnimating
{
public:
	CHandle< C_SceneEntity > m_hScene; // 0x898	
	item_definition_index_t m_nDacItemIndex; // 0x89c	
private:
	[[maybe_unused]] uint8_t __pad08a0[0xc]; // 0x8a0
public:
	int32_t m_IdleActivity; // 0x8ac	
	int32_t m_nClickerStartHealth; // 0x8b0	
	int32_t m_nClickerHealth; // 0x8b4	
private:
	[[maybe_unused]] uint8_t __pad08b8[0x28]; // 0x8b8
public:
	Vector m_vMinsForFraming; // 0x8e0	
	Vector m_vMaxsForFraming; // 0x8ec	
	float m_flRespawnParticleDelay; // 0x8f8	
	bool m_bMute; // 0x8fc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb48
// Has VTable
class C_DACBoardBuddy : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0b18[0x10]; // 0xb18
public:
	Vector m_vDesiredPos; // 0xb28	
	float m_flLastUpdateTime; // 0xb34	
	CUtlString m_szModelName; // 0xb38	
	bool m_bUpdateModel; // 0xb40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbc8
// Has VTable
class C_DACMapProp : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0b18[0x88]; // 0xb18
public:
	int32_t m_nPropSize; // 0xba0	
	int32_t m_nPropSlot; // 0xba4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb80
// Has VTable
// 
// MNetworkVarNames "int m_nTestMode"
// MNetworkVarNames "CUtlStringToken m_attachName"
// MNetworkVarNames "Vector m_vDynamicAttachOffset"
// MNetworkVarNames "int m_nDynamicResetCount"
// MNetworkVarNames "bool m_bChildIsDynamic"
// MNetworkVarNames "bool m_bCreateChildSideChild"
// MNetworkVarNames "CUtlStringToken m_alternateAttachName"
// MNetworkVarNames "HModelStrong m_hClientSideChildModel"
// MNetworkVarNames "float m_flEntityStartTime"
class C_DevtestHierarchy : public C_DynamicProp
{
public:
	Vector m_vRotationAxis; // 0xb18	
	float m_flRotationSpeed; // 0xb24	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nTestMode; // 0xb28	
	CHandle< C_BaseEntity > m_hChild; // 0xb2c	
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_attachName; // 0xb30	
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vDynamicAttachOffset; // 0xb34	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nDynamicResetCount; // 0xb40	
	int32_t m_nDynamicDetachCount; // 0xb44	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bChildIsDynamic; // 0xb48	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCreateChildSideChild; // 0xb49	
private:
	[[maybe_unused]] uint8_t __pad0b4a[0x2]; // 0xb4a
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_alternateAttachName; // 0xb4c	
	CHandle< C_BaseEntity > m_hAlternateParent; // 0xb50	
private:
	[[maybe_unused]] uint8_t __pad0b54[0x4]; // 0xb54
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hAlternateModel; // 0xb58	
	CStrongHandle< InfoForResourceTypeCModel > m_hOriginalModel; // 0xb60	
	// MNetworkEnable
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCModel > m_hClientSideChildModel; // 0xb68	
	// MNetworkEnable
	// MNetworkEnable
	float m_flEntityStartTime; // 0xb70	
	int32_t m_nTestIndex; // 0xb74	
	HierarchyType_t m_nCurrType; // 0xb78	
	int32_t m_nCurrentModel; // 0xb7c	
	
	// Datamap fields:
	// CHandle< CBaseEntity > child; // 0x7fffffff
	// CHandle< CBaseEntity > alternateParent; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb18
// Has VTable
class C_DevtestHierarchyChild : public C_DynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_DevtestHierarchy2 : public C_BaseAnimating
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2ad8
// Has VTable
class C_GenericFlexCyclerAlias_cycler : public C_GenericFlexCycler
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x948
// Has VTable
// 
// MNetworkVarNames "uint32 m_boneIndexAttached"
// MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
// MNetworkVarNames "Vector m_attachmentPointBoneSpace"
// MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
class C_ServerRagdollAttached : public C_ServerRagdoll
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_boneIndexAttached; // 0x910	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_ragdollAttachedObjectIndex; // 0x914	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0x918	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0x924	
	Vector m_vecOffset; // 0x930	
	float m_parentTime; // 0x93c	
	bool m_bHasParent; // 0x940	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xba8
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "float32 m_flNextAttack"
// MNetworkVarNames "uint32 m_iAmmo"
// MNetworkVarNames "CHandle< C_BaseCombatWeapon > m_hMyWeapons"
// MNetworkVarNames "CHandle< C_BaseCombatWeapon> m_hActiveWeapon"
// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
// MNetworkVarNames "float m_flFieldOfView"
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	float m_flNextAttack; // 0xa58	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnAmmoChanged"
	uint32_t m_iAmmo[32]; // 0xa5c	
private:
	[[maybe_unused]] uint8_t __pad0adc[0x4]; // 0xadc
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponsChanged"
	CUtlVector< CHandle< C_BaseCombatWeapon > > m_hMyWeapons; // 0xae0	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseCombatWeapon > m_hActiveWeapon; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	CUtlVector< CHandle< C_EconWearable > > m_hMyWearables; // 0xb00	
	int32_t m_bloodColor; // 0xb18	
	int32_t m_leftFootAttachment; // 0xb1c	
	int32_t m_rightFootAttachment; // 0xb20	
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0xb24	
	float m_flWaterWorldZ; // 0xb28	
	float m_flWaterNextTraceTime; // 0xb2c	
	// MNetworkEnable
	float m_flFieldOfView; // 0xb30	
private:
	[[maybe_unused]] uint8_t __pad0b34[0x4]; // 0xb34
public:
	CountdownTimer m_footstepTimer; // 0xb38	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14a8
// Has VTable
// 
// MNetworkUserGroupSendProxyRecipientsFilter
// MNetworkExcludeByUserGroup "FogController"
// MNetworkIncludeByUserGroup "Player"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkExcludeByName "m_ArmorValue"
// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
// MNetworkVarNames "C_PlayerLocalData m_Local"
// MNetworkVarNames "EHANDLE m_hTonemapController"
// MNetworkVarNames "uint32 m_iFOV"
// MNetworkVarNames "uint32 m_iFOVStart"
// MNetworkVarNames "CUtlStringToken m_ladderSurfaceProps"
// MNetworkVarNames "float32 m_flFOVTime"
// MNetworkVarNames "Vector m_vecLadderNormal"
// MNetworkVarNames "int32 m_iBonusProgress"
// MNetworkVarNames "int32 m_iBonusChallenge"
// MNetworkVarNames "float32 m_flMaxspeed"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hZoomOwner"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hVehicle"
// MNetworkVarNames "CHandle< C_BaseCombatWeapon> m_hLastWeapon"
// MNetworkVarNames "CHandle< C_BaseViewModel > m_hViewModel"
// MNetworkVarNames "CHandle< CPropHMDAvatar> m_hPropHMDAvatar"
// MNetworkVarNames "CHandle< CPointHMDAnchor> m_hPointHMDAnchor"
// MNetworkVarNames "int32 m_VRControllerType"
// MNetworkVarNames "bool m_fOnTarget"
// MNetworkVarNames "uint32 m_iDefaultFOV"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hViewEntity"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hConstraintEntity"
// MNetworkVarNames "Vector m_vecConstraintCenter"
// MNetworkVarNames "float32 m_flConstraintRadius"
// MNetworkVarNames "float32 m_flConstraintWidth"
// MNetworkVarNames "float32 m_flConstraintSpeedFactor"
// MNetworkVarNames "bool m_bConstraintPastRadius"
// MNetworkVarNames "uint8 m_iObserverMode"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hObserverTarget"
// MNetworkVarNames "float32 m_flDeathTime"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hUseEntity"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hHeldEntity"
// MNetworkVarNames "uint32 m_nTickBase"
// MNetworkVarNames "int32 m_ArmorValue"
// MNetworkVarNames "float32 m_flLaggedMovementValue"
// MNetworkVarNames "char m_szLastPlaceName"
// MNetworkVarNames "CHandle< CPostProcessController> m_hPostProcessCtrl"
// MNetworkVarNames "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
// MNetworkVarNames "fogplayerparams_t m_PlayerFog"
// MNetworkVarNames "ButtonBitMask_t m_nUnHoldableButtons"
class C_BasePlayer : public C_BaseCombatCharacter
{
private:
	[[maybe_unused]] uint8_t __pad0ba8[0x8]; // 0xba8
public:
	Vector m_vecFlashlightOrigin; // 0xbb0	
	Vector m_vecFlashlightForward; // 0xbbc	
	Vector m_vecFlashlightUp; // 0xbc8	
	Vector m_vecFlashlightRight; // 0xbd4	
	bool m_bBehindLocalPlayer; // 0xbe0	
private:
	[[maybe_unused]] uint8_t __pad0be1[0x3]; // 0xbe1
public:
	int32_t m_nBehindLocalPlayerFrame; // 0xbe4	
	fogparams_t m_CurrentFog; // 0xbe8	
	CHandle< C_FogController > m_hOldFogController; // 0xc48	
	bool m_bOverrideFogColor[5]; // 0xc4c	
	Color m_OverrideFogColor[5]; // 0xc51	
	bool m_bOverrideFogStartEnd[5]; // 0xc65	
private:
	[[maybe_unused]] uint8_t __pad0c6a[0x2]; // 0xc6a
public:
	float m_fOverrideFogStart[5]; // 0xc6c	
	float m_fOverrideFogEnd[5]; // 0xc80	
	int32_t m_StuckLast; // 0xc94	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CPlayerLocalData"
	// MNetworkSendProxyRecipientsFilter
	C_PlayerLocalData m_Local; // 0xc98	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BaseEntity > m_hTonemapController; // 0xe80	
private:
	[[maybe_unused]] uint8_t __pad0e84[0x4]; // 0xe84
public:
	// -> deadflag - 0xe90
	// -> hltv - 0xe91
	// -> v_angle - 0xe94
	C_PlayerState m_pl; // 0xe88	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_iFOV; // 0xea0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_iFOVStart; // 0xea4	
	uint64_t m_afButtonLast; // 0xea8	
	uint64_t m_afButtonPressed; // 0xeb0	
	uint64_t m_afButtonReleased; // 0xeb8	
	uint64_t m_nButtons; // 0xec0	
	float m_surfaceFriction; // 0xec8	
	int32_t m_nImpulse; // 0xecc	
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_ladderSurfaceProps; // 0xed0	
	int32_t m_flPhysics; // 0xed4	
	// MNetworkEnable
	// MNetworkEnable
	float m_flFOVTime; // 0xed8	
	float m_flWaterJumpTime; // 0xedc	
	float m_flSwimSoundTime; // 0xee0	
	float m_flStepSoundTime; // 0xee4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vecLadderNormal; // 0xee8	
	char m_szAnimExtension[32]; // 0xef4	
	int32_t m_nOldTickBase; // 0xf14	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	int32_t m_iBonusProgress; // 0xf18	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "4"
	int32_t m_iBonusChallenge; // 0xf1c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2048.000000"
	// MNetworkEncodeFlags "1"
	float m_flMaxspeed; // 0xf20	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hZoomOwner; // 0xf24	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hVehicle; // 0xf28	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BaseCombatWeapon > m_hLastWeapon; // 0xf2c	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseViewModel > m_hViewModel[2]; // 0xf30	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PropHMDAvatar > m_hPropHMDAvatar; // 0xf38	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PointHMDAnchor > m_hPointHMDAnchor; // 0xf3c	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_VRControllerType; // 0xf40	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_fOnTarget; // 0xf44	
private:
	[[maybe_unused]] uint8_t __pad0f45[0x3]; // 0xf45
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint32_t m_iDefaultFOV; // 0xf48	
private:
	[[maybe_unused]] uint8_t __pad0f4c[0x4]; // 0xf4c
public:
	uint64_t m_afButtonDisabled; // 0xf50	
	uint64_t m_afButtonForced; // 0xf58	
private:
	[[maybe_unused]] uint8_t __pad0f60[0x8]; // 0xf60
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hViewEntity; // 0xf68	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BaseEntity > m_hConstraintEntity; // 0xf6c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecConstraintCenter; // 0xf70	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flConstraintRadius; // 0xf7c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flConstraintWidth; // 0xf80	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flConstraintSpeedFactor; // 0xf84	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bConstraintPastRadius; // 0xf88	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkChangeCallback "OnObserverModeChanged"
	uint8_t m_iObserverMode; // 0xf89	
private:
	[[maybe_unused]] uint8_t __pad0f8a[0x2]; // 0xf8a
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverTargetChanged"
	CHandle< C_BaseEntity > m_hObserverTarget; // 0xf8c	
	float m_flObserverChaseDistance; // 0xf90	
	Vector m_vecFreezeFrameStart; // 0xf94	
	float m_flFreezeFrameStartTime; // 0xfa0	
	float m_flFreezeFrameDistance; // 0xfa4	
	bool m_bStartedFreezeFraming; // 0xfa8	
	bool m_bFinishedFreezeFraming; // 0xfa9	
private:
	[[maybe_unused]] uint8_t __pad0faa[0x2]; // 0xfaa
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flDeathTime; // 0xfac	
	CHandle< C_BaseEntity > m_hOldVehicle; // 0xfb0	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hUseEntity; // 0xfb4	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hHeldEntity; // 0xfb8	
	Vector m_vecWaterJumpVel; // 0xfbc	
	QAngle m_vecOldViewAngles; // 0xfc8	
private:
	[[maybe_unused]] uint8_t __pad0fd4[0x4]; // 0xfd4
public:
	QAngle m_angDemoViewAngles; // 0xfd8	
private:
	[[maybe_unused]] uint8_t __pad0fe4[0xc]; // 0xfe4
public:
	bool m_bWasFrozen; // 0xff0	
private:
	[[maybe_unused]] uint8_t __pad0ff1[0x3]; // 0xff1
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0xff4	
	int32_t m_nFinalPredictedTick; // 0xff8	
	bool m_bFlashlightEnabled[1]; // 0xffc	
private:
	[[maybe_unused]] uint8_t __pad0ffd[0x3]; // 0xffd
public:
	float m_flOldPlayerZ; // 0x1000	
	float m_flOldPlayerViewOffsetZ; // 0x1004	
	Vector m_vecVehicleViewOrigin; // 0x1008	
	QAngle m_vecVehicleViewAngles; // 0x1014	
	float m_flVehicleViewFOV; // 0x1020	
	int32_t m_nVehicleViewSavedFrame; // 0x1024	
	// -> needsprocessing - 0x1028
	// -> command_number - 0x1378
	C_CommandContext m_CommandContext; // 0x1028	
	float m_flWaterSurfaceZ; // 0x1380	
	bool m_bResampleWaterSurface; // 0x1384	
private:
	[[maybe_unused]] uint8_t __pad1385[0x3]; // 0x1385
public:
	// -> m_TimeBetweenEvents - 0x1388
	// -> m_fNextEvent - 0x138c
	TimedEvent m_tWaterParticleTimer; // 0x1388	
	bool m_bPlayerUnderwater; // 0x1390	
private:
	[[maybe_unused]] uint8_t __pad1391[0x3]; // 0x1391
public:
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x1394	
	float m_flNextAvoidanceTime; // 0x1398	
	float m_flAvoidanceRight; // 0x139c	
	float m_flAvoidanceForward; // 0x13a0	
	float m_flAvoidanceDotForward; // 0x13a4	
	float m_flAvoidanceDotRight; // 0x13a8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLaggedMovementValue; // 0x13ac	
	Vector m_vecPredictionError; // 0x13b0	
	float m_flPredictionErrorTime; // 0x13bc	
	Vector m_vecPreviouslyPredictedOrigin; // 0x13c0	
	// MNetworkEnable
	// MNetworkEnable
	char m_szLastPlaceName[18]; // 0x13cc	
private:
	[[maybe_unused]] uint8_t __pad13de[0x2]; // 0x13de
public:
	CUtlStringToken m_surfaceProps; // 0x13e0	
private:
	[[maybe_unused]] uint8_t __pad13e4[0xc]; // 0x13e4
public:
	char m_chTextureType; // 0x13f0	
	bool m_bSentFreezeFrame; // 0x13f1	
private:
	[[maybe_unused]] uint8_t __pad13f2[0x2]; // 0x13f2
public:
	float m_flFreezeZOffset; // 0x13f4	
	CUtlVector< CHandle< C_BasePlayer > > m_hSplitScreenPlayers; // 0x13f8	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x1410	
	CHandle< C_BasePlayer > m_hSplitOwner; // 0x1414	
	bool m_bIsLocalPlayer; // 0x1418	
private:
	[[maybe_unused]] uint8_t __pad1419[0x3]; // 0x1419
public:
	Vector m_movementCollisionNormal; // 0x141c	
	Vector m_groundNormal; // 0x1428	
	Vector m_vOldOrigin; // 0x1434	
	float m_flOldSimulationTime; // 0x1440	
	CHandle< C_BaseCombatCharacter > m_stuckCharacter; // 0x1444	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_PostProcessController > m_hPostProcessCtrl; // 0x1448	
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // 0x144c	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "fogplayerparams_t"
	C_fogplayerparams_t m_PlayerFog; // 0x1450	
	Vector m_vecElevatorFixup; // 0x1490	
private:
	[[maybe_unused]] uint8_t __pad149c[0x4]; // 0x149c
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint64_t m_nUnHoldableButtons; // 0x14a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xba8
// Has VTable
class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc10
// Has VTable
// 
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "NPC_STATE m_NPCState"
// MNetworkVarNames "float m_flTimePingEffect"
// MNetworkVarNames "HSequence m_iDeathPose"
// MNetworkVarNames "int m_iDeathFrame"
// MNetworkVarNames "int m_iSpeedModRadius"
// MNetworkVarNames "int m_iSpeedModSpeed"
// MNetworkVarNames "bool m_bPerformAvoidance"
// MNetworkVarNames "bool m_bIsMoving"
// MNetworkVarNames "float m_flStunUntilTime"
// MNetworkVarNames "bool m_bFadeCorpse"
// MNetworkVarNames "bool m_bSpeedModActive"
// MNetworkVarNames "bool m_bImportantRagdoll"
// MNetworkVarNames "EHANDLE m_hServerRagdoll"
// MNetworkVarNames "bool m_bPoweredRagdoll"
class C_AI_BaseNPC : public C_BaseCombatCharacter
{
public:
	float m_flTempRagdollTransitionTime; // 0xba8	
private:
	[[maybe_unused]] uint8_t __pad0bac[0x4]; // 0xbac
public:
	CUtlVector< matrix3x4a_t > m_RagdollTransform; // 0xbb0	
	CUtlVector< matrix3x4a_t > m_TransitionTransform; // 0xbc8	
	// MNetworkEnable
	// MNetworkEnable
	NPC_STATE m_NPCState; // 0xbe0	
	// MNetworkEnable
	// MNetworkEnable
	float m_flTimePingEffect; // 0xbe4	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "13"
	HSequence m_iDeathPose; // 0xbe8	
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "5"
	int32_t m_iDeathFrame; // 0xbec	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iSpeedModRadius; // 0xbf0	
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iSpeedModSpeed; // 0xbf4	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPerformAvoidance; // 0xbf8	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bIsMoving; // 0xbf9	
private:
	[[maybe_unused]] uint8_t __pad0bfa[0x2]; // 0xbfa
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStunUntilTime; // 0xbfc	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFadeCorpse; // 0xc00	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSpeedModActive; // 0xc01	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bImportantRagdoll; // 0xc02	
private:
	[[maybe_unused]] uint8_t __pad0c03[0x1]; // 0xc03
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hServerRagdoll; // 0xc04	
	uint8_t m_nFootstepType; // 0xc08	
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoweredRagdoll; // 0xc09	
};

