/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPostalAddress.h>

@class NSString;

@interface CNMutablePostalAddress : CNPostalAddress

@property (nonatomic,copy) NSString * formattedAddress; 
@property (nonatomic,copy) NSString * street; 
@property (nonatomic,copy) NSString * subLocality; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * subAdministrativeArea; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * country; 
@property (nonatomic,copy) NSString * ISOCountryCode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
@end

