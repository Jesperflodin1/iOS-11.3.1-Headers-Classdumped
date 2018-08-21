/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface ISVideoAnalyzer : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* _operationsByRequestID;
	long long __currentRequestID;

}

@property (assign,setter=_setCurrentRequestID:,nonatomic) long long _currentRequestID;              //@synthesize _currentRequestID=__currentRequestID - In the implementation block
+(id)defaultAnalyzer;
-(id)init;
-(void)_setCurrentRequestID:(long long)arg1 ;
-(long long)_currentRequestID;
-(void)_handleAllFrameTimesRequestFinishedForTime:(SCD_Struct_IS4)arg1 frameTimes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)requestAllFrameTimesInAsset:(id)arg1 trackID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(long long)requestFrameTimesAroundTime:(SCD_Struct_IS4)arg1 inAsset:(id)arg2 trackID:(int)arg3 completion:(/*^block*/id)arg4 ;
@end

