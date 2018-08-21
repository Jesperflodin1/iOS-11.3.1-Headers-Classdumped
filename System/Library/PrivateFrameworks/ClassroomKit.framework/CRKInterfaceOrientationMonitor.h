/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSOrientationObserver, NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {

	FBSOrientationObserver* mObserver;
	NSMutableArray* mCompletionBlocks;
	BOOL mIsWaitingForFirstUpdate;
	unsigned long long _interfaceOrientation;

}

@property (assign,nonatomic) unsigned long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)interfaceOrientation;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(/*^block*/id)makeUpdateHandler;
-(void)updateInterfaceOrientationWithNotification:(id)arg1 ;
-(void)updateInterfaceOrientationWithBSOrientation:(long long)arg1 ;
-(unsigned long long)DMFInterfaceOrientationFromBSInterfaceOrientation:(long long)arg1 ;
-(void)updateInterfaceOrientationWithDMFOrientation:(unsigned long long)arg1 ;
-(void)interfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
@end

