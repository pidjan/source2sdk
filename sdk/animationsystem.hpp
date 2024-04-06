#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: animationsystem.dll
// Classes count: 175
// Enums count: 44
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class AnimationProcessingType_t : uint32_t
{
	ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
	ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
	ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
	ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
	ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
	ANIMATION_PROCESSING_MAX = 0x5,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class AnimationSnapshotType_t : uint32_t
{
	ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0x0,
	ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 0x1,
	ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 0x2,
	ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
	ANIMATION_SNAPSHOT_CLIENT_RENDER = 0x4,
	ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 0x5,
	ANIMATION_SNAPSHOT_MAX = 0x6,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 17
// Alignment: 4
// Size: 0x4
enum class SeqCmd_t : uint32_t
{
	SeqCmd_Nop = 0x0,
	SeqCmd_LinearDelta = 0x1,
	SeqCmd_FetchFrameRange = 0x2,
	SeqCmd_Slerp = 0x3,
	SeqCmd_Add = 0x4,
	SeqCmd_Subtract = 0x5,
	SeqCmd_Scale = 0x6,
	SeqCmd_Copy = 0x7,
	SeqCmd_Blend = 0x8,
	SeqCmd_Worldspace = 0x9,
	SeqCmd_Sequence = 0xa,
	SeqCmd_FetchCycle = 0xb,
	SeqCmd_FetchFrame = 0xc,
	SeqCmd_IKLockInPlace = 0xd,
	SeqCmd_IKRestoreAll = 0xe,
	SeqCmd_ReverseSequence = 0xf,
	SeqCmd_Transform = 0x10,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class SeqPoseSetting_t : uint32_t
{
	SEQ_POSE_SETTING_CONSTANT = 0x0,
	SEQ_POSE_SETTING_ROTATION = 0x1,
	SEQ_POSE_SETTING_POSITION = 0x2,
	SEQ_POSE_SETTING_VELOCITY = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 67
// Alignment: 1
// Size: 0x1
enum class fieldtype_t : uint8_t
{
	FIELD_VOID = 0x0,
	FIELD_FLOAT32 = 0x1,
	FIELD_STRING = 0x2,
	FIELD_VECTOR = 0x3,
	FIELD_QUATERNION = 0x4,
	FIELD_INT32 = 0x5,
	FIELD_BOOLEAN = 0x6,
	FIELD_INT16 = 0x7,
	FIELD_CHARACTER = 0x8,
	FIELD_COLOR32 = 0x9,
	FIELD_EMBEDDED = 0xa,
	FIELD_CUSTOM = 0xb,
	FIELD_CLASSPTR = 0xc,
	FIELD_EHANDLE = 0xd,
	FIELD_POSITION_VECTOR = 0xe,
	FIELD_TIME = 0xf,
	FIELD_TICK = 0x10,
	FIELD_SOUNDNAME = 0x11,
	FIELD_INPUT = 0x12,
	FIELD_FUNCTION = 0x13,
	FIELD_VMATRIX = 0x14,
	FIELD_VMATRIX_WORLDSPACE = 0x15,
	FIELD_MATRIX3X4_WORLDSPACE = 0x16,
	FIELD_INTERVAL = 0x17,
	FIELD_UNUSED = 0x18,
	FIELD_VECTOR2D = 0x19,
	FIELD_INT64 = 0x1a,
	FIELD_VECTOR4D = 0x1b,
	FIELD_RESOURCE = 0x1c,
	FIELD_TYPEUNKNOWN = 0x1d,
	FIELD_CSTRING = 0x1e,
	FIELD_HSCRIPT = 0x1f,
	FIELD_VARIANT = 0x20,
	FIELD_UINT64 = 0x21,
	FIELD_FLOAT64 = 0x22,
	FIELD_POSITIVEINTEGER_OR_NULL = 0x23,
	FIELD_HSCRIPT_NEW_INSTANCE = 0x24,
	FIELD_UINT32 = 0x25,
	FIELD_UTLSTRINGTOKEN = 0x26,
	FIELD_QANGLE = 0x27,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 0x28,
	FIELD_HMATERIAL = 0x29,
	FIELD_HMODEL = 0x2a,
	FIELD_NETWORK_QUANTIZED_VECTOR = 0x2b,
	FIELD_NETWORK_QUANTIZED_FLOAT = 0x2c,
	FIELD_DIRECTION_VECTOR_WORLDSPACE = 0x2d,
	FIELD_QANGLE_WORLDSPACE = 0x2e,
	FIELD_QUATERNION_WORLDSPACE = 0x2f,
	FIELD_HSCRIPT_LIGHTBINDING = 0x30,
	FIELD_V8_VALUE = 0x31,
	FIELD_V8_OBJECT = 0x32,
	FIELD_V8_ARRAY = 0x33,
	FIELD_V8_CALLBACK_INFO = 0x34,
	FIELD_UTLSTRING = 0x35,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 0x36,
	FIELD_HRENDERTEXTURE = 0x37,
	FIELD_HPARTICLESYSTEMDEFINITION = 0x38,
	FIELD_UINT8 = 0x39,
	FIELD_UINT16 = 0x3a,
	FIELD_CTRANSFORM = 0x3b,
	FIELD_CTRANSFORM_WORLDSPACE = 0x3c,
	FIELD_HPOSTPROCESSING = 0x3d,
	FIELD_MATRIX3X4 = 0x3e,
	FIELD_SHIM = 0x3f,
	FIELD_CMOTIONTRANSFORM = 0x40,
	FIELD_CMOTIONTRANSFORM_WORLDSPACE = 0x41,
	FIELD_TYPECOUNT = 0x42,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class CAnimationGraphVisualizerPrimitiveType : uint32_t
{
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class AnimParamButton_t : uint32_t
{
	// MPropertyFriendlyName "None"
	ANIMPARAM_BUTTON_NONE = 0x0,
	// MPropertyFriendlyName "Dpad Up"
	ANIMPARAM_BUTTON_DPAD_UP = 0x1,
	// MPropertyFriendlyName "Dpad Right"
	ANIMPARAM_BUTTON_DPAD_RIGHT = 0x2,
	// MPropertyFriendlyName "Dpad Down"
	ANIMPARAM_BUTTON_DPAD_DOWN = 0x3,
	// MPropertyFriendlyName "Dpad Left"
	ANIMPARAM_BUTTON_DPAD_LEFT = 0x4,
	// MPropertyFriendlyName "A"
	ANIMPARAM_BUTTON_A = 0x5,
	// MPropertyFriendlyName "B"
	ANIMPARAM_BUTTON_B = 0x6,
	// MPropertyFriendlyName "X"
	ANIMPARAM_BUTTON_X = 0x7,
	// MPropertyFriendlyName "Y"
	ANIMPARAM_BUTTON_Y = 0x8,
	// MPropertyFriendlyName "Left Shoulder"
	ANIMPARAM_BUTTON_LEFT_SHOULDER = 0x9,
	// MPropertyFriendlyName "Right Shoulder"
	ANIMPARAM_BUTTON_RIGHT_SHOULDER = 0xa,
	// MPropertyFriendlyName "Left Trigger"
	ANIMPARAM_BUTTON_LTRIGGER = 0xb,
	// MPropertyFriendlyName "Right Trigger"
	ANIMPARAM_BUTTON_RTRIGGER = 0xc,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AnimNodeNetworkMode : uint32_t
{
	// MPropertyFriendlyName "Server Authoritative"
	ServerAuthoritative = 0x0,
	// MPropertyFriendlyName "Client Simulate"
	ClientSimulate = 0x1,
	// MPropertyFriendlyName "Client Predicted"
	ClientPredicted = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class FootstepLandedFootSoundType_t : uint32_t
{
	FOOTSOUND_Left = 0x0,
	FOOTSOUND_Right = 0x1,
	FOOTSOUND_UseOverrideSound = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AnimPoseControl : uint32_t
{
	// MPropertyFriendlyName "None"
	NoPoseControl = 0x0,
	// MPropertyFriendlyName "Absolute"
	AbsolutePoseControl = 0x1,
	// MPropertyFriendlyName "Relative"
	RelativePoseControl = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class FacingMode : uint32_t
{
	// MPropertyFriendlyName "Manual"
	FacingMode_Manual = 0x0,
	// MPropertyFriendlyName "Path"
	FacingMode_Path = 0x1,
	// MPropertyFriendlyName "Look Target"
	FacingMode_LookTarget = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class AnimVRHandMotionRange_t : uint32_t
{
	// MPropertyFriendlyName "With Controller"
	MotionRange_WithController = 0x0,
	// MPropertyFriendlyName "Without Controller"
	MotionRange_WithoutController = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class AnimVrFingerSplay_t : uint32_t
{
	AnimVrFingerSplay_Thumb_Index = 0x0,
	AnimVrFingerSplay_Index_Middle = 0x1,
	AnimVrFingerSplay_Middle_Ring = 0x2,
	AnimVrFingerSplay_Ring_Pinky = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class IKSolverType : uint32_t
{
	// MPropertyFriendlyName "Perlin"
	IKSOLVER_Perlin = 0x0,
	// MPropertyFriendlyName "Two Bone"
	IKSOLVER_TwoBone = 0x1,
	// MPropertyFriendlyName "FABRIK"
	IKSOLVER_Fabrik = 0x2,
	// MPropertyFriendlyName "Dog Leg (3 Bone)"
	IKSOLVER_DogLeg3Bone = 0x3,
	// MPropertyFriendlyName "CCD"
	IKSOLVER_CCD = 0x4,
	IKSOLVER_COUNT = 0x5,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class IKTargetSource : uint32_t
{
	// MPropertyFriendlyName "Bone"
	IKTARGETSOURCE_Bone = 0x0,
	// MPropertyFriendlyName "Animgraph Parameter"
	IKTARGETSOURCE_AnimgraphParameter = 0x1,
	IKTARGETSOURCE_COUNT = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class IKTargetCoordinateSystem : uint32_t
{
	// MPropertyFriendlyName "World Space"
	IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
	// MPropertyFriendlyName "Model Space"
	IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
	IKTARGETCOORDINATESYSTEM_COUNT = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 35
// Alignment: 4
// Size: 0x4
enum class AnimValueSource : uint32_t
{
	// MPropertyFriendlyName "Move Heading"
	MoveHeading = 0x0,
	// MPropertyFriendlyName "Move Speed"
	MoveSpeed = 0x1,
	// MPropertyFriendlyName "Forward Speed"
	ForwardSpeed = 0x2,
	// MPropertyFriendlyName "Strafe Speed"
	StrafeSpeed = 0x3,
	// MPropertyFriendlyName "Facing Heading"
	FacingHeading = 0x4,
	// MPropertyFriendlyName "Look Heading"
	LookHeading = 0x5,
	// MPropertyFriendlyName "Look Pitch"
	LookPitch = 0x6,
	// MPropertyFriendlyName "Parameter"
	Parameter = 0x7,
	// MPropertyFriendlyName "Waypoint Heading"
	WayPointHeading = 0x8,
	// MPropertyFriendlyName "Waypoint Distance"
	WayPointDistance = 0x9,
	// MPropertyFriendlyName "Boundary Radius"
	BoundaryRadius = 0xa,
	// MPropertyFriendlyName "Target Move Heading"
	TargetMoveHeading = 0xb,
	// MPropertyFriendlyName "Target Move Speed"
	TargetMoveSpeed = 0xc,
	// MPropertyFriendlyName "Acceleration Heading"
	AccelerationHeading = 0xd,
	// MPropertyFriendlyName "Acceleration Speed"
	AccelerationSpeed = 0xe,
	// MPropertyFriendlyName "Slope Heading"
	SlopeHeading = 0xf,
	// MPropertyFriendlyName "Slope Angle"
	SlopeAngle = 0x10,
	// MPropertyFriendlyName "Slope Pitch"
	SlopePitch = 0x11,
	// MPropertyFriendlyName "Slope Yaw"
	SlopeYaw = 0x12,
	// MPropertyFriendlyName "Goal Distance"
	GoalDistance = 0x13,
	// MPropertyFriendlyName "Acceleration Left-Right"
	AccelerationLeftRight = 0x14,
	// MPropertyFriendlyName "Acceleration Forward-Back"
	AccelerationFrontBack = 0x15,
	// MPropertyFriendlyName "Root Motion Speed"
	RootMotionSpeed = 0x16,
	// MPropertyFriendlyName "Root Motion Turn Speed"
	RootMotionTurnSpeed = 0x17,
	// MPropertyFriendlyName "Move Heading Relative to Look Heading"
	MoveHeadingRelativeToLookHeading = 0x18,
	// MPropertyFriendlyName "Max Move Speed"
	MaxMoveSpeed = 0x19,
	// MPropertyFriendlyName "Finger Curl - Thumb"
	FingerCurl_Thumb = 0x1a,
	// MPropertyFriendlyName "Finger Curl - Index"
	FingerCurl_Index = 0x1b,
	// MPropertyFriendlyName "Finger Curl - Middle"
	FingerCurl_Middle = 0x1c,
	// MPropertyFriendlyName "Finger Curl - Ring"
	FingerCurl_Ring = 0x1d,
	// MPropertyFriendlyName "Finger Curl - Pinky"
	FingerCurl_Pinky = 0x1e,
	// MPropertyFriendlyName "Finger Splay - Thumb:Index"
	FingerSplay_Thumb_Index = 0x1f,
	// MPropertyFriendlyName "Finger Splay - Index:Middle"
	FingerSplay_Index_Middle = 0x20,
	// MPropertyFriendlyName "Finger Splay - Middle:Ring"
	FingerSplay_Middle_Ring = 0x21,
	// MPropertyFriendlyName "Finger Splay - Ring:Pinky"
	FingerSplay_Ring_Pinky = 0x22,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 14
// Alignment: 4
// Size: 0x4
enum class AnimVectorSource : uint32_t
{
	// MPropertyFriendlyName "Move Direction"
	MoveDirection = 0x0,
	// MPropertyFriendlyName "Facing Direction"
	FacingDirection = 0x1,
	// MPropertyFriendlyName "Look Direction"
	LookDirection = 0x2,
	// MPropertyFriendlyName "Parameter"
	VectorParameter = 0x3,
	// MPropertyFriendlyName "Waypoint Direction"
	WayPointDirection = 0x4,
	// MPropertyFriendlyName "Target Move Direction"
	TargetMoveDirection = 0x5,
	// MPropertyFriendlyName "Acceleration"
	Acceleration = 0x6,
	// MPropertyFriendlyName "Slope Normal"
	SlopeNormal = 0x7,
	// MPropertyFriendlyName "Slope Normal World Space"
	SlopeNormal_WorldSpace = 0x8,
	// MPropertyFriendlyName "Look Target"
	LookTarget = 0x9,
	// MPropertyFriendlyName "Look Target World Space"
	LookTarget_WorldSpace = 0xa,
	// MPropertyFriendlyName "Waypoint Position"
	WayPointPosition = 0xb,
	// MPropertyFriendlyName "Goal Position"
	GoalPosition = 0xc,
	// MPropertyFriendlyName "Root Motion Velocity"
	RootMotionVelocity = 0xd,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class DampingSpeedFunction : uint32_t
{
	NoDamping = 0x0,
	Constant = 0x1,
	Spring = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 40
// Alignment: 4
// Size: 0x4
enum class ControlValue : uint32_t
{
	// MPropertyFriendlyName "Move Heading"
	ControlValue_MoveHeading = 0x0,
	// MPropertyFriendlyName "Move Speed"
	ControlValue_MoveSpeed = 0x1,
	// MPropertyFriendlyName "Facing"
	ControlValue_FacingHeading = 0x2,
	// MPropertyFriendlyName "Look Heading"
	ControlValue_LookHeading = 0x3,
	// MPropertyFriendlyName "Look Pitch"
	ControlValue_LookPitch = 0x4,
	// MPropertyFriendlyName "WayPoint Heading"
	ControlValue_WayPointHeading = 0x5,
	// MPropertyFriendlyName "WayPoint Distance"
	ControlValue_WayPointDistance = 0x6,
	// MPropertyFriendlyName "Boundary Radius"
	ControlValue_BoundaryRadius = 0x7,
	// MPropertyFriendlyName "Total Translation (Source State)"
	ControlValue_TotalTranslation_SourceState = 0x8,
	// MPropertyFriendlyName "Total Translation (Target State)"
	ControlValue_TotalTranslation_TargetState = 0x9,
	// MPropertyFriendlyName "Remaining Translation (Source State)"
	ControlValue_RemainingTranslation_SourceState = 0xa,
	// MPropertyFriendlyName "Remaining Translation (Target State)"
	ControlValue_RemainingTranslation_TargetState = 0xb,
	// MPropertyFriendlyName "Difference Between Moving and Facing"
	ControlValue_MoveVsFacingDelta = 0xc,
	// MPropertyFriendlyName "Source State Blend Weight"
	ControlValue_SourceStateBlendWeight = 0xd,
	// MPropertyFriendlyName "Target State Blend Weight"
	ControlValue_TargetStateBlendWeight = 0xe,
	// MPropertyFriendlyName "Target Move Heading"
	ControlValue_TargetMoveHeading = 0xf,
	// MPropertyFriendlyName "Target Move Speed"
	ControlValue_TargetMoveSpeed = 0x10,
	// MPropertyFriendlyName "Acceleration Heading"
	ControlValue_AccelerationHeading = 0x11,
	// MPropertyFriendlyName "Acceleration Magnitude"
	ControlValue_AccelerationSpeed = 0x12,
	// MPropertyFriendlyName "Slope Heading"
	ControlValue_SlopeHeading = 0x13,
	// MPropertyFriendlyName "Slope Angle"
	ControlValue_SlopeAngle = 0x14,
	// MPropertyFriendlyName "Slope Yaw"
	ControlValue_SlopeYaw = 0x15,
	// MPropertyFriendlyName "Slope Pitch"
	ControlValue_SlopePitch = 0x16,
	// MPropertyFriendlyName "Goal Distance"
	ControlValue_GoalDistance = 0x17,
	// MPropertyFriendlyName "Acceleration Left-Right"
	ControlValue_AccelerationLeftRight = 0x18,
	// MPropertyFriendlyName "Acceleration Front-Back"
	ControlValue_AccelerationFrontBack = 0x19,
	// MPropertyFriendlyName "Root Motion Speed"
	ControlValue_RootMotionSpeed = 0x1a,
	// MPropertyFriendlyName "Root Motion Turn Speed"
	ControlValue_RootMotionTurnSpeed = 0x1b,
	// MPropertyFriendlyName "Move Heading Relative To Look Heading"
	ControlValue_MoveHeadingRelativeToLookHeading = 0x1c,
	// MPropertyFriendlyName "Finger Curl - Thumb"
	ControlValue_FingerCurl_Thumb = 0x1d,
	// MPropertyFriendlyName "Finger Curl - Index"
	ControlValue_FingerCurl_Index = 0x1e,
	// MPropertyFriendlyName "Finger Curl - Middle"
	ControlValue_FingerCurl_Middle = 0x1f,
	// MPropertyFriendlyName "Finger Curl - Ring"
	ControlValue_FingerCurl_Ring = 0x20,
	// MPropertyFriendlyName "Finger Curl - Pinky"
	ControlValue_FingerCurl_Pinky = 0x21,
	// MPropertyFriendlyName "Finger Splay - Thumb:Index"
	ControlValue_FingerSplay_Thumb_Index = 0x22,
	// MPropertyFriendlyName "Finger Splay - Index:Middle"
	ControlValue_FingerSplay_Index_Middle = 0x23,
	// MPropertyFriendlyName "Finger Splay - Middle:Ring"
	ControlValue_FingerSplay_Middle_Ring = 0x24,
	// MPropertyFriendlyName "Finger Splay - Ring:Pinky"
	ControlValue_FingerSplay_Ring_Pinky = 0x25,
	ControlValue_Count = 0x26,
	ControlValue_Invalid = 0xff,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class AimMatrixBlendMode : uint32_t
{
	// MPropertyFriendlyName "Additive"
	AimMatrixBlendMode_Additive = 0x0,
	// MPropertyFriendlyName "Bone Mask"
	AimMatrixBlendMode_BoneMask = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 24
// Alignment: 4
// Size: 0x4
enum class CGroundIKSolveAnimNode__DebugSkeletonBoneType_t : uint32_t
{
	CGroundIKSolveAnimNode::FLAG_NO_BONE_FLAGS = 0x0,
	CGroundIKSolveAnimNode::FLAG_BONEFLEXDRIVER = 0x4,
	CGroundIKSolveAnimNode::FLAG_CLOTH = 0x8,
	CGroundIKSolveAnimNode::FLAG_PHYSICS = 0x10,
	CGroundIKSolveAnimNode::FLAG_ATTACHMENT = 0x20,
	CGroundIKSolveAnimNode::FLAG_ANIMATION = 0x40,
	CGroundIKSolveAnimNode::FLAG_MESH = 0x80,
	CGroundIKSolveAnimNode::FLAG_HITBOX = 0x100,
	CGroundIKSolveAnimNode::FLAG_RETARGET_SRC = 0x200,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
	CGroundIKSolveAnimNode::FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
	CGroundIKSolveAnimNode::FLAG_BONE_MERGE_READ = 0x40000,
	CGroundIKSolveAnimNode::FLAG_BONE_MERGE_WRITE = 0x80000,
	CGroundIKSolveAnimNode::BLEND_PREALIGNED = 0x100000,
	CGroundIKSolveAnimNode::FLAG_RIGIDLENGTH = 0x200000,
	CGroundIKSolveAnimNode::FLAG_PROCEDURAL = 0x400000,
	CGroundIKSolveAnimNode::FLAG_IK = 0x800000,
	CGroundIKSolveAnimNode::FLAG_ALL_BONE_FLAGS = 0xffffff,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SolveIKChainAnimNodeSettingSource : uint32_t
{
	// MPropertyFriendlyName "Default"
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Default = 0x0,
	// MPropertyFriendlyName "Override"
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Override = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SelectionSource_t : uint32_t
{
	// MPropertyFriendlyName "Bool"
	SelectionSource_Bool = 0x0,
	// MPropertyFriendlyName "Enum"
	SelectionSource_Enum = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class MotionSamplingMethod : uint32_t
{
	// MPropertyFriendlyName "Uniform"
	Uniform = 0x0,
	// MPropertyFriendlyName "On Foot Cycle Change"
	AtFootCycleStart = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class FootFallTagFoot_t : uint32_t
{
	// MPropertyFriendlyName "Left"
	FOOT1 = 0x0,
	// MPropertyFriendlyName "Right"
	FOOT2 = 0x1,
	// MPropertyFriendlyName "Foot 3"
	FOOT3 = 0x2,
	// MPropertyFriendlyName "Foot 4"
	FOOT4 = 0x3,
	// MPropertyFriendlyName "Foot 5"
	FOOT5 = 0x4,
	// MPropertyFriendlyName "Foot 6"
	FOOT6 = 0x5,
	// MPropertyFriendlyName "Foot 7"
	FOOT7 = 0x6,
	// MPropertyFriendlyName "Foot 8"
	FOOT8 = 0x7,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class BlendKeyType : uint32_t
{
	// MPropertyFriendlyName "User Defined Values"
	BlendKey_UserValue = 0x0,
	// MPropertyFriendlyName "Velocity"
	BlendKey_Velocity = 0x1,
	// MPropertyFriendlyName "Distance"
	BlendKey_Distance = 0x2,
	// MPropertyFriendlyName "Remaining Distance"
	BlendKey_RemainingDistance = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ResetCycleOption : uint32_t
{
	Beginning = 0x0,
	SameCycleAsSource = 0x1,
	InverseSourceCycle = 0x2,
	FixedValue = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ChoiceMethod : uint32_t
{
	WeightedRandom = 0x0,
	WeightedRandomNoRepeat = 0x1,
	Iterate = 0x2,
	IterateRandom = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ChoiceChangeMethod : uint32_t
{
	OnReset = 0x0,
	OnCycleEnd = 0x1,
	OnResetOrCycleEnd = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ChoiceBlendMethod : uint32_t
{
	// MPropertyFriendlyName "Single Blend Time"
	SingleBlendTime = 0x0,
	// MPropertyFriendlyName "Per-Choice Blend Times"
	PerChoiceBlendTimes = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class IkEndEffectorType : uint32_t
{
	// MPropertyFriendlyName "Attachment"
	IkEndEffector_Attachment = 0x0,
	// MPropertyFriendlyName "Last Bone in Chain"
	IkEndEffector_Bone = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class IkTargetType : uint32_t
{
	// MPropertyFriendlyName "Attachment"
	IkTarget_Attachment = 0x0,
	// MPropertyFriendlyName "Bone"
	IkTarget_Bone = 0x1,
	// MPropertyFriendlyName "Parameter (Model Space)"
	IkTarget_Parameter_ModelSpace = 0x2,
	// MPropertyFriendlyName "Parameter (World Space)"
	IkTarget_Parameter_WorldSpace = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class GroundIKTiltSource_t : uint32_t
{
	TILT_None = 0x0,
	TILT_IK = 0x1,
	TILT_MovementManagerSlope = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class BinaryNodeTiming : uint32_t
{
	// MPropertyFriendlyName "Use Child1"
	UseChild1 = 0x0,
	// MPropertyFriendlyName "Use Child2"
	UseChild2 = 0x1,
	// MPropertyFriendlyName "Synchronize Children"
	SyncChildren = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class BinaryNodeChildOption : uint32_t
{
	// MPropertyFriendlyName "Child 1"
	Child1 = 0x0,
	// MPropertyFriendlyName "Child 2"
	Child2 = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SelectorTagBehavior_t : uint32_t
{
	// MPropertyFriendlyName "Active While Current"
	SelectorTagBehavior_OnWhileCurrent = 0x0,
	// MPropertyFriendlyName "Off When Finished"
	SelectorTagBehavior_OffWhenFinished = 0x1,
	// MPropertyFriendlyName "Off Before Finished"
	SelectorTagBehavior_OffBeforeFinished = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class Blend2DMode : uint32_t
{
	// MPropertyFriendlyName "General"
	Blend2DMode_General = 0x0,
	// MPropertyFriendlyName "Directional"
	Blend2DMode_Directional = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class FootLockSubVisualization : uint32_t
{
	// MPropertyFriendlyName "Reachability Analysis"
	FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
	// MPropertyFriendlyName "IK Solve"
	FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class FinishedConditionOption : uint32_t
{
	// MPropertyFriendlyName "On Finished"
	FinishedConditionOption_OnFinished = 0x0,
	// MPropertyFriendlyName "On Almost Finished"
	FinishedConditionOption_OnAlmostFinished = 0x1,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PathStatusOptions : uint32_t
{
	PathStatus_HasPath = 0x0,
	PathStatus_WaypointIsGoal = 0x1,
	PathStatus_GoalHasChanged = 0x2,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class BoneMaskBlendSpace : uint32_t
{
	// MPropertyFriendlyName "Parent Space"
	BlendSpace_Parent = 0x0,
	// MPropertyFriendlyName "Model Space"
	BlendSpace_Model = 0x1,
	// MPropertyFriendlyName "Model Space, Rotation Only"
	BlendSpace_Model_RotationOnly = 0x2,
	// MPropertyFriendlyName "Model Space, Translation Only"
	BlendSpace_Model_TranslationOnly = 0x3,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class SolveIKChainAnimNodeDebugSetting : uint32_t
{
	// MPropertyFriendlyName "None"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0x0,
	// MPropertyFriendlyName "Debug X Axis Circle"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
	// MPropertyFriendlyName "Debug Y Axis Circle"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
	// MPropertyFriendlyName "Debug Z Axis Circle"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
	// MPropertyFriendlyName "Debug Hold Forward"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 0x4,
	// MPropertyFriendlyName "Debug Hold Up"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 0x5,
	// MPropertyFriendlyName "Debug Hold Left"
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 0x6,
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class JiggleBoneSimSpace : uint32_t
{
	// MPropertyFriendlyName "Local Space"
	SimSpace_Local = 0x0,
	// MPropertyFriendlyName "Model Space"
	SimSpace_Model = 0x1,
	// MPropertyFriendlyName "World Space"
	SimSpace_World = 0x2,
};

struct AnimationDecodeDebugDumpElement_t;
struct CAnimEncodeDifference;
struct CAnimDesc_Flag;
struct CAnimEncodedFrames;
struct CAnimSequenceParams;
struct CAnimKeyData;
struct CAnimRetargetData;
struct CSeqAutoLayerFlag;
struct CSeqMultiFetchFlag;
struct CSeqSeqDescFlag;
struct CSeqMultiFetch;
struct CSeqTransition;
struct IKBoneNameAndIndex_t;
struct AnimParamID;
struct AnimNodeID;
struct CAnimInputDamping;
struct IKSolverSettings_t;
struct IKTargetSettings_t;
struct CBlendCurve;
struct AnimTagID;
struct AnimStateID;
struct CAnimMotorList;
struct CAnimMovementSettings;
struct CAnimationGraph;

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
struct AnimationDecodeDebugDumpElement_t
{
public:
	int32_t m_nEntityIndex; // 0x0	
	CUtlString m_modelName; // 0x8	
	CUtlVector< CUtlString > m_poseParams; // 0x10	
	CUtlVector< CUtlString > m_decodeOps; // 0x28	
	CUtlVector< CUtlString > m_internalOps; // 0x40	
	CUtlVector< CUtlString > m_decodedAnims; // 0x58	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
struct AnimationDecodeDebugDump_t
{
public:
	AnimationProcessingType_t m_processingType; // 0x0	
	CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x110
struct AnimationSnapshotBase_t
{
public:
	float m_flRealTime; // 0x0	
	matrix3x4a_t m_rootToWorld; // 0x10	
	bool m_bBonesInWorldSpace; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x7]; // 0x41
public:
	CUtlVector< uint32 > m_boneSetupMask; // 0x48	
	CUtlVector< matrix3x4a_t > m_boneTransforms; // 0x60	
	CUtlVector< float32 > m_flexControllers; // 0x78	
	AnimationSnapshotType_t m_SnapshotType; // 0x90	
	bool m_bHasDecodeDump; // 0x94	
private:
	[[maybe_unused]] uint8_t __pad0095[0x3]; // 0x95
public:
	// -> m_nEntityIndex - 0x98
	// -> m_modelName - 0xa0
	// -> m_poseParams - 0xa8
	// -> m_decodeOps - 0xc0
	// -> m_internalOps - 0xd8
	// -> m_decodedAnims - 0xf0
	AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x120
struct AnimationSnapshot_t : public AnimationSnapshotBase_t
{
public:
	int32_t m_nEntIndex; // 0x110	
private:
	[[maybe_unused]] uint8_t __pad0114[0x4]; // 0x114
public:
	CUtlString m_modelName; // 0x118	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
class CAnimBoneDifference
{
public:
	CBufferString m_name; // 0x0	
	CBufferString m_parent; // 0x10	
	Vector m_posError; // 0x20	
	bool m_bHasRotation; // 0x2c	
	bool m_bHasMovement; // 0x2d	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
class CAnimMorphDifference
{
public:
	CBufferString m_name; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
class CAnimUserDifference
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nType; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xa8
class CAnimEncodeDifference
{
public:
	CUtlVector< CAnimBoneDifference > m_boneArray; // 0x0	
	CUtlVector< CAnimMorphDifference > m_morphArray; // 0x18	
	CUtlVector< CAnimUserDifference > m_userArray; // 0x30	
	CUtlVector< uint8 > m_bHasRotationBitArray; // 0x48	
	CUtlVector< uint8 > m_bHasMovementBitArray; // 0x60	
	CUtlVector< uint8 > m_bHasMorphBitArray; // 0x78	
	CUtlVector< uint8 > m_bHasUserBitArray; // 0x90	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
class CAnimAnimEvent
{
public:
	int32_t m_nFrame; // 0x0	
	float m_flCycle; // 0x4	
	KeyValues3 m_EventData; // 0x8	
	CBufferString m_sLegacyOptions; // 0x18	
	CBufferString m_sEventName; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x2c
// Has Trivial Destructor
class CAnimMovement
{
public:
	int32_t endframe; // 0x0	
	int32_t motionflags; // 0x4	
	float v0; // 0x8	
	float v1; // 0xc	
	float angle; // 0x10	
	Vector vector; // 0x14	
	Vector position; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
class CAnimIKRuleStallFrame
{
public:
	int16_t chain; // 0x0	
	int16_t slot; // 0x2	
	float start; // 0x4	
	float peak; // 0x8	
	float tail; // 0xc	
	float end; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
class CAnimLocalHierarchy
{
public:
	CBufferString m_sBone; // 0x0	
	CBufferString m_sNewParent; // 0x10	
	int32_t m_nStartFrame; // 0x20	
	int32_t m_nPeakFrame; // 0x24	
	int32_t m_nTailFrame; // 0x28	
	int32_t m_nEndFrame; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
class CAnimDecoder
{
public:
	CBufferString m_szName; // 0x0	
	int32_t m_nVersion; // 0x10	
	int32_t m_nType; // 0x14	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
class CAnimFrameSegment
{
public:
	int32_t m_nUniqueFrameIndex; // 0x0	
	uint32_t m_nLocalElementMasks; // 0x4	
	int32_t m_nLocalChannel; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	CUtlBinaryBlock m_container; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
class CAnimFrameBlockAnim
{
public:
	int32_t m_nStartFrame; // 0x0	
	int32_t m_nEndFrame; // 0x4	
	CUtlVector< int32 > m_segmentIndexArray; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xd8
class CAnimEncodedFrames
{
public:
	CBufferString m_fileName; // 0x0	
	int32_t m_nFrames; // 0x10	
	int32_t m_nFramesPerBlock; // 0x14	
	CUtlVector< CAnimFrameBlockAnim > m_frameblockArray; // 0x18	
	// -> m_boneArray - 0x30
	// -> m_morphArray - 0x48
	// -> m_userArray - 0x60
	// -> m_bHasRotationBitArray - 0x78
	// -> m_bHasMovementBitArray - 0x90
	// -> m_bHasMorphBitArray - 0xa8
	// -> m_bHasUserBitArray - 0xc0
	CAnimEncodeDifference m_usageDifferences; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 1
// Size: 0x5
// Has Trivial Destructor
class CAnimDesc_Flag
{
public:
	bool m_bLooping; // 0x0	
	bool m_bAllZeros; // 0x1	
	bool m_bHidden; // 0x2	
	bool m_bDelta; // 0x3	
	bool m_bLegacyWorldspace; // 0x4	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class CAnimSequenceParams
{
public:
	float m_flFadeInTime; // 0x0	
	float m_flFadeOutTime; // 0x4	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x1b0
class CAnimDesc
{
public:
	CBufferString m_name; // 0x0	
	// -> m_bLooping - 0x10
	// -> m_bAllZeros - 0x11
	// -> m_bHidden - 0x12
	// -> m_bDelta - 0x13
	// -> m_bLegacyWorldspace - 0x14
	CAnimDesc_Flag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	float fps; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	// -> m_fileName - 0x20
	// -> m_nFrames - 0x30
	// -> m_nFramesPerBlock - 0x34
	// -> m_frameblockArray - 0x38
	// -> m_usageDifferences - 0x50
	CAnimEncodedFrames m_Data; // 0x20	
	CUtlVector< CAnimMovement > m_movementArray; // 0xf8	
	CUtlVector< CAnimAnimEvent > m_eventArray; // 0x110	
	CUtlVector< CAnimActivity > m_activityArray; // 0x128	
	CUtlVector< CAnimLocalHierarchy > m_hierarchyArray; // 0x140	
	float framestalltime; // 0x158	
	Vector m_vecRootMin; // 0x15c	
	Vector m_vecRootMax; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad0174[0x4]; // 0x174
public:
	CUtlVector< Vector > m_vecBoneWorldMin; // 0x178	
	CUtlVector< Vector > m_vecBoneWorldMax; // 0x190	
	// -> m_flFadeInTime - 0x1a8
	// -> m_flFadeOutTime - 0x1ac
	CAnimSequenceParams m_sequenceParams; // 0x1a8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
class CAnimActivity
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nActivity; // 0x10	
	int32_t m_nFlags; // 0x14	
	int32_t m_nWeight; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// Has VTable
class CAnimData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CBufferString m_name; // 0x10	
	CUtlVector< CAnimDesc > m_animArray; // 0x20	
	CUtlVector< CAnimDecoder > m_decoderArray; // 0x38	
	int32_t m_nMaxUniqueFrameIndex; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlVector< CAnimFrameSegment > m_segmentArray; // 0x58	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
class CAnimBone
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_parent; // 0x10	
	Vector m_pos; // 0x14	
	Quaternion m_quat; // 0x20	
	Quaternion m_qAlignment; // 0x30	
	int32_t m_flags; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
class CAnimUser
{
public:
	CBufferString m_name; // 0x0	
	int32_t m_nType; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x90
class CAnimDataChannelDesc
{
public:
	CBufferString m_szChannelClass; // 0x0	
	CBufferString m_szVariableName; // 0x10	
	int32_t m_nFlags; // 0x20	
	int32_t m_nType; // 0x24	
	CBufferString m_szGrouping; // 0x28	
	CBufferString m_szDescription; // 0x38	
	CUtlVector< CBufferString > m_szElementNameArray; // 0x48	
	CUtlVector< int32 > m_nElementIndexArray; // 0x60	
	CUtlVector< uint32 > m_nElementMaskArray; // 0x78	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x78
class CAnimKeyData
{
public:
	CBufferString m_name; // 0x0	
	CUtlVector< CAnimBone > m_boneArray; // 0x10	
	CUtlVector< CAnimUser > m_userArray; // 0x28	
	CUtlVector< CBufferString > m_morphArray; // 0x40	
	int32_t m_nChannelElements; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	CUtlVector< CAnimDataChannelDesc > m_dataChannelArray; // 0x60	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xa8
class CAnimRetargetElementData
{
public:
	int32_t m_nElementType; // 0x0	
	int32_t m_nGroupType; // 0x4	
	int32_t m_nChainType; // 0x8	
	int32_t m_nChainIndex; // 0xc	
	int32_t m_nChainInvIndex; // 0x10	
	int32_t m_nBoneIndex; // 0x14	
	CBufferString m_boneName; // 0x18	
	matrix3x4_t m_transform; // 0x28	
	matrix3x4_t m_invTransform; // 0x58	
	float m_flDistance; // 0x88	
	Vector m_vecMin; // 0x8c	
	Vector m_vecMax; // 0x98	
	float m_flMass; // 0xa4	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
class CAnimRetargetChainData
{
public:
	CBufferString m_sChainName; // 0x0	
	int32_t m_nGroupType; // 0x10	
	int32_t m_nChainType; // 0x14	
	CUtlVector< int32 > m_nElement; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
class CAnimRetargetData
{
public:
	int32_t m_bEnableRetarget; // 0x0	
	int32_t m_nRetargetStyle; // 0x4	
	CUtlVector< CAnimRetargetElementData > m_element; // 0x8	
	CUtlVector< CAnimRetargetChainData > m_chain; // 0x20	
	CUtlVector< CBufferString > m_replicated; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x180
// Has VTable
class CAnimationGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	uint32_t m_nFlags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CBufferString m_name; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0028[0x38]; // 0x28
public:
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle; // 0x60	
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle; // 0x78	
	CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle; // 0x90	
	// -> m_name - 0x98
	// -> m_boneArray - 0xa8
	// -> m_userArray - 0xc0
	// -> m_morphArray - 0xd8
	// -> m_nChannelElements - 0xf0
	// -> m_dataChannelArray - 0xf8
	CAnimKeyData m_decodeKey; // 0x98	
	// -> m_bEnableRetarget - 0x110
	// -> m_nRetargetStyle - 0x114
	// -> m_element - 0x118
	// -> m_chain - 0x130
	// -> m_replicated - 0x148
	CAnimRetargetData m_retarget; // 0x110	
	CUtlVector< CBufferString > m_szScripts; // 0x160	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 1
// Size: 0x8
// Has Trivial Destructor
class CSeqAutoLayerFlag
{
public:
	bool m_bPost; // 0x0	
	bool m_bSpline; // 0x1	
	bool m_bXFade; // 0x2	
	bool m_bNoBlend; // 0x3	
	bool m_bLocal; // 0x4	
	bool m_bPose; // 0x5	
	bool m_bFetchFrame; // 0x6	
	bool m_bSubtract; // 0x7	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x1c
// Has Trivial Destructor
class CSeqAutoLayer
{
public:
	int16_t m_nLocalReference; // 0x0	
	int16_t m_nLocalPose; // 0x2	
	// -> m_bPost - 0x4
	// -> m_bSpline - 0x5
	// -> m_bXFade - 0x6
	// -> m_bNoBlend - 0x7
	// -> m_bLocal - 0x8
	// -> m_bPose - 0x9
	// -> m_bFetchFrame - 0xa
	// -> m_bSubtract - 0xb
	CSeqAutoLayerFlag m_flags; // 0x4	
	float m_start; // 0xc	
	float m_peak; // 0x10	
	float m_tail; // 0x14	
	float m_end; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0xc
// Has Trivial Destructor
class CSeqIKLock
{
public:
	float m_flPosWeight; // 0x0	
	float m_flAngleWeight; // 0x4	
	int16_t m_nLocalBone; // 0x8	
	bool m_bBonesOrientedAlongPositiveX; // 0xa	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x60
class CSeqBoneMaskList
{
public:
	CBufferString m_sName; // 0x0	
	CUtlVector< int16 > m_nLocalBoneArray; // 0x10	
	CUtlVector< float32 > m_flBoneWeightArray; // 0x28	
	float m_flDefaultMorphCtrlWeight; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	CUtlVector< CUtlPair< CBufferString, float32 > > m_morphCtrlWeightArray; // 0x48	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 1
// Size: 0x6
// Has Trivial Destructor
class CSeqMultiFetchFlag
{
public:
	bool m_bRealtime; // 0x0	
	bool m_bCylepose; // 0x1	
	bool m_b0D; // 0x2	
	bool m_b1D; // 0x3	
	bool m_b2D; // 0x4	
	bool m_b2D_TRI; // 0x5	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x68
class CSeqMultiFetch
{
public:
	// -> m_bRealtime - 0x0
	// -> m_bCylepose - 0x1
	// -> m_b0D - 0x2
	// -> m_b1D - 0x3
	// -> m_b2D - 0x4
	// -> m_b2D_TRI - 0x5
	CSeqMultiFetchFlag m_flags; // 0x0	
	CUtlVector< int16 > m_localReferenceArray; // 0x8	
	int32_t m_nGroupSize[2]; // 0x20	
	int32_t m_nLocalPose[2]; // 0x28	
	CUtlVector< float32 > m_poseKeyArray0; // 0x30	
	CUtlVector< float32 > m_poseKeyArray1; // 0x48	
	int32_t m_nLocalCyclePoseParameter; // 0x60	
	bool m_bCalculatePoseParameters; // 0x64	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 1
// Size: 0xa
// Has Trivial Destructor
class CSeqSeqDescFlag
{
public:
	bool m_bLooping; // 0x0	
	bool m_bSnap; // 0x1	
	bool m_bAutoplay; // 0x2	
	bool m_bPost; // 0x3	
	bool m_bHidden; // 0x4	
	bool m_bMulti; // 0x5	
	bool m_bLegacyDelta; // 0x6	
	bool m_bLegacyWorldspace; // 0x7	
	bool m_bLegacyCyclepose; // 0x8	
	bool m_bLegacyRealtime; // 0x9	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
class CSeqTransition
{
public:
	float m_flFadeInTime; // 0x0	
	float m_flFadeOutTime; // 0x4	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x118
class CSeqS1SeqDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001a[0x6]; // 0x1a
public:
	// -> m_flags - 0x20
	// -> m_localReferenceArray - 0x28
	// -> m_nGroupSize[2] - 0x40
	// -> m_nLocalPose[2] - 0x48
	// -> m_poseKeyArray0 - 0x50
	// -> m_poseKeyArray1 - 0x68
	// -> m_nLocalCyclePoseParameter - 0x80
	// -> m_bCalculatePoseParameters - 0x84
	CSeqMultiFetch m_fetch; // 0x20	
	int32_t m_nLocalWeightlist; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	CUtlVector< CSeqAutoLayer > m_autoLayerArray; // 0x90	
	CUtlVector< CSeqIKLock > m_IKLockArray; // 0xa8	
	CSeqTransition m_transition; // 0xc0	
	KeyValues3 m_SequenceKeys; // 0xc8	
	CBufferString m_LegacyKeyValueText; // 0xd8	
	CUtlVector< CAnimActivity > m_activityArray; // 0xe8	
	CUtlVector< CFootMotion > m_footMotion; // 0x100	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
class CSeqSynthAnimDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001a[0x2]; // 0x1a
public:
	CSeqTransition m_transition; // 0x1c	
	int16_t m_nLocalBaseReference; // 0x24	
	int16_t m_nLocalBoneMask; // 0x26	
	CUtlVector< CAnimActivity > m_activityArray; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
class CSeqCmdLayer
{
public:
	int16_t m_cmd; // 0x0	
	int16_t m_nLocalReference; // 0x2	
	int16_t m_nLocalBonemask; // 0x4	
	int16_t m_nDstResult; // 0x6	
	int16_t m_nSrcResult; // 0x8	
	bool m_bSpline; // 0xa	
private:
	[[maybe_unused]] uint8_t __pad000b[0x1]; // 0xb
public:
	float m_flVar1; // 0xc	
	float m_flVar2; // 0x10	
	int16_t m_nLineNumber; // 0x14	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
class CSeqPoseSetting
{
public:
	CBufferString m_sPoseParameter; // 0x0	
	CBufferString m_sAttachment; // 0x10	
	CBufferString m_sReferenceSequence; // 0x20	
	float m_flValue; // 0x30	
	bool m_bX; // 0x34	
	bool m_bY; // 0x35	
	bool m_bZ; // 0x36	
private:
	[[maybe_unused]] uint8_t __pad0037[0x1]; // 0x37
public:
	int32_t m_eType; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x90
class CSeqCmdSeqDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001a[0x2]; // 0x1a
public:
	CSeqTransition m_transition; // 0x1c	
	int16_t m_nFrameRangeSequence; // 0x24	
	int16_t m_nFrameCount; // 0x26	
	float m_flFPS; // 0x28	
	int16_t m_nSubCycles; // 0x2c	
	int16_t m_numLocalResults; // 0x2e	
	CUtlVector< CSeqCmdLayer > m_cmdLayerArray; // 0x30	
	CUtlVector< CAnimAnimEvent > m_eventArray; // 0x48	
	CUtlVector< CAnimActivity > m_activityArray; // 0x60	
	CUtlVector< CSeqPoseSetting > m_poseSettingArray; // 0x78	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
class CSeqPoseParamDesc
{
public:
	CBufferString m_sName; // 0x0	
	float m_flStart; // 0x10	
	float m_flEnd; // 0x14	
	float m_flLoop; // 0x18	
	bool m_bLooping; // 0x1c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x120
// Has VTable
class CSequenceGroupData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CBufferString m_sName; // 0x10	
	uint32_t m_nFlags; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlVector< CBufferString > m_localSequenceNameArray; // 0x28	
	CUtlVector< CSeqS1SeqDesc > m_localS1SeqDescArray; // 0x40	
	CUtlVector< CSeqS1SeqDesc > m_localMultiSeqDescArray; // 0x58	
	CUtlVector< CSeqSynthAnimDesc > m_localSynthAnimDescArray; // 0x70	
	CUtlVector< CSeqCmdSeqDesc > m_localCmdSeqDescArray; // 0x88	
	CUtlVector< CSeqBoneMaskList > m_localBoneMaskArray; // 0xa0	
	CUtlVector< CBufferString > m_localBoneNameArray; // 0xb8	
	CBufferString m_localNodeName; // 0xd0	
	CUtlVector< CSeqPoseParamDesc > m_localPoseParamArray; // 0xe0	
	KeyValues3 m_keyValues; // 0xf8	
	CUtlVector< CSeqIKLock > m_localIKAutoplayLockArray; // 0x108	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x1a0
class CCompressorGroup
{
public:
	int32_t m_nTotalElementCount; // 0x0	
	CUtlVector< char* > m_szChannelClass; // 0x8	
	CUtlVector< char* > m_szVariableName; // 0x20	
	CUtlVector< fieldtype_t > m_nType; // 0x38	
	CUtlVector< int32 > m_nFlags; // 0x50	
	CUtlVector< CUtlString > m_szGrouping; // 0x68	
	CUtlVector< int32 > m_nCompressorIndex; // 0x80	
	CUtlVector< CUtlVector< char* > > m_szElementNames; // 0x98	
	CUtlVector< CUtlVector< int32 > > m_nElementUniqueID; // 0xb0	
	CUtlVector< uint32 > m_nElementMask; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00e0[0x18]; // 0xe0
public:
	CUtlVector< CCompressor< Vector >* > m_vectorCompressor; // 0xf8	
	CUtlVector< CCompressor< Quaternion >* > m_quaternionCompressor; // 0x110	
	CUtlVector< CCompressor< int32 >* > m_intCompressor; // 0x128	
	CUtlVector< CCompressor< bool >* > m_boolCompressor; // 0x140	
	CUtlVector< CCompressor< Color >* > m_colorCompressor; // 0x158	
	CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor; // 0x170	
	CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor; // 0x188	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
class CAnimationGraphVisualizerPrimitiveBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x30
// Has VTable
class CAnimationGraphVisualizerText : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10	
	Color m_Color; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CUtlString m_Text; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x30
// Has VTable
// Has Trivial Destructor
class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10	
	float m_flRadius; // 0x20	
	Color m_Color; // 0x24	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x40
// Has VTable
// Has Trivial Destructor
class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPositionStart; // 0x10	
	VectorAligned m_vWsPositionEnd; // 0x20	
	Color m_Color; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x50
// Has VTable
// Has Trivial Destructor
class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsCenter; // 0x10	
	VectorAligned m_vWsStart; // 0x20	
	VectorAligned m_vWsEnd; // 0x30	
	Color m_Color; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x40
// Has VTable
// Has Trivial Destructor
class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	CTransform m_xWsTransform; // 0x10	
	float m_flAxisSize; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MPropertyEditClassAsString
class AnimNodeID
{
public:
	uint32_t m_id; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MPropertyEditClassAsString
class AnimStateID
{
public:
	uint32_t m_id; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MPropertyEditClassAsString
class AnimParamID
{
public:
	uint32_t m_id; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x4
// Has Trivial Destructor
// 
// MPropertyEditClassAsString
class AnimTagID
{
public:
	uint32_t m_id; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x10
// Has Trivial Destructor
class CBlendCurve
{
public:
	Vector2D m_vControlPoint1; // 0x0	
	Vector2D m_vControlPoint2; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
struct IKBoneNameAndIndex_t
{
public:
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_Name; // 0x0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
struct IKSolverSettings_t
{
public:
	// MPropertyFriendlyName "Solver Type"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	IKSolverType m_SolverType; // 0x0	
	// MPropertyFriendlyName "Num Iterations "
	// MPropertyAttrStateCallback
	int32_t m_nNumIterations; // 0x4	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
struct IKTargetSettings_t
{
public:
	// MPropertyFriendlyName "Target Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	IKTargetSource m_TargetSource; // 0x0	
	// MPropertyFriendlyName "Bone"
	// MPropertyAttrStateCallback
	IKBoneNameAndIndex_t m_Bone; // 0x8	
	// MPropertyFriendlyName "Animgraph Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_AnimgraphParameterNamePosition; // 0x18	
	// MPropertyFriendlyName "Target Coords"
	// MPropertyAttrStateCallback
	IKTargetCoordinateSystem m_TargetCoordSystem; // 0x1c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x100
// Has VTable
class CAnimationGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	CSmartPtr< CAnimParameterList > m_pParameterList; // 0x28	
	CSmartPtr< CAnimTagManager > m_pTagManager; // 0x30	
	CSmartPtr< CAnimMovementManager > m_pMovementManager; // 0x38	
	CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager; // 0x40	
	CSmartPtr< CActivityValueList > m_pActivityValuesList; // 0x48	
	AnimNodeID m_rootNodeID; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlString m_filePath; // 0x58	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CAnimParameterList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xb0]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_Parameters; // 0xb0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
class CParameterValue
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	AnimParamID m_id; // 0x18	
	CAnimVariant m_value; // 0x1c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
class CActivityValues
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CParameterValue > > m_values; // 0x18	
	CUtlString m_activityName; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
class CActivityValueList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CActivityValues > > m_activities; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
class CAnimNodeList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CAnimNodeBase* > m_nodes; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
class CAnimStateList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CAnimState* > m_states; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MPropertyFriendlyName "Damping"
class CAnimInputDamping
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "Speed Function"
	DampingSpeedFunction m_speedFunction; // 0x8	
	// MPropertyFriendlyName "Speed Scale"
	float m_fSpeedScale; // 0xc	
	// MPropertyFriendlyName "Minimum Speed"
	float m_fMinSpeed; // 0x10	
	// MPropertyFriendlyName "Maximum Tension"
	float m_fMaxTension; // 0x14	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
class CAnimGraphSettingsManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
// Has VTable
class CAnimGraphSettingsGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MPropertyFriendlyName "General"
class CAnimGraphGeneralSettings : public CAnimGraphSettingsGroup
{
public:
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MPropertyFriendlyName "Networking"
class CAnimGraphNetworkSettings : public CAnimGraphSettingsGroup
{
public:
	// MPropertyFriendlyName "Enable Networking "
	bool m_bNetworkingEnabled; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xb8
// Has VTable
class CAnimMotorList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CSmartPtr< CBaseAnimMotor > > m_motors; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
class CAnimMovementSettings
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	bool m_bShouldCalculateSlope; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CBaseAnimMotor
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18	
	// MPropertyHideField
	bool m_bDefault; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// Is Abstract
class CBasePathAnimMotor : public CBaseAnimMotor
{
public:
	// MPropertyFriendlyName "Facing Damping"
	// MPropertySortPriority "90"
	CAnimInputDamping m_facingDamping; // 0x28	
	// MPropertyFriendlyName "Lock To Path"
	// MPropertySortPriority "90"
	bool m_bLockToPath; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Path Motor"
class CPathAnimMotor : public CBasePathAnimMotor
{
public:
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MPropertyFriendlyName "Damped Path Motor"
class CDampedPathAnimMotor : public CBasePathAnimMotor
{
public:
	// MPropertyFriendlyName "Anticipation Time"
	float m_flAnticipationTime; // 0x48	
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x4c	
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x50	
	// MPropertyFriendlyName "Spring Constant"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flSpringConstant; // 0x54	
	// MPropertyFriendlyName "Min Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMinSpringTension; // 0x58	
	// MPropertyFriendlyName "Max Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMaxSpringTension; // 0x5c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MPropertyFriendlyName "Player Input Motor"
class CPlayerInputAnimMotor : public CBasePathAnimMotor
{
public:
	// MPropertyFriendlyName "Anticipation Time"
	float m_flAnticipationTime; // 0x48	
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x4c	
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x50	
	// MPropertyFriendlyName "Spring Constant"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flSpringConstant; // 0x54	
	// MPropertyFriendlyName "Min Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMinSpringTension; // 0x58	
	// MPropertyFriendlyName "Max Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMaxSpringTension; // 0x5c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// Is Abstract
class CAnimParameterBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18	
	// MPropertyHideField
	AnimParamID m_id; // 0x20	
	// MPropertyFriendlyName "Preview Button"
	AnimParamButton_t m_previewButton; // 0x24	
	// MPropertyFriendlyName "Network"
	bool m_bNetwork; // 0x28	
	// MPropertyFriendlyName "Force Latest Value"
	bool m_bUseMostRecentValue; // 0x29	
	// MPropertyFriendlyName "Auto Reset"
	bool m_bAutoReset; // 0x2a	
	// MPropertyFriendlyName "Predicted"
	bool m_bPredicted; // 0x2b	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Bool Parameter"
class CBoolAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	bool m_bDefaultValue; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MPropertyFriendlyName "Enum Parameter"
class CEnumAnimParameter : public CAnimParameterBase
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyFriendlyName "Default Value"
	uint8_t m_defaultValue; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x7]; // 0x39
public:
	// MPropertyFriendlyName "Values"
	CUtlVector< CUtlString > m_enumOptions; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Int Parameter"
class CIntAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	int32_t m_defaultValue; // 0x30	
	// MPropertyFriendlyName "Min Value"
	int32_t m_minValue; // 0x34	
	// MPropertyFriendlyName "Max Value"
	int32_t m_maxValue; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Float Parameter"
class CFloatAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_fDefaultValue; // 0x30	
	// MPropertyFriendlyName "Min Value"
	float m_fMinValue; // 0x34	
	// MPropertyFriendlyName "Max Value"
	float m_fMaxValue; // 0x38	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x3c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Vector Parameter"
class CVectorAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	Vector m_defaultValue; // 0x30	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x3c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// Is Abstract
class CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x20	
	// MPropertyHideField
	Vector2D m_vecPosition; // 0x28	
	// MPropertyHideField
	AnimNodeID m_nNodeID; // 0x30	
	// MPropertyFriendlyName "Network Mode"
	AnimNodeNetworkMode m_networkMode; // 0x34	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MPropertyFriendlyName "Keyframe Animation"
class CSequenceAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x40	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x58	
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x60	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x64	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
// 
// MPropertyFriendlyName "Blend Item"
// MPropertyElementNameFn
class CBlendNodeChild
{
public:
	// MPropertyHideField
	AnimNodeID m_nodeID; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Blend Value"
	float m_blendValue; // 0x10	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MPropertyFriendlyName "Blend 1D"
class CBlendAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandGroup
	CUtlVector< CBlendNodeChild > m_children; // 0x40	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	AnimValueSource m_blendValueSource; // 0x58	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x5c	
	// MPropertyFriendlyName "Blend Key Values"
	BlendKeyType m_blendKeyType; // 0x60	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x64	
	// MPropertyFriendlyName "Sync Cycles"
	bool m_bSyncCycles; // 0x65	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x66	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x67	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x68	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MPropertyFriendlyName "State Machine"
class CStateMachineAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x10]; // 0x38
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimState > > m_states; // 0x48	
	// MPropertyFriendlyName "Block Tags from Waning States"
	bool m_bBlockWaningTags; // 0x60	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Final Pose"
class CRootAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x18
// 
// MPropertyFriendlyName "Choice Item"
// MPropertyElementNameFn
class CChoiceNodeChild
{
public:
	// MPropertyHideField
	AnimNodeID m_nodeID; // 0x0	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8	
	// MPropertyFriendlyName "Weight"
	float m_weight; // 0x10	
	// MPropertyFriendlyName "Blend Time"
	float m_blendTime; // 0x14	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MPropertyFriendlyName "Choice"
class CChoiceAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertyFriendlyName "Options"
	// MPropertyAutoExpandGroup
	CUtlVector< CChoiceNodeChild > m_children; // 0x40	
	// MPropertyHideField
	int32_t m_seed; // 0x58	
	// MPropertyFriendlyName "Method"
	ChoiceMethod m_choiceMethod; // 0x5c	
	// MPropertyFriendlyName "Change Selection"
	ChoiceChangeMethod m_choiceChangeMethod; // 0x60	
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Blend Method"
	// MPropertyAttrChangeCallback
	ChoiceBlendMethod m_blendMethod; // 0x64	
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Blend Duration"
	// MPropertyAttrStateCallback
	float m_blendTime; // 0x68	
	// MPropertyFriendlyName "Reset On Selection"
	bool m_bResetChosen; // 0x6c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Cycle Control"
class CCycleControlAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Blend Source"
	AnimValueSource m_valueSource; // 0x3c	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "Add"
class CAddAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_baseChildID; // 0x38	
	// MPropertyHideField
	AnimNodeID m_additiveChildID; // 0x3c	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x40	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x44	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x48	
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x4c	
	// MPropertyFriendlyName "Reset Additive Child"
	bool m_bResetAdditive; // 0x4d	
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x4e	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "Subtract"
class CSubtractAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_baseChildID; // 0x38	
	// MPropertyHideField
	AnimNodeID m_subtractChildID; // 0x3c	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x40	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x44	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x48	
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x4c	
	// MPropertyFriendlyName "Reset Subtracted Child"
	bool m_bResetSubtract; // 0x4d	
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x4e	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MPropertyFriendlyName "Mover"
class CMoverAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Generate Movement"
	bool m_bApplyMovement; // 0x3c	
	// MPropertyFriendlyName "Orient Movement"
	bool m_bOrientMovement; // 0x3d	
	// MPropertyFriendlyName "Additive"
	bool m_bAdditive; // 0x3e	
	// MPropertyFriendlyName "Turn to Face"
	bool m_bTurnToFace; // 0x3f	
	// MPropertyFriendlyName "Turn to Face Offset"
	// MPropertyAttributeRange "-180 180"
	float m_flTurnToFaceOffset; // 0x40	
	// MPropertyFriendlyName "Face Direction"
	AnimValueSource m_facingTarget; // 0x44	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x48	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Slow Down On Slopes"
class CSlowDownOnSlopesAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Slow Down Strength"
	// MPropertyAttributeRange "0.1 2"
	float m_flSlowDownStrength; // 0x3c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "Turn Helper"
class CTurnHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Turn to Face"
	AnimValueSource m_facingTarget; // 0x3c	
	// MPropertyFriendlyName "Turn Start Time"
	float m_turnStartTime; // 0x40	
	// MPropertyFriendlyName "Turn Duration"
	float m_turnDuration; // 0x44	
	// MPropertyFriendlyName "Match Child Duration"
	bool m_bMatchChildDuration; // 0x48	
	// MPropertyFriendlyName "Use Manual Turn Offset"
	bool m_bUseManualTurnOffset; // 0x49	
private:
	[[maybe_unused]] uint8_t __pad004a[0x2]; // 0x4a
public:
	// MPropertyFriendlyName "Manual Turn Offset"
	float m_manualTurnOffset; // 0x4c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MPropertyFriendlyName "Aim Matrix"
class CAimMatrixAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x40	
	// MPropertyFriendlyName "Angle Increment"
	float m_fAngleIncrement; // 0x48	
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x4c	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x58	
	// MPropertyFriendlyName "Blend Mode"
	AimMatrixBlendMode m_blendMode; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_boneMaskName; // 0x68	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x70	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x71	
private:
	[[maybe_unused]] uint8_t __pad0072[0x6]; // 0x72
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x78	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Speed Scale"
class CSpeedScaleAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x3c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MPropertyFriendlyName "Directional Blend"
class CDirectionalBlendAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence Names Prefix"
	CUtlString m_animNamePrefix; // 0x38	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	AnimValueSource m_blendValueSource; // 0x40	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x44	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x48	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x49	
private:
	[[maybe_unused]] uint8_t __pad004a[0x2]; // 0x4a
public:
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x4c	
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x50	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "WayPoint Helper"
class CWayPointHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Start Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flStartCycle; // 0x3c	
	// MPropertyFriendlyName "End Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flEndCycle; // 0x40	
	// MPropertyFriendlyName "Only align to Goals"
	bool m_bOnlyGoals; // 0x44	
	// MPropertyFriendlyName "Prevent Overshoot"
	bool m_bPreventOvershoot; // 0x45	
	// MPropertyFriendlyName "Prevent Undershoot"
	bool m_bPreventUndershoot; // 0x46	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MPropertyFriendlyName "Bone Mask"
class CBoneMaskAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x38	
	// MPropertyHideField
	AnimNodeID m_child1ID; // 0x40	
	// MPropertyHideField
	AnimNodeID m_child2ID; // 0x44	
	// MPropertyFriendlyName "Blend Space"
	BoneMaskBlendSpace m_blendSpace; // 0x48	
	// MPropertyFriendlyName "Use Blend Source"
	// MPropertyAttrChangeCallback
	bool m_bUseBlendScale; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x50	
	// MPropertyFriendlyName "Blend Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_blendParameter; // 0x54	
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x58	
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x5c	
	// MPropertyFriendlyName "Root Motion Blend"
	// MPropertyAttributeRange "0 1"
	float m_flRootMotionBlend; // 0x60	
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x64	
	// MPropertyFriendlyName "Reset Child1"
	bool m_bResetChild1; // 0x68	
	// MPropertyFriendlyName "Reset Child2"
	bool m_bResetChild2; // 0x69	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Choreo"
class CChoreoAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Direct Playback"
class CDirectPlaybackAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Finish Early"
	bool m_bFinishEarly; // 0x3c	
	// MPropertyFriendlyName "Reset Child On Finish"
	bool m_bResetOnFinish; // 0x3d	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MPropertyFriendlyName "Lean Matrix"
class CLeanMatrixAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x38	
	// MPropertyFriendlyName "Max Value"
	float m_flMaxValue; // 0x40	
	// MPropertyFriendlyName "Blend Source"
	AnimVectorSource m_blendSource; // 0x44	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x48	
	// MPropertyFriendlyName "Vertical Axis"
	Vector m_verticalAxisDirection; // 0x4c	
	// MPropertyFriendlyName "Horizontal Axis"
	Vector m_horizontalAxisDirection; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x68	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MPropertyFriendlyName "Two-Bone IK"
class CTwoBoneIKAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x40	
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "End Effector Type"
	// MPropertyAttrChangeCallback
	IkEndEffectorType m_endEffectorType; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_endEffectorAttachmentName; // 0x50	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Target Type"
	// MPropertyAttrChangeCallback
	IkTargetType m_targetType; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_attachmentName; // 0x60	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyAttrStateCallback
	CUtlString m_targetBoneName; // 0x68	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_targetParam; // 0x70	
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Match Target Orientation"
	// MPropertyAttrStateCallback
	bool m_bMatchTargetOrientation; // 0x74	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MPropertyFriendlyName "Ground IK"
class CGroundIKSolveAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAttributeChoiceName "IKChainOld"
	CUtlVector< CUtlString > m_IkChains; // 0x40	
	// MPropertyFriendlyName "Tilt Source"
	// MPropertyAttributeChoiceEnumName
	GroundIKTiltSource_t m_TiltSource; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
public:
	// MPropertyFriendlyName "Override Tilt Root"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_OverrideTiltRoot; // 0x60	
	// MPropertyFriendlyName "Tilt Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_TiltAttachment; // 0x68	
	// MPropertyFriendlyName "Override Tilt Spring Strength"
	float m_flOverrideTiltSpringStrength; // 0x70	
	// MPropertyFriendlyName "Apply Locks"
	bool m_bApplyLocks; // 0x74	
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x75	
private:
	[[maybe_unused]] uint8_t __pad0076[0x2]; // 0x76
public:
	// MPropertyFriendlyName "Target Blend Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_TargetBlendParameter; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
public:
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Bone Types to Draw"
	// MPropertyAttributeChoiceEnumName
	CUtlVector< CGroundIKSolveAnimNode::DebugSkeletonBoneType_t > m_DebugDrawBoneTypes; // 0x80	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Draw Lock Values"
	bool m_bDebugDrawLockValues; // 0x98	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Lock Values Color"
	Color m_DebugDrawLockValuesColor; // 0x99	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Draw Before"
	bool m_bDebugDrawBefore; // 0x9d	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Before IK Color"
	Color m_DebugDrawBeforeColor; // 0x9e	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug Draw After"
	bool m_bDebugDrawAfter; // 0xa2	
	// MPropertyGroupName "Debug"
	// MPropertyFriendlyName "Debug After IK Color"
	Color m_DebugDrawAfterColor; // 0xa3	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MPropertyElementNameFn
class CSolveIKChainAnimNodeChainData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_IkChain; // 0x8	
	// MPropertyFriendlyName "Solver Setting Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	SolveIKChainAnimNodeSettingSource m_SolverSettingSource; // 0x10	
	// MPropertyFriendlyName "Override Solver Settings"
	// MPropertyAutoExpandGroup
	// MPropertyAttrStateCallback
	// -> m_SolverType - 0x14
	// -> m_nNumIterations - 0x18
	IKSolverSettings_t m_OverrideSolverSettings; // 0x14	
	// MPropertyFriendlyName "Target Setting Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	SolveIKChainAnimNodeSettingSource m_TargetSettingSource; // 0x1c	
	// MPropertyFriendlyName "Override Target Settings"
	// MPropertyAutoExpandGroup
	// MPropertyAttrStateCallback
	// -> m_TargetSource - 0x20
	// -> m_Bone - 0x28
	// -> m_AnimgraphParameterNamePosition - 0x38
	// -> m_TargetCoordSystem - 0x3c
	IKTargetSettings_t m_OverrideTargetSettings; // 0x20	
	// MPropertyFriendlyName "Debug Setting"
	// MPropertyGroupName "Debug"
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x40	
	// MPropertyFriendlyName "Debug Normalized Length"
	// MPropertyGroupName "Debug"
	float m_flDebugNormalizedLength; // 0x44	
	// MPropertyFriendlyName "Debug Offset"
	// MPropertyGroupName "Debug"
	Vector m_vDebugOffset; // 0x48	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MPropertyFriendlyName "Solve IK Chain"
class CSolveIKChainAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAutoExpandGroup
	CUtlVector< CSolveIKChainAnimNodeChainData > m_IkChains; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MPropertyFriendlyName "Look At"
class CLookAtAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x3c	
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x40	
	// MPropertyFriendlyName "Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_weightParam; // 0x44	
	// MPropertyFriendlyName "LookAt Chain"
	// MPropertyAttributeChoiceName "LookAtChain"
	CUtlString m_lookatChainName; // 0x48	
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x50	
	// MPropertyFriendlyName "Yaw Limit"
	// MPropertyAttributeRange "0 180"
	float m_flYawLimit; // 0x58	
	// MPropertyFriendlyName "Pitch Limit"
	// MPropertyAttributeRange "0 180"
	float m_flPitchLimit; // 0x5c	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x60	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x61	
	// MPropertyFriendlyName "Use Hysteresis"
	// MPropertyGroupName "Hysteresis"
	bool m_bUseHysteresis; // 0x62	
private:
	[[maybe_unused]] uint8_t __pad0063[0x1]; // 0x63
public:
	// MPropertyFriendlyName "Inner Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisInnerAngle; // 0x64	
	// MPropertyFriendlyName "Outer Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisOuterAngle; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MPropertyFriendlyName "Neural Network"
class CNeuralNetAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Weights File"
	CUtlString m_weightsFile; // 0x38	
	// MPropertyFriendlyName "Test Input File"
	CUtlString m_testInputFile; // 0x40	
	// MPropertyFriendlyName "Bone Map File"
	CUtlString m_boneMapFile; // 0x48	
	// MPropertyFriendlyName "Sensor Range File"
	CUtlString m_sensorRangeFile; // 0x50	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Path Helper"
class CPathHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Stopping Radius"
	float m_flStoppingRadius; // 0x3c	
	// MPropertyFriendlyName "Stopping Min Speed Scale"
	float m_flStoppingSpeedScale; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MPropertyFriendlyName "Follow Attachment"
class CFollowAttachmentAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x40	
	// MPropertyFriendlyName "Target Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x48	
	// MPropertyFriendlyName "Match Translation"
	bool m_bMatchTranslation; // 0x50	
	// MPropertyFriendlyName "Match Rotation"
	bool m_bMatchRotation; // 0x51	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "SteamVR Skeletal Input"
class CSkeletalInputAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Motion Range"
	AnimVRHandMotionRange_t m_motionRange; // 0x38	
	// MPropertyFriendlyName "Enable IK"
	// MPropertyGroupName "+Retargetting"
	bool m_bEnableIK; // 0x3c	
	// MPropertyFriendlyName "Enable Collision"
	// MPropertyGroupName "+Retargetting"
	bool m_bEnableCollision; // 0x3d	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MPropertyFriendlyName "Selector"
// MPropertyExtendedEditor
class CSelectorAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertySuppressField
	CUtlVector< AnimNodeID > m_children; // 0x40	
	// MPropertySuppressField
	CUtlVector< AnimTagID > m_tags; // 0x58	
	// MPropertyFriendlyName "Selection Source"
	// MPropertyAttrChangeCallback
	SelectionSource_t m_selectionSource; // 0x70	
	// MPropertyFriendlyName "Bool Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_boolParamID; // 0x74	
	// MPropertyFriendlyName "Enum Parameter"
	// MPropertyAttributeChoiceName "EnumParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_enumParamID; // 0x78	
	// MPropertyFriendlyName "Blend Duration"
	float m_blendDuration; // 0x7c	
	// MPropertyFriendlyName "Tag Behavior"
	SelectorTagBehavior_t m_tagBehavior; // 0x80	
	// MPropertyFriendlyName "Reset On Change"
	bool m_bResetOnChange; // 0x84	
	// MPropertyFriendlyName "Start new option at same cycle"
	bool m_bSyncCyclesOnChange; // 0x85	
private:
	[[maybe_unused]] uint8_t __pad0086[0x2]; // 0x86
public:
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x88	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MPropertyFriendlyName "Procedural Hit Reacts"
class CHitReactAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Minimum Delay Between Hits"
	float m_flMinDelayBetweenHits; // 0x3c	
	// MPropertyFriendlyName "Trigger Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_triggerParam; // 0x40	
	// MPropertyFriendlyName "Hit Bone Parameter"
	// MPropertyAttributeChoiceName "IntParameter"
	AnimParamID m_hitBoneParam; // 0x44	
	// MPropertyFriendlyName "Hit Offset Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitOffsetParam; // 0x48	
	// MPropertyFriendlyName "Hit Direction Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitDirectionParam; // 0x4c	
	// MPropertyFriendlyName "Hit Strength Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_hitStrengthParam; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	// MPropertyFriendlyName "Bone Weights"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x58	
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x60	
	// MPropertyFriendlyName "Hip Translation Scale"
	float m_flHipBoneTranslationScale; // 0x68	
	// MPropertyFriendlyName "Number of bone effected"
	int32_t m_nEffectedBoneCount; // 0x6c	
	// MPropertyFriendlyName "Max Impact Force"
	float m_flMaxImpactForce; // 0x70	
	// MPropertyFriendlyName "Min Impact Force"
	float m_flMinImpactForce; // 0x74	
	// MPropertyFriendlyName "Whip Impact Scale"
	float m_flWhipImpactScale; // 0x78	
	// MPropertyFriendlyName "Counter Rotation Scale"
	float m_flCounterRotationScale; // 0x7c	
	// MPropertyFriendlyName "Distance Fade Scale"
	float m_flDistanceFadeScale; // 0x80	
	// MPropertyFriendlyName "Propagation Scale"
	float m_flPropagationScale; // 0x84	
	// MPropertyFriendlyName "Whip Delay Time"
	float m_flWhipDelay; // 0x88	
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0x8c	
	// MPropertyFriendlyName "Whip Spring Strength"
	float m_flWhipSpringStrength; // 0x90	
	// MPropertyFriendlyName "Hip Dip Spring Strength"
	float m_flHipDipSpringStrength; // 0x94	
	// MPropertyFriendlyName "Hip Dip Scale"
	float m_flHipDipImpactScale; // 0x98	
	// MPropertyFriendlyName "Hip Dip Delay Time"
	float m_flHipDipDelay; // 0x9c	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0xa0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x10
// 
// MPropertyFriendlyName "Blend Item"
// MPropertyElementNameFn
class CBlend2DItem
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x0	
	// MPropertyFriendlyName "Blend Value"
	Vector2D m_blendValue; // 0x8	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MPropertyFriendlyName "Blend 2D"
class CBlend2DAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandGroup
	CUtlVector< CBlend2DItem > m_items; // 0x38	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyGroupName "Horizontal Axis"
	AnimValueSource m_blendSourceX; // 0x50	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyGroupName "Horizontal Axis"
	AnimParamID m_paramX; // 0x54	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyGroupName "Vertical Axis"
	AnimValueSource m_blendSourceY; // 0x58	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyGroupName "Vertical Axis"
	AnimParamID m_paramY; // 0x5c	
	// MPropertyFriendlyName "Blend Mode"
	Blend2DMode m_eBlendNode; // 0x60	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x64	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x65	
private:
	[[maybe_unused]] uint8_t __pad0066[0x2]; // 0x66
public:
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// 
// MPropertyFriendlyName "Item"
// MPropertyElementNameFn
class CFootLockItem
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	CUtlString m_footName; // 0x0	
	// MPropertyFriendlyName "Target Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_targetBoneName; // 0x8	
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x10	
	// MPropertyFriendlyName "Disable Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_disableTagID; // 0x18	
	// MPropertyFriendlyName "Max Left Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationLeft; // 0x1c	
	// MPropertyFriendlyName "Max Right Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationRight; // 0x20	
	// MPropertyFriendlyName "Footstep Landed Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_footstepLandedTag; // 0x24	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MPropertyFriendlyName "Strider"
class CFootLockAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandGroup
	CUtlVector< CFootLockItem > m_items; // 0x40	
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x58	
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x60	
	// MPropertyFriendlyName "Apply Foot Rotation Limits"
	bool m_bApplyFootRotationLimits; // 0x64	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x65	
private:
	[[maybe_unused]] uint8_t __pad0066[0x2]; // 0x66
public:
	// MPropertyFriendlyName "IK Solver Type"
	// MPropertyGroupName "IK"
	// MPropertyAttrChangeCallback
	IKSolverType m_ikSolverType; // 0x68	
	// MPropertyFriendlyName "Always use fallback hinge"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	bool m_bAlwaysUseFallbackHinge; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
public:
	// MPropertyFriendlyName "Curve Foot Paths"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveScale; // 0x70	
	// MPropertyFriendlyName "Curve Paths Limit"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveLimitScale; // 0x74	
	// MPropertyFriendlyName "Enable Vertical Curved Paths"
	// MPropertyGroupName "Curve Paths"
	bool m_bEnableVerticalCurvedPaths; // 0x78	
	// MPropertyFriendlyName "Modulate Step Height"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrChangeCallback
	bool m_bModulateStepHeight; // 0x79	
private:
	[[maybe_unused]] uint8_t __pad007a[0x2]; // 0x7a
public:
	// MPropertyFriendlyName "Height Increase Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightIncreaseScale; // 0x7c	
	// MPropertyFriendlyName "Height Decrease Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightDecreaseScale; // 0x80	
	// MPropertyFriendlyName "Enable Hip Shift"
	// MPropertyGroupName "Hip Shift"
	bool m_bEnableHipShift; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	// MPropertyFriendlyName "Hip Shift Scale"
	// MPropertyGroupName "Hip Shift"
	// MPropertyAttributeRange "0 1"
	float m_flHipShiftScale; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Hip Shift"
	CAnimInputDamping m_hipShiftDamping; // 0x90	
	// MPropertyFriendlyName "Apply Tilt"
	// MPropertyGroupName "Tilt"
	bool m_bApplyTilt; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00a9[0x3]; // 0xa9
public:
	// MPropertyFriendlyName "Tilt Plane Pitch Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlanePitchSpringStrength; // 0xac	
	// MPropertyFriendlyName "Tilt Plane Roll Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlaneRollSpringStrength; // 0xb0	
	// MPropertyFriendlyName "Enable Lock Breaking"
	// MPropertyGroupName "Lock Breaking"
	bool m_bEnableLockBreaking; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00b5[0x3]; // 0xb5
public:
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakBlendTime; // 0xb8	
	// MPropertyFriendlyName "Enable Stretching"
	// MPropertyGroupName "Stretch"
	bool m_bEnableStretching; // 0xbc	
private:
	[[maybe_unused]] uint8_t __pad00bd[0x3]; // 0xbd
public:
	// MPropertyFriendlyName "Max Stretch Amount"
	// MPropertyGroupName "Stretch"
	float m_flMaxStretchAmount; // 0xc0	
	// MPropertyFriendlyName "Extension Scale"
	// MPropertyGroupName "Stretch"
	// MPropertyAttributeRange "0 1"
	float m_flStretchExtensionScale; // 0xc4	
	// MPropertyFriendlyName "Enable Ground Tracing"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	bool m_bEnableGroundTracing; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	// MPropertyFriendlyName "Angle Traces with Slope"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTraceAngleBlend; // 0xcc	
	// MPropertyFriendlyName "Apply Hip Drop"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bApplyHipDrop; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
public:
	// MPropertyFriendlyName "Max Foot Lift"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flMaxFootHeight; // 0xd4	
	// MPropertyFriendlyName "Leg Extension Scale"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flExtensionScale; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00dc[0x4]; // 0xdc
public:
	// MPropertyFriendlyName "Hip Damping"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_hipDampingSettings; // 0xe0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MPropertyFriendlyName "Follow Path"
class CFollowPathAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Blend Out Time"
	float m_flBlendOutTime; // 0x3c	
	// MPropertyFriendlyName "Block Non-Path Movement"
	bool m_bBlockNonPathMovement; // 0x40	
	// MPropertyFriendlyName "Enable Speed Scaling"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttrChangeCallback
	bool m_bScaleSpeed; // 0x41	
private:
	[[maybe_unused]] uint8_t __pad0042[0x2]; // 0x42
public:
	// MPropertyFriendlyName "Scale"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flScale; // 0x44	
	// MPropertyFriendlyName "Min Angle"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 180"
	// MPropertyAttrStateCallback
	float m_flMinAngle; // 0x48	
	// MPropertyFriendlyName "Max Angle"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 180"
	// MPropertyAttrStateCallback
	float m_flMaxAngle; // 0x4c	
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttrStateCallback
	float m_flSpeedScaleBlending; // 0x50	
	// MPropertyFriendlyName "Enable Turn to Face"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	bool m_bTurnToFace; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	// MPropertyFriendlyName "Target"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x58	
	// MPropertyFriendlyName "Parameter"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x5c	
	// MPropertyFriendlyName "Offset"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeRange "-180 180"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_damping; // 0x68	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MPropertyFriendlyName "Motion Matching"
class CMotionMatchingAnimNode : public CAnimNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CMotionClipGroup > > m_clipGroups; // 0x40	
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CMotionMetricBase > > m_metrics; // 0x58	
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x70	
	// MPropertyFriendlyName "Prediction Time"
	float m_flPredictionTime; // 0x80	
	// MPropertyFriendlyName "Sampling Method"
	// MPropertyAttrChangeCallback
	MotionSamplingMethod m_samplingMethod; // 0x84	
	// MPropertyFriendlyName "Sample Rate"
	// MPropertyAttrStateCallback
	float m_flSampleRate; // 0x88	
	// MPropertyFriendlyName "Search at fixed interval"
	// MPropertyGroupName "Search Triggers"
	// MPropertyAttrChangeCallback
	bool m_bSearchAtInterval; // 0x8c	
private:
	[[maybe_unused]] uint8_t __pad008d[0x3]; // 0x8d
public:
	// MPropertyFriendlyName "Search Interval"
	// MPropertyGroupName "Search Triggers"
	// MPropertyAttrStateCallback
	float m_flSearchInterval; // 0x90	
	// MPropertyFriendlyName "Search on Steps"
	// MPropertyGroupName "Search Triggers"
	bool m_bSearchOnSteps; // 0x94	
	// MPropertyFriendlyName "Search when tags change"
	// MPropertyGroupName "Search Triggers"
	bool m_bForceSearchWhenTagsChange; // 0x95	
	// MPropertyFriendlyName "Search when clip ends"
	// MPropertyGroupName "Search Triggers"
	bool m_bSearchWhenClipEnds; // 0x96	
	// MPropertyFriendlyName "Search when goal changes"
	// MPropertyGroupName "Search Triggers"
	bool m_bSearchWhenGoalChanges; // 0x97	
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x98	
	// MPropertyFriendlyName "Selection Threshold"
	float m_flSelectionThreshold; // 0x9c	
	// MPropertyFriendlyName "Lock Clip When Waning"
	bool m_bLockClipWhenWaning; // 0xa0	
	// MPropertyFriendlyName "Enable Goal Assist"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrChangeCallback
	bool m_bGoalAssist; // 0xa1	
private:
	[[maybe_unused]] uint8_t __pad00a2[0x2]; // 0xa2
public:
	// MPropertyFriendlyName "Goal Assist Distance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistDistance; // 0xa4	
	// MPropertyFriendlyName "Goal Assist Tolerance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistTolerance; // 0xa8	
	// MPropertyFriendlyName "Enable Distance Scaling"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrChangeCallback
	bool m_bEnableDistanceScaling; // 0xac	
private:
	[[maybe_unused]] uint8_t __pad00ad[0x3]; // 0xad
public:
	// MPropertyFriendlyName "Outer Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_OuterRadius; // 0xb0	
	// MPropertyFriendlyName "Inner Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_InnerRadius; // 0xb4	
	// MPropertyFriendlyName "Maximum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MaxScale; // 0xb8	
	// MPropertyFriendlyName "Minimum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MinScale; // 0xbc	
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_distanceScale_Damping; // 0xc0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Set Facing"
class CSetFacingAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Facing Mode"
	FacingMode m_facingMode; // 0x3c	
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MPropertyFriendlyName "Stop At Goal"
class CStopAtGoalAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
	// MPropertyFriendlyName "Outer Stopping Radius"
	float m_flOuterRadius; // 0x3c	
	// MPropertyFriendlyName "Inner Stopping Radius"
	float m_flInnerRadius; // 0x40	
	// MPropertyFriendlyName "Maximum Speed Scale"
	float m_flMaxScale; // 0x44	
	// MPropertyFriendlyName "Minimum Speed Scale"
	float m_flMinScale; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x50	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// 
// MPropertyFriendlyName "Item"
// MPropertyElementNameFn
class CJiggleBoneItem
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x0	
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0x8	
	// MPropertyFriendlyName "Sim Rate (FPS)"
	float m_flSimRateFPS; // 0xc	
	// MPropertyFriendlyName "Damping"
	// MPropertyAttributeRange "0 1"
	float m_flDamping; // 0x10	
	// MPropertyFriendlyName "Sim Space"
	JiggleBoneSimSpace m_eSimSpace; // 0x14	
	// MPropertyFriendlyName "Max"
	// MPropertyGroupName "Movement Limits"
	Vector m_vBoundsMaxLS; // 0x18	
	// MPropertyFriendlyName "Min"
	// MPropertyGroupName "Movement Limits"
	Vector m_vBoundsMinLS; // 0x24	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MPropertyFriendlyName "Jiggle Bone"
class CJiggleBoneAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_childID; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "Jiggle Bones"
	// MPropertyAutoExpandGroup
	CUtlVector< CJiggleBoneItem > m_items; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Single Frame"
class CSingleFrameAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x38	
	// MPropertyFriendlyName "Frame"
	int32_t m_nFrameIndex; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MPropertyFriendlyName "Animation State"
// MPropertyExtendedEditor
class CAnimState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateTransition > > m_transitions; // 0x20	
	// MPropertySuppressField
	CUtlVector< AnimTagID > m_tags; // 0x38	
	// MPropertySuppressField
	CUtlVector< uint8 > m_tagBehaviors; // 0x50	
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x68	
	// MPropertyHideField
	AnimNodeID m_childNodeID; // 0x70	
	// MPropertyHideField
	AnimStateID m_stateID; // 0x74	
	// MPropertyHideField
	Vector2D m_position; // 0x78	
	// MPropertyFriendlyName "Start State"
	bool m_bIsStartState; // 0x80	
	// MPropertyFriendlyName "End State"
	bool m_bIsEndtState; // 0x81	
	// MPropertyFriendlyName "Passthrough"
	bool m_bIsPassthrough; // 0x82	
	// MPropertyFriendlyName "Exclusive Root Motion"
	bool m_bIsRootMotionExclusive; // 0x83	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MPropertyFriendlyName "Transition"
// MPropertyExtendedEditor
class CAnimStateTransition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateConditionBase > > m_conditions; // 0x20	
	// MPropertyFriendlyName "Blend Duration"
	float m_blendDuration; // 0x38	
	// MPropertyHideField
	AnimStateID m_destState; // 0x3c	
	// MPropertyFriendlyName "Reset Destination"
	bool m_bReset; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// MPropertyFriendlyName "Start Cycle At"
	ResetCycleOption m_resetCycleOption; // 0x44	
	// MPropertyFriendlyName "Fixed Start Cycle Value"
	float m_flFixedCycleValue; // 0x48	
	// MPropertySuppressField
	CBlendCurve m_blendCurve; // 0x4c	
	// MPropertyFriendlyName "Park Feet"
	bool m_bForceFootPlant; // 0x5c	
	// MPropertyFriendlyName "Disable"
	bool m_bDisabled; // 0x5d	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	uint8_t m_comparisonOp; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Parameter Condition"
class CParameterAnimCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "Parameter"
	AnimParamID m_paramID; // 0x28	
	// MPropertyFriendlyName "Comparison Value"
	CAnimVariant m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Tag Condition"
class CTagCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x28	
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Cycle Condition"
class CCycleCondition : public CAnimStateConditionBase
{
public:
	float m_comparisonValue; // 0x28	
	int32_t m_comparisonValueType; // 0x2c	
	ControlValue m_comparisonControlValue; // 0x30	
	AnimParamID m_comparisonParamID; // 0x34	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Finished Condition"
class CFinishedCondition : public CAnimStateConditionBase
{
public:
	FinishedConditionOption m_option; // 0x28	
	bool m_bIsFinished; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Look Heading Condition"
class CLookHeadingCondition : public CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Look Pitch Condition"
class CLookPitchCondition : public CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Move Heading Condition"
class CMoveHeadingCondition : public CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Move Speed Condition"
class CMoveSpeedCondition : public CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Facing Condition"
class CFacingHeadingCondition : public CAnimStateConditionBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x4]; // 0x28
public:
	// MPropertyFriendlyName "Comparison Value"
	float m_comparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Path Status Condition"
class CPathStatusCondition : public CAnimStateConditionBase
{
public:
	PathStatusOptions m_optionToCheck; // 0x28	
	bool m_bComparisonValue; // 0x2c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Control Value Condition"
class CControlValueCondition : public CAnimStateConditionBase
{
public:
	ControlValue m_sourceControlValue; // 0x28	
	int32_t m_comparisonValueType; // 0x2c	
	float m_comparisonFixedValue; // 0x30	
	ControlValue m_comparisonControlValue; // 0x34	
	AnimParamID m_comparisonParamID; // 0x38	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Time Condition"
class CTimeCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	float m_comparisonValue; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Ground Condition"
class CGroundCondition : public CAnimStateConditionBase
{
public:
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
class CAnimTagSpan
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	AnimTagID m_id; // 0x20	
	float m_fStartCycle; // 0x24	
	float m_fDuration; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CAnimMovementManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CAnimMotorList m_MotorList; // 0x18	
	CAnimMovementSettings m_MovementSettings; // 0xd0	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CAnimTagManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18	
	// MPropertyHideField
	AnimTagID m_tagID; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "String Tag"
class CStringAnimTag : public CAnimTagBase
{
public:
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Post Graph IK Tag"
class CPostGraphIKTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Blend Amount"
	float m_flBlendAmount; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Post Graph IK Chain Blend Tag"
class CPostGraphIKChainBlendTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Chain Name"
	CUtlString m_ChainName; // 0x30	
	// MPropertyFriendlyName "Blend Amount on Enter"
	float m_flBlendAmountOnEnter; // 0x38	
	// MPropertyFriendlyName "Blend Amount on Exit"
	float m_flBlendAmountOnExit; // 0x3c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "FootFall Tag"
class CFootFallAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Foot"
	FootFallTagFoot_t m_foot; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Audio Tag"
class CAudioAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Audio Clip"
	// MPropertyAttributeEditor "SoundPicker"
	CUtlString m_clipName; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "FootstepLanded Tag"
class CFootstepLandedAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Footstep Type"
	FootstepLandedFootSoundType_t m_FootstepType; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MPropertyFriendlyName "Override Sound"
	// MPropertyAttributeChoiceName "Sound"
	CUtlString m_OverrideSoundName; // 0x38	
	// MPropertyFriendlyName "Debug Name"
	CUtlString m_DebugAnimSourceString; // 0x40	
	// MPropertyFriendlyName "Bone Name"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_BoneName; // 0x48	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Sequence Finished Tag"
class CSequenceFinishedAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Status Tag"
class CTaskStatusAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyHideField
	CUtlString m_identifierString; // 0x30	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Cloth Settings Tag"
class CClothSettingsAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Stiffness"
	// MPropertyAttributeRange "0 1"
	float m_flStiffness; // 0x30	
	// MPropertyFriendlyName "EaseIn"
	// MPropertyAttributeRange "0 1"
	float m_flEaseIn; // 0x34	
	// MPropertyFriendlyName "EaseOut"
	// MPropertyAttributeRange "0 1"
	float m_flEaseOut; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyFriendlyName "VertexSet"
	CUtlString m_nVertexSet; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Ragdoll Tag"
class CRagdollAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyFriendlyName "Pose Control"
	AnimPoseControl m_nPoseControl; // 0x30	
	// MPropertyFriendlyName "Frequency"
	// MPropertyAttributeRange "0 30"
	float m_flFrequency; // 0x34	
	// MPropertyFriendlyName "Damping Ratio"
	// MPropertyAttributeRange "0 2"
	float m_flDampingRatio; // 0x38	
	// MPropertyFriendlyName "Decay Duration"
	// MPropertyAttributeRange "-1 1000"
	float m_flDecayDuration; // 0x3c	
	// MPropertyFriendlyName "Decay Bias"
	// MPropertyAttributeRange "0 1"
	float m_flDecayBias; // 0x40	
	// MPropertyFriendlyName "Destroy"
	bool m_bDestroy; // 0x44	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Particle Tag"
class CParticleAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MPropertyFriendlyName "Particle System"
	CUtlString m_particleSystemName; // 0x30	
	// MPropertyFriendlyName "Configuration"
	CUtlString m_configName; // 0x38	
	// MPropertyFriendlyName "Stop on Tag End"
	bool m_bStopWhenTagEnds; // 0x40	
	// MPropertyFriendlyName "Tag End Stop is Instant"
	bool m_bTagEndStopIsInstant; // 0x41	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "Motion Clip"
class CMotionClip
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x20	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x38	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Motion Clip Group"
class CMotionClipGroup
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CMotionClip > > m_clips; // 0x20	
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38	
	// MPropertyFriendlyName "Enable On Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CMotionMetricBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MPropertyHideField
	float m_flWeight; // 0x20	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyFriendlyName "Foot Cycle Metric"
class CFootCycleMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandGroup
	CUtlVector< CUtlString > m_feet; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MPropertyFriendlyName "Current Velocity Metric"
class CCurrentVelocityMetric : public CMotionMetricBase
{
public:
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MPropertyFriendlyName "Path Metric"
class CPathMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MPropertyFriendlyName "Samples Times"
	CUtlVector< float32 > m_pathSamples; // 0x30	
	// MPropertyFriendlyName "Extrapolate Movement"
	// MPropertyAttrChangeCallback
	bool m_bExtrapolateMovement; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0049[0x3]; // 0x49
public:
	// MPropertyFriendlyName "Min Extrapolation Speed"
	// MPropertyAttrStateCallback
	float m_flMinExtrapolationSpeed; // 0x4c	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Future Facing Metric"
class CFutureFacingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Future Velocity Metric"
class CFutureVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28	
	// MPropertyFriendlyName "Stopping Distance"
	float m_flStoppingDistance; // 0x2c	
	// MPropertyFriendlyName "Ignore Direction"
	bool m_bIgnoreDirection; // 0x30	
	// MPropertyFriendlyName "Auto-Calculate target speed"
	// MPropertyAttrChangeCallback
	bool m_bAutoTargetSpeed; // 0x31	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MPropertyFriendlyName "Target Speed"
	// MPropertyAttrStateCallback
	float m_flManualTargetSpeed; // 0x34	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Bone Position Metric"
class CBonePositionMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MPropertyFriendlyName "Bone Velocity Metric"
class CBoneVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Distance Remaining Metric"
class CDistanceRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Maximum Tracked Distance"
	float m_flMaxDistance; // 0x28	
	// MPropertyFriendlyName "Filter By Fixed Distance"
	// MPropertyAttrChangeCallback
	bool m_bFilterFixedMinDistance; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	// MPropertyFriendlyName "Min Distance"
	// MPropertyAttrStateCallback
	float m_flMinDistance; // 0x30	
	// MPropertyFriendlyName "Filter By Goal Distance"
	// MPropertyAttrChangeCallback
	bool m_bFilterGoalDistance; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MPropertyFriendlyName "Goal Filter Start Distance"
	// MPropertyAttrStateCallback
	float m_flStartGoalFilterDistance; // 0x38	
	// MPropertyFriendlyName "Filter By Goal Overshoot"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bFilterGoalOvershoot; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	// MPropertyFriendlyName "Max Goal Overshoot Scale"
	// MPropertyAttrStateCallback
	float m_flMaxGoalOvershootScale; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Steps Remaining Metric"
class CStepsRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Feet"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandGroup
	CUtlVector< CUtlString > m_feet; // 0x28	
	// MPropertyFriendlyName "Min Steps Remaining"
	float m_flMinStepsRemaining; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MPropertyFriendlyName "Time Remaining Metric"
class CTimeRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Match Time Remaining"
	// MPropertyGroupName
	// MPropertyAttrChangeCallback
	bool m_bMatchByTimeRemaining; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x3]; // 0x29
public:
	// MPropertyFriendlyName "Max Time Remaining"
	// MPropertyAttrStateCallback
	float m_flMaxTimeRemaining; // 0x2c	
	// MPropertyFriendlyName "Filter By Time Remaining"
	// MPropertyAttrChangeCallback
	bool m_bFilterByTimeRemaining; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
public:
	// MPropertyFriendlyName "Min Time Remaining"
	// MPropertyAttrStateCallback
	float m_flMinTimeRemaining; // 0x34	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MPropertyFriendlyName "Foot Position Metric"
class CFootPositionMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandGroup
	CUtlVector< CUtlString > m_feet; // 0x28	
	// MPropertyFriendlyName "Ignore Slope"
	bool m_bIgnoreSlope; // 0x40	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x70
// Has VTable
class CAnimReplayFrame
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlBinaryBlock m_instanceData; // 0x10	
	CUtlBinaryBlock m_poseRecipeInstanceData; // 0x28	
	CTransform m_localToWorldTransform; // 0x40	
	float m_timeStamp; // 0x60	
};

// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x70
// Has VTable
class CAnimGraphDebugReplay
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
	CAnimationGraph* m_pAnimGraph; // 0x40	
	CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList; // 0x48	
	int32_t m_startIndex; // 0x60	
	int32_t m_writeIndex; // 0x64	
	int32_t m_frameCount; // 0x68	
};

