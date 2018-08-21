/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface VCPProtoAssetAnalysis : PBCodable <NSCopying> {

	double _assetModificationDate;
	double _date;
	double _quality;
	NSString* _assetAdjustedFingerprint;
	NSString* _assetIdentifier;
	NSString* _assetMasterFingerprint;
	unsigned _flags;
	NSMutableArray* _imageBlurResults;
	NSMutableArray* _imageCompositionResults;
	NSMutableArray* _imageFaceResults;
	NSMutableArray* _imageFeatureResults;
	NSMutableArray* _imageJunkResults;
	NSMutableArray* _imagePetsResults;
	NSMutableArray* _imageSaliencyResults;
	NSMutableArray* _imageShotTypeResults;
	NSMutableArray* _livePhotoRecommendationResults;
	NSMutableArray* _livePhotoSharpnessResults;
	NSMutableArray* _movieActivityLevelResults;
	NSMutableArray* _movieCameraMotionResults;
	NSMutableArray* _movieClassificationResults;
	NSMutableArray* _movieFaceResults;
	NSMutableArray* _movieFaceprintResults;
	NSMutableArray* _movieFeatureResults;
	NSMutableArray* _movieFineSubjectMotionResults;
	NSMutableArray* _movieInterestingnessResults;
	NSMutableArray* _movieMovingObjectResults;
	NSMutableArray* _movieMusicResults;
	NSMutableArray* _movieObstructionResults;
	NSMutableArray* _movieOrientationResults;
	NSMutableArray* _moviePreEncodeResults;
	NSMutableArray* _movieQualityResults;
	NSMutableArray* _movieSaliencyResults;
	NSMutableArray* _movieSceneResults;
	NSMutableArray* _movieSubjectMotionResults;
	NSMutableArray* _movieUtteranceResults;
	NSMutableArray* _movieVoiceResults;
	unsigned _types;
	unsigned _version;
	SCD_Struct_VC31 _has;

}

