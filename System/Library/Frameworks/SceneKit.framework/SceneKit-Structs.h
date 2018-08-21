/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class <MTLBuffer>, SCNPhysicsBody, <MTLTexture>, <MTLSamplerState>, <MTLRenderPipelineState>, <MTLCommandBuffer>, <MTLRenderCommandEncoder>, SCNMetalMesh, SCNMetalMeshElement, SCNMetalShadable, SCNMetalRenderPipeline, NSMutableDictionary, NSTimer, NSArray, NSDictionary, NSMutableSet;

typedef struct _NSZone* NSZoneRef;

typedef struct __C3DNode* C3DNodeRef;

typedef struct __C3DScene* C3DSceneRef;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned char field9[4];
} SCD_Struct_SC3;

typedef struct __C3DEngineContext* C3DEngineContextRef;

typedef struct __C3DTexture* C3DTextureRef;

typedef struct {
	<MTLBuffer>* perVertexTrianglesOffsets;
	<MTLBuffer>* perVertexTrianglesIndices;
	BOOL sharedTriangleIs16Bits;
} SCD_Struct_SC6;

typedef struct __C3DMorph* C3DMorphRef;

typedef struct __C3DMesh* C3DMeshRef;

typedef struct __C3DSkinner* C3DSkinnerRef;

typedef struct SCNVector3 {
	float x;
	float y;
	float z;
} SCNVector3;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNPhysicsBody* bodyB;
	SCNVector3 anchorA;
	SCNVector3 anchorB;
	SCNVector3 axisA;
	SCNVector3 axisB;
} SCD_Struct_SC11;

typedef struct {
	[4 columns];
} SCD_Struct_SC12;

typedef union C3DMatrix4x4 {
	float components[16];
	[4 m];
	SCD_Struct_SC12 simd;
} C3DMatrix4x4;

typedef struct {
	unsigned short selectedAxis;
	 originalPosition;
	 axisDirection;
	 mouseDeltaVector;
} SCD_Struct_SC14;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	unsigned short selectedAxis;
	CGPoint originalMouseLocation;
	float rotationSign;
	 originalRotation;
} SCD_Struct_SC16;

typedef union {
	SCD_Struct_SC14 axisMove;
	SCD_Struct_SC14 planeMove;
	SCD_Struct_SC16 axisRotate;
} SCD_Union_SC17;

typedef struct {
	 positions;
	 orientations;
	SCNMatrix4 originalLocalMatrix;
} SCD_Struct_SC18;

typedef struct {
	float field1;
	void field2;
	float field3;
} SCD_Struct_SC19;

typedef struct {
	id field1;
	SCNVector3 field2;
	SCNVector3 field3;
	CGPoint field4;
	CGPoint field5;
	double field6;
} SCD_Struct_SC20;

typedef struct __C3DMaterial* C3DMaterialRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __C3DBlendStates* C3DBlendStatesRef;

typedef struct {
	unsigned char field1;
	id field2;
	/*function pointer*/void* field3;
} SCD_Struct_SC25;

typedef struct {
	__C3DFXProgram field1;
	_ field2;
	_ field3;
	C3DNode field4;
	_ field5;
	_ field6;
	unsigned char field7;
	3 field8;
	D field9;
	G field10;
	e field11;
	o field12;
	m field13;
	e field14;
	t field15;
	const  field16;
	y field17;
	_ field18;
	_ field19;
	unsigned char field20;
	3 field21;
	D field22;
	F field23;
	X field24;
	P field25;
	a field26;
	short field27;
	short field28;
	_ field29;
	_ field30;
	unsigned char field31;
	3 field32;
	D field33;
	F field34;
	X field35;
	P field36;
	a field37;
	short field38;
	short field39;
	id field40;
	_ field41;
	_ field42;
	C3DMaterial field43;
	_ field44;
	_ field45;
	C3DBlendStates field46;
	unsigned char field47;
	BOOL field48;
	id field49;
	SCD_Struct_SC25 field50;
} SCD_Struct_SC26;

