/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface SGQPDatabaseMigrations : NSObject {

	NSDictionary* _migrations;

}

@property (nonatomic,readonly) NSDictionary * migrations;                  //@synthesize migrations=_migrations - In the implementation block
@property (nonatomic,readonly) unsigned long long maxVersion; 
+(id)mockMigrationsByAddingQueries:(id)arg1 ;
-(id)init;
-(unsigned long long)maxVersion;
-(id)initWithMigrations:(id)arg1 ;
-(NSDictionary *)migrations;
@end

