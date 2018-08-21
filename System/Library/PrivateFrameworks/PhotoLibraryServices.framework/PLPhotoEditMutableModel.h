/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPhotoEditModel.h>

@class PLPhotoEditModel, _UIDynamicValueAnimation, NSString, NSDictionary, NSArray, NSNumber;

@interface PLPhotoEditMutableModel : PLPhotoEditModel {

	long long _transactionDepth;
	PLPhotoEditModel* _modelBeforeChanges;
	_UIDynamicValueAnimation* _currentCopyAnimation;

}

@property (nonatomic,copy) NSString * effectFilterName; 
@property (assign,nonatomic) long long effectFilterVersion; 
@property (assign,getter=isSmartToneEnabled,nonatomic) BOOL smartToneEnabled; 
@property (assign,nonatomic) double autoSmartToneLevel; 
@property (nonatomic,copy) NSString * autoSmartToneIdentifier; 
@property (assign,nonatomic) double smartToneLevel; 
@property (assign,nonatomic) double brightnessLevelOffset; 
@property (assign,nonatomic) double contrastLevelOffset; 
@property (assign,nonatomic) double exposureLevelOffset; 
@property (assign,nonatomic) double highlightsLevelOffset; 
@property (assign,nonatomic) double shadowsLevelOffset; 
@property (assign,nonatomic) double blackPointLevelOffset; 
@property (assign,nonatomic) double localLightLevelOffset; 
@property (nonatomic,copy) NSDictionary * smartToneStatistics; 
@property (assign,getter=isSmartColorEnabled,nonatomic) BOOL smartColorEnabled; 
@property (assign,nonatomic) double autoSmartColorLevel; 
@property (nonatomic,copy) NSString * autoSmartColorIdentifier; 
@property (assign,nonatomic) double smartColorLevel; 
@property (assign,nonatomic) double colorContrastLevelOffset; 
@property (assign,nonatomic) double colorVibrancyLevelOffset; 
@property (assign,nonatomic) double colorCastLevelOffset; 
@property (nonatomic,copy) NSDictionary * smartColorStatistics; 
@property (assign,getter=isSmartBWEnabled,nonatomic) BOOL smartBWEnabled; 
@property (nonatomic,copy) NSDictionary * smartBWStatistics; 
@property (assign,nonatomic) double smartBWLevel; 
@property (assign,nonatomic) double bwStrengthLevelOffset; 
@property (assign,nonatomic) double bwNeutralGammaLevelOffset; 
@property (assign,nonatomic) double bwToneLevelOffset; 
@property (assign,nonatomic) double bwHueLevelOffset; 
@property (assign,nonatomic) double bwGrainLevelOffset; 
@property (assign,getter=isWhiteBalanceEnabled,nonatomic) BOOL whiteBalanceEnabled; 
@property (assign,nonatomic) double whiteBalanceFaceI; 
@property (assign,nonatomic) double whiteBalanceFaceQ; 
@property (assign,nonatomic) double whiteBalanceFaceStrength; 
@property (assign,nonatomic) double whiteBalanceFaceWarmth; 
@property (assign,nonatomic) long long userOrientation; 
@property (assign,nonatomic) CGRect cropRect; 
@property (assign,nonatomic) double straightenAngleRadiansCW; 
@property (assign,getter=isAutoCropped,nonatomic) BOOL autoCropped; 
@property (nonatomic,copy) NSDictionary * autoWhiteBalanceSettings; 
@property (nonatomic,copy) NSString * autoWhiteBalanceIdentifier; 
@property (nonatomic,copy) NSArray * redEyeCorrections; 
@property (nonatomic,copy) NSArray * autoRedEyeCorrections; 
@property (nonatomic,copy) NSArray * legacyAutoEnhanceFilters; 
@property (assign,nonatomic) BOOL legacyAutoEnhanceIsOn; 
@property (assign,getter=isAutoLoopEnabled,nonatomic) BOOL autoLoopEnabled; 
@property (nonatomic,copy) NSDictionary * autoLoopRecipe; 
@property (nonatomic,copy) NSString * autoLoopFlavor; 
@property (assign,getter=isTrimEnabled,nonatomic) BOOL trimEnabled; 
@property (assign,nonatomic) SCD_Struct_PL26 trimStartTime; 
@property (assign,nonatomic) SCD_Struct_PL26 trimEndTime; 
@property (assign,nonatomic) SCD_Struct_PL26 stillPhotoTime; 
@property (nonatomic,retain) NSNumber * muted; 
@property (assign,getter=isFusionEnabled,nonatomic) BOOL fusionEnabled; 
@property (nonatomic,copy) NSDictionary * fusionParameters; 
@property (assign,getter=isDepthEffectEnabled,nonatomic) BOOL depthEffectEnabled; 
@property (nonatomic,copy) NSDictionary * depthEffectSettings; 
@property (assign,getter=isPortraitEffectEnabled,nonatomic) BOOL portraitEffectEnabled; 
@property (nonatomic,copy) NSDictionary * portraitEffectSettings; 
@property (nonatomic,copy) NSString * portraitEffectFilterName; 
@property (assign,nonatomic) long long portraitEffectFilterVersion; 
@property (assign,nonatomic) long long inputOrientation; 
@property (assign,nonatomic) CGSize inputSize; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEffectFilterName:(NSString *)arg1 ;
-(void)setEffectFilterVersion:(long long)arg1 ;
-(void)setPortraitEffectEnabled:(BOOL)arg1 ;
-(void)setPortraitEffectFilterName:(NSString *)arg1 ;
-(void)setPortraitEffectFilterVersion:(long long)arg1 ;
-(void)setRedEyeCorrections:(NSArray *)arg1 ;
-(void)setAutoRedEyeCorrections:(NSArray *)arg1 ;
-(void)copyValuesFromModel:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLegacyAutoEnhanceFilters:(NSArray *)arg1 ;
-(void)setLegacyAutoEnhanceIsOn:(BOOL)arg1 ;
-(BOOL)canRenderPortraitEffect;
-(id)_newModelChangeAnimation;
-(void)_setLevelInstanceVariable:(double*)arg1 toValue:(double)arg2 ;
-(void)setAutoSmartToneLevel:(double)arg1 ;
-(void)setAutoSmartToneIdentifier:(NSString *)arg1 ;
-(void)setSmartToneLevel:(double)arg1 ;
-(void)setSmartToneEnabled:(BOOL)arg1 ;
-(void)setContrastLevelOffset:(double)arg1 ;
-(void)setBrightnessLevelOffset:(double)arg1 ;
-(void)setExposureLevelOffset:(double)arg1 ;
-(void)setShadowsLevelOffset:(double)arg1 ;
-(void)setBlackPointLevelOffset:(double)arg1 ;
-(void)setLocalLightLevelOffset:(double)arg1 ;
-(void)setHighlightsLevelOffset:(double)arg1 ;
-(void)setSmartColorEnabled:(BOOL)arg1 ;
-(void)setAutoSmartColorLevel:(double)arg1 ;
-(void)setAutoSmartColorIdentifier:(NSString *)arg1 ;
-(void)setSmartColorLevel:(double)arg1 ;
-(void)setColorContrastLevelOffset:(double)arg1 ;
-(void)setColorVibrancyLevelOffset:(double)arg1 ;
-(void)setColorCastLevelOffset:(double)arg1 ;
-(void)setSmartBWEnabled:(BOOL)arg1 ;
-(void)setSmartBWLevel:(double)arg1 ;
-(void)setBwStrengthLevelOffset:(double)arg1 ;
-(void)setBwNeutralGammaLevelOffset:(double)arg1 ;
-(void)setBwToneLevelOffset:(double)arg1 ;
-(void)setBwHueLevelOffset:(double)arg1 ;
-(void)setBwGrainLevelOffset:(double)arg1 ;
-(void)setWhiteBalanceEnabled:(BOOL)arg1 ;
-(void)setWhiteBalanceFaceI:(double)arg1 ;
-(void)setWhiteBalanceFaceQ:(double)arg1 ;
-(void)setWhiteBalanceFaceStrength:(double)arg1 ;
-(void)setWhiteBalanceFaceWarmth:(double)arg1 ;
-(void)setAutoWhiteBalanceSettings:(NSDictionary *)arg1 ;
-(void)setAutoWhiteBalanceIdentifier:(NSString *)arg1 ;
-(void)addRedEyeCorrections:(id)arg1 ;
-(void)removeRedEyeCorrections:(id)arg1 ;
-(void)setTrimEnabled:(BOOL)arg1 ;
-(void)setStillPhotoTime:(SCD_Struct_PL26)arg1 ;
-(void)setFusionParameters:(NSDictionary *)arg1 ;
-(void)setFusionEnabled:(BOOL)arg1 ;
-(void)setAutoLoopRecipe:(NSDictionary *)arg1 ;
-(void)setInputOrientation:(long long)arg1 ;
-(void)setInputSize:(CGSize)arg1 ;
-(void)setDepthEffectEnabled:(BOOL)arg1 ;
-(void)setDepthEffectSettings:(NSDictionary *)arg1 ;
-(void)setPortraitEffectSettings:(NSDictionary *)arg1 ;
-(void)setSmartToneStatistics:(NSDictionary *)arg1 ;
-(void)setSmartColorStatistics:(NSDictionary *)arg1 ;
-(void)setSmartBWStatistics:(NSDictionary *)arg1 ;
-(void)setStraightenAngleRadiansCW:(double)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setCropConstraintWidth:(long long)arg1 height:(long long)arg2 ;
-(void)setAutoCropped:(BOOL)arg1 ;
-(void)setUserOrientation:(long long)arg1 ;
-(void)setAutoLoopEnabled:(BOOL)arg1 ;
-(void)setAutoLoopFlavor:(NSString *)arg1 ;
-(void)performChangesWithBlock:(/*^block*/id)arg1 ;
-(void)setTrimStartTime:(SCD_Struct_PL26)arg1 ;
-(void)setTrimEndTime:(SCD_Struct_PL26)arg1 ;
-(void)setMuted:(NSNumber *)arg1 ;
@end

