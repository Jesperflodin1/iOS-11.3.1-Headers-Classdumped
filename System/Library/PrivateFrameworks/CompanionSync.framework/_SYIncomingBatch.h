/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SYBatchSyncChunk;

@interface _SYIncomingBatch : NSObject {

	SYBatchSyncChunk* _batch;
	/*^block*/id _completion;

}

@property (nonatomic,retain) SYBatchSyncChunk * batch;              //@synthesize batch=_batch - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(SYBatchSyncChunk *)batch;
-(void)setBatch:(SYBatchSyncChunk *)arg1 ;
@end

