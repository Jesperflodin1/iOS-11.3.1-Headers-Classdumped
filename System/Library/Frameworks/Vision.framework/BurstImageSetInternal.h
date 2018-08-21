/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <Vision/Vision-Structs.h>
@class NSObject, NSMutableArray, BurstImageFaceAnalysisContext, NSCountedSet, NSString, VNImageBuffer, NSDictionary, NSMutableDictionary, BurstActionClassifier, NSArray;

@interface BurstImageSetInternal : NSObject {

	NSObject*<OS_dispatch_queue> _burstAnalyzerDispatchQueue;
	NSObject*<OS_dispatch_semaphore> _pendingFramesSemaphore;
	NSObject*<OS_dispatch_queue> _yuvdumpDispatchQueue;
	int _temporalOrder;
	int _maxNumPendingFrames;
	BOOL _enableAnalysis;
	int _dummyAnalysisCount;
	BOOL _enableFaceCore;
	BOOL _enableDumpYUV;
	BOOL _isAction;
	BOOL _isPortrait;
	_sFILE* _burstLogFileHandle;
	int _currentClusterIndexToProcess;
	NSMutableArray* _clusterArray;
	BurstImageFaceAnalysisContext* _faceAnalysisContext;
	NSCountedSet* _faceIDCounts;
	int _version;
	NSString* _burstId;
	/*^block*/id _loggingCallback;
	VNImageBuffer* _overrideImage;
	NSDictionary* _overrideProps;
	NSMutableArray* _allImageIdentifiers;
	NSMutableDictionary* _statsByImageIdentifier;
	NSMutableDictionary* _clusterByImageIdentifier;
	NSString* _burstLogFileName;
	BurstActionClassifier* _actionClassifier;
	NSString* _burstCoverSelection;
	NSArray* _bestImageIdentifiersArray;
	NSString* _versionString;

}

