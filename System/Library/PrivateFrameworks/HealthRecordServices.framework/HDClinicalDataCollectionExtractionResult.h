/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSNumber;

@interface HDClinicalDataCollectionExtractionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _redactedResources;
	NSNumber* _rulesVersion;

}

@property (nonatomic,copy,readonly) NSArray * redactedResources;              //@synthesize redactedResources=_redactedResources - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rulesVersion;                  //@synthesize rulesVersion=_rulesVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)rulesVersion;
-(id)initWithRedactedResources:(id)arg1 rulesVersion:(id)arg2 ;
-(NSArray *)redactedResources;
@end

