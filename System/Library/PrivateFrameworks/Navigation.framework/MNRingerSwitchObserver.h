/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MNRingerSwitchObserver : NSObject {

	BOOL _ringerSwitchEnabled;
	int _ringerStateNotifyToken;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) int ringerStateNotifyToken;                              //@synthesize ringerStateNotifyToken=_ringerStateNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL ringerSwitchEnabled;                                //@synthesize ringerSwitchEnabled=_ringerSwitchEnabled - In the implementation block
+(id)sharedObserver;
-(id)init;
-(void)dealloc;
-(void)loadPropertiesOnConcurrentQueue;
-(unsigned long long)stateForNotifyToken:(int)arg1 ;
-(BOOL)fetchRingerSwitchEnabled;
-(void)registerForRingerStateNotifications;
-(void)unregisterForRingerStateNotifications;
-(BOOL)ringerSwitchEnabled;
-(void)setRingerSwitchEnabled:(BOOL)arg1 ;
-(int)ringerStateNotifyToken;
-(void)setRingerStateNotifyToken:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