typedef struct {
	unsigned char format;
	unsigned char sampleCount;
	unsigned char textureUsage;
	unsigned renderToTexture : 1;
	unsigned forceTextureRect : 1;
	unsigned viewportDependant : 1;
	unsigned renderToIOSurface : 1;
	unsigned mipmapped : 1;
	unsigned char padding[4];
} SCD_Struct_SC27;

typedef struct __C3DFXTechnique* C3DFXTechniqueRef;

typedef struct __C3DAnimationManager* C3DAnimationManagerRef;

typedef struct {
	SCNPhysicsBody* characterBody;
	SCNVector3 direction;
	double velocity;
	double jumpSpeed;
} SCD_Struct_SC30;

typedef struct atomic<int> {
	Ai __a_;
} atomic<int>;

typedef struct {
	<MTLBuffer>* buffer;
	unsigned long long offset;
} SCD_Struct_SC32;

typedef struct SCNMTLRenderCommandEncoder {
	unsigned long long _winding;
	unsigned long long _cullMode;
	unsigned long long _fillMode;
	unsigned long long _clipMode;
	 _blendColor;
	BOOL _lockCullMode;
	BOOL _lockFillMode;
	SCD_Struct_SC32 _vertexBuffers[31];
	<MTLTexture>* _vertexTextures[31];
	<MTLSamplerState>* _vertexSamplers[16];
	SCD_Struct_SC32 _fragmentBuffers[31];
	<MTLTexture>* _fragmentTextures[31];
	<MTLSamplerState>* _fragmentSamplers[16];
	<MTLRenderPipelineState>* _renderPipelineState;
	<MTLCommandBuffer>* _commandBuffer;
	<MTLRenderCommandEncoder>* _encoder;
	SCNMTLBufferPool _bufferPool;
	unsigned _vertexTexturesToBind;
	unsigned _fragmentTexturesToBind;
} SCNMTLRenderCommandEncoder;

typedef struct {
	char vertexIndex;
	char fragmentIndex;
} SCD_Struct_SC34;

typedef struct __C3DRasterizerStates* C3DRasterizerStatesRef;

typedef struct {
	__C3DFXPassInstance passInstance;
	__C3DLightingSystem lightingSystem;
	__C3DDynamicBatchingSystem dynamicBatchingSystem;
	__C3DFXPass pass;
	BOOL passRequiresLighting;
	BOOL passRequiresLastFrameTransform;
	__C3DTransformTree transformTree;
} SCD_Struct_SC36;

typedef struct float4x4 {
	[4 columns];
} float4x4;

typedef struct SCNSceneBuffer {
	float4x4 viewTransform;
	float4x4 inverseViewTransform;
	float4x4 projectionTransform;
	float4x4 viewProjectionTransform;
	float4x4 viewToCubeTransform;
	float4x4 lastFrameViewProjectionTransform;
	 ambientLightingColor;
	 fogColor;
	 fogParameters;
	 inverseResolution;
	float time;
	float sinTime;
	float cosTime;
	float random01;
	float motionBlurIntensity;
	float environmentIntensity;
	float4x4 inverseProjectionTransform;
	float4x4 inverseViewProjectionTransform;
	 nearFar;
	 viewportSize;
} SCNSceneBuffer;

typedef struct {
	<MTLBuffer>* buffer;
	unsigned long long offset;
	unsigned long long size;
	<MTLTexture>* shadowMaps[256];
	<MTLTexture>* textureMaps[256];
	<MTLSamplerState>* samplerStates[256];
} SCD_Struct_SC39;

typedef struct float2x3 {
	[2 columns];
} float2x3;

