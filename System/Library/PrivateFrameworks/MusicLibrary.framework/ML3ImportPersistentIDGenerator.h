/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3PersistentIDGenerator.h>

@class NSMutableDictionary;

@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator {

	NSMutableDictionary* _pregeneratedIdMappings;

}
-(id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2 ;
-(void)addIdMapping:(id)arg1 forProperty:(unsigned)arg2 ;
-(long long)nextPersistentIDForImportItem:(shared_ptr<ML3ImportItem>*)arg1 ;
-(void)removePersistentIDFromIdMapping:(long long)arg1 ;
@end

