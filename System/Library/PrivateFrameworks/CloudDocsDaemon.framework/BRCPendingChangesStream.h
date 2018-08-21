/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSError, BRCPQLConnection, CKServerChangeToken, BRCClientZone;

@interface BRCPendingChangesStream : NSObject {

	NSURL* _databaseURL;
	NSError* _error;
	BRCPQLConnection* _db;
	CKServerChangeToken* _startingChangeToken;
	BRCClientZone* _clientZone;

}
-(void)_openDB;
-(void)dealloc;
-(id)initWithServerZone:(id)arg1 ;
-(BOOL)enumerateRecordsOfType:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)destroyDatabase;
-(void)fetchTokenState:(/*^block*/id)arg1 ;
-(BOOL)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(long long)arg5 syncStatus:(long long)arg6 ;
-(void)destroyDatabaseOnQueue:(BOOL)arg1 ;
-(void)_dbBecameCorrupted;
-(void)_createSchemaIfNecessary;
-(long long)_recordTypeFromRecordID:(id)arg1 isShare:(BOOL)arg2 isDelete:(BOOL)arg3 ;
-(void)_destroyDatabase;
-(id)saveError;
@end

