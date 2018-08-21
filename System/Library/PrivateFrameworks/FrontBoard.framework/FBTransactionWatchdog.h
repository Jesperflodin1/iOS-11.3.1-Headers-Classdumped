/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog {

	FBTransaction* _transaction;

}

@property (nonatomic,retain,readonly) FBTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(FBTransaction *)transaction;
-(void)invalidate;
-(void)dealloc;
-(void)_dumpDebugInfo;
-(void)_watchdogTimerFired;
-(id)initWithTransaction:(id)arg1 ;
@end
