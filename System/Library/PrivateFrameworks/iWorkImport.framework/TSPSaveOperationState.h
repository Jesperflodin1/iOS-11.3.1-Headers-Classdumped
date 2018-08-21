/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSHashTable;

@interface TSPSaveOperationState : NSObject {

	NSMapTable* _newDataStorages;
	NSHashTable* _remoteData;
	int _sampleID;
	long long _updateType;

}

@property (nonatomic,readonly) BOOL shouldUpdate; 
@property (nonatomic,readonly) BOOL preserveDocumentUUID; 
@property (nonatomic,readonly) long long updateType;                   //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteData; 
@property (assign,nonatomic) int sampleID;                             //@synthesize sampleID=_sampleID - In the implementation block
-(BOOL)preserveDocumentUUID;
-(BOOL)hasRemoteData;
-(void)addRemoteData:(id)arg1 ;
-(id)init;
-(id)initWithUpdateType:(long long)arg1 ;
-(void)addNewStorage:(id)arg1 forData:(id)arg2 ;
-(BOOL)hasNewStorageForData:(id)arg1 ;
-(void)enumerateDatasAndStoragesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldUpdate;
-(long long)updateType;
-(int)sampleID;
-(void)setSampleID:(int)arg1 ;
@end

