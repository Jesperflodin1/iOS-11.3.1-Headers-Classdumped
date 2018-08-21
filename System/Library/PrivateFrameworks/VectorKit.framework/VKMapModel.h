/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/VKPolylineOverlayRouteRibbonObserver.h>
#import <libobjc.A.dylib/GEOExperimentConfigurationObserver.h>
#import <libobjc.A.dylib/VKTileProviderClient.h>
#import <libobjc.A.dylib/VKPolylineGroupOverlayObserver.h>

@protocol VKMapModelDelegate, GEORoutePreloadSession;
@class GEOResourceManifestConfiguration, NSLocale, VKTileProvider, VKRasterOverlayTileSource, NSMapTable, VKSceneConfiguration, NSMutableSet, NSMutableArray, VKTimedAnimation, VKTrafficTileSource, VKPolylineOverlay, VKNavigationPuck, NSSet, NSArray, NSString;

@interface VKMapModel : VKModelObject <GEOResourceManifestTileGroupObserver, VKPolylineOverlayRouteRibbonObserver, GEOExperimentConfigurationObserver, VKTileProviderClient, VKPolylineGroupOverlayObserver> {

	unsigned long long _mapPurpose;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	long long _tileSize;
	VKTileProvider* _tileProvider;
	VKTileProvider* _buildingTileProvider;
	VKTileProvider* _additionalManifestTileProvider;
	VKTileProvider* _rasterOverlayProvider[2];
	BOOL _activeMapLayers[33];
	GEOResourceManifestConfiguration* _additionalManifestConfiguration;
	long long _mapMode;
	long long _desiredMapMode;
	BOOL _transitioningToNav;
	BOOL _isTransitioningToTransit;
	VKRasterOverlayTileSource* _rasterOverlayTileSource[2];
	NSMapTable* _tileSources;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _activeStyleManager;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _defaultStyleManager;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _hybridStyleManager;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _satelliteStyleManager;
	shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >* _sceneManager;
	VKSceneConfiguration* _sceneConfiguration;
	double _zoomLevel;
	long long _mapType;
	id<VKMapModelDelegate> _delegate;
	id<GEORoutePreloadSession> _routePreloadSession;
	BOOL _showsBuildings;
	BOOL _showsVenues;
	BOOL _fullyDrawn;
	BOOL _shouldNotifyFullyDrawn;
	BOOL _hasFailedTile;
	BOOL _trafficEnabled;
	BOOL _trafficIncidentsEnabled;
	BOOL _shouldRasterize;
	long long _loadingCount;
	double _contentScale;
	unsigned char _targetDisplay;
	VehicleState _vehicleState;
	unsigned char _emphasis;
	unsigned char _applicationUILayout;
	double _lodBias;
	BOOL _disableRoads;
	BOOL _disableLabels;
	BOOL _disablePolygons;
	BOOL _disableBuildingFootprints;
	BOOL _disableRasters;
	BOOL _disableGrid;
	Matrix<float, 4, 1> _clearColor;
	BOOL _limitingNavCameraHeight;
	NSMutableSet* _blockingStylesheetObservers;
	double _styleTransitionProgress;
	NSMutableArray* _externalAnchors;
	double _forcedMaxZoomLevel;
	BOOL _disableTransitLines;
	VKTimedAnimation* _modeTransitionAnimation;
	BOOL _disableRoadClass[9];
	CartographicRenderer* _renderer;
	mutex _rendererMutex;
	LogicManager* _logicManager;
	VKTrafficTileSource* _trafficSource[1];
	unique_ptr<md::TrafficSharedResources, std::__1::default_delete<md::TrafficSharedResources> >* _trafficSharedResources;
	shared_ptr<md::DataOverrideManager>* _dataOverrideManager;
	float _navigationPuckSize;
	ClearItem _clearItem;
	FeatureAttributeSet* _mapFeatureStyleAttributes;
	shared_ptr<gss::StylesheetQuery<gss::PropertyID> >* _styleQuery;
	int _metroArea;
	BOOL _forceMapDrawStyleUpdate;
	NSMutableSet* _polylineOverlays;
	VKPolylineOverlay* _selectedPolyline;
	VKTimedAnimation* _highZoomTransitionAnimation;
	VKNavigationPuck* _navigationPuck;
	set<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *> >* _observedOverlays;
	set<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::less<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >* _overlays;
	unsigned char _navMapMode;
	BOOL _isEmphasisSet;
	shared_ptr<md::TaskContext>* _taskContext;
	BOOL _showsPointsOfInterest;
	BOOL _localizeLabels;
	unsigned char _labelScaleFactor;
	float _navMapModeTransitionZ;
	long long _shieldSize;
	long long _navigationShieldSize;
	long long _shieldIdiom;
	PolylineCoordinate _routeUserOffset;
	NSSet* _persistentOverlays;

}

