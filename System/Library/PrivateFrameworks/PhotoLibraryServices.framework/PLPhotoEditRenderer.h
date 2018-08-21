/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSDictionary, NUBufferRenderClient, NUImagePropertiesClient, NUImageExportClient, NUVideoExportClient, NUVideoPropertiesClient, NURenderContext, NUPriority, PLEditSource, PLPhotoEditModel, NUComposition;

@interface PLPhotoEditRenderer : NSObject {

	NSDictionary* __smartToneAdjustments;
	double _smartToneLevelInCachedAdjustments;
	NSDictionary* _smartToneStatisticsInCachedAdjustments;
	NSDictionary* __smartColorAdjustments;
	double _smartColorLevelInCachedAdjustments;
	NSDictionary* _smartColorStatisticsInCachedAdjustments;
	NSDictionary* __smartBWAdjustments;
	double _smartBWLevelInCachedAdjustments;
	NSDictionary* _smartBWStatisticsInCachedAdjustments;
	NUBufferRenderClient* _renderClient;
	NUImagePropertiesClient* _propertiesClient;
	NUImageExportClient* _imageExportClient;
	NUVideoExportClient* _videoExportClient;
	NUVideoPropertiesClient* _videoPropertiesClient;
	NURenderContext* _videoRenderContext;
	NUPriority* _priority;
	NURenderContext* _geometryContext;
	NURenderContext* _smartToneAutoCalculatorContext;
	PLEditSource* _editSource;
	PLPhotoEditModel* _photoEditModel;
	long long _smartFiltersCubeSize;

}

@property (nonatomic,retain,readonly) NUComposition * composition; 
@property (nonatomic,retain,readonly) PLEditSource * editSource;                //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,retain) PLPhotoEditModel * photoEditModel;                 //@synthesize photoEditModel=_photoEditModel - In the implementation block
@property (assign,nonatomic) long long smartFiltersCubeSize;                    //@synthesize smartFiltersCubeSize=_smartFiltersCubeSize - In the implementation block
@property (nonatomic,readonly) double smartToneBaseBrightness; 
@property (nonatomic,readonly) double smartToneBaseContrast; 
@property (nonatomic,readonly) double smartToneBaseExposure; 
@property (nonatomic,readonly) double smartToneBaseHighlights; 
@property (nonatomic,readonly) double smartToneBaseShadows; 
@property (nonatomic,readonly) double smartToneBaseBlackPoint; 
@property (nonatomic,readonly) double smartToneBaseLocalLight; 
@property (nonatomic,readonly) double smartColorBaseContrast; 
@property (nonatomic,readonly) double smartColorBaseVibrancy; 
@property (nonatomic,readonly) double smartColorBaseCast; 
@property (nonatomic,readonly) double smartBWBaseStrength; 
@property (nonatomic,readonly) double smartBWBaseNeutralGamma; 
@property (nonatomic,readonly) double smartBWBaseTone; 
@property (nonatomic,readonly) double smartBWBaseHue; 
@property (nonatomic,readonly) double smartBWBaseGrain; 
+(void)initialize;
+(void)updatePhotoEditModel:(id)arg1 fromPortraitMetadata:(id)arg2 ;
+(id)newImageDataFromCGImage:(CGImageRef)arg1 withCompressionQuality:(double)arg2 metadataSourceImageURL:(id)arg3 preserveRegionsInMetadata:(BOOL)arg4 ;
+(id)compositionWithModel:(id)arg1 source:(id)arg2 ;
+(id)_editedImagePropertiesFromOriginalImageProperties:(id)arg1 preserveRegions:(BOOL)arg2 ;
+(BOOL)isSupportedAutoLoopRecipe:(id)arg1 ;
+(BOOL)currentDeviceShouldAllowLocalLight;
-(id)initWithEditSource:(id)arg1 ;
-(PLPhotoEditModel *)photoEditModel;
-(void)_exportLivePhotoVideoToURL:(id)arg1 preset:(id)arg2 composition:(id)arg3 metadata:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)renderImageWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_generateJPEGImageDataForComposition:(id)arg1 withCompressionQuality:(double)arg2 livePhotoPairingIdentifier:(id)arg3 properties:(id)arg4 depthData:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_smartToneAdjustments;
-(id)_smartColorAdjustments;
-(id)_smartBWAdjustments;
-(double)_smartBWBaseValueForKey:(id)arg1 defaultValue:(double)arg2 ;
-(id)getGeometryForComposition:(id)arg1 ;
-(void)setSmartFiltersCubeSize:(long long)arg1 ;
-(double)smartToneBaseBrightness;
-(double)smartToneBaseContrast;
-(double)smartToneBaseExposure;
-(double)smartToneBaseHighlights;
-(double)smartToneBaseShadows;
-(double)smartToneBaseBlackPoint;
-(double)smartToneBaseLocalLight;
-(double)smartColorBaseContrast;
-(double)smartColorBaseVibrancy;
-(double)smartColorBaseCast;
-(double)smartBWBaseStrength;
-(double)smartBWBaseNeutralGamma;
-(double)smartBWBaseTone;
-(double)smartBWBaseHue;
-(double)smartBWBaseGrain;
-(PLEditSource *)editSource;
-(long long)smartFiltersCubeSize;
-(id)initWithEditSource:(id)arg1 renderPriority:(long long)arg2 ;
-(void)applySourceChangesToModel:(id)arg1 source:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setPhotoEditModel:(PLPhotoEditModel *)arg1 ;
-(void)renderVideoWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)exportVideoToURL:(id)arg1 preset:(id)arg2 livePhotoPairingIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)calculateLongExposureFusionParametersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateJPEGImageDataWithCompressionQuality:(double)arg1 livePhotoPairingIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)renderImageWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(NUComposition *)composition;
@end

