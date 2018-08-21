/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, SGName, NSArray;

@interface SGContact : NSObject <NSCopying, NSSecureCoding> {

	SGRecordId* _recordId;
	SGName* _name;
	NSArray* _emailAddresses;
	NSArray* _phones;
	NSArray* _postalAddresses;
	NSArray* _instantMessageAddresses;
	NSArray* _socialProfiles;
	unsigned long long _significance;

}

@property (nonatomic,copy) SGName * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * emailAddresses;                       //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy) NSArray * phones;                               //@synthesize phones=_phones - In the implementation block
@property (nonatomic,copy) NSArray * postalAddresses;                      //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,copy) NSArray * instantMessageAddresses;              //@synthesize instantMessageAddresses=_instantMessageAddresses - In the implementation block
@property (nonatomic,copy) NSArray * socialProfiles;                       //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (assign,nonatomic) unsigned long long significance;              //@synthesize significance=_significance - In the implementation block
@property (nonatomic,readonly) SGRecordId * recordId;                      //@synthesize recordId=_recordId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 ;
+(id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 ;
-(unsigned long long)significance;
-(void)setSignificance:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(SGName *)arg1 ;
-(SGName *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(NSArray *)phones;
-(NSArray *)socialProfiles;
-(NSArray *)postalAddresses;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(id)initWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 ;
-(BOOL)isEqualToContact:(id)arg1 ;
-(NSArray *)instantMessageAddresses;
-(id)addresses;
-(NSArray *)emailAddresses;
-(id)cnContact;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
-(SGRecordId *)recordId;
-(id)detailForRecordId:(id)arg1 ;
-(BOOL)hasNonTrivialInfo;
-(void)setInstantMessageAddresses:(NSArray *)arg1 ;
-(BOOL)containsSuggestions;
-(unsigned long long)richness;
@end

