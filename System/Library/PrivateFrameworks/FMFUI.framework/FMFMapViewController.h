/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <FMFUI/FMFSessionDelegateInternal.h>
#import <FMFUI/FMFMapViewDelegateInternalDelegate.h>
#import <libobjc.A.dylib/MKUserTrackingView.h>
#import <FMFUI/FMFNoLocationViewDelegate.h>
#import <FMFUI/FMFMapOptionsViewControllerDelegate.h>

@protocol FMFMapViewControllerDelegate;
@class MKMapView, UIColor, FMFSession, FMFMapViewDelegateInternal, NSSet, FMFNoLocationView, FMFMapOptionsViewController, FMFTitleView, UIBarButtonItem, FMFRefreshBarButtonItem, UIImageView, _MKUserTrackingButton, NSString;

@interface FMFMapViewController : UIViewController <FMFSessionDelegateInternal, FMFMapViewDelegateInternalDelegate, MKUserTrackingView, FMFNoLocationViewDelegate, FMFMapOptionsViewControllerDelegate> {

	BOOL _shouldZoomToFitNewLocations;
	BOOL _shouldZoomToFitMeAndLocations;
	BOOL _showFloatingMapLocationButton;
	BOOL _isMapCenteringDisabled;
	BOOL _isSimpleMap;
	BOOL __refreshingIsPaused;
	BOOL __blockDidReceiveAnimation;
	BOOL __isRenderingInitialMap;
	BOOL _viewWillAppearCalled;
	BOOL _alwaysShowAccuracy;
	BOOL _wasToolbarPreviouslyHidden;
	BOOL _mapTypeLoaded;
	id<FMFMapViewControllerDelegate> _delegate;
	MKMapView* _mapView;
	UIColor* _annotationTintColor;
	FMFSession* _fmfSession;
	FMFMapViewDelegateInternal* _mapViewDelegate;
	NSSet* __preloadedHandles;
	FMFNoLocationView* _noLocationView;
	NSSet* __internalHandlesShowingLocations;
	FMFMapOptionsViewController* _mapOptionsVC;
	FMFTitleView* _titleView;
	void* _addressBook;
	UIBarButtonItem* _userTrackingButtonItem;
	UIBarButtonItem* _directionsBarButtonItem;
	UIBarButtonItem* _infoBarButtonItem;
	FMFRefreshBarButtonItem* _refreshButton;
	UIImageView* _cachedMapView;
	unsigned long long _defaultMapType;
	_MKUserTrackingButton* _userTrackingButton;
	long long _currentTrackingMode;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) MKMapView * mapView;                                           //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) FMFSession * fmfSession;                                       //@synthesize fmfSession=_fmfSession - In the implementation block
