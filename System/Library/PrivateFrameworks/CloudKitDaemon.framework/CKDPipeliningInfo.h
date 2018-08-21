/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDURLRequestPipelining, CKDOperationPipelining, OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKDPipeliningInfo : NSObject {

	id<CKDURLRequestPipelining> _request;
	id<CKDOperationPipelining> _operation;
	NSObject*<OS_dispatch_group> _perRequestCallbackGroup;
	NSObject*<OS_dispatch_group> _perRequestGroup;
	NSObject*<OS_dispatch_queue> _perRequestCallbackQueue;
	NSMutableArray* _perRequestCallbackBlocks;

}

@property (nonatomic,retain) NSMutableArray * perRequestCallbackBlocks;                         //@synthesize perRequestCallbackBlocks=_perRequestCallbackBlocks - In the implementation block
@property (nonatomic,retain) id<CKDURLRequestPipelining> request;                               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<CKDOperationPipelining> operation;                       //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> perRequestCallbackGroup;              //@synthesize perRequestCallbackGroup=_perRequestCallbackGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> perRequestGroup;                      //@synthesize perRequestGroup=_perRequestGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> perRequestCallbackQueue;              //@synthesize perRequestCallbackQueue=_perRequestCallbackQueue - In the implementation block
-(void)setRequest:(id<CKDURLRequestPipelining>)arg1 ;
-(id<CKDOperationPipelining>)operation;
-(void)setOperation:(id<CKDOperationPipelining>)arg1 ;
-(id<CKDURLRequestPipelining>)request;
-(id)initWithRequest:(id)arg1 operation:(id)arg2 ;
-(void)addPerRequestCallbackBlock:(/*^block*/id)arg1 ;
-(void)disablePerRequestCallbackBlocks;
-(void)cancelAndDisablePerRequestCallbackBlocks;
-(NSObject*<OS_dispatch_group>)perRequestCallbackGroup;
-(void)setPerRequestCallbackGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)perRequestGroup;
-(void)setPerRequestGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_queue>)perRequestCallbackQueue;
-(void)setPerRequestCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)perRequestCallbackBlocks;
-(void)setPerRequestCallbackBlocks:(NSMutableArray *)arg1 ;
@end

