/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDAnimationSession.h>

@protocol MTLDevice, TSKAccessControllerReadTicket, TSDCanvasDelegate;
@class KNSlideNode, KNAnimatedSlideView, KNAnimatedTextureManager, KNAnimationContext, KNAnimationTestResultLogger, TSDBitmapRenderingQualityInfo, NSMutableArray, KNShow, TSDGLLayer, TSKAccessController, NSString;

@interface KNPlaybackSession : NSObject <TSDAnimationSession> {

	KNSlideNode* _currentSlideNode;
	BOOL _hasEndShowHandlerBeenCancelled;
	id<MTLDevice> _metalDevice;
	BOOL _isMetalCapable;
	BOOL _isMetalCapableCheckInitialized;
	BOOL _disableAutoAnimationRemoval;
	BOOL _disableTransitionTextureCaching;
	BOOL _isExitingShow;
	BOOL _isShowLayerVisible;
	BOOL _shouldAlwaysSetCurrentGLContextWhenDrawing;
	BOOL _shouldAnimateTransitionOnLastSlide;
	BOOL _shouldAnimateNullTransitions;
	BOOL _shouldAutomaticallyPlayMovies;
	BOOL _shouldDrawTexturesAsynchronously;
	BOOL _shouldForceTextureGeneration;
	BOOL _shouldNotBakeActionTextures;
	BOOL _shouldPreferCARenderer;
	BOOL _shouldShowVideoReflectionsAndMasks;
	BOOL _shouldUseContentlessLayers;
	BOOL _shouldUseSourceImage;
	BOOL _shouldSkipBuilds;
	BOOL _shouldPlaySkippedSlides;
	BOOL _shouldPreserveTransparency;
	BOOL _shouldExcludeFloatingComments;
	id<TSKAccessControllerReadTicket> _accessControllerReadTicket;
	KNSlideNode* _alternateNextSlideNode;
	KNAnimatedSlideView* _animatedSlideViewForNextSlide;
	KNAnimatedTextureManager* _textureManager;
	KNAnimationContext* _animationContext;
	KNAnimationTestResultLogger* _animationTestResultLogger;
	TSDBitmapRenderingQualityInfo* _bitmapRenderingQualityInfo;
	NSMutableArray* _breadCrumbTrail;
	id<TSDCanvasDelegate> _canvasDelegate;
	/*^block*/id _endShowHandler;
	long long _playMode;
	KNShow* _show;
	TSDGLLayer* _sharedGLLayer;
	NSMutableArray* _animationDurationArray;
	NSMutableArray* _eventDurationArray;
	NSMutableArray* _workDurationArray;
	NSMutableArray* _animationStringArray;

}

