/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ISFrameCurator : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	Ai _nextRequestID;
	NSMutableDictionary* _requestsByID;
	NSObject*<OS_dispatch_queue> _requestsByIDQueue;

}
+(id)defaultCurator;
-(id)init;
-(int)_nextRequestID;
-(id)_removeRequestWithID:(int)arg1 ;
-(void)_storeRequest:(id)arg1 withID:(int)arg2 ;
-(int)requestBestFramesInVideo:(id)arg1 trackID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelRequestWithID:(int)arg1 ;
@end

