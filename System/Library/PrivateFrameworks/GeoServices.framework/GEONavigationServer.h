/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEONavigationServerPushStateXPCInterface.h>

@class NSMutableArray, NSData, NSString;

@interface GEONavigationServer : NSObject <GEONavigationServerPushStateXPCInterface> {

	NSMutableArray* _peers;
	NSData* _routeSummaryData;
	NSData* _transitSummaryData;
	NSData* _guidanceStateData;
	NSData* _activeRouteDetailsData;
	NSData* _stepIndexData;
	NSData* _stepNameInfoData;
	NSData* _rideSelectionsData;
	NSData* _positionFromSignData;
	NSData* _positionFromManeuverData;
	NSData* _positionFromDestinationData;
	NSData* _trafficIncidentAlertDetailsData;
	NSData* _navigationVoiceVolumeData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(void)setCurrentRoadName:(id)arg1 ;
-(void)setNavigationVoiceVolumeWithData:(id)arg1 ;
-(void)setRouteSummaryWithTrafficIncidentAlertDetailsData:(id)arg1 ;
-(void)setRouteSummaryWithPositionFromDestinationData:(id)arg1 ;
-(void)setRouteSummaryWithPositionFromManeuverData:(id)arg1 ;
-(void)setRouteSummaryWithPositionFromSignData:(id)arg1 ;
-(void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1 ;
-(void)setRouteSummaryWithRideSelectionsData:(id)arg1 ;
-(void)setRouteSummaryWithStepNameInfoData:(id)arg1 ;
-(void)setRouteSummaryWithStepIndexData:(id)arg1 ;
-(void)setRouteSummaryWithGuidanceStateData:(id)arg1 ;
-(void)setRouteSummaryWithTransitSummaryData:(id)arg1 ;
-(void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1 ;
-(BOOL)shouldAcceptNewConnection:(id)arg1 shouldCreateNavigationPeer:(BOOL)arg2 ;
-(void)_requestNavigationVoiceVolumeWithPeer:(id)arg1 ;
-(void)_requestTrafficIncidentDetailsDataWithPeer:(id)arg1 ;
-(void)_requestPositionFromDestinationWithPeer:(id)arg1 ;
-(void)_requestPositionFromManeuverWithPeer:(id)arg1 ;
-(void)_requestPositionFromSignWithPeer:(id)arg1 ;
-(void)_requestRideSelectionsWithPeer:(id)arg1 ;
-(void)_requestStepNameInfoWithPeer:(id)arg1 ;
-(void)_requestStepIndexWithPeer:(id)arg1 ;
-(void)_requestActiveRouteDetailsDataWithPeer:(id)arg1 ;
-(void)_requestGuidanceStateWithPeer:(id)arg1 ;
-(void)_requestTransitSummaryWithPeer:(id)arg1 ;
-(void)_requestRouteSummaryWithPeer:(id)arg1 ;
-(void)_updateAllPeersWithMessage:(long long)arg1 data:(id)arg2 ;
-(void)_forEachValidPeerProxy:(/*^block*/id)arg1 ;
-(void)_sendMessage:(long long)arg1 data:(id)arg2 toPeer:(id)arg3 ;
-(void)clearAllData;
-(id)init;
-(void)dealloc;
@end

