/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContainerPredicate.h>

@class NSString;

@interface CNiOSABContainerOfGroupPredicate : CNPredicate <CNiOSContainerPredicate> {

	NSString* _groupIdentifier;

}

@property (nonatomic,copy,readonly) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)groupIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(CFArrayRef)cn_copyContainersInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(BOOL)includesDisabledContainers;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
@end

