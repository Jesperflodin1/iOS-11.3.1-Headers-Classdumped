/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKLRUCacheDelegate.h>
#import <libobjc.A.dylib/VKTileSourceClient.h>

@protocol VKTileProviderClient, VKMapLayer;
@class VKTileKeyList, VKTimer, NSMutableSet, NSArray, VKTileCache, VKTileSource, VKMapRasterizer, GEOTileKeyList, _VKTileProviderTimerTarget, GEOResourceManifestConfiguration, NSLocale, NSSet, NSString;

@interface VKTileProvider : NSObject <VKLRUCacheDelegate, VKTileSourceClient> {

	id<VKTileProviderClient> _client;
	int _mode;
	unique_ptr<md::TileSelector, std::__1::default_delete<md::TileSelector> >* _tileSelector;
	VKTileKeyList* _keysInView;
	VKTileKeyList* _neighborKeys;
	VKTileKeyList* _prefetchKeys;
	VKTimer* _evaluationTimer;
	double _lastFetchTime;
	double _lastSelectTime;
	double _lastHoleLogTime;
	VKTimer* _prefetchTimer;
	NSMutableSet* _tilesToRender;
	NSArray* _holes;
	NSMutableSet* _lostTiles;
	NSMutableSet* _fallbackTiles;
	NSMutableSet* _neighborTiles;
	unsigned long long _neighborMode;
	unsigned char _fallbackFunction;
	BOOL _useStableFallback;
	VKTileKeyList* _previousTiles;
	BOOL _prefetchEnabled;
	VKTileCache* _tilePool;
	VKTileSource* _tilesSources[33];
	VKTileSource* _optionalTileSources[33];
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _styleManager;
	float _loadingProgress;
	BOOL _hasFailedTile;
	BOOL _finishedLoading;
	BOOL _finishedLoadingOptionalLayers;
	VKCameraState _lastCameraState;
	CGSize _lastCanvasSize;
	BOOL _tilesChanged;
	VKMapRasterizer* _rasterizer;
	id<VKMapLayer> _debugLayer;
	GEOTileKeyList* _debugLayerKeys;
	unsigned long long _tileReserveLimit;
	unsigned _prefetchNumberOfScreens;
	BOOL _useSmallTileCache;
	float _lastMidDisplayZoomLevel;
	CGSize _sortPoint;
	double _contentScale;
	vector<md::TileExclusionArea, std::__1::allocator<md::TileExclusionArea> >* _exclusionAreas;
	BOOL _exclusionAreaVisible;
	_VKTileProviderTimerTarget* _evaluationTarget;
	_VKTileProviderTimerTarget* _prefetchTarget;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	shared_ptr<md::TaskContext>* _taskContext;

}

