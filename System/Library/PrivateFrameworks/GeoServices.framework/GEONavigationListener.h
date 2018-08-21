/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEONavigationServerObserverXPCInterface.h>

@protocol OS_dispatch_queue, GEONavigationListenerDelegate;
@class NSXPCConnection, NSObject, NSString;

@interface GEONavigationListener : NSObject <GEONavigationServerObserverXPCInterface> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	int _navigationStartedToken;
	int _navigationStoppedToken;
	id<GEONavigationListenerDelegate> _delegate;
	/*^block*/id _routeSummaryUpdatedHandler;
	/*^block*/id _transitSummaryUpdatedHandler;
	/*^block*/id _guidanceStateUpdatedHandler;
	/*^block*/id _activeRouteDetailsDataUpdatedHandler;
	/*^block*/id _stepIndexUpdatedHandler;
	/*^block*/id _rideSelectionsUpdatedHandler;
	/*^block*/id _positionFromSignUpdatedHandler;
	/*^block*/id _positionFromManeuverUpdatedHandler;
	/*^block*/id _positionFromDestinationUpdatedHandler;
	/*^block*/id _trafficIncidentAlertDetailsDataUpdatedHandler;
	/*^block*/id _navigationVoiceVolumeUpdatedHandler;
	NSString* _currentRoadName;

}

