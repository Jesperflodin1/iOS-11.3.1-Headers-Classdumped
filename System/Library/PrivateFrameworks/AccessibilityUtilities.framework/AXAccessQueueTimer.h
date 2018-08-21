/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXAccessQueueTimer.h>

@protocol AXAccessQueueTimer <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@required
-(void)cancel;
-(BOOL)isActive;
-(BOOL)isPending;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_source;
@class NSString, AXAccessQueue, NSObject;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer> {

	BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	BOOL _active;
	BOOL _accessQueueIsExternal;
	int _state;
	NSString* _label;
	AXAccessQueue* _accessQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AXAccessQueue * accessQueue;                                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) BOOL accessQueueIsExternal;                                              //@synthesize accessQueueIsExternal=_accessQueueIsExternal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchTimer;                             //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (copy) NSString * label;                                                                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
+(id)timerTargettingMainAccessQueue;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(int)state;
-(BOOL)isActive;
-(void)setState:(int)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithTargetAccessQueue:(id)arg1 ;
-(void)setAccessQueueIsExternal:(BOOL)arg1 ;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/id)arg2 ;
-(void)_afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 shouldTreatAsWritingBlock:(BOOL)arg3 ;
-(void)_didFinishProcessingBlock;
-(void)setDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)accessQueueIsExternal;
-(void)_warnAboutAsynchronousScheduling;
-(void)_performEnqueuedWritingBlock:(/*^block*/id)arg1 asynchronousExecutionWarningHandler:(SEL)arg2 ;
-(void)_warnAboutAsynchronousCancelling;
-(NSObject*<OS_dispatch_source>)dispatchTimer;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/id)arg2 ;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(AXAccessQueue *)accessQueue;
-(BOOL)isPending;
-(void)_reallyCancel;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
@end

