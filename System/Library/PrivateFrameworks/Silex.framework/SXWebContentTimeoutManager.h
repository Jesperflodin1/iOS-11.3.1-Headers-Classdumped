/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentMessageHandler.h>
#import <libobjc.A.dylib/SXWebContentTimeoutManager.h>

@protocol SXWebContentTimeoutManager <NSObject>
@required
-(void)onTimeout:(/*^block*/id)arg1;

@end


@class NSMutableArray, NFStateMachine, NSTimer, NSString;

@interface SXWebContentTimeoutManager : NSObject <SXWebContentMessageHandler, SXWebContentTimeoutManager> {

	NSMutableArray* _timeoutBlocks;
	NFStateMachine* _stateMachine;
	NSTimer* _timer;

}

@property (nonatomic,readonly) NSMutableArray * timeoutBlocks;              //@synthesize timeoutBlocks=_timeoutBlocks - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;               //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                               //@synthesize timer=_timer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NFStateMachine *)stateMachine;
-(void)onTimeout:(/*^block*/id)arg1 ;
-(id)initWithTimeout:(double)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3 ;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
-(NSMutableArray *)timeoutBlocks;
@end
