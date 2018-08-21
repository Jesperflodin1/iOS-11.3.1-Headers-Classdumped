/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IDSKVStore;

@interface IMDReplayStorageController : NSObject {

	NSString* _filePath;
	IDSKVStore* _store;

}

@property (nonatomic,retain) IDSKVStore * store;                        //@synthesize store=_store - In the implementation block
@property (nonatomic,retain,readonly) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
-(void)dealloc;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)filePath;
-(IDSKVStore *)store;
-(BOOL)storeDictionary:(id)arg1 error:(id*)arg2 ;
-(id)copyNextBatchWithSize:(unsigned long long)arg1 iterationContext:(id*)arg2 ;
-(void)deleteReplayDB;
-(void)setStore:(IDSKVStore *)arg1 ;
@end