@property (nonatomic,retain) GEOResourceManifestConfiguration * additionalManifestConfiguration;                   //@synthesize additionalManifestConfiguration=_additionalManifestConfiguration - In the implementation block
@property (nonatomic,readonly) GEOResourceManifestConfiguration * manifestConfiguration;                           //@synthesize manifestConfiguration=_manifestConfiguration - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StylesheetManager<gss::PropertyID> >* styleManager;                   //@synthesize activeStyleManager=_activeStyleManager - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >* sceneManager;              //@synthesize sceneManager=_sceneManager - In the implementation block
@property (nonatomic,readonly) VKSceneConfiguration * sceneConfiguration; 
@property (assign,nonatomic) long long mapType;                                                                    //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadFallbackTiles; 
@property (assign,nonatomic) unsigned long long neighborMode; 
@property (assign,nonatomic) long long shieldSize;                                                                 //@synthesize shieldSize=_shieldSize - In the implementation block
@property (assign,nonatomic) long long navigationShieldSize;                                                       //@synthesize navigationShieldSize=_navigationShieldSize - In the implementation block
@property (assign,nonatomic) long long shieldIdiom;                                                                //@synthesize shieldIdiom=_shieldIdiom - In the implementation block
@property (assign,nonatomic) BOOL showsPointsOfInterest;                                                           //@synthesize showsPointsOfInterest=_showsPointsOfInterest - In the implementation block
@property (assign,nonatomic) BOOL showsBuildings;                                                                  //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) BOOL showsVenues;                                                                     //@synthesize showsVenues=_showsVenues - In the implementation block
@property (assign,nonatomic) double lodBias; 
@property (nonatomic,readonly) const TrafficSharedResources* trafficResources; 
@property (assign,nonatomic) float navMapModeTransitionZ;                                                          //@synthesize navMapModeTransitionZ=_navMapModeTransitionZ - In the implementation block
@property (nonatomic,readonly) float currentRoadSignOffset; 
@property (nonatomic,readonly) BOOL showingTrafficCasing; 
@property (nonatomic,readonly) unsigned long long purpose;                                                         //@synthesize mapPurpose=_mapPurpose - In the implementation block
@property (nonatomic,readonly) long long currentMapMode;                                                           //@synthesize mapMode=_mapMode - In the implementation block
@property (assign,nonatomic) BOOL limitingNavCameraHeight;                                                         //@synthesize limitingNavCameraHeight=_limitingNavCameraHeight - In the implementation block
@property (nonatomic,readonly) shared_ptr<md::CMercatorTerrainHeightCache>* terrainHeightCache; 
@property (assign,getter=isTrafficEnabled,nonatomic) BOOL trafficEnabled;                                          //@synthesize trafficEnabled=_trafficEnabled - In the implementation block
@property (assign,getter=isTrafficIncidentsEnabled,nonatomic) BOOL trafficIncidentsEnabled;                        //@synthesize trafficIncidentsEnabled=_trafficIncidentsEnabled - In the implementation block
@property (assign,nonatomic) BOOL localizeLabels;                                                                  //@synthesize localizeLabels=_localizeLabels - In the implementation block
@property (assign,nonatomic) unsigned char labelScaleFactor;                                                       //@synthesize labelScaleFactor=_labelScaleFactor - In the implementation block
@property (assign,nonatomic) double contentScale;                                                                  //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) unsigned char targetDisplay; 
@property (assign,nonatomic) VehicleState vehicleState; 
@property (assign,nonatomic) unsigned char emphasis; 
@property (assign,nonatomic) unsigned char applicationUILayout; 
@property (assign,nonatomic) id<VKMapModelDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isFullyDrawn; 
@property (nonatomic,readonly) VKTileProvider * tileProvider; 
@property (assign,nonatomic) PolylineCoordinate routeUserOffset;                                                   //@synthesize routeUserOffset=_routeUserOffset - In the implementation block
@property (nonatomic,readonly) NSArray * overlays; 
@property (nonatomic,readonly) NSSet * persistentOverlays;                                                         //@synthesize persistentOverlays=_persistentOverlays - In the implementation block
@property (nonatomic,readonly) NSArray * rasterOverlays; 
@property (assign,nonatomic) BOOL disableRoads;                                                                    //@synthesize disableRoads=_disableRoads - In the implementation block
@property (assign,nonatomic) BOOL disableLabels;                                                                   //@synthesize disableLabels=_disableLabels - In the implementation block
@property (assign,nonatomic) BOOL disablePolygons;                                                                 //@synthesize disablePolygons=_disablePolygons - In the implementation block
@property (assign,nonatomic) BOOL disableBuildingFootprints;                                                       //@synthesize disableBuildingFootprints=_disableBuildingFootprints - In the implementation block
@property (assign,nonatomic) BOOL disableRasters;                                                                  //@synthesize disableRasters=_disableRasters - In the implementation block
@property (assign,nonatomic) BOOL disableGrid;                                                                     //@synthesize disableGrid=_disableGrid - In the implementation block
@property (assign,nonatomic) Matrix<float clearColor;                                                              //@synthesize clearColor=_clearColor - In the implementation block
@property (nonatomic,retain) id<GEORoutePreloadSession> routePreloadSession; 
@property (assign,nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (assign,nonatomic) float navigationPuckSize;                                                             //@synthesize navigationPuckSize=_navigationPuckSize - In the implementation block
@property (nonatomic,readonly) BOOL shouldRasterize;                                                               //@synthesize shouldRasterize=_shouldRasterize - In the implementation block
@property (assign,nonatomic) BOOL disableTransitLines;                                                             //@synthesize disableTransitLines=_disableTransitLines - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const char*)nameForRoadClass:(int)arg1 ;
+(unsigned long long)numberOfRoadClasses;
-(void)_forceLayout;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(void)experimentConfigurationDidChange:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)_localeChanged:(id)arg1 ;
-(void)setMapType:(long long)arg1 ;
-(long long)mapType;
-(NSArray *)visibleTileSets;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(unsigned long long)purpose;
-(id<VKMapModelDelegate>)delegate;
-(Matrix<float)clearColor;
-(void)setDelegate:(id<VKMapModelDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)shouldRasterize;
-(NSArray *)overlays;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(long long)tileSize;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(void)setSceneManager:(shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >*)arg1 ;
-(shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >*)sceneManager;
-(void)setStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 ;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(void)reloadStylesheet;
-(VehicleState)vehicleState;
-(unsigned char)emphasis;
-(void)setApplicationUILayout:(unsigned char)arg1 ;
-(unsigned char)applicationUILayout;
-(void)clearScene;
-(id)debugLabelString:(BOOL)arg1 ;
-(BOOL)shouldLoadFallbackTiles;
-(long long)navigationShieldSize;
-(void)setNavigationShieldSize:(long long)arg1 ;
-(long long)shieldIdiom;
-(void)setShieldIdiom:(long long)arg1 ;
-(BOOL)showsVenues;
-(void)setDesiredMapMode:(long long)arg1 immediate:(BOOL)arg2 ;
-(double)_styleTransitionProgress;
-(void)setRoutePreloadSession:(id<GEORoutePreloadSession>)arg1 ;
-(id<GEORoutePreloadSession>)routePreloadSession;
-(void)setDisableTransitLines:(BOOL)arg1 ;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(void)setDisableRoads:(BOOL)arg1 ;
-(void)setDisableLabels:(BOOL)arg1 ;
-(void)setDisablePolygons:(BOOL)arg1 ;
-(void)setDisableBuildingFootprints:(BOOL)arg1 ;
-(void)setDisableRasters:(BOOL)arg1 ;
-(void)setDisableGrid:(BOOL)arg1 ;
-(BOOL)isFullyDrawn;
-(void)performStylesheetDidChange;
-(void)debugHighlightFeatureMarker:(const shared_ptr<md::FeatureMarker>*)arg1 ;
-(long long)currentMapMode;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(DisplayStyle)arg2 setupHandler:(/*^block*/id)arg3 ;
-(void)beginStyleAnimationGroup;
-(void)endStyleAnimationGroup;
-(void)stylesheetAnimationWillStartFromStyle:(DisplayStyle)arg1 toStyle:(DisplayStyle)arg2 ;
-(void)stylesheetAnimationDidProgress:(float)arg1 ;
-(void)stylesheetAnimationDidEnd:(BOOL)arg1 ;
-(void)finishStyleBlend;
-(void)setStylesheetMapDisplayStyle:(DisplayStyle)arg1 ;
-(BOOL)supportsMapDisplayStyle:(DisplayStyle)arg1 ;
-(DisplayStyle)sourceMapDisplayStyle;
-(void)debugHighlightObjectAtPoint:(CGPoint)arg1 highlightTarget:(unsigned char)arg2 ;
-(LabelSettings*)labelSettings;
-(id)boundsForSelectedTransitLines;
-(NSSet *)persistentOverlays;
-(void)setNavCameraIsDetached:(BOOL)arg1 ;
-(float)currentRoadSignOffset;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(NSArray *)rasterOverlays;
-(id)externalAnchors;
-(void)resetTileContainers;
-(void)didBeginTransitionToTransit;
-(void)layoutScene:(id)arg1 withContext:(LayoutContext*)arg2 ;
-(void)tileProviderNeedsUpdate:(id)arg1 ;
-(void)willStartLoadingTiles;
-(void)didStopLoadingTilesWithError:(id)arg1 ;
-(long long)tileSource:(id)arg1 overrideForMaximumZoomLevel:(long long)arg2 ;
-(void)polylineOverlay:(id)arg1 didUpdateRouteRibbon:(id)arg2 ;
-(void)setNeighborMode:(unsigned long long)arg1 ;
-(const TrafficSharedResources*)trafficResources;
-(unsigned long long)neighborMode;
-(void)foreachActiveRenderLayer:(/*^block*/id)arg1 ;
-(void)foreachRenderLayer:(/*^block*/id)arg1 ;
-(void)foreachActiveLayer:(/*^block*/id)arg1 ;
-(VKTileProvider *)tileProvider;
-(void)disableRoadClass:(BOOL)arg1 withRoadClass:(int)arg2 ;
-(BOOL)isRoadClassDisabled:(int)arg1 ;
-(shared_ptr<md::CMercatorTerrainHeightCache>*)terrainHeightCache;
-(BOOL)mapTypeUsesStandardTiles;
-(int)tileStyleForMapLayer:(unsigned char)arg1 ;
-(BOOL)canPitch;
-(id)createSourceForLayer:(unsigned char)arg1 tileSet:(id)arg2 useAdditionalManifest:(BOOL)arg3 ;
-(id)tileSetForMapLayer:(unsigned char)arg1 tileGroup:(id)arg2 ;
-(void)clearTileSources;
-(id)tileProviderForMapLayer:(unsigned char)arg1 ;
-(void)configureTileSources;
-(id)createSourceForLayer:(unsigned char)arg1 useAdditionalManifest:(BOOL)arg2 ;
-(void)forceMapType:(long long)arg1 animated:(BOOL)arg2 ;
-(void)activateLogic;
-(BOOL)showingTrafficCasing;
-(void)_transitFadeOutCompletionCallback;
-(void)updateOverlayType;
-(void)startStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(DisplayStyle)arg2 ;
-(void)didBeginTransitionToNavigation;
-(void)didEndNavigation;
-(void)didEndTransitionToTransit;
-(void)_updateRegularTileProviderMode;
-(void)setLimitingNavCameraHeight:(BOOL)arg1 ;
-(void)_mapConfigurationDidChange;
-(float)_tileSelectionScaleForContext:(LayoutContext*)arg1 ;
-(void)sizeDidChange:(CGSize)arg1 ;
-(void)_setInitialClientStyleAttributesForDefaultStyleManager;
-(void)_setStyleManagerFromMapType:(long long)arg1 ;
-(void)performStylesheetWillTransitionToDisplayStyle:(DisplayStyle)arg1 ;
-(void)performStylesheetTransitionDidProgress;
-(void)performStylesheetDoneChanging;
-(void)performStylesheetDidReload;
-(void)setStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 forRealistic:(BOOL)arg2 ;
-(double)lodBias;
-(void)setLodBias:(double)arg1 ;
-(void)_createTrafficTileSourcesIfNecessary:(id)arg1 sharedResources:(id)arg2 ;
-(void)_createTrafficTileSourceAtIndex:(unsigned)arg1 roadTileSource:(id)arg2 origin:(unsigned char)arg3 sharedResources:(id)arg4 ;
-(id)initWithTarget:(id)arg1 renderer:(CartographicRenderer*)arg2 purpose:(unsigned long long)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 taskContext:(shared_ptr<md::TaskContext>*)arg6 logicManager:(LogicManager*)arg7 ;
-(void)flushCaches:(BOOL)arg1 ;
-(void)cancelTileRequests;
-(void)shouldFlushCaches:(id)arg1 ;
-(long long)minimumZoomLevelInView:(id)arg1 ;
-(long long)maximumZoomLevelInViewWithoutZoomOverride:(id)arg1 ;
-(long long)maximumZoomLevelInView:(id)arg1 ;
-(long long)_maximumZoomLevelInView:(id)arg1 ignoreZoomOverride:(BOOL)arg2 ;
-(void)_updateZoomLevel:(LayoutContext*)arg1 ;
-(void)_beginNavMapModeTransitionToMode:(unsigned char)arg1 ;
-(void)_transitionFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)updateMapDrawStyleWithContext:(LayoutContext*)arg1 ;
-(double)northYawAtZoom:(int)arg1 ;
-(void)layoutScene:(id)arg1 withContext:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)destroyRendererStopObserving;
-(void)updateRasterOverlayProviders:(id)arg1 withContext:(LayoutContext*)arg2 ;
-(void)setClearColor:(Matrix<float)arg1 ;
-(void)reserveStencilRangesForScene:(id)arg1 context:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)buildingsDidBecome3D:(BOOL)arg1 ;
-(COverlayLayer*)_rasterOverlayForLevel:(unsigned long long)arg1 ;
-(id)_rasterOverlayTileSourceForLevel:(unsigned long long)arg1 ;
-(void)_updateTileExclusionAreas;
-(void)_updateRasterOverlayZoomOverride;
-(BOOL)isInNavigationMode;
-(BOOL)isInTransitMode;
-(void)setShowingOuterHaloOnLabelsDidChange:(BOOL)arg1 ;
-(id)roadTileForTile:(id)arg1 ;
-(void)_updateOverlayTileSource;
-(id)labelMapTileForTile:(id)arg1 layer:(unsigned char)arg2 ;
-(void)selectedLabelMarkerWillDisappear:(const shared_ptr<md::LabelMarker>*)arg1 ;
-(void)labelMarkerDidChangeState:(const shared_ptr<md::LabelMarker>*)arg1 ;
-(void)didLayoutLabels;
-(void)setNavigationPuckSize:(float)arg1 ;
-(shared_ptr<md::FeatureMarker>*)buildingMarkerAtScreenPoint:(CGPoint)arg1 groundPoint:(Matrix<double, 3, 1>)arg2 ;
-(shared_ptr<md::FeatureMarker>*)featureMarkerAtScreenPoint:(CGPoint)arg1 groundPoint:(Matrix<double, 3, 1>)arg2 ;
-(void)populateDebugNode:(shared_ptr<md::DebugTreeNode>*)arg1 debugTileProvider:(BOOL)arg2 ;
-(BOOL)disableRoads;
-(BOOL)disableLabels;
-(BOOL)disablePolygons;
-(BOOL)disableBuildingFootprints;
-(BOOL)disableRasters;
-(BOOL)disableGrid;
-(BOOL)isTrafficEnabled;
-(BOOL)isTrafficIncidentsEnabled;
-(float)navigationPuckSize;
-(BOOL)limitingNavCameraHeight;
-(BOOL)disableTransitLines;
-(float)navMapModeTransitionZ;
-(void)setNavMapModeTransitionZ:(float)arg1 ;
-(PolylineCoordinate)routeUserOffset;
-(BOOL)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)showsBuildings;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(BOOL)isShowingNoDataPlaceholders;
-(void)setVehicleState:(VehicleState)arg1 ;
-(VKSceneConfiguration *)sceneConfiguration;
-(void)removeExternalAnchor:(id)arg1 ;
-(void)addExternalAnchor:(id)arg1 ;
-(id)navigationPuck;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)addPersistentOverlay:(id)arg1 ;
-(void)setApplicationState:(unsigned char)arg1 ;
-(void)setShouldLoadFallbackTiles:(BOOL)arg1 ;
-(void)setRouteLineSplitAnnotation:(id<VKRouteMatchedAnnotationPresentation>)arg1 ;
-(void)_setStyleTransitionProgress:(double)arg1 targetStyle:(DisplayStyle)arg2 step:(long long)arg3 ;
-(void)setEmphasis:(unsigned char)arg1 ;
-(void)setMapType:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setShowsVenues:(BOOL)arg1 ;
-(void)setLocalizeLabels:(BOOL)arg1 ;
-(BOOL)localizeLabels;
-(void)setTrafficIncidentsEnabled:(BOOL)arg1 ;
-(id)attributionsForCurrentRegion;
-(void)setAdditionalManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(GEOResourceManifestConfiguration *)additionalManifestConfiguration;
-(void)setShieldSize:(long long)arg1 ;
-(long long)shieldSize;
-(id)transitLineMarkersInCurrentViewport;
-(void)selectTransitLineMarker:(id)arg1 ;
-(void)deselectTransitLineMarker;
-(id)selectedTransitLineIDs;
-(void)removeOverlay:(id)arg1 ;
-(void)addRasterOverlay:(id)arg1 ;
-(void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)removeRasterOverlay:(id)arg1 ;
-(unsigned char)targetDisplay;
-(void)setLabelScaleFactor:(unsigned char)arg1 ;
-(void)setTargetDisplay:(unsigned char)arg1 ;
-(id)transitLineMarkersForSelectionAtPoint:(CGPoint)arg1 ;
-(void)setRouteContext:(id)arg1 ;
-(unsigned char)labelScaleFactor;
@end