@property (assign,nonatomic,__weak) id<GEONavigationListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id routeSummaryUpdatedHandler;                                    //@synthesize routeSummaryUpdatedHandler=_routeSummaryUpdatedHandler - In the implementation block
@property (nonatomic,copy) id transitSummaryUpdatedHandler;                                  //@synthesize transitSummaryUpdatedHandler=_transitSummaryUpdatedHandler - In the implementation block
@property (nonatomic,copy) id guidanceStateUpdatedHandler;                                   //@synthesize guidanceStateUpdatedHandler=_guidanceStateUpdatedHandler - In the implementation block
@property (nonatomic,copy) id activeRouteDetailsDataUpdatedHandler;                          //@synthesize activeRouteDetailsDataUpdatedHandler=_activeRouteDetailsDataUpdatedHandler - In the implementation block
@property (nonatomic,copy) id stepIndexUpdatedHandler;                                       //@synthesize stepIndexUpdatedHandler=_stepIndexUpdatedHandler - In the implementation block
@property (nonatomic,copy) id rideSelectionsUpdatedHandler;                                  //@synthesize rideSelectionsUpdatedHandler=_rideSelectionsUpdatedHandler - In the implementation block
@property (nonatomic,copy) id positionFromSignUpdatedHandler;                                //@synthesize positionFromSignUpdatedHandler=_positionFromSignUpdatedHandler - In the implementation block
@property (nonatomic,copy) id positionFromManeuverUpdatedHandler;                            //@synthesize positionFromManeuverUpdatedHandler=_positionFromManeuverUpdatedHandler - In the implementation block
@property (nonatomic,copy) id positionFromDestinationUpdatedHandler;                         //@synthesize positionFromDestinationUpdatedHandler=_positionFromDestinationUpdatedHandler - In the implementation block
@property (nonatomic,copy) id trafficIncidentAlertDetailsDataUpdatedHandler;                 //@synthesize trafficIncidentAlertDetailsDataUpdatedHandler=_trafficIncidentAlertDetailsDataUpdatedHandler - In the implementation block
@property (nonatomic,copy) id navigationVoiceVolumeUpdatedHandler;                           //@synthesize navigationVoiceVolumeUpdatedHandler=_navigationVoiceVolumeUpdatedHandler - In the implementation block
@property (nonatomic,readonly) NSString * currentRoadName;                                   //@synthesize currentRoadName=_currentRoadName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1 ;
-(void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1 ;
-(void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1 ;
-(void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1 ;
-(void)routeSummaryUpdatedWithStepIndexData:(id)arg1 ;
-(void)routeSummaryUpdatedWithStepNameInfoData:(id)arg1 ;
-(void)routeSummaryUpdatedWithRideSelectionData:(id)arg1 ;
-(void)routeSummaryUpdatedWithPositionFromSignData:(id)arg1 ;
-(void)routeSummaryUpdatedWithPositionFromManeuverData:(id)arg1 ;
-(void)routeSummaryUpdatedWithPositionFromDestinationData:(id)arg1 ;
-(void)routeSummaryUpdatedWithTrafficIncidentAlertDetailsData:(id)arg1 ;
-(void)navigationUpdatedWithVoiceVolumeData:(id)arg1 ;
-(void)currentRoadNameUpdated:(id)arg1 ;
-(void)requestRouteSummary;
-(void)requestTransitSummary;
-(void)requestGuidanceState;
-(void)requestActiveRouteDetailsData;
-(void)requestStepIndex;
-(void)requestStepNameInfo;
-(void)requestRideSelections;
-(void)requestPositionFromSign;
-(void)requestPositionFromManeuver;
-(void)requestPositionFromDestination;
-(void)requestTrafficIncidentDetailsData;
-(void)requestNavigationVoiceVolume;
-(void)_open;
-(void)_close;
-(void)_connectToDaemonIfNeeded;
-(void)_notifyWithRouteSummary:(id)arg1 ;
-(void)_notifyWithTransitSummary:(id)arg1 ;
-(void)_notifyWithGuidanceState:(id)arg1 ;
-(void)_notifyWithActiveRouteDetailsData:(id)arg1 ;
-(void)_notifyWithStepIndex:(unsigned long long)arg1 ;
-(void)_notifyWithStepNameInfo:(id)arg1 ;
-(void)_notifyWithRideSelections:(id)arg1 ;
-(void)_notifyWithPositionFromSign:(SCD_Struct_GE29)arg1 ;
-(void)_notifyWithPositionFromManeuver:(SCD_Struct_GE29)arg1 ;
-(void)_notifyWithPositionFromDestination:(SCD_Struct_GE29)arg1 ;
-(void)_notifyWithTrafficIncidentDetailsData:(id)arg1 ;
-(void)_notifyWithNavigationVoiceVolume:(int)arg1 ;
-(id)routeSummaryUpdatedHandler;
-(void)setRouteSummaryUpdatedHandler:(id)arg1 ;
-(id)transitSummaryUpdatedHandler;
-(void)setTransitSummaryUpdatedHandler:(id)arg1 ;
-(id)guidanceStateUpdatedHandler;
-(void)setGuidanceStateUpdatedHandler:(id)arg1 ;
-(id)activeRouteDetailsDataUpdatedHandler;
-(void)setActiveRouteDetailsDataUpdatedHandler:(id)arg1 ;
-(id)stepIndexUpdatedHandler;
-(void)setStepIndexUpdatedHandler:(id)arg1 ;
-(id)rideSelectionsUpdatedHandler;
-(void)setRideSelectionsUpdatedHandler:(id)arg1 ;
-(id)positionFromSignUpdatedHandler;
-(void)setPositionFromSignUpdatedHandler:(id)arg1 ;
-(id)positionFromManeuverUpdatedHandler;
-(void)setPositionFromManeuverUpdatedHandler:(id)arg1 ;
-(id)positionFromDestinationUpdatedHandler;
-(void)setPositionFromDestinationUpdatedHandler:(id)arg1 ;
-(id)trafficIncidentAlertDetailsDataUpdatedHandler;
-(void)setTrafficIncidentAlertDetailsDataUpdatedHandler:(id)arg1 ;
-(id)navigationVoiceVolumeUpdatedHandler;
-(void)setNavigationVoiceVolumeUpdatedHandler:(id)arg1 ;
-(NSString *)currentRoadName;
-(id<GEONavigationListenerDelegate>)delegate;
-(void)setDelegate:(id<GEONavigationListenerDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
@end
