/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, GEOSQLiteDB;

@interface GEOLocationShifterPersistence : NSObject {

	NSString* _dbPath;
	GEOSQLiteDB* _db;

}
+(id)sharedPersister;
-(void)tearDown;
-(void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2 ;
-(void)storeResponse:(id)arg1 ;
-(void)findResponseForCoordinate:(SCD_Struct_GE29)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllEntries;
-(id)initWithDBFilePath:(id)arg1 ;
-(BOOL)_setup:(id)arg1 ;
-(void)findExactResponseForCoordinate:(SCD_Struct_GE29)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_findResponseForCoordinate:(SCD_Struct_GE29)arg1 usingStatement:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
