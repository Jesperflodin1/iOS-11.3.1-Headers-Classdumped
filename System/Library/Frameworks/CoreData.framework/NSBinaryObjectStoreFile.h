/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface NSBinaryObjectStoreFile : NSObject {

	int _databaseVersion;
	NSDictionary* _fullMetadata;
	unsigned long long _primaryKeyGeneration;
	NSMutableDictionary* _mapData;
	NSDictionary* _storeOptions;

}
-(BOOL)readMetadataFromFile:(id)arg1 securely:(BOOL)arg2 error:(id*)arg3 ;
-(id)fullMetadata;
-(void)setFullMetadata:(id)arg1 ;
-(BOOL)writeMetadataToFile:(id)arg1 error:(id*)arg2 ;
-(void)setDatabaseVersion:(int)arg1 ;
-(void)setPrimaryKeyGeneration:(unsigned long long)arg1 ;
-(void)setMapData:(id)arg1 ;
-(void)clearCurrentValues;
-(BOOL)readBinaryStoreFromData:(id)arg1 originalPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id*)arg4 ;
-(int)databaseVersion;
-(unsigned long long)primaryKeyGeneration;
-(id)mapData;
-(BOOL)readFromFile:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
@end

