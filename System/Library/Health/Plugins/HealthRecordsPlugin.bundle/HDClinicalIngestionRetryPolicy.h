/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSError;

@interface HDClinicalIngestionRetryPolicy : NSObject <NSCopying, NSMutableCopying> {

	BOOL _requiresNetwork;
	NSArray* _accountIdentifiers;
	NSError* _underlyingError;
	long long _retryInterval;

}

@property (nonatomic,copy,readonly) NSArray * accountIdentifiers;              //@synthesize accountIdentifiers=_accountIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSError * underlyingError;                 //@synthesize underlyingError=_underlyingError - In the implementation block
@property (nonatomic,readonly) long long retryInterval;                        //@synthesize retryInterval=_retryInterval - In the implementation block
@property (nonatomic,readonly) BOOL requiresNetwork;                           //@synthesize requiresNetwork=_requiresNetwork - In the implementation block
-(id)initWithRetryInterval:(long long)arg1 accountIdentifiers:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)accountIdentifiers;
-(long long)retryInterval;
-(BOOL)requiresNetwork;
-(NSError *)underlyingError;
@end