typedef struct {
	float4x4 modelTransform;
	float4x4 lastFrameModelTransform;
	float4x4 normalTransform;
	float4x4 modelViewTransform;
	float4x4 modelViewProjectionTransform;
	float2x3 boundingBox;
	float2x3 worldBoundingBox;
	__C3DNode instanceNode;
	unsigned flags;
	unsigned probeCacheIndex;
	unsigned boneTransformSizeWritten;
} SCD_Struct_SC41;

typedef struct {
	unsigned char lights[8];
} SCD_Struct_SC42;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> >;

typedef struct {
	long long count;
	C3DLight lights[8__];
	C3DLightRuntimeData lightsData[8__];
} SCD_Struct_SC46;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData> > >;

typedef struct unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData> > > {
	hash_table<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData> > > __table_;
} unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData> > >;

typedef struct {
	SCD_Struct_SC42 currentLightingSet;
	<MTLTexture>* currentShadowMaps[8];
	<MTLTexture>* currentGoboMaps[8];
	unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData> > > frameLightingSetDatas;
	unsigned long long currentLightingHashKey;
	SCD_Struct_SC46 currentLightingDesc;
} SCD_Struct_SC54;

typedef struct Cache {
	__C3DRasterizerStates rasterizerStates;
	__C3DMesh mesh;
	SCNMetalMesh* metalMesh;
	__C3DMeshElement meshElement;
	SCNMetalMeshElement* metalMeshElement;
	__C3DFXProgram program;
	__C3DMaterial material;
	__C3DGeometry geometry;
	SCNMetalShadable* metalShadable;
	__C3DEffectCommonProfile commonProfile;
	__C3DBlendStates blendStates;
	unsigned char colorBufferWriteMask;
	__C3DNode node;
	unsigned long long vertexDescriptorHash;
	unsigned char tessellationPipelineStateHash;
	SCNMetalRenderPipeline* renderPipeline;
} Cache;

typedef struct {
	C3DFXPass debugLightMeshPass[7__];
	C3DFXPass lightPasses[7__];
	C3DMesh lightMeshes[7__];
	BOOL resourcesAreReady;
} SCD_Struct_SC56;

typedef struct {
	unsigned long long pixelFormat;
	unsigned long long depthFormat;
	unsigned long long stencilFormat;
	unsigned long long sampleCount;
	<MTLRenderPipelineState>* replaceRPS;
	<MTLRenderPipelineState>* overRPS;
} SCD_Struct_SC57;

typedef struct {
	<MTLTexture>* backgroundTexture;
	<MTLTexture>* overlayTexture;
	<MTLTexture>* stencilTexture;
} SCD_Struct_SC58;

typedef struct {
	unsigned long long pixelFormat;
	unsigned long long sampleCount;
	<MTLRenderPipelineState>* displayCubemapPS;
	<MTLRenderPipelineState>* displayTexture2DPS;
	<MTLRenderPipelineState>* displayDepth2DPS;
} SCD_Struct_SC59;

typedef struct {
	BOOL collectEnabled;
	NSMutableDictionary* errors;
} SCD_Struct_SC60;

typedef struct {
	<MTLTexture>* currentColors[4];
	<MTLTexture>* currentDepth;
	<MTLTexture>* currentStencil;
	<MTLTexture>* mainColors[4];
	<MTLTexture>* mainDepth;
	<MTLTexture>* outputColors[4];
	<MTLTexture>* outputDepth;
} SCD_Struct_SC61;

typedef struct {
	unsigned modelTransformBindingCount;
	unsigned modelViewTransformBindingCount;
	unsigned normalTransformBindingCount;
	unsigned nodeOpacityBindingCount;
} SCD_Struct_SC62;

typedef struct __C3DImage* C3DImageRef;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	BOOL field3;
} SCD_Struct_SC64;

