/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSURLSessionDataTask;

@interface PKFileDownload : NSObject {

	NSMutableSet* _completionHandlers;
	NSURLSessionDataTask* _task;

}

@property (nonatomic,retain) NSMutableSet * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) NSURLSessionDataTask * task;                      //@synthesize task=_task - In the implementation block
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(id)init;
-(NSURLSessionDataTask *)task;
-(NSMutableSet *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableSet *)arg1 ;
@end

