/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebDatabaseManager : NSObject
+(void)removeEmptyDatabaseFiles;
+(id)sharedWebDatabaseManager;
+(void)scheduleEmptyDatabaseRemoval;
-(id)origins;
-(id)databasesWithOrigin:(id)arg1 ;
-(id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2 ;
-(void)deleteAllDatabases;
-(BOOL)deleteOrigin:(id)arg1 ;
-(BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2 ;
-(void)deleteAllIndexedDatabases;
-(id)init;
@end

