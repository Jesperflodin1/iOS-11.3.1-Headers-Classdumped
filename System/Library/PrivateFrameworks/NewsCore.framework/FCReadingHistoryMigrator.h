/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCKeyValueStoreMigrating.h>

@class NSString;

@interface FCReadingHistoryMigrator : NSObject <FCKeyValueStoreMigrating>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)keyValueStore:(id)arg1 canMigrateFromVersion:(unsigned long long)arg2 ;
-(id)keyValueStore:(id)arg1 migrateObject:(id)arg2 forKey:(id)arg3 fromVersion:(unsigned long long)arg4 ;
@end