@property (nonatomic,retain) FMFMapViewDelegateInternal * mapViewDelegate;                  //@synthesize mapViewDelegate=_mapViewDelegate - In the implementation block
@property (nonatomic,retain) NSSet * _preloadedHandles;                                     //@synthesize _preloadedHandles=__preloadedHandles - In the implementation block
@property (assign,nonatomic) BOOL isSimpleMap;                                              //@synthesize isSimpleMap=_isSimpleMap - In the implementation block
@property (nonatomic,retain) FMFNoLocationView * noLocationView;                            //@synthesize noLocationView=_noLocationView - In the implementation block
@property (nonatomic,retain) NSSet * _internalHandlesShowingLocations;                      //@synthesize _internalHandlesShowingLocations=__internalHandlesShowingLocations - In the implementation block
@property (assign,nonatomic) BOOL _refreshingIsPaused;                                      //@synthesize _refreshingIsPaused=__refreshingIsPaused - In the implementation block
@property (assign,nonatomic) BOOL _blockDidReceiveAnimation;                                //@synthesize _blockDidReceiveAnimation=__blockDidReceiveAnimation - In the implementation block
@property (assign,nonatomic) BOOL _isRenderingInitialMap;                                   //@synthesize _isRenderingInitialMap=__isRenderingInitialMap - In the implementation block
@property (assign,nonatomic) BOOL viewWillAppearCalled;                                     //@synthesize viewWillAppearCalled=_viewWillAppearCalled - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowAccuracy;                                       //@synthesize alwaysShowAccuracy=_alwaysShowAccuracy - In the implementation block
@property (assign,nonatomic) BOOL wasToolbarPreviouslyHidden;                               //@synthesize wasToolbarPreviouslyHidden=_wasToolbarPreviouslyHidden - In the implementation block
@property (nonatomic,retain) FMFMapOptionsViewController * mapOptionsVC;                    //@synthesize mapOptionsVC=_mapOptionsVC - In the implementation block
@property (nonatomic,retain) FMFTitleView * titleView;                                      //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) void* addressBook;                                             //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * userTrackingButtonItem;                      //@synthesize userTrackingButtonItem=_userTrackingButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * directionsBarButtonItem;                     //@synthesize directionsBarButtonItem=_directionsBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * infoBarButtonItem;                           //@synthesize infoBarButtonItem=_infoBarButtonItem - In the implementation block
@property (nonatomic,retain) FMFRefreshBarButtonItem * refreshButton;                       //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,retain) UIImageView * cachedMapView;                                   //@synthesize cachedMapView=_cachedMapView - In the implementation block
@property (assign,nonatomic) unsigned long long defaultMapType;                             //@synthesize defaultMapType=_defaultMapType - In the implementation block
@property (assign,nonatomic) BOOL mapTypeLoaded;                                            //@synthesize mapTypeLoaded=_mapTypeLoaded - In the implementation block
@property (nonatomic,retain) _MKUserTrackingButton * userTrackingButton;                    //@synthesize userTrackingButton=_userTrackingButton - In the implementation block
@property (assign,nonatomic) long long currentTrackingMode;                                 //@synthesize currentTrackingMode=_currentTrackingMode - In the implementation block
@property (assign,nonatomic,__weak) id<FMFMapViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldZoomToFitNewLocations;                              //@synthesize shouldZoomToFitNewLocations=_shouldZoomToFitNewLocations - In the implementation block
@property (assign,nonatomic) BOOL shouldZoomToFitMeAndLocations;                            //@synthesize shouldZoomToFitMeAndLocations=_shouldZoomToFitMeAndLocations - In the implementation block
@property (assign,nonatomic) BOOL showFloatingMapLocationButton;                            //@synthesize showFloatingMapLocationButton=_showFloatingMapLocationButton - In the implementation block
@property (assign,nonatomic) BOOL isMapCenteringDisabled;                                   //@synthesize isMapCenteringDisabled=_isMapCenteringDisabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                       //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) NSSet * handlesShowingLocations; 
@property (nonatomic,copy) UIColor * annotationTintColor;                                   //@synthesize annotationTintColor=_annotationTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasUserLocation;
+(CGSize)annotationImageSize;
-(BOOL)hasUserLocation;
-(void)setMapView:(MKMapView *)arg1 ;
-(long long)userTrackingMode;
-(MKMapView *)mapView;
-(void)didSelectLocation:(id)arg1 ;
-(id)init;
-(id<FMFMapViewControllerDelegate>)delegate;
-(void)setDelegate:(id<FMFMapViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)loadView;
-(UIEdgeInsets)edgeInsets;
-(void)setTitleView:(FMFTitleView *)arg1 ;
-(FMFTitleView *)titleView;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)destroySession;
-(void)setFmfSession:(FMFSession *)arg1 ;
-(BOOL)canRotateForHeading;
-(BOOL)isCurrentlyRotated;
-(void)_setUserTrackingMode:(long long)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3 ;
-(void)mapTypeChanged:(unsigned long long)arg1 ;
-(BOOL)isCompact;
-(void)deselectAllAnnotations;
-(void)loadDelegate;
-(id)initSimpleMapWithDelegate:(id)arg1 handles:(id)arg2 ;
-(void)setAnnotationTintColor:(UIColor *)arg1 ;
-(id)initWithDelegate:(id)arg1 handles:(id)arg2 ;
-(BOOL)canSelectAnnotation:(id)arg1 ;
-(id)annotationImageForHandle:(id)arg1 ;
-(id)titleViewForSelectedHandle;
-(void)_dismiss:(id)arg1 ;
-(void*)addressBook;
-(void)infoButtonTapped:(id)arg1 ;
-(void)removeAllFriendLocationsFromMap;
-(NSSet *)handlesShowingLocations;
-(void)initializeDefaults;
-(void)set_preloadedHandles:(NSSet *)arg1 ;
-(void)setIsSimpleMap:(BOOL)arg1 ;
-(void)_authorizeMonitoringLocation;
-(void)setShouldZoomToFitNewLocations:(BOOL)arg1 ;
-(void)updateAllAnnotationsDueToAddressBookUpdate;
-(void)mapTypeChangedNotification:(id)arg1 ;
-(void)set_isRenderingInitialMap:(BOOL)arg1 ;
-(BOOL)isSimpleMap;
-(UIImageView *)cachedMapView;
-(void)refreshButtonTapped:(id)arg1 ;
-(void)setRefreshButton:(FMFRefreshBarButtonItem *)arg1 ;
-(void)enablePreloadedHandles;
-(void)setupToolbarItems;
-(void)getDirections;
-(void)setDirectionsBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setInfoBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)userTrackingButtonItem;
-(void)setNoLocationView:(FMFNoLocationView *)arg1 ;
-(FMFMapViewDelegateInternal *)mapViewDelegate;
-(void)setIsMapCenteringDisabled:(BOOL)arg1 ;
-(void)setCachedMapView:(UIImageView *)arg1 ;
-(void)setUserTrackingButton:(_MKUserTrackingButton *)arg1 ;
-(void)_updateLocationButtonEnabled;
-(void)updateUserTrackingButtonState;
-(NSSet *)_internalHandlesShowingLocations;
-(void)setViewWillAppearCalled:(BOOL)arg1 ;
-(void)setWasToolbarPreviouslyHidden:(BOOL)arg1 ;
-(void)set_blockDidReceiveAnimation:(BOOL)arg1 ;
-(void)viewWillAppearWillMoveToWindowSetup;
-(void)addHandlesToSession;
-(void)loadCachedLocationsForHandles;
-(BOOL)shouldZoomToFitMeAndLocations;
-(void)updateNoLocationView:(BOOL)arg1 ;
-(void)hideCachedMap;
-(FMFNoLocationView *)noLocationView;
-(BOOL)_isRenderingInitialMap;
-(BOOL)wasToolbarPreviouslyHidden;
-(void)removeHandlesFromSession;
-(BOOL)_refreshingIsPaused;
-(void)setMapViewDelegate:(FMFMapViewDelegateInternal *)arg1 ;
-(BOOL)isMapCenteringDisabled;
-(NSSet *)_preloadedHandles;
-(void)startShowingLocationsForHandles:(id)arg1 ;
-(void)set_internalHandlesShowingLocations:(NSSet *)arg1 ;
-(void)updateMapWithNewLocation:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateRefreshForLocation:(id)arg1 ;
-(void)_updateTitleViewLocation:(id)arg1 ;
-(BOOL)viewWillAppearCalled;
-(BOOL)canShowNoLocation;
-(BOOL)mapHasUserLocations;
-(id)locationOnMapForHandle:(id)arg1 enforceServerId:(BOOL)arg2 ;
-(BOOL)isLocationAlreadyOnMap:(id)arg1 ;
-(void)selectAnnotationIfSingleFriend:(id)arg1 ;
-(BOOL)shouldZoomToFitNewLocations;
-(BOOL)_blockDidReceiveAnimation;
-(BOOL)singleAnnotationOnMap;
-(UIBarButtonItem *)directionsBarButtonItem;
-(void)presentMapOptionsModal:(id)arg1 ;
-(void)setMapOptionsVC:(FMFMapOptionsViewController *)arg1 ;
-(UIBarButtonItem *)infoBarButtonItem;
-(FMFMapOptionsViewController *)mapOptionsVC;
-(void)setMapTypeLoaded:(BOOL)arg1 ;
-(void)setDefaultMapType:(unsigned long long)arg1 ;
-(BOOL)mapTypeLoaded;
-(void)set_refreshingIsPaused:(BOOL)arg1 ;
-(void)selectAnnotationIfSingleForMac;
-(void)stopShowingLocationsForHandles:(id)arg1 ;
-(void)removeAnnotationsFromMapForHandle:(id)arg1 ;
-(FMFRefreshBarButtonItem *)refreshButton;
-(BOOL)sessionContainsHandle:(id)arg1 ;
-(void)didReceiveLocationForDelegateCallback:(id)arg1 ;
-(_MKUserTrackingButton *)userTrackingButton;
-(void)setCurrentTrackingMode:(long long)arg1 ;
-(void)setShouldZoomToFitMeAndLocations:(BOOL)arg1 ;
-(void)zoomToFit;
-(long long)currentTrackingMode;
-(id)_internalAnnotationTintColor;
-(id)_selectedHandleAnnotation;
-(void)_updateDirectionsButtonEnabled;
-(UIColor *)annotationTintColor;
-(void)didDeselectLocation:(id)arg1 ;
-(void)regionWillChangeAnimated:(BOOL)arg1 ;
-(void)regionDidChangeAnimated:(BOOL)arg1 ;
-(void)reZoomToFit;
-(void)didUpdateUserLocation:(id)arg1 ;
-(void)mapViewDidFinishRenderingMap;
-(BOOL)alwaysShowAccuracy;
-(id)annotationImageForAnnotation:(id)arg1 andHandle:(id)arg2 ;
-(void)openInMapsButtonTapped:(id)arg1 ;
-(id)openInAppURL;
-(void)stopRefreshingLocations;
-(void)resumeRefreshingLocations;
-(void)setShowFloatingMapLocationButton:(BOOL)arg1 ;
-(void)setHandlesShowingLocations:(NSSet *)arg1 ;
-(void)zoomToFit:(BOOL)arg1 ;
-(void)zoomAndSelectHandle:(id)arg1 ;
-(BOOL)showFloatingMapLocationButton;
-(void)setAlwaysShowAccuracy:(BOOL)arg1 ;
-(void)setUserTrackingButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setAddressBook:(void*)arg1 ;
-(unsigned long long)defaultMapType;
-(FMFSession *)fmfSession;
-(void)didReceiveLocation:(id)arg1 ;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1 ;
@end