@property (assign,nonatomic) int mode;                                                                                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned char fallbackFunction;                                                           //@synthesize fallbackFunction=_fallbackFunction - In the implementation block
@property (assign,nonatomic) BOOL useStableFallback;                                                                   //@synthesize useStableFallback=_useStableFallback - In the implementation block
@property (assign,nonatomic) unsigned long long neighborMode;                                                          //@synthesize neighborMode=_neighborMode - In the implementation block
@property (assign,getter=isPrefetchEnabled,nonatomic) BOOL prefetchEnabled;                                            //@synthesize prefetchEnabled=_prefetchEnabled - In the implementation block
@property (assign,nonatomic) id<VKTileProviderClient> client;                                                          //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StylesheetManager<gss::PropertyID> >* styleManager;                       //@synthesize styleManager=_styleManager - In the implementation block
@property (assign,nonatomic) double contentScale;                                                                      //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) VKTileKeyList * keysInView;                                                             //@synthesize keysInView=_keysInView - In the implementation block
@property (nonatomic,readonly) VKTileKeyList * neighborKeys;                                                           //@synthesize neighborKeys=_neighborKeys - In the implementation block
@property (nonatomic,readonly) NSSet * tilesToRender;                                                                  //@synthesize tilesToRender=_tilesToRender - In the implementation block
@property (nonatomic,readonly) NSSet * neighborTiles;                                                                  //@synthesize neighborTiles=_neighborTiles - In the implementation block
@property (nonatomic,readonly) float loadingProgress;                                                                  //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (getter=isFinishedLoading,nonatomic,readonly) BOOL finishedLoading;                                          //@synthesize finishedLoading=_finishedLoading - In the implementation block
@property (getter=isFinishedLoadingOptionalLayers,nonatomic,readonly) BOOL finishedLoadingOptionalLayers;              //@synthesize finishedLoadingOptionalLayers=_finishedLoadingOptionalLayers - In the implementation block
@property (nonatomic,readonly) BOOL hasFailedTile;                                                                     //@synthesize hasFailedTile=_hasFailedTile - In the implementation block
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (nonatomic,retain) id<VKMapLayer> debugLayer;                                                                //@synthesize debugLayer=_debugLayer - In the implementation block
@property (nonatomic,readonly) GEOTileKeyList * debugLayerKeys;                                                        //@synthesize debugLayerKeys=_debugLayerKeys - In the implementation block
@property (assign,nonatomic) double lodBias; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tileForKey:(const VKTileKey*)arg1 ;
-(NSArray *)visibleTileSets;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(void)dealloc;
-(void)timerFired:(id)arg1 ;
-(int)mode;
-(void)setMode:(int)arg1 ;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(void)setStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 ;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;
-(void)clearScene;
-(void)populateDebugNode:(shared_ptr<md::DebugTreeNode>*)arg1 ;
-(void)willStartLoadingTiles;
-(void)didStopLoadingTilesWithError:(id)arg1 ;
-(long long)tileSource:(id)arg1 overrideForMaximumZoomLevel:(long long)arg2 ;
-(void)setNeighborMode:(unsigned long long)arg1 ;
-(unsigned long long)neighborMode;
-(void)foreachActiveLayer:(/*^block*/id)arg1 ;
-(double)lodBias;
-(void)setLodBias:(double)arg1 ;
-(void)flushCaches:(BOOL)arg1 ;
-(void)dirtyTile:(const VKTileKey*)arg1 source:(id)arg2 ;
-(void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const VKTileKey*)arg3 ;
-(void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const VKTileKey*)arg2 ;
-(void)tileSource:(id)arg1 didFailToLoadTileForKey:(const VKTileKey*)arg2 error:(id)arg3 ;
-(void)tileSource:(id)arg1 invalidateKey:(const VKTileKey*)arg2 ;
-(void)tileSource:(id)arg1 invalidateKeys:(id)arg2 ;
-(void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned long long)arg2 ;
-(void)invalidateTilesFromTileSource:(id)arg1 ;
-(BOOL)tileSource:(id)arg1 keyIsNeeded:(const VKTileKey*)arg2 ;
-(void)tileSource:(id)arg1 dirtyTilesWithinRect:(const Box<double, 2>*)arg2 level:(long long)arg3 ;
-(void)dirtyTilesFromTileSource:(id)arg1 ;
-(BOOL)cache:(id)arg1 willEvictObject:(id)arg2 forKey:(const VKCacheKey*)arg3 ;
-(void)setTileExclusionAreas:(const vector<md::TileExclusionArea, std::__1::allocator<md::TileExclusionArea> >*)arg1 ;
-(BOOL)tileExclusionAreaVisible;
-(id)initWithClient:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 taskContext:(shared_ptr<md::TaskContext>*)arg4 tileSelectionProfile:(unique_ptr<md::TileSelectionProfile, std::__1::default_delete<md::TileSelectionProfile> >*)arg5 ;
-(void)quiesce;
-(void)requireRasterization:(id)arg1 ;
-(void)rasterizer:(id)arg1 didMakeRasterTile:(id)arg2 forKey:(const VKTileKey*)arg3 ;
-(void)cancelLoadingTiles;
-(void)tileStatusFromList:(id)arg1 canRender:(out id*)arg2 canNotRender:(out id*)arg3 ;
-(void)describeTilesFromList:(id)arg1 output:(id)arg2 ;
-(void)describeTilesFromList:(id)arg1 outputtoDict:(id)arg2 ;
-(void)populateDebugNodeForTiles:(shared_ptr<md::DebugTreeNode>*)arg1 tiles:(id)arg2 ;
-(void)populateDebugNodeForKeys:(shared_ptr<md::DebugTreeNode>*)arg1 keys:(id)arg2 ;
-(void)foreachOptionalLayer:(/*^block*/id)arg1 ;
-(void)retireRenderTiles:(id)arg1 ;
-(void)retireNeighborTiles:(id)arg1 ;
-(void)prepareTileForRendering:(id)arg1 ;
-(void)releaseNeighborTileForRendering:(id)arg1 ;
-(void)releaseTileForRendering:(id)arg1 ;
-(void)rescindTileForRendering:(id)arg1 ;
-(BOOL)inFailedState:(id)arg1 ;
-(BOOL)hasRequiredTileData:(id)arg1 ;
-(BOOL)hasAllTileData:(id)arg1 ;
-(BOOL)canRenderTile:(id)arg1 ;
-(void)releaseFallbackTileForRendering:(id)arg1 ;
-(BOOL)tileMatters:(id)arg1 ;
-(void)changeTileForKey:(const VKTileKey*)arg1 toState:(unsigned long long)arg2 withMetadata:(id)arg3 withTile:(id)arg4 forLayer:(unsigned char)arg5 ;
-(BOOL)evaluateNeighborTileForRendering:(id)arg1 ;
-(BOOL)evaluateSelectedTileForRendering:(id)arg1 ;
-(void)tileSourcesDidChange;
-(void)invalidateRasterizedTiles;
-(void)setTileSource:(id)arg1 forMapLayer:(unsigned char)arg2 optional:(BOOL)arg3 ;
-(void)removeTileSourceForMapLayer:(unsigned char)arg1 ;
-(id)sourceForMapLayer:(id)arg1 ;
-(id)sourceForLayer:(unsigned char)arg1 ;
-(unsigned char)layerForSource:(id)arg1 ;
-(void)_resizeCache;
-(void)configureTileSelection;
-(void)_fetchAvailableTiles:(BOOL)arg1 ;
-(void)cancelLoadForMapTile:(id)arg1 ;
-(void)_prefetchTiles;
-(void)releaseBestAccuracyFallbackTilesForTile:(id)arg1 context:(LayoutContext*)arg2 previousTiles:(id)arg3 ;
-(void)rescindOverlappedTiles;
-(void)bestAccuracyFallbackForHoles:(id)arg1 context:(LayoutContext*)arg2 previousTiles:(id)arg3 ;
-(void)_fillHoles:(id)arg1 context:(LayoutContext*)arg2 ;
-(id)selectTiles:(int*)arg1 needRasterization:(BOOL*)arg2 ;
-(void)_updateTimers:(int)arg1 ;
-(void)_disableTimers;
-(BOOL)tile:(id)arg1 hasBecomeTerminalSince:(double)arg2 ;
-(double)timeTileLastUpdatedHoleStatus:(id)arg1 ;
-(id)describeReasonForTileBeingHole:(id)arg1 atTime:(double)arg2 ;
-(void)logPersistentHoles;
-(void)updateWithContext:(LayoutContext*)arg1 selectionScale:(float)arg2 ;
-(void)_dirtyTile:(id)arg1 source:(id)arg2 layer:(unsigned char)arg3 ;
-(unsigned char)fallbackFunction;
-(void)setFallbackFunction:(unsigned char)arg1 ;
-(BOOL)useStableFallback;
-(void)setUseStableFallback:(BOOL)arg1 ;
-(BOOL)isPrefetchEnabled;
-(void)setPrefetchEnabled:(BOOL)arg1 ;
-(VKTileKeyList *)keysInView;
-(VKTileKeyList *)neighborKeys;
-(NSSet *)tilesToRender;
-(NSSet *)neighborTiles;
-(id<VKMapLayer>)debugLayer;
-(void)setDebugLayer:(id<VKMapLayer>)arg1 ;
-(GEOTileKeyList *)debugLayerKeys;
-(BOOL)isFinishedLoading;
-(BOOL)isFinishedLoadingOptionalLayers;
-(BOOL)hasFailedTile;
-(id<VKTileProviderClient>)client;
-(void)setClient:(id<VKTileProviderClient>)arg1 ;
-(float)loadingProgress;
@end

