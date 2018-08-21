/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <QuartzCore/CAMetalLayer.h>
#import <libobjc.A.dylib/SCNSceneRenderer.h>
#import <libobjc.A.dylib/SCNTechniqueSupport.h>

@class SCNJitterer, SCNRenderer, SCNScene, SCNDisplayLink, NSString, SCNNode, SKScene, AVAudioEngine, AVAudioEnvironmentNode, SCNTechnique;

@interface SCNMetalLayer : CAMetalLayer <SCNSceneRenderer, SCNTechniqueSupport> {

	SCNJitterer* _jitterer;
	SCNRenderer* _renderer;
	SCNScene* _scene;
	SCNDisplayLink* _displayLink;
	long long _preferredFramePerSeconds;
	double _lastUpdate;
	double _lastRenderedTime;
	BOOL _drawForJittering;
	BOOL _rendersIntoMaterial;
	BOOL _syncTimeWithCoreAnimation;

}

@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) unsigned long long antialiasingMode; 
@property (assign,nonatomic) BOOL syncTimeWithCoreAnimation;                                         //@synthesize syncTimeWithCoreAnimation=_syncTimeWithCoreAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) BOOL jitteringEnabled; 
@property (assign,nonatomic) BOOL showsStatistics; 
@property (assign,nonatomic) unsigned long long debugOptions; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) unsigned long long renderingAPI; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long colorPixelFormat; 
@property (nonatomic,readonly) unsigned long long depthPixelFormat; 
@property (nonatomic,readonly) unsigned long long stencilPixelFormat; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,readonly) AVAudioEnvironmentNode * audioEnvironmentNode; 
@property (nonatomic,retain) SCNNode * audioListener; 
@property (nonatomic,copy) SCNTechnique * technique; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)_kvoKeysForwardedToRenderer;
-(id)init;
-(id)layer;
-(id<SCNSceneRendererDelegate>)delegate;
-(void)setNeedsDisplay;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setDelegate:(id<SCNSceneRendererDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(SCNScene *)scene;
-(void*)context;
-(void)stop;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(id)displayLink;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)commonInit;
-(id)initWithLayer:(id)arg1 ;
-(void)display;
-(void)play;
-(void)pause;
-(long long)preferredFramesPerSecond;
-(void)setCurrentTime:(double)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(BOOL)_canJitter;
-(id)_authoringEnvironment;
-(unsigned long long)debugOptions;
-(id)currentRenderPassDescriptor;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(BOOL)_showsAuthoringEnvironment;
-(void)SCN_displayLinkCallback:(double)arg1 ;
-(SCNNode *)pointOfView;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(unsigned long long)renderingAPI;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1 ;
-(unsigned long long)antialiasingMode;
-(id)scn_backingLayer;
-(void)_sceneDidUpdate:(id)arg1 ;
-(void)set_showsAuthoringEnvironment:(BOOL)arg1 ;
-(void)_drawAtTime:(double)arg1 ;
-(BOOL)isJitteringEnabled;
-(SKScene *)overlaySKScene;
-(void)setOverlaySKScene:(SKScene *)arg1 ;
-(void)setJitteringEnabled:(BOOL)arg1 ;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(void)_jitterRedisplay;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 ;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1 ;
-(SCNVector3)projectPoint:(SCNVector3)arg1 ;
-(SCNVector3)unprojectPoint:(SCNVector3)arg1 ;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)showsStatistics;
-(void)setShowsStatistics:(BOOL)arg1 ;
-(unsigned long long)colorPixelFormat;
-(unsigned long long)depthPixelFormat;
-(unsigned long long)stencilPixelFormat;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(SCNNode *)arg1 ;
-(void)setPointOfCulling:(id)arg1 ;
-(id)pointOfCulling;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(id)rendererOptions;
-(void)setRenderer:(id)arg1 ;
-(BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
-(BOOL)canDrawConcurrently;
-(void)pauseDisplayLink;
-(void)resumeDisplayLink;
-(BOOL)rendersIntoMaterial;
-(void)setRendersIntoMaterial:(BOOL)arg1 ;
-(void)projectPoints:(SCNVector3*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_isGLLayerBacked;
-(void)_systemTimeAnimationStarted:(id)arg1 ;
-(BOOL)scn_inLiveResize;
-(void)_cancelJitterRedisplay;
-(BOOL)_supportsJitteringSyncRedraw;
-(BOOL)syncTimeWithCoreAnimation;
-(void)setSyncTimeWithCoreAnimation:(BOOL)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)stop:(id)arg1 ;
-(id)contentLayer;
-(SCNTechnique *)technique;
-(void)setTechnique:(SCNTechnique *)arg1 ;
-(id<MTLDevice>)device;
-(id)renderer;
-(void)pause:(id)arg1 ;
-(void)setScene:(SCNScene *)arg1 ;
-(void)play:(id)arg1 ;
@end

