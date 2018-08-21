/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDSoftwareUpdateFetchedEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _userInitiated;
	BOOL _newUpdateFetched;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=wasUserInitiated,nonatomic) BOOL userInitiated;                    //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,getter=wasNewUpdateFetched,nonatomic) BOOL newUpdateFetched;              //@synthesize newUpdateFetched=_newUpdateFetched - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventWasUserInitiated:(BOOL)arg1 wasNewUpdateFetched:(BOOL)arg2 ;
-(void)setUserInitiated:(BOOL)arg1 ;
-(BOOL)wasNewUpdateFetched;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(void)setNewUpdateFetched:(BOOL)arg1 ;
-(BOOL)wasUserInitiated;
@end
