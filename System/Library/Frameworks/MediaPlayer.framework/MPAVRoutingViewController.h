/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingTableViewCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate, MPAVOutputDevicePlaybackDataSource;
@class UITableView, UIView, MPAVRoutingTableHeaderView, MPAVRoutingEmptyStateView, MPAVRoutingViewControllerUpdate, NSArray, MPWeakTimer, MPAVRoutingController, UIColor, NSNumber, MPAVEndpointRoute, NSString;

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	UIView* _tableBackgroundView;
	MPAVRoutingTableHeaderView* _tableHeaderView;
	MPAVRoutingEmptyStateView* _emptyStateView;
	MPAVRoutingViewControllerUpdate* _pendingUpdate;
	BOOL _isAnimatingUpdate;
	NSArray* _cachedRoutes;
	NSArray* _cachedPickedRoutes;
	NSArray* _cachedPendingPickedRoutes;
	NSArray* _cachedDisplayAsPickedRoutes;
	MPWeakTimer* _updateTimer;
	MPAVRoutingController* _routingController;
	long long _routeDiscoveryMode;
	UIColor* _tableCellsBackgroundColor;
	UIColor* _tableCellsContentColor;
	int _airPlayPasswordAlertDidAppearToken;
	int _airPlayPasswordAlertDidCancelToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	BOOL _needsDisplayedRoutesUpdate;
	BOOL _suspendedDiscoveryModeDueToApplicationState;
	BOOL _shouldAutomaticallyUpdateRoutesList;
	BOOL _shouldPickRouteOnSelection;
	BOOL _onScreen;
	unsigned long long _updatesSincePresentation;
	long long _discoveryModeBeforeEnteringBackground;
	unsigned long long _style;
	id<MPAVRoutingViewControllerDelegate> _delegate;
	long long _avItemType;
	unsigned long long _mirroringStyle;
	unsigned long long _iconStyle;
	NSNumber* _discoveryModeOverride;
	id<MPAVRoutingViewControllerThemeDelegate> _themeDelegate;
	MPAVEndpointRoute* _endpointRoute;
	id<MPAVOutputDevicePlaybackDataSource> _playbackDataSource;

}