@property (nonatomic,readonly) TSKAccessController * accessController; 
@property (assign,nonatomic,__weak) id<TSKAccessControllerReadTicket> accessControllerReadTicket;              //@synthesize accessControllerReadTicket=_accessControllerReadTicket - In the implementation block
@property (assign,nonatomic,__weak) KNSlideNode * alternateNextSlideNode;                                      //@synthesize alternateNextSlideNode=_alternateNextSlideNode - In the implementation block
@property (nonatomic,readonly) KNAnimatedSlideView * animatedSlideViewForCurrentSlide; 
@property (nonatomic,readonly) KNAnimatedSlideView * animatedSlideViewForNextSlide;                            //@synthesize animatedSlideViewForNextSlide=_animatedSlideViewForNextSlide - In the implementation block
@property (nonatomic,retain) KNAnimatedTextureManager * textureManager;                                        //@synthesize textureManager=_textureManager - In the implementation block
@property (nonatomic,readonly) KNAnimationContext * animationContext;                                          //@synthesize animationContext=_animationContext - In the implementation block
@property (nonatomic,readonly) KNAnimationTestResultLogger * animationTestResultLogger;                        //@synthesize animationTestResultLogger=_animationTestResultLogger - In the implementation block
@property (assign,nonatomic) TSDBitmapRenderingQualityInfo * bitmapRenderingQualityInfo;                       //@synthesize bitmapRenderingQualityInfo=_bitmapRenderingQualityInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * breadCrumbTrail;                                                 //@synthesize breadCrumbTrail=_breadCrumbTrail - In the implementation block
@property (assign,nonatomic,__weak) id<TSDCanvasDelegate> canvasDelegate;                                      //@synthesize canvasDelegate=_canvasDelegate - In the implementation block
@property (assign,nonatomic) BOOL disableAutoAnimationRemoval;                                                 //@synthesize disableAutoAnimationRemoval=_disableAutoAnimationRemoval - In the implementation block
@property (assign,nonatomic) BOOL disableTransitionTextureCaching;                                             //@synthesize disableTransitionTextureCaching=_disableTransitionTextureCaching - In the implementation block
@property (nonatomic,copy) id endShowHandler;                                                                  //@synthesize endShowHandler=_endShowHandler - In the implementation block
@property (assign,nonatomic) BOOL isExitingShow;                                                               //@synthesize isExitingShow=_isExitingShow - In the implementation block
@property (nonatomic,readonly) BOOL isPreview; 
@property (assign,nonatomic) BOOL isShowLayerVisible;                                                          //@synthesize isShowLayerVisible=_isShowLayerVisible - In the implementation block
@property (nonatomic,readonly) BOOL isWideGamut; 
@property (assign,nonatomic) long long playMode;                                                               //@synthesize playMode=_playMode - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> metalDevice; 
@property (nonatomic,readonly) BOOL isMetalCapable; 
@property (assign,nonatomic) BOOL shouldAlwaysSetCurrentGLContextWhenDrawing;                                  //@synthesize shouldAlwaysSetCurrentGLContextWhenDrawing=_shouldAlwaysSetCurrentGLContextWhenDrawing - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateTransitionOnLastSlide;                                          //@synthesize shouldAnimateTransitionOnLastSlide=_shouldAnimateTransitionOnLastSlide - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateNullTransitions;                                                //@synthesize shouldAnimateNullTransitions=_shouldAnimateNullTransitions - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallyPlayMovies;                                               //@synthesize shouldAutomaticallyPlayMovies=_shouldAutomaticallyPlayMovies - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawTexturesAsynchronously;                                            //@synthesize shouldDrawTexturesAsynchronously=_shouldDrawTexturesAsynchronously - In the implementation block
@property (assign,nonatomic) BOOL shouldForceTextureGeneration;                                                //@synthesize shouldForceTextureGeneration=_shouldForceTextureGeneration - In the implementation block
@property (assign,nonatomic) BOOL shouldNotBakeActionTextures;                                                 //@synthesize shouldNotBakeActionTextures=_shouldNotBakeActionTextures - In the implementation block
@property (assign,nonatomic) BOOL shouldPreferCARenderer;                                                      //@synthesize shouldPreferCARenderer=_shouldPreferCARenderer - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowInstructionalText; 
@property (assign,nonatomic) BOOL shouldShowVideoReflectionsAndMasks;                                          //@synthesize shouldShowVideoReflectionsAndMasks=_shouldShowVideoReflectionsAndMasks - In the implementation block
@property (assign,nonatomic) BOOL shouldUseContentlessLayers;                                                  //@synthesize shouldUseContentlessLayers=_shouldUseContentlessLayers - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSourceImage;                                                        //@synthesize shouldUseSourceImage=_shouldUseSourceImage - In the implementation block
@property (nonatomic,readonly) KNShow * show;                                                                  //@synthesize show=_show - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipBuilds;                                                            //@synthesize shouldSkipBuilds=_shouldSkipBuilds - In the implementation block
@property (assign,nonatomic) BOOL shouldPlaySkippedSlides;                                                     //@synthesize shouldPlaySkippedSlides=_shouldPlaySkippedSlides - In the implementation block
@property (nonatomic,retain) TSDGLLayer * sharedGLLayer;                                                       //@synthesize sharedGLLayer=_sharedGLLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldPreserveTransparency;                                                  //@synthesize shouldPreserveTransparency=_shouldPreserveTransparency - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeFloatingComments;                                               //@synthesize shouldExcludeFloatingComments=_shouldExcludeFloatingComments - In the implementation block
@property (nonatomic,retain) NSMutableArray * animationDurationArray;                                          //@synthesize animationDurationArray=_animationDurationArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventDurationArray;                                              //@synthesize eventDurationArray=_eventDurationArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * workDurationArray;                                               //@synthesize workDurationArray=_workDurationArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * animationStringArray;                                            //@synthesize animationStringArray=_animationStringArray - In the implementation block
@property (nonatomic,readonly) BOOL atBegginingOfDeck; 
@property (nonatomic,readonly) BOOL atEndOfDeck; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isOffscreenPlayback; 
@property (nonatomic,readonly) double showScale; 
-(id)currentSlide;
-(TSDBitmapRenderingQualityInfo *)bitmapRenderingQualityInfo;
-(void)setBitmapRenderingQualityInfo:(TSDBitmapRenderingQualityInfo *)arg1 ;
-(BOOL)isMetalCapable;
-(BOOL)shouldUseSourceImage;
-(unsigned long long)slideNumberForSlideNode:(id)arg1 ;
-(id)currentSlideNode;
-(long long)playMode;
-(BOOL)shouldPreferCARenderer;
-(BOOL)shouldAnimateNullTransitions;
-(KNAnimatedTextureManager *)textureManager;
-(BOOL)disableAutoAnimationRemoval;
-(id)repForInfo:(id)arg1 onCanvas:(id)arg2 ;
-(BOOL)shouldNotBakeActionTextures;
-(id)initWithShow:(id)arg1 viewScale:(double)arg2 showLayer:(id)arg3 canvasDelegate:(id)arg4 endShowHandler:(/*^block*/id)arg5 ;
-(void)setPlayMode:(long long)arg1 ;
-(void)setIsShowLayerVisible:(BOOL)arg1 ;
-(void)gotoSlideNode:(id)arg1 ;
-(KNAnimatedSlideView *)animatedSlideViewForCurrentSlide;
-(void)p_setCurrentSlideNode:(id)arg1 ;
-(void)dropABreadCrumb;
-(id)firstSlideNode;
-(id)nextSlideNodeAfterSlideNode:(id)arg1 ;
-(id)nextSlideNodeAfterCurrent;
-(id)previousSlideNodeBeforeSlideNode:(id)arg1 ;
-(id)previousSlideNodeBeforeCurrent;
-(id)lastSlideNode;
-(id)breadCrumb;
-(id)animatedSlideViewFor:(id)arg1 ;
-(double)showScale;
-(void)p_executeEndShowHandler;
-(TSDGLLayer *)sharedGLLayer;
-(BOOL)isOffscreenPlayback;
-(BOOL)shouldDrawTexturesAsynchronously;
-(void)setShouldDrawTexturesAsynchronously:(BOOL)arg1 ;
-(void)setShouldUseSourceImage:(BOOL)arg1 ;
-(id)gotoFirstSlide;
-(id)nextSlideAfterCurrent;
-(id)gotoNextSlide;
-(id)gotoPreviousSlide;
-(BOOL)atBegginingOfDeck;
-(BOOL)atEndOfDeck;
-(id)gotoLastSlide;
-(void)waitUntilSlideTextureRenderingIsCompleteForIdentifier:(id)arg1 ;
-(void)executeEndShowHandlerAfterDelay:(double)arg1 ;
-(void)cancelEndShowHandler;
-(void)tearDownSharedGLLayer;
-(void)setSharedGLContextAsCurrentContextShouldCreate:(BOOL)arg1 ;
-(id<TSKAccessControllerReadTicket>)accessControllerReadTicket;
-(void)setAccessControllerReadTicket:(id<TSKAccessControllerReadTicket>)arg1 ;
-(KNSlideNode *)alternateNextSlideNode;
-(void)setAlternateNextSlideNode:(KNSlideNode *)arg1 ;
-(KNAnimatedSlideView *)animatedSlideViewForNextSlide;
-(void)setTextureManager:(KNAnimatedTextureManager *)arg1 ;
-(KNAnimationTestResultLogger *)animationTestResultLogger;
-(NSMutableArray *)breadCrumbTrail;
-(void)setBreadCrumbTrail:(NSMutableArray *)arg1 ;
-(void)setDisableAutoAnimationRemoval:(BOOL)arg1 ;
-(BOOL)disableTransitionTextureCaching;
-(void)setDisableTransitionTextureCaching:(BOOL)arg1 ;
-(id)endShowHandler;
-(void)setEndShowHandler:(id)arg1 ;
-(BOOL)isExitingShow;
-(void)setIsExitingShow:(BOOL)arg1 ;
-(BOOL)isShowLayerVisible;
-(BOOL)shouldAlwaysSetCurrentGLContextWhenDrawing;
-(void)setShouldAlwaysSetCurrentGLContextWhenDrawing:(BOOL)arg1 ;
-(BOOL)shouldAnimateTransitionOnLastSlide;
-(void)setShouldAnimateTransitionOnLastSlide:(BOOL)arg1 ;
-(void)setShouldAnimateNullTransitions:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyPlayMovies;
-(void)setShouldAutomaticallyPlayMovies:(BOOL)arg1 ;
-(void)setShouldNotBakeActionTextures:(BOOL)arg1 ;
-(void)setShouldPreferCARenderer:(BOOL)arg1 ;
-(BOOL)shouldShowVideoReflectionsAndMasks;
-(void)setShouldShowVideoReflectionsAndMasks:(BOOL)arg1 ;
-(BOOL)shouldUseContentlessLayers;
-(void)setShouldUseContentlessLayers:(BOOL)arg1 ;
-(BOOL)shouldSkipBuilds;
-(void)setShouldSkipBuilds:(BOOL)arg1 ;
-(BOOL)shouldPlaySkippedSlides;
-(void)setShouldPlaySkippedSlides:(BOOL)arg1 ;
-(void)setSharedGLLayer:(TSDGLLayer *)arg1 ;
-(BOOL)shouldPreserveTransparency;
-(void)setShouldPreserveTransparency:(BOOL)arg1 ;
-(BOOL)shouldExcludeFloatingComments;
-(void)setShouldExcludeFloatingComments:(BOOL)arg1 ;
-(NSMutableArray *)animationDurationArray;
-(void)setAnimationDurationArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)eventDurationArray;
-(void)setEventDurationArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)workDurationArray;
-(void)setWorkDurationArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)animationStringArray;
-(void)setAnimationStringArray:(NSMutableArray *)arg1 ;
-(void)tearDown;
-(id)init;
-(KNShow *)show;
-(void)dealloc;
-(KNAnimationContext *)animationContext;
-(id<MTLDevice>)metalDevice;
-(BOOL)isWideGamut;
-(BOOL)isPreview;
-(TSKAccessController *)accessController;
-(BOOL)shouldShowInstructionalText;
-(BOOL)shouldForceTextureGeneration;
-(void)setShouldForceTextureGeneration:(BOOL)arg1 ;
-(id<TSDCanvasDelegate>)canvasDelegate;
-(void)setCanvasDelegate:(id<TSDCanvasDelegate>)arg1 ;
@end