typedef struct {
	__C3DEnginePipeline field1;
	_ field2;
	_ field3;
	C3DNode field4;
	_ field5;
	_ field6;
	unsigned char field7;
	3 field8;
	D field9;
	F field10;
	X field11;
	P field12;
	a field13;
	short field14;
	short field15;
	unsigned field16;
	n field17;
	short field18;
	t field19;
	a field20;
	n field21;
	char field22;
	e field23;
	int field24;
	_ field25;
	_ field26;
	C3DEngineContext field27;
	BOOL field28;
	BOOL field29;
} SCD_Struct_SC65;

typedef struct {
	unsigned short field1;
	unsigned short field2;
} SCD_Struct_SC66;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_SC67;

typedef struct __C3DRendererElementStore* C3DRendererElementStoreRef;

typedef struct {
	 vector;
} SCD_Struct_SC69;

typedef struct {
	 angles;
	 initialAbsoluteAngles;
	SCD_Struct_SC12 initialTransformWorld;
	SCD_Struct_SC69 initialOrientationWorld;
} SCD_Struct_SC70;

typedef struct {
	BOOL inertiaEnabled;
	BOOL inertiaRunning;
	double lastSimulationTime;
	float friction;
	float rotationSensitivity;
	float translationSensitivity;
	 velocity;
	NSTimer* timer;
} SCD_Struct_SC71;

typedef struct SCNVector4 {
	float x;
	float y;
	float z;
	float w;
} SCNVector4;

typedef struct {
	id field1;
	/*function pointer*/void* field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_SC73;

typedef struct {
	__C3DFXPassInput field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_SC74;

typedef struct __C3DFXPassInput* C3DFXPassInputRef;

typedef struct __C3DFXProgram* C3DFXProgramRef;

typedef struct __C3DFXPass* C3DFXPassRef;

typedef struct {
	float projScale;
	float radius;
	float radius2;
	float bias;
	float intensity;
	float depthThreshold;
	float normalThreshold;
	float zMax;
	 projectionInfo;
	int scale;
} SCD_Struct_SC78;

typedef struct {
	_ field1;
	_ field2;
	C3DEngineContext field3;
	_ field4;
	_ field5;
	C3DFXTechnique field6;
	void field7;
	_ field8;
	_ field9;
	C3DFXProgram field10;
	_ field11;
	_ field12;
	C3DFXPass field13;
	Ob field14;
	j field15;
	e field16;
	char field17;
	t field18;
	double field19;
	void field20;
	_ field21;
	_ field22;
	unsigned char field23;
	3 field24;
	D field25;
	R field26;
	e field27;
	n field28;
	double field29;
	e field30;
	const  field31;
	e field32;
	const  field33;
	E field34;
	long field35;
	e field36;
	m field37;
	e field38;
	n field39;
	t field40;
	long long field41;
} SCD_Struct_SC79;

typedef struct __CFString* CFStringRef;

typedef struct {
	_ field1;
	_ field2;
	C3DNode field3;
	_ field4;
	_ field5;
	C3DMaterial field6;
	_ field7;
	_ field8;
	unsigned char field9;
	3 field10;
	D field11;
	G field12;
	e field13;
	o field14;
	m field15;
	e field16;
	t field17;
	const  field18;
	y field19;
	_ field20;
	_ field21;
	C3DBlendStates field22;
	_ field23;
	_ field24;
	SCD_Struct_SC25 field25;
	id field26;
	_ field27;
	_ field28;
	C3DFXProgram field29;
	_ field30;
	_ field31;
	C3DFXPass field32;
	unsigned char field33;
	BOOL field34;
	id field35;
	C3DFXPass field36;
} SCD_Struct_SC81;

typedef struct _compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > {
	c3dPhysicsField __value_;
} compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> >;

typedef struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > {
	c3dPhysicsField __begin_;
	c3dPhysicsField __end_;
	compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > __end_cap_;
} vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> >;

typedef struct c3dAether {
	vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > _fields;
	vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > _activeFields;
	unsigned _lastOverrideIndex;
} c3dAether;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __C3DParticleSystem* C3DParticleSystemRef;

typedef union {
	 eulerAngles;
	 axisAngle;
	SCD_Struct_SC69 quaternion;
} SCD_Union_SC87;

typedef struct {
	__C3DFramebuffer frameBuffer;
	__C3DFramebuffer multisamplingFrameBuffer;
	CGSize drawableSize;
} SCD_Struct_SC88;

typedef struct C3DColor4 {
	/*function pointer*/void* ;
	float rgba[4];
	SCNVector4) ;
} C3DColor4;

typedef struct CGImage* CGImageRef;

typedef struct __C3DKeyframedAnimation* C3DKeyframedAnimationRef;

typedef struct __C3DTimingFunction* C3DTimingFunctionRef;

typedef struct __C3DAnimation* C3DAnimationRef;

typedef struct __C3DAnimationPlayer* C3DAnimationPlayerRef;

typedef struct __C3DSceneSource* C3DSceneSourceRef;

typedef struct __C3DLibrary* C3DLibraryRef;

typedef struct __C3DHitTestResult* C3DHitTestResultRef;

typedef struct __CFArray* CFArrayRef;

typedef struct SCNMatrix4 {
	float m11;
	float m12;
	float m13;
	float m14;
	float m21;
	float m22;
	float m23;
	float m24;
	float m31;
	float m32;
	float m33;
	float m34;
	float m41;
	float m42;
	float m43;
	float m44;
} SCNMatrix4;

typedef struct {
	float intensity;
	float radius;
	float bias;
	float depthThreshold;
	float normalThreshold;
	long long sampleCount;
	long long downSample;
} SCD_Struct_SC100;

typedef struct {
	BOOL enableVertexWeldingAtImport;
	unsigned char boundaryInterpolationRule;
	unsigned char faceVaryingInterpolationRule;
	unsigned char normalSmoothingMode;
} SCD_Struct_SC101;

typedef struct CGColor* CGColorRef;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	float field11;
	float field12;
	float field13;
	float field14;
	float field15;
	float field16;
	float field17;
	float field18;
	float field19;
	unsigned field20;
	unsigned field21;
	float field22;
	int field23;
	float field24;
	float field25;
} SCD_Struct_SC103;