@property (nonatomic,copy) id loggingCallback;                                       //@synthesize loggingCallback=_loggingCallback - In the implementation block
@property (retain) BurstImageFaceAnalysisContext * faceAnalysisContext;              //@synthesize faceAnalysisContext=_faceAnalysisContext - In the implementation block
@property (retain) VNImageBuffer * overrideImage;                                    //@synthesize overrideImage=_overrideImage - In the implementation block
@property (retain) NSDictionary * overrideProps;                                     //@synthesize overrideProps=_overrideProps - In the implementation block
@property (retain) NSMutableArray * clusterArray;                                    //@synthesize clusterArray=_clusterArray - In the implementation block
@property (assign) int temporalOrder;                                                //@synthesize temporalOrder=_temporalOrder - In the implementation block
@property (retain) NSCountedSet * faceIDCounts;                                      //@synthesize faceIDCounts=_faceIDCounts - In the implementation block
@property (retain) NSMutableArray * allImageIdentifiers;                             //@synthesize allImageIdentifiers=_allImageIdentifiers - In the implementation block
@property (retain) NSMutableDictionary * statsByImageIdentifier;                     //@synthesize statsByImageIdentifier=_statsByImageIdentifier - In the implementation block
@property (retain) NSMutableDictionary * clusterByImageIdentifier;                   //@synthesize clusterByImageIdentifier=_clusterByImageIdentifier - In the implementation block
@property (retain) NSString * burstLogFileName;                                      //@synthesize burstLogFileName=_burstLogFileName - In the implementation block
@property (retain) BurstActionClassifier * actionClassifier;                         //@synthesize actionClassifier=_actionClassifier - In the implementation block
@property (assign) int maxNumPendingFrames;                                          //@synthesize maxNumPendingFrames=_maxNumPendingFrames - In the implementation block
@property (assign) BOOL enableAnalysis;                                              //@synthesize enableAnalysis=_enableAnalysis - In the implementation block
@property (assign) int dummyAnalysisCount;                                           //@synthesize dummyAnalysisCount=_dummyAnalysisCount - In the implementation block
@property (assign) BOOL enableFaceCore;                                              //@synthesize enableFaceCore=_enableFaceCore - In the implementation block
@property (assign) BOOL enableDumpYUV;                                               //@synthesize enableDumpYUV=_enableDumpYUV - In the implementation block
@property (retain) NSString * burstCoverSelection;                                   //@synthesize burstCoverSelection=_burstCoverSelection - In the implementation block
@property (retain) NSString * burstId;                                               //@synthesize burstId=_burstId - In the implementation block
@property (retain) NSArray * bestImageIdentifiersArray;                              //@synthesize bestImageIdentifiersArray=_bestImageIdentifiersArray - In the implementation block
@property (retain) NSString * versionString;                                         //@synthesize versionString=_versionString - In the implementation block
@property (assign) int version;                                                      //@synthesize version=_version - In the implementation block
+(id)defaultVersionString;
-(void)setBurstId:(NSString *)arg1 ;
-(id)burstDocumentDirectory;
-(void)setTemporalOrder:(int)arg1 ;
-(void)processClusters:(BOOL)arg1 ;
-(int)computeEmotion:(id)arg1 ;
-(int)temporalOrder;
-(float)computeCameraTravelDistance;
-(float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
-(float)computeActionSelectionThreshold;
-(void)computeAllImageScores;
-(void)performEmotionalRejectionOnCluster:(id)arg1 ;
-(id)findBestImage:(id)arg1 useActionScores:(BOOL)arg2 ;
-(void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2 ;
-(void)setBestImageIdentifiersArray:(NSArray *)arg1 ;
-(NSArray *)bestImageIdentifiersArray;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(BOOL)isFaceDetectionForced;
-(BOOL)isAction;
-(NSMutableArray *)clusterArray;
-(void)setClusterArray:(NSMutableArray *)arg1 ;
-(NSCountedSet *)faceIDCounts;
-(void)setFaceIDCounts:(NSCountedSet *)arg1 ;
-(void)setAllImageIdentifiers:(NSMutableArray *)arg1 ;
-(BurstActionClassifier *)actionClassifier;
-(void)setActionClassifier:(BurstActionClassifier *)arg1 ;
-(NSMutableDictionary *)statsByImageIdentifier;
-(void)setStatsByImageIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)clusterByImageIdentifier;
-(void)setClusterByImageIdentifier:(NSMutableDictionary *)arg1 ;
-(NSString *)burstLogFileName;
-(void)setBurstLogFileName:(NSString *)arg1 ;
-(int)maxNumPendingFrames;
-(void)setMaxNumPendingFrames:(int)arg1 ;
-(BOOL)enableAnalysis;
-(void)setEnableAnalysis:(BOOL)arg1 ;
-(int)dummyAnalysisCount;
-(void)setDummyAnalysisCount:(int)arg1 ;
-(BOOL)enableFaceCore;
-(void)setEnableFaceCore:(BOOL)arg1 ;
-(BOOL)enableDumpYUV;
-(void)setEnableDumpYUV:(BOOL)arg1 ;
-(NSString *)burstCoverSelection;
-(void)setBurstCoverSelection:(NSString *)arg1 ;
-(double)secondsSinceStart;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(BOOL)isPortrait;
-(void)setLoggingCallback:(id)arg1 ;
-(void)setOverrideProps:(NSDictionary *)arg1 ;
-(void)_reorientFaceRects:(id)arg1 imageSize:(CGSize)arg2 orientation:(int)arg3 ;
-(CGRect)_reorientROIRect:(CGRect)arg1 imageSize:(CGSize)arg2 orientation:(int)arg3 ;
-(NSDictionary *)overrideProps;
-(void)_addImageInternal:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)allImageClusters;
-(BurstImageFaceAnalysisContext *)faceAnalysisContext;
-(void)setFaceAnalysisContext:(BurstImageFaceAnalysisContext *)arg1 ;
-(id)loggingCallback;
-(void)setOverrideImage:(VNImageBuffer *)arg1 ;
-(VNImageBuffer *)overrideImage;
-(NSString *)versionString;
-(void)setVersionString:(NSString *)arg1 ;
-(NSString *)burstId;
-(NSMutableArray *)allImageIdentifiers;
-(id)bestImageIdentifiers;
@end

