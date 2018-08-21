/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PassKitUI/PassKitUI-Structs.h>
@class MKMapSnapshotter, MKMapSnapshot, NSLock, NSObject;

@interface PKPaymentTransactionLocationSnapshotter : NSObject {

	MKMapSnapshotter* _snapshotter;
	MKMapSnapshot* _snapshot;
	NSLock* _snapshotCreationLock;
	NSObject*<OS_dispatch_queue> _snapshotQueue;

}
-(void)cancel;
-(void)dealloc;
-(id)_snapshotLocationForTransaction:(id)arg1 ;
-(BOOL)_locationIsValid:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 radius:(double)arg2 snapshotSize:(CGSize)arg3 ;
-(void)snapshotWithCompletion:(/*^block*/id)arg1 ;
@end

