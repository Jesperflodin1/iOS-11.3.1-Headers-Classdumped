/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ML3DatabaseConnection, NSObject, NSMutableDictionary;

@interface ML3AccountCacheDatabase : NSObject {

	ML3DatabaseConnection* _databaseConnection;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _appleIdCache;

}
-(id)init;
-(BOOL)_openDatabase;
-(id)_databasePath;
-(BOOL)_internalSetAppleID:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(BOOL)_clearCacheDatabase;
-(BOOL)_openDatabaseIsRetry:(BOOL)arg1 ;
-(BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(id)appleIDForDSID:(unsigned long long)arg1 ;
-(BOOL)_closeDatabase;
@end

