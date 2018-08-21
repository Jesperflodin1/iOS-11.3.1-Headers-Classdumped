/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SOSContact : NSObject {

	NSString* _name;
	NSString* _phoneNumber;
	NSString* _nameContactIdentifier;
	NSString* _phoneNumberContactIdentifier;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * nameContactIdentifier;                     //@synthesize nameContactIdentifier=_nameContactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberContactIdentifier;              //@synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier - In the implementation block
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)phoneNumber;
-(NSString *)nameContactIdentifier;
-(NSString *)phoneNumberContactIdentifier;
-(void)setNameContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberContactIdentifier:(NSString *)arg1 ;
@end
