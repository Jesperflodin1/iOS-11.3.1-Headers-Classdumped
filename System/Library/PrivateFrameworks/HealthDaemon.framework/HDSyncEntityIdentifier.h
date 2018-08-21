/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HDSyncEntityIdentifier : NSObject <NSCopying, NSSecureCoding> {

	long long _entityIdentifier;
	NSString* _schemaIdentifier;

}

@property (nonatomic,readonly) long long entityIdentifier;                    //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * schemaIdentifier;              //@synthesize schemaIdentifier=_schemaIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identifierWithSchema:(id)arg1 entity:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)entityIdentifier;
-(id)initWithEntityIdentifier:(long long)arg1 schemaIdentifier:(id)arg2 ;
-(id)initWithCodableEntityIdentifier:(id)arg1 ;
-(id)codableEntityIdentifier;
-(NSString *)schemaIdentifier;
@end

