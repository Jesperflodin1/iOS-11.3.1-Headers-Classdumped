/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSMutableDictionary;

@interface GEORequestCountPowerLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _eventName;
	NSDate* _startDate;
	NSMutableDictionary* _clientInfo;

}
+(BOOL)shouldIgnoreRequestType:(unsigned char)arg1 fromClientWithId:(id)arg2 ;
+(id)sharedInstance;
-(void)incrementCountForClient:(id)arg1 requestType:(unsigned char)arg2 ;
-(void)startNewSessionWithName:(id)arg1 ;
-(void)_flushToPowerLog;
-(void)_scheduleXpcActivity;
-(void)_cancelXpcActivity;
-(id)init;
-(void)dealloc;
@end
