/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface HDCloudSyncOwnerIdentifier : NSObject {

	NSString* _deviceIdentifier;
	NSUUID* _databaseIdentifier;
	NSString* _ownerDifferentiator;
	NSString* _ownerIdentifierString;

}

@property (nonatomic,readonly) NSString * string; 
+(void)ownerIdentifierForSyncContainer:(id)arg1 profile:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_databaseUUIDForProfile:(id)arg1 error:(id*)arg2 ;
-(NSString *)string;
-(id)initWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3 ;
@end

