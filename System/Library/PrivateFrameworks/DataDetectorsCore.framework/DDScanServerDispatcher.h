/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface DDScanServerDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _scannerQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _scanners;
	BOOL _tearDownRequested;

}
-(id)scannerListForType:(int)arg1 ;
-(void)scannerType:(int)arg1 sync:(BOOL)arg2 runTask:(/*^block*/id)arg3 ;
-(void)recycleScanner:(id)arg1 fromList:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

