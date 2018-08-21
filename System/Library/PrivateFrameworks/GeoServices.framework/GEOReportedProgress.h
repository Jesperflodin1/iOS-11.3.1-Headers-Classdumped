/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSProgress, NSString;

@interface GEOReportedProgress : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSProgress* _progress;
	NSProgress* _internalProgress;
	/*^block*/id _cancellationHandler;

}

@property (copy) NSString * kind; 
@property (assign) long long totalUnitCount; 
@property (assign) long long completedUnitCount; 
@property (copy) id cancellationHandler; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) NSProgress * progress;                          //@synthesize progress=_progress - In the implementation block
+(id)progressWithTotalUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithTotalUnitCount:(long long)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(NSProgress *)progress;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
@end
