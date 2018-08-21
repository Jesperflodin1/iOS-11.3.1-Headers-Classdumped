/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCKDatabase;

@interface IDSCloudKitTransportLog : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCKDatabase* _database;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) IDSCKDatabase * database;                        //@synthesize database=_database - In the implementation block
+(id)_messageFromRecord:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDatabase:(id)arg1 queue:(id)arg2 ;
-(id)_recordIDsToFetch;
-(id)_transportRecordZoneID;
-(void)fetchChangesSinceToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createZone:(/*^block*/id)arg1 ;
-(void)dropZone:(/*^block*/id)arg1 ;
-(void)disabled_fetchChangesSinceToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(IDSCKDatabase *)database;
@end

