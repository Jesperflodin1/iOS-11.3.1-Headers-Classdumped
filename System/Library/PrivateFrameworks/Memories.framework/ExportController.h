/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MovieControllerExportProtocol;
@class Project, NSArray, NSString, NSTimer, BEAlertController;

@interface ExportController : NSObject {

	Project* m_project;
	NSArray* m_presets;
	unsigned long long m_exportingIndexPresets;
	NSString* m_currentPreset;
	id m_delegate;
	id<MovieControllerExportProtocol> m_movieController;
	NSString* m_exportPath;
	BOOL m_exportToPhotos;
	NSTimer* m_progressTimer;
	BOOL m_inTestMode;
	BOOL m_usingExistingRenderFile;
	BEAlertController* m_testModeAutoExportCompletedAlert;
	BOOL _supportArbitraryAspectRatio;
	BOOL _playAltClips;

}

@property (nonatomic,retain) Project * project; 
@property (nonatomic,retain) NSArray * presets; 
@property (nonatomic,retain) NSString * currentPreset; 
@property (assign,nonatomic) id<ExportDelegate> delegate; 
@property (nonatomic,retain) id<MovieControllerExportProtocol> movieController; 
@property (nonatomic,retain) NSString * exportPath; 
@property (assign,nonatomic) BOOL exportToPhotos; 
@property (nonatomic,retain) NSTimer * progressTimer; 
@property (assign,nonatomic) unsigned long long exportingIndexPresets; 
@property (assign,getter=shouldSupportArbitraryAspectRatio,nonatomic) BOOL supportArbitraryAspectRatio;              //@synthesize supportArbitraryAspectRatio=_supportArbitraryAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL playAltClips;                                                                      //@synthesize playAltClips=_playAltClips - In the implementation block
@property (nonatomic,retain) BEAlertController * testModeAutoExportCompletedAlert; 
+(BOOL)inTestMode;
+(id)testModeProjectBundle;
+(unsigned long long)testModeRepeatCount;
+(unsigned long long)dataRateForPreset:(id)arg1 ;
+(unsigned long long)videoDataRateForPreset:(id)arg1 ;
+(unsigned long long)audioDataRateForPreset:(id)arg1 ;
+(unsigned long long)dataRateForiCloudHD;
+(unsigned long long)dataRateForiCloud4G;
+(BOOL)testModeCopyToCameraRoll;
+(BOOL)testModeNoDialogAtEnd;
+(void)exitTestMode;
+(Class)exportControllerClass;
+(id)testModeProjectPlaceholder;
+(id)testModeProject:(id)arg1 ;
+(unsigned long long)testModeType;
+(unsigned long long)testModeMaxFrameToProcess;
+(id)currentTitle:(unsigned long long)arg1 ;
+(unsigned long long)estimatedVideoFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3 project:(id)arg4 ;
-(id<ExportDelegate>)delegate;
-(void)setDelegate:(id<ExportDelegate>)arg1 ;
-(void)dealloc;
-(float)progress;
-(void)stopProgressTimer;
-(void)startProgressTimer;
-(void)setCurrentPreset:(NSString *)arg1 ;
-(NSString *)currentPreset;
-(id)thumbnailImage;
-(void)closeSession;
-(void)setPlayAltClips:(BOOL)arg1 ;
-(id<MovieControllerExportProtocol>)movieController;
-(Project *)project;
-(void)setMovieController:(id<MovieControllerExportProtocol>)arg1 ;
-(BOOL)playAltClips;
-(void)setProject:(Project *)arg1 ;
-(void)cancelExport;
-(id)initWithWithProject:(id)arg1 presets:(id)arg2 exportToPhotos:(BOOL)arg3 delegate:(id)arg4 ;
-(void)beginAsynchronousExport;
-(BOOL)shouldSupportArbitraryAspectRatio;
-(void)createMovieController;
-(void)setSupportArbitraryAspectRatio:(BOOL)arg1 ;
-(void)setPresets:(NSArray *)arg1 ;
-(void)setExportingIndexPresets:(unsigned long long)arg1 ;
-(void)setExportToPhotos:(BOOL)arg1 ;
-(void)setExportPath:(NSString *)arg1 ;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(void)releaseMovieController;
-(BOOL)exportToPhotos;
-(NSArray *)presets;
-(unsigned long long)exportingIndexPresets;
-(void)nextPreset;
-(id)hasExistingFile;
-(void)updateProgressViewWithProgress:(float)arg1 reduced:(BOOL)arg2 ;
-(void)writeVideoFileToSavedPhotoAlbum:(id)arg1 ;
-(void)continueExportAfterDelay;
-(void)displayError:(id)arg1 ;
-(void)displayExportedToPhotos;
-(void)displayDiskSpaceError;
-(void)informDelegateOfCompletion;
-(void)displayAlertTitle:(id)arg1 message:(id)arg2 ;
-(void)setTestModeAutoExportCompletedAlert:(BEAlertController *)arg1 ;
-(BEAlertController *)testModeAutoExportCompletedAlert;
-(NSString *)exportPath;
-(void)serviceProgressTimer:(id)arg1 ;
-(void)noteSessionProgressed:(float)arg1 ;
-(id)metadataToAdd;
-(NSTimer *)progressTimer;
@end

