/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKGLView.h>
#import <libobjc.A.dylib/HKRingGroupAnimationStatusDelegate.h>

@class GLKTextureInfo, NSArray, UIImage;

@interface HKRingsView : HKGLView <HKRingGroupAnimationStatusDelegate> {

	int _numRingsPerGroup;
	BOOL _ringVAOinit;
	BOOL _iconVAOinit;
	BOOL _buffersCreated;
	BOOL _prevRingsAreEmpty;
	BOOL _didSetup;
	SCD_Struct_HK5* _ringVertices;
	_GLKVector2* _ringVertexCoordinates;
	_GLKVector2* _ringVertexPositions;
	SCD_Struct_HK6* _iconSpriteVertices;
	GLKTextureInfo* _iconSpriteTexture;
	GLKMatrix4 _projectionMatrix;
	unsigned _ringProgram;
	unsigned _ringEndCapProgram;
	unsigned _ringEmptyProgram;
	unsigned _flatColorProgram;
	unsigned _iconSpriteProgram;
	unsigned _coordinateBuffer;
	unsigned _positionBuffer;
	unsigned _coordPercentBuffer;
	unsigned _iconSpriteVertexBuffer;
	unsigned _ringsVAO;
	unsigned _iconsVAO;
	unsigned _transformUniform;
	unsigned _endCapShadowDistanceUniform;
	unsigned _iconSpriteTransformUniform;
	unsigned _iconSpriteSamplerUniform;
	unsigned _iconSpriteIconsPerDimensionUniform;
	unsigned _positionAttribute;
	unsigned _color1Attribute;
	unsigned _color2Attribute;
	unsigned _sizesAttribute;
	unsigned _percentagesAttribute;
	unsigned _coordinateAttribute;
	unsigned _coordPercentAttribute;
	unsigned _trigResultsAttribute;
	unsigned _emptyShaderAlphaUniform;
	unsigned _ringShaderAlphaUniform;
	unsigned _iconSpritePositionAttribute;
	unsigned _iconSpriteSizeAttribute;
	unsigned _iconSpriteColorAttribute;
	unsigned _iconSpriteTextureOffsetAttribute;
	double _screenScale;
	double _cachedPointSize[3];
	double _cachedThickness[3];
	CGPoint _cachedPosition[3];
	CGPoint _cachedGroupCenter;
	int _ringGroupsPerRow;
	NSArray* _ringGroups;
	double _ringSpacing;
	double _emptyRingAlpha;
	UIImage* _iconSpriteImage;
	unsigned long long _iconTextureRows;
	unsigned long long _iconTextureColumns;

}

@property (nonatomic,readonly) NSArray * ringGroups;                             //@synthesize ringGroups=_ringGroups - In the implementation block
@property (assign,nonatomic) int ringGroupsPerRow;                               //@synthesize ringGroupsPerRow=_ringGroupsPerRow - In the implementation block
@property (assign,nonatomic) double ringSpacing;                                 //@synthesize ringSpacing=_ringSpacing - In the implementation block
@property (assign,nonatomic) double emptyRingAlpha;                              //@synthesize emptyRingAlpha=_emptyRingAlpha - In the implementation block
@property (nonatomic,retain) UIImage * iconSpriteImage;                          //@synthesize iconSpriteImage=_iconSpriteImage - In the implementation block
@property (assign,nonatomic) unsigned long long iconTextureRows;                 //@synthesize iconTextureRows=_iconTextureRows - In the implementation block
@property (assign,nonatomic) unsigned long long iconTextureColumns;              //@synthesize iconTextureColumns=_iconTextureColumns - In the implementation block
+(id)_ringsViewConfiguredForGizmoWithNumberOfRings:(long long)arg1 ringType:(long long)arg2 withIcons:(BOOL)arg3 ;
+(id)_iconSpriteImage;
+(id)_ringsViewConfiguredForCompanionWithNumberOfRings:(long long)arg1 ringType:(long long)arg2 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withIcon:(BOOL)arg2 ;
+(id)ringsViewConfiguredForThreeRingsOnCompanion;
+(id)ringsViewConfiguredForOneRingOnCompanionOfType:(long long)arg1 ;
+(void)clearSharedCaches;
+(id)ringsViewConfiguredForThreeRingsOnWatch;
-(void)layoutSubviews;
-(void)dealloc;
-(void)didMoveToWindow;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)update;
-(void)setIconSpriteImage:(UIImage *)arg1 ;
-(void)setIconTextureColumns:(unsigned long long)arg1 ;
-(void)setIconTextureRows:(unsigned long long)arg1 ;
-(void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)ringGroupDidBeginAnimations:(id)arg1 ;
-(void)_setRingGroups:(id)arg1 ;
-(void)_destroyBuffers;
-(void)_updateProjectionMatrix;
-(void)_setupIfNecessary;
-(void)_context_prepareForRingDraw:(BOOL)arg1 ;
-(double)emptyRingAlpha;
-(void)_context_loadRingEmptyProgramIfNeeded;
-(void)_context_loadRingDataForGroupAtIndex:(long long)arg1 ;
-(void)_context_loadFlatColorProgramIfNeeded;
-(void)_context_prepareForIconDraw;
-(void)_loadIconDataForGroupAtIndex:(long long)arg1 ;
-(int)ringGroupsPerRow;
-(void)setRingGroupsPerRow:(int)arg1 ;
-(double)ringSpacing;
-(void)setRingSpacing:(double)arg1 ;
-(UIImage *)iconSpriteImage;
-(unsigned long long)iconTextureRows;
-(unsigned long long)iconTextureColumns;
-(void)setEmptyRingAlpha:(double)arg1 ;
-(void)_context_createBuffers;
-(void)_context_loadUniformsAndAttributes;
-(NSArray *)ringGroups;
-(id)initWithRingGroups:(id)arg1 numberOfRingsPerGroup:(int)arg2 ;
-(unsigned)drawInRect:(CGRect)arg1 withContext:(id)arg2 ;
-(void)setActiveEnergyPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setBriskPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setMovingHoursPercentage:(double)arg1 animated:(BOOL)arg2 ;
@end

