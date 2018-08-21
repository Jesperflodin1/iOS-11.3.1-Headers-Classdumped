/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, EAEmailAddressSet;

@interface EMVIP : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSString* _displayName;
	EAEmailAddressSet* _emailAddresses;

}

@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) EAEmailAddressSet * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)displayName;
-(EAEmailAddressSet *)emailAddresses;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 ;
@end