typedef struct {
	[16 field1];
} SCD_Struct_SC104;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNPhysicsBody* bodyB;
	SCNVector3 anchorA;
	SCNVector3 anchorB;
} SCD_Struct_SC105;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNMatrix4 frameA;
	SCNPhysicsBody* bodyB;
	SCNMatrix4 frameB;
	double maximumAngularLimit1;
	double maximumAngularLimit2;
	double maximumTwistAngle;
} SCD_Struct_SC106;

typedef struct __CFSet* CFSetRef;

typedef struct __C3DRendererElementProgramHashCode* C3DRendererElementProgramHashCodeRef;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_SC109;

typedef struct {
	unsigned char field1;
	unsigned field2 : 1;
	unsigned field3 : 1;
} SCD_Struct_SC110;

typedef struct {
	unsigned char field1;
	float field2;
	unsigned field3;
	unsigned char( field4;
	/*function pointer*/void* field5;
	= field6;
	SCD_Struct_SC11 field7;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > field8;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > field9;
	SCD_Struct_SC109 field10;
	0) field11;
} SCD_Struct_SC111;

typedef struct {
	int stage;
	NSArray* arguments;
	NSDictionary* customBlocks;
	__C3DFXPass pass;
} SCD_Struct_SC112;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	unsigned long long verticesStride;
	unsigned long long colorsStride;
	unsigned long long uvsStride;
	char* verticesData;
	char* colorsData;
	char* uvsData;
} SCD_Struct_SC115;

