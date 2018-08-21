/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHAAccessQueueTimer.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface AXHADispatchTimer : NSObject <AXHAAccessQueueTimer> {

	BOOL _active;
	BOOL _pending;
	BOOL _cancelled;
	BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	BOOL _useWallTime;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;
	NSString* _label;
	/*^block*/id _processBlock;
	/*^block*/id _cancelBlock;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                             //@synthesize active=_active - In the implementation block
@property (assign,getter=isPending,nonatomic) BOOL pending;                                           //@synthesize pending=_pending - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                       //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchTimer;                             //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (nonatomic,copy) id processBlock;                                                           //@synthesize processBlock=_processBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                                            //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,retain) NSString * label;                                                        //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (assign,nonatomic) BOOL useWallTime;                                                        //@synthesize useWallTime=_useWallTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)dispatchTimer;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)setProcessBlock:(id)arg1 ;
-(BOOL)useWallTime;
-(void)setUseWallTime:(BOOL)arg1 ;
-(id)processBlock;
-(void)setPending:(BOOL)arg1 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(BOOL)isPending;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithTargetSerialQueue:(id)arg1 ;
-(void)_reallyCancel;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
@end

