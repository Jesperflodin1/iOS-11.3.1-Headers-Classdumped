/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, LSApplicationProxy, NSObject;

@interface NSSNewsAvailabilityMonitor : NSObject {

	BOOL _NewsIsAvailable;
	NSMutableArray* _blocks;
	LSApplicationProxy* _applicationProxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * blocks;                                    //@synthesize blocks=_blocks - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;                      //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (getter=isNewsAvailable,nonatomic,readonly) BOOL NewsIsAvailable;              //@synthesize NewsIsAvailable=_NewsIsAvailable - In the implementation block
-(id)init;
-(void)dealloc;
-(LSApplicationProxy *)applicationProxy;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithApplicationProxy:(id)arg1 queue:(id)arg2 ;
-(BOOL)_isNewsAvailable;
-(id)initWithProcessVariant:(unsigned long long)arg1 ;
-(void)setNewsIsAvailable:(BOOL)arg1 ;
-(void)setBlocks:(NSMutableArray *)arg1 ;
-(id)initWithProcessVariant:(unsigned long long)arg1 queue:(id)arg2 ;
-(void)addNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)isNewsAvailable;
-(void)_updateAvailability;
-(NSMutableArray *)blocks;
@end

