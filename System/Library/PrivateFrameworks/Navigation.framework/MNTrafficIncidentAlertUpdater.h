/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTrafficIncidentAlertUpdaterDelegate;
@class MNLocation, MNTrafficIncidentAlert, NSTimer;

@interface MNTrafficIncidentAlertUpdater : NSObject {

	id<MNTrafficIncidentAlertUpdaterDelegate> _delegate;
	MNLocation* _lastLocation;
	MNTrafficIncidentAlert* _pendingAlert;
	MNTrafficIncidentAlert* _activeAlert;
	BOOL _isSpeakingAlert;
	int _trafficIncidentStatus;
	NSTimer* _alertRetryTimer;

}

@property (assign,nonatomic,__weak) id<MNTrafficIncidentAlertUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateForLocation:(id)arg1 ;
-(id<MNTrafficIncidentAlertUpdaterDelegate>)delegate;
-(void)setDelegate:(id<MNTrafficIncidentAlertUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(void)updateForReroute:(id)arg1 ;
-(void)updateRerouteProposalStatusForRequest:(id)arg1 ;
-(void)updateForAlertFromResponse:(id)arg1 ;
-(void)clearAlerts;
-(void)_removeActiveAlert;
-(void)_updateAlertDistanceAndETA:(id)arg1 ;
-(void)_activateAlertForLocation:(id)arg1 ;
-(void)_alertRetryTimerFired:(id)arg1 ;
@end

