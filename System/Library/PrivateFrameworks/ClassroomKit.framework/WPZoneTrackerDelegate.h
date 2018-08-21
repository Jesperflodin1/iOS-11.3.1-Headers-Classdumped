/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPZoneTrackerDelegate <NSObject>
@optional
-(void)zoneTracker:(id)arg1 enteredZoneInfo:(id)arg2;

@required
-(void)zoneTrackerDidUpdateState:(id)arg1;
-(void)zoneTracker:(id)arg1 enteredZone:(id)arg2;
-(void)zoneTracker:(id)arg1 exitedZone:(id)arg2;
-(void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3;

@end