typedef struct {
	__C3DFXProgram weakProgram;
	unsigned baseIndex;
	unsigned baseVertex;
	unsigned vertexSize;
	unsigned allocatedVerticesSize;
	unsigned allocatedIndicesSize;
	__C3DImage textureImage;
	__C3DTexture texture;
	unsigned drawMode;
	BOOL orthographic;
	BOOL clearDepthBuffer;
	BOOL enableDepthTest;
	BOOL enableCulling;
	BOOL isDynamic;
	__C3DMesh mesh;
	__C3DMeshElement meshElement;
	SCD_Struct_SC115 _cache;
	NSMutableSet* _usedMeshes;
	NSMutableSet* _freeMeshes;
	NSMutableSet* _usedMeshElements;
	NSMutableSet* _freeMeshElements;
} SCD_Struct_SC116;

typedef struct {
	__C3DImage texture;
	CGSize textureSize;
	BOOL isRetina;
} SCD_Struct_SC117;

typedef struct {
	SCD_Struct_SC117 textureInfo;
	double lineHeight;
	short characterWidth_texture;
	double characterWidth_typography;
	short characterHeight_texture;
	/*function pointer*/void* symbolRects;
} SCD_Struct_SC118;

typedef struct _C3DEngineStats {
	unsigned verticesProcessed;
	unsigned primitivesProcessed;
	unsigned drawCount;
	unsigned drawStep;
	unsigned frameCount;
	unsigned fboSwitches;
	unsigned vboSwitches;
	unsigned attSwitches;
	unsigned attEnabling;
	unsigned iboSwitches;
	unsigned vaoSwitches;
	unsigned prgSwitches;
	unsigned texSwitches;
	unsigned rssSwitches;
	unsigned getCount;
	unsigned uniformFloatSent;
	unsigned uniformIntSent;
	unsigned uniformVector2Sent;
	unsigned uniformVector3Sent;
	unsigned uniformVector4Sent;
	unsigned uniformMatrix4Sent;
	unsigned vboUploaded;
	unsigned iboUploaded;
	unsigned texUploaded;
	double cpuTime;
	double cstrTime;
	double phyTime;
	double prtTime;
	double animTime;
	double skinTime;
	double mrphTime;
	double rendTime;
	double twoDTime;
	double delegateTime;
	double glFlushTime;
	double waitDisplayLinkTime;
	double drawableWaitTime;
	double lastDisplayLinkTime;
	unsigned prgCount;
	unsigned texCount;
	unsigned fboCount;
	unsigned vboCount;
	unsigned rboCount;
	unsigned iboCount;
	unsigned cboCount;
	unsigned vaoCount;
	unsigned fboMemory;
	unsigned rboMemory;
	unsigned vboMemory;
	unsigned iboMemory;
	unsigned cboMemory;
	unsigned texMemory;
	unsigned backBufferMemory;
	unsigned depthBuffersMemory;
	double frmAvgTime;
	double frmMinTime;
	double frmMaxTime;
	double frameTimeHistory[60];
	unsigned frameTimeCurrentIndex;
	double startTime;
	double lastFrameTime;
} C3DEngineStats;

typedef struct {
	BOOL initialized;
	BOOL showFullStatistics;
	float fps;
	float waitDisplayLinkTime;
	long long pressedButtonIndex;
	__CFString fpsString;
	__CFString shortString;
	__CFString internalString;
	unsigned lightingStatistics[9];
	C3DEngineStats stats;
} SCD_Struct_SC120;

typedef struct C3DSphere {
	 vector;
} C3DSphere;

typedef union {
	 vector;
	 center;
	SCNVector4 field3;
} SCD_Union_SC122;

typedef struct {
	BOOL stickyMoveEnabled;
	 direction;
	unsigned long long pickedAxis;
	unsigned long long userStickyAxis;
} SCD_Struct_SC123;

typedef struct {
	BOOL automaticLocationUpToDate;
	BOOL hasAutomatic;
} SCD_Struct_SC124;

typedef struct {
	CGPoint lastDragLocation;
	CGPoint velocity;
	double lastDragTime;
} SCD_Struct_SC125;

typedef struct _compressed_pair<unsigned long, std::__1::less<unsigned short> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::less<unsigned short> >;

