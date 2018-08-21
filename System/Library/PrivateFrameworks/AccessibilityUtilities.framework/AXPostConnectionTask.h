/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXAccessQueueTimer;

@interface AXPostConnectionTask : NSObject {

	BOOL _didTimeout;
	/*^block*/id _postConnectionBlock;
	AXAccessQueueTimer* _timeoutTimer;

}

@property (nonatomic,copy) id postConnectionBlock;                           //@synthesize postConnectionBlock=_postConnectionBlock - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) BOOL didTimeout;                                //@synthesize didTimeout=_didTimeout - In the implementation block
-(void)setPostConnectionBlock:(id)arg1 ;
-(void)setDidTimeout:(BOOL)arg1 ;
-(void)_performTask;
-(id)postConnectionBlock;
-(BOOL)didTimeout;
-(id)initWithConnectBlock:(/*^block*/id)arg1 timeout:(double)arg2 accessQueue:(id)arg3 ;
-(void)performTask;
-(void)setTimeoutTimer:(AXAccessQueueTimer *)arg1 ;
-(AXAccessQueueTimer *)timeoutTimer;
@end
