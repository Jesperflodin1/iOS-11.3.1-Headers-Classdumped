/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVRoutingControllerDelegate <NSObject>
@optional
-(void)routingControllerAvailableRoutesDidChange:(id)arg1;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
-(void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
-(void)routingController:(id)arg1 volumeControlAvailabilityDidChange:(BOOL)arg2;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1;
-(void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;

@end

