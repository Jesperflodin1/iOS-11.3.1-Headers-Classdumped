/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface MCDGlobalQueueManager : NSObject {

	NSOperationQueue* _globalQueue;

}

@property (nonatomic,retain) NSOperationQueue * globalQueue;              //@synthesize globalQueue=_globalQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSOperationQueue *)globalQueue;
-(void)setGlobalQueue:(NSOperationQueue *)arg1 ;
@end

