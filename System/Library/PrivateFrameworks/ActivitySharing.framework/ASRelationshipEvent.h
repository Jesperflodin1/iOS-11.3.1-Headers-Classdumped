/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, ASCodableRelationshipEvent;

@interface ASRelationshipEvent : NSObject <NSCopying, NSSecureCoding> {

	long long _version;
	long long _type;
	unsigned long long _anchor;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) ASCodableRelationshipEvent * codableRelationshipEvent; 
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long type;                                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long anchor;                                            //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_relationshipEventWithCodable:(id)arg1 ;
+(id)relationshipEventWithRecord:(id)arg1 ;
+(id)relationshipEventWithCodableRelationshipEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSDate *)timestamp;
-(void)setType:(long long)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(unsigned long long)anchor;
-(void)setAnchor:(unsigned long long)arg1 ;
-(id)_codableRelationshipEvent;
-(ASCodableRelationshipEvent *)codableRelationshipEvent;
-(BOOL)isEqualToRelationshipEvent:(id)arg1 ;
@end