typedef struct _compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > {
	unsigned short __value_;
} compressed_pair<unsigned short *, std::__1::allocator<unsigned short> >;

typedef struct vector<unsigned short, std::__1::allocator<unsigned short> > {
	unsigned short __begin_;
	unsigned short __end_;
	compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > __end_cap_;
} vector<unsigned short, std::__1::allocator<unsigned short> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *> > >;

typedef struct _tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::less<unsigned short> > __pair3_;
} tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> >;

typedef struct set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > {
	tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > __tree_;
} set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> >;

typedef struct {
	os_unfair_lock_s lock;
	NSDictionary* keyCodeConfiguration;
	set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > keyDown;
	vector<unsigned short, std::__1::allocator<unsigned short> > forward;
	vector<unsigned short, std::__1::allocator<unsigned short> > backward;
	vector<unsigned short, std::__1::allocator<unsigned short> > left;
	vector<unsigned short, std::__1::allocator<unsigned short> > right;
} SCD_Struct_SC133;

typedef struct __C3DImageProxy* C3DImageProxyRef;

typedef struct __C3DFramebuffer* C3DFramebufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_SC136;

typedef struct __CVMetalTextureCache* CVMetalTextureCacheRef;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNPhysicsBody* bodyB;
	SCNVector3 axisA;
	SCNVector3 anchorA;
	SCNVector3 axisB;
	SCNVector3 anchorB;
	double minLinearLimit;
	double maxLinearLimit;
	double minAngularLimit;
	double maxAngularLimit;
	double motorTargetLinearVelocity;
	double motorMaximumForce;
	double motorTargetAngularVelocity;
	double motorMaximumTorque;
} SCD_Struct_SC138;

typedef struct __CVBuffer* CVBufferRef;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct __C3DFXGLSLProgram* C3DFXGLSLProgramRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	char field1;
	double field2;
	double field3;
	int field4;
	double field5;
	void field6;
	void field7;
} SCD_Struct_SC143;

typedef struct {
	SCD_Struct_SC14 field1;
	3 field2;
	void field3;
	void field4;
	int field5;
	int field6;
	BOOL field7;
	BOOL field8;
	CGRect field9;
	double field10;
} SCD_Struct_SC144;

typedef struct __C3DLOD* C3DLODRef;

typedef struct {
	float edgeTessellationFactor;
	float insideTessellationFactor;
} SCD_Struct_SC146;

typedef struct {
	unsigned char tessellationLevel;
	unsigned wantsSingleCreasePatch : 1;
	unsigned useScreenSpaceTessellation : 1;
} SCD_Struct_SC147;

typedef struct {
	unsigned char type;
	float tessellationFactorScale;
	unsigned tessellationPartitionMode;
	unsigned char tessellationSmoothingMode;
	/*function pointer*/void* parameters;
	SCD_Struct_SC146 uniform;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > screenSpaceAdaptive;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > constrainedEdgeLength;
	SCD_Struct_SC147) subdivisionSurface;
} SCD_Struct_SC148;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	/*function pointer*/void* field5;
	BOOL field6;
	BOOL field7;
} SCD_Struct_SC149;

typedef struct {
	id field1;
	id field2;
	unsigned field3;
	id field4;
	id field5;
	id field6;
	id field7;
	id field8;
	unsigned char field9;
} SCD_Struct_SC150;

typedef struct {
	unsigned field1 : 2;
	unsigned field2 : 2;
	unsigned field3 : 2;
	unsigned field4 : 1;
} SCD_Struct_SC151;

typedef struct {
	unsigned char field1;
	float field2;
	unsigned field3;
	unsigned char( field4;
	/*function pointer*/void* field5;
	= field6;
	SCD_Struct_SC14 field7;
	6 field8;
	SCD_Struct_SC14 field9;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > field10;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > field11;
	7) field12;
} SCD_Struct_SC152;

