/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup, NSString, CKRecord, NSData, HMDBackingStoreModelObject;

@interface HMDBackingStoreCacheUpdateRecordOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	HMDBackingStoreCacheShareGroup* _share;
	NSString* _recordName;
	CKRecord* _record;
	NSData* _data;
	HMDBackingStoreModelObject* _model;
	unsigned long long _encoding;

}

@property (readonly) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (readonly) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (readonly) NSString * recordName;                               //@synthesize recordName=_recordName - In the implementation block
@property (readonly) CKRecord * record;                                   //@synthesize record=_record - In the implementation block
@property (readonly) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (readonly) HMDBackingStoreModelObject * model;                  //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long encoding;                         //@synthesize encoding=_encoding - In the implementation block
-(NSData *)data;
-(HMDBackingStoreModelObject *)model;
-(HMDBackingStoreCacheGroup *)group;
-(HMDBackingStoreCacheShareGroup *)share;
-(CKRecord *)record;
-(NSString *)recordName;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 share:(id)arg2 name:(id)arg3 record:(id)arg4 data:(id)arg5 encoding:(unsigned long long)arg6 model:(id)arg7 resultBlock:(/*^block*/id)arg8 ;
-(unsigned long long)encoding;
-(id)initWithGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 resultBlock:(/*^block*/id)arg5 ;
-(id)initWithShareGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 resultBlock:(/*^block*/id)arg5 ;
-(id)initWithGroup:(id)arg1 record:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)initWithShareGroup:(id)arg1 record:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 name:(id)arg2 model:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(id)initWithShareGroup:(id)arg1 name:(id)arg2 model:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
@end

