/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNReputationHandle : NSObject <NSCopying> {

	NSString* _stringValue;
	long long _type;

}

@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
+(id)handleWithStringValue:(id)arg1 ;
+(id)handleWithEmailAddress:(id)arg1 ;
+(id)handleWithPhoneNumber:(id)arg1 ;
+(id)descriptionForType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)configureBuilder:(id)arg1 ;
-(id)initWithStringValue:(id)arg1 type:(long long)arg2 ;
@end
