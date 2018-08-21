/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>

@class CNSocialProfile;

@interface CNSocialProfileContactPredicate : CNPredicate {

	CNSocialProfile* _socialProfile;

}

@property (nonatomic,copy,readonly) CNSocialProfile * socialProfile;              //@synthesize socialProfile=_socialProfile - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithSocialProfile:(id)arg1 ;
-(CNSocialProfile *)socialProfile;
@end