@property (assign,nonatomic,__weak) id<MPAVRoutingViewControllerThemeDelegate> themeDelegate;                                        //@synthesize themeDelegate=_themeDelegate - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * _routingController; 
@property (nonatomic,retain) MPAVEndpointRoute * endpointRoute;                                                                      //@synthesize endpointRoute=_endpointRoute - In the implementation block
@property (nonatomic,readonly) UITableView * _tableView; 
@property (nonatomic,readonly) double _normalCellHeight; 
@property (nonatomic,readonly) double _expandedCellHeight; 
@property (setter=_setTableCellsBackgroundColor:,nonatomic,retain) UIColor * _tableCellsBackgroundColor; 
@property (setter=_setTableCellsContentColor:,nonatomic,retain) UIColor * _tableCellsContentColor; 
@property (assign,nonatomic,__weak) id<MPAVOutputDevicePlaybackDataSource> playbackDataSource;                                       //@synthesize playbackDataSource=_playbackDataSource - In the implementation block
@property (assign,setter=_setShouldAutomaticallyUpdateRoutesList:,nonatomic) BOOL _shouldAutomaticallyUpdateRoutesList; 
@property (assign,setter=_setShouldPickRouteOnSelection:,nonatomic) BOOL _shouldPickRouteOnSelection; 
@property (nonatomic,readonly) unsigned long long style;                                                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVRoutingViewControllerDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setAVItemType:,nonatomic) long long avItemType;                                                             //@synthesize avItemType=_avItemType - In the implementation block
@property (assign,nonatomic) unsigned long long mirroringStyle;                                                                      //@synthesize mirroringStyle=_mirroringStyle - In the implementation block
@property (assign,nonatomic) unsigned long long iconStyle;                                                                           //@synthesize iconStyle=_iconStyle - In the implementation block
@property (assign,nonatomic) BOOL allowMirroring; 
@property (nonatomic,copy) NSNumber * discoveryModeOverride;                                                                         //@synthesize discoveryModeOverride=_discoveryModeOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MPAVRoutingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MPAVRoutingViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)style;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewWillLayoutSubviews;
-(UITableView *)_tableView;
-(id)_tableHeaderView;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(void)setIconStyle:(unsigned long long)arg1 ;
-(void)setMirroringStyle:(unsigned long long)arg1 ;
-(unsigned long long)mirroringStyle;
-(unsigned long long)iconStyle;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2 ;
-(MPAVRoutingController *)_routingController;
-(id)_crashLogDateFormatter;
-(id)_generatePropertyListFromUpdateDisplayedRoutesState:(id)arg1 exception:(id)arg2 ;
-(id)_writeToDiskWithUpdateDisplayedRoutesStatePropertyList:(id)arg1 error:(id*)arg2 ;
-(id)_alertControllerForUpdateDisplayedRoutesCrashWithLogFileURL:(id)arg1 exception:(id)arg2 ;
-(void)_setNeedsDisplayedRoutesUpdate;
-(void)_initWithStyle:(unsigned long long)arg1 routingController:(id)arg2 ;
-(void)_setNeedsRouteDiscoveryModeUpdate;
-(void)_setTableCellsContentColor:(id)arg1 ;
-(void)_reloadEmptyStateVisibility;
-(void)_beginRouteDiscovery;
-(void)_updateDisplayedRoutes;
-(void)_endRouteDiscovery;
-(unsigned long long)_tableViewNumberOfRows;
-(double)_tableViewHeightAccordingToDataSource;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id<MPAVRoutingViewControllerThemeDelegate>)themeDelegate;
-(id)_displayedRoutes;
-(BOOL)_pickOrGroupRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_promptForHijackIfNeeded:(id)arg1 handler:(/*^block*/id)arg2 ;
-(double)_normalCellHeight;
-(double)_tableViewHeaderViewHeight;
-(double)_tableViewFooterViewHeight;
-(MPAVEndpointRoute *)endpointRoute;
-(void)_setRouteDiscoveryMode:(long long)arg1 ;
-(void)_setupUpdateTimerIfNecessary;
-(BOOL)_shouldDisplayRouteAsPicked:(id)arg1 ;
-(id)_displayableRoutesInRoutes:(id)arg1 ;
-(id)_displayAsPickedRoutesInRoutes:(id)arg1 ;
-(void)_applyUpdate:(id)arg1 ;
-(void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(BOOL)arg2 ;
-(id)initWithStyle:(unsigned long long)arg1 routingController:(id)arg2 ;
-(void)setAVItemType:(long long)arg1 ;
-(BOOL)allowMirroring;
-(void)setAllowMirroring:(BOOL)arg1 ;
-(void)setDiscoveryModeOverride:(NSNumber *)arg1 ;
-(double)_expandedCellHeight;
-(UIColor *)_tableCellsBackgroundColor;
-(UIColor *)_tableCellsContentColor;
-(void)_setTableCellsBackgroundColor:(id)arg1 ;
-(BOOL)_shouldAutomaticallyUpdateRoutesList;
-(void)_setShouldAutomaticallyUpdateRoutesList:(BOOL)arg1 ;
-(BOOL)_shouldPickRouteOnSelection;
-(void)_setShouldPickRouteOnSelection:(BOOL)arg1 ;
-(long long)avItemType;
-(NSNumber *)discoveryModeOverride;
-(void)setThemeDelegate:(id<MPAVRoutingViewControllerThemeDelegate>)arg1 ;
-(void)setEndpointRoute:(MPAVEndpointRoute *)arg1 ;
-(id<MPAVOutputDevicePlaybackDataSource>)playbackDataSource;
-(void)setPlaybackDataSource:(id<MPAVOutputDevicePlaybackDataSource>)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
@end