@property (assign,nonatomic) unsigned version;                                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned types;                                               //@synthesize types=_types - In the implementation block
@property (assign,nonatomic) unsigned flags;                                               //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) double date;                                                  //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasQuality; 
@property (assign,nonatomic) double quality;                                               //@synthesize quality=_quality - In the implementation block
@property (nonatomic,retain) NSString * assetIdentifier;                                   //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (assign,nonatomic) double assetModificationDate;                                 //@synthesize assetModificationDate=_assetModificationDate - In the implementation block
@property (nonatomic,retain) NSString * assetMasterFingerprint;                            //@synthesize assetMasterFingerprint=_assetMasterFingerprint - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetAdjustedFingerprint; 
@property (nonatomic,retain) NSString * assetAdjustedFingerprint;                          //@synthesize assetAdjustedFingerprint=_assetAdjustedFingerprint - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageBlurResults;                            //@synthesize imageBlurResults=_imageBlurResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageCompositionResults;                     //@synthesize imageCompositionResults=_imageCompositionResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageFaceResults;                            //@synthesize imageFaceResults=_imageFaceResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageFeatureResults;                         //@synthesize imageFeatureResults=_imageFeatureResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageJunkResults;                            //@synthesize imageJunkResults=_imageJunkResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageSaliencyResults;                        //@synthesize imageSaliencyResults=_imageSaliencyResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageShotTypeResults;                        //@synthesize imageShotTypeResults=_imageShotTypeResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * livePhotoRecommendationResults;              //@synthesize livePhotoRecommendationResults=_livePhotoRecommendationResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * livePhotoSharpnessResults;                   //@synthesize livePhotoSharpnessResults=_livePhotoSharpnessResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieActivityLevelResults;                   //@synthesize movieActivityLevelResults=_movieActivityLevelResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieCameraMotionResults;                    //@synthesize movieCameraMotionResults=_movieCameraMotionResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieClassificationResults;                  //@synthesize movieClassificationResults=_movieClassificationResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieFaceResults;                            //@synthesize movieFaceResults=_movieFaceResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieFaceprintResults;                       //@synthesize movieFaceprintResults=_movieFaceprintResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieFeatureResults;                         //@synthesize movieFeatureResults=_movieFeatureResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieFineSubjectMotionResults;               //@synthesize movieFineSubjectMotionResults=_movieFineSubjectMotionResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieInterestingnessResults;                 //@synthesize movieInterestingnessResults=_movieInterestingnessResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieMovingObjectResults;                    //@synthesize movieMovingObjectResults=_movieMovingObjectResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieMusicResults;                           //@synthesize movieMusicResults=_movieMusicResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieObstructionResults;                     //@synthesize movieObstructionResults=_movieObstructionResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieOrientationResults;                     //@synthesize movieOrientationResults=_movieOrientationResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * moviePreEncodeResults;                       //@synthesize moviePreEncodeResults=_moviePreEncodeResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieQualityResults;                         //@synthesize movieQualityResults=_movieQualityResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieSaliencyResults;                        //@synthesize movieSaliencyResults=_movieSaliencyResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieSceneResults;                           //@synthesize movieSceneResults=_movieSceneResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieSubjectMotionResults;                   //@synthesize movieSubjectMotionResults=_movieSubjectMotionResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieUtteranceResults;                       //@synthesize movieUtteranceResults=_movieUtteranceResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * movieVoiceResults;                           //@synthesize movieVoiceResults=_movieVoiceResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * imagePetsResults;                            //@synthesize imagePetsResults=_imagePetsResults - In the implementation block
+(Class)imageBlurResultsType;
+(Class)imageCompositionResultsType;
+(Class)imageFaceResultsType;
+(Class)imageFeatureResultsType;
+(Class)imageJunkResultsType;
+(Class)imageSaliencyResultsType;
+(Class)imageShotTypeResultsType;
+(Class)livePhotoRecommendationResultsType;
+(Class)livePhotoSharpnessResultsType;
+(Class)movieActivityLevelResultsType;
+(Class)movieCameraMotionResultsType;
+(Class)movieClassificationResultsType;
+(Class)movieFaceResultsType;
+(Class)movieFaceprintResultsType;
+(Class)movieFeatureResultsType;
+(Class)movieFineSubjectMotionResultsType;
+(Class)movieInterestingnessResultsType;
+(Class)movieMovingObjectResultsType;
+(Class)movieMusicResultsType;
+(Class)movieObstructionResultsType;
+(Class)movieOrientationResultsType;
+(Class)moviePreEncodeResultsType;
+(Class)movieQualityResultsType;
+(Class)movieSaliencyResultsType;
+(Class)movieSceneResultsType;
+(Class)movieSubjectMotionResultsType;
+(Class)movieUtteranceResultsType;
+(Class)movieVoiceResultsType;
+(Class)imagePetsResultsType;
+(id)imageAnalysisFromLegacyDictionary:(id)arg1 ;
+(id)movieAnalysisFromLegacyDictionary:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)flags;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)types;
-(double)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setQuality:(double)arg1 ;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(NSString *)assetIdentifier;
-(id)exportToLegacyDictionary;
-(void)addImageBlurResults:(id)arg1 ;
-(void)addImageCompositionResults:(id)arg1 ;
-(void)addImageFaceResults:(id)arg1 ;
-(void)addImageFeatureResults:(id)arg1 ;
-(void)addImageJunkResults:(id)arg1 ;
-(void)addImageSaliencyResults:(id)arg1 ;
-(void)addImageShotTypeResults:(id)arg1 ;
-(void)addLivePhotoRecommendationResults:(id)arg1 ;
-(void)addLivePhotoSharpnessResults:(id)arg1 ;
-(void)addMovieActivityLevelResults:(id)arg1 ;
-(void)addMovieCameraMotionResults:(id)arg1 ;
-(void)addMovieClassificationResults:(id)arg1 ;
-(void)addMovieFaceResults:(id)arg1 ;
-(void)addMovieFaceprintResults:(id)arg1 ;
-(void)addMovieFeatureResults:(id)arg1 ;
-(void)addMovieFineSubjectMotionResults:(id)arg1 ;
-(void)addMovieInterestingnessResults:(id)arg1 ;
-(void)addMovieMovingObjectResults:(id)arg1 ;
-(void)addMovieMusicResults:(id)arg1 ;
-(void)addMovieObstructionResults:(id)arg1 ;
-(void)addMovieOrientationResults:(id)arg1 ;
-(void)addMoviePreEncodeResults:(id)arg1 ;
-(void)addMovieQualityResults:(id)arg1 ;
-(void)addMovieSaliencyResults:(id)arg1 ;
-(void)addMovieSceneResults:(id)arg1 ;
-(void)addMovieSubjectMotionResults:(id)arg1 ;
-(void)addMovieUtteranceResults:(id)arg1 ;
-(void)addMovieVoiceResults:(id)arg1 ;
-(void)addImagePetsResults:(id)arg1 ;
-(void)setAssetMasterFingerprint:(NSString *)arg1 ;
-(void)setAssetAdjustedFingerprint:(NSString *)arg1 ;
-(unsigned long long)imageBlurResultsCount;
-(void)clearImageBlurResults;
-(id)imageBlurResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)imageCompositionResultsCount;
-(void)clearImageCompositionResults;
-(id)imageCompositionResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)imageFaceResultsCount;
-(void)clearImageFaceResults;
-(id)imageFaceResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)imageFeatureResultsCount;
-(void)clearImageFeatureResults;
-(id)imageFeatureResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)imageJunkResultsCount;
-(void)clearImageJunkResults;
-(id)imageJunkResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)imageSaliencyResultsCount;
-(void)clearImageSaliencyResults;
-(id)imageSaliencyResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)imageShotTypeResultsCount;
-(void)clearImageShotTypeResults;
-(id)imageShotTypeResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)livePhotoRecommendationResultsCount;
-(void)clearLivePhotoRecommendationResults;
-(id)livePhotoRecommendationResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)livePhotoSharpnessResultsCount;
-(void)clearLivePhotoSharpnessResults;
-(id)livePhotoSharpnessResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieActivityLevelResultsCount;
-(void)clearMovieActivityLevelResults;
-(id)movieActivityLevelResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieCameraMotionResultsCount;
-(void)clearMovieCameraMotionResults;
-(id)movieCameraMotionResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieClassificationResultsCount;
-(void)clearMovieClassificationResults;
-(id)movieClassificationResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieFaceResultsCount;
-(void)clearMovieFaceResults;
-(id)movieFaceResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieFaceprintResultsCount;
-(void)clearMovieFaceprintResults;
-(id)movieFaceprintResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieFeatureResultsCount;
-(void)clearMovieFeatureResults;
-(id)movieFeatureResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieFineSubjectMotionResultsCount;
-(void)clearMovieFineSubjectMotionResults;
-(id)movieFineSubjectMotionResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieInterestingnessResultsCount;
-(void)clearMovieInterestingnessResults;
-(id)movieInterestingnessResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieMovingObjectResultsCount;
-(void)clearMovieMovingObjectResults;
-(id)movieMovingObjectResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieMusicResultsCount;
-(void)clearMovieMusicResults;
-(id)movieMusicResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieObstructionResultsCount;
-(void)clearMovieObstructionResults;
-(id)movieObstructionResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieOrientationResultsCount;
-(void)clearMovieOrientationResults;
-(id)movieOrientationResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)moviePreEncodeResultsCount;
-(void)clearMoviePreEncodeResults;
-(id)moviePreEncodeResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieQualityResultsCount;
-(void)clearMovieQualityResults;
-(id)movieQualityResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieSaliencyResultsCount;
-(void)clearMovieSaliencyResults;
-(id)movieSaliencyResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieSceneResultsCount;
-(void)clearMovieSceneResults;
-(id)movieSceneResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieSubjectMotionResultsCount;
-(void)clearMovieSubjectMotionResults;
-(id)movieSubjectMotionResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieUtteranceResultsCount;
-(void)clearMovieUtteranceResults;
-(id)movieUtteranceResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)movieVoiceResultsCount;
-(void)clearMovieVoiceResults;
-(id)movieVoiceResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)imagePetsResultsCount;
-(void)clearImagePetsResults;
-(id)imagePetsResultsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAssetAdjustedFingerprint;
-(double)assetModificationDate;
-(void)setAssetModificationDate:(double)arg1 ;
-(NSString *)assetMasterFingerprint;
-(NSString *)assetAdjustedFingerprint;
-(NSMutableArray *)imageBlurResults;
-(void)setImageBlurResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageCompositionResults;
-(void)setImageCompositionResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageFaceResults;
-(void)setImageFaceResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageFeatureResults;
-(void)setImageFeatureResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageJunkResults;
-(void)setImageJunkResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageSaliencyResults;
-(void)setImageSaliencyResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageShotTypeResults;
-(void)setImageShotTypeResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)livePhotoRecommendationResults;
-(void)setLivePhotoRecommendationResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)livePhotoSharpnessResults;
-(void)setLivePhotoSharpnessResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieActivityLevelResults;
-(void)setMovieActivityLevelResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieCameraMotionResults;
-(void)setMovieCameraMotionResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieClassificationResults;
-(void)setMovieClassificationResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieFaceResults;
-(void)setMovieFaceResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieFaceprintResults;
-(void)setMovieFaceprintResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieFeatureResults;
-(void)setMovieFeatureResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieFineSubjectMotionResults;
-(void)setMovieFineSubjectMotionResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieInterestingnessResults;
-(void)setMovieInterestingnessResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieMovingObjectResults;
-(void)setMovieMovingObjectResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieMusicResults;
-(void)setMovieMusicResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieObstructionResults;
-(void)setMovieObstructionResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieOrientationResults;
-(void)setMovieOrientationResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)moviePreEncodeResults;
-(void)setMoviePreEncodeResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieQualityResults;
-(void)setMovieQualityResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieSaliencyResults;
-(void)setMovieSaliencyResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieSceneResults;
-(void)setMovieSceneResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieSubjectMotionResults;
-(void)setMovieSubjectMotionResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieUtteranceResults;
-(void)setMovieUtteranceResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)movieVoiceResults;
-(void)setMovieVoiceResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imagePetsResults;
-(void)setImagePetsResults:(NSMutableArray *)arg1 ;
-(BOOL)setAttributesFromLegacyDictionary:(id)arg1 ;
-(BOOL)setResults:(id)arg1 withClass:(Class)arg2 forPropertyKey:(id)arg3 ;
-(BOOL)exportResultsWithPropertyKey:(id)arg1 toLegacyDictionary:(id)arg2 withKey:(id)arg3 ;
-(void)setTypes:(unsigned)arg1 ;
-(double)quality;
-(void)setFlags:(unsigned)arg1 ;
-(void)setHasQuality:(BOOL)arg1 ;
-(BOOL)hasQuality;
@end

