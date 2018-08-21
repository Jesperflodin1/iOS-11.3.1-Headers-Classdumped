/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, DMFControlGroupIdentifier, NSData;

@interface CRKSetUserPropertiesRequest : CATTaskRequest {

	NSString* _userIdentifier;
	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _displayName;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _phoneticGivenName;
	NSString* _phoneticFamilyName;
	NSString* _userSource;
	NSData* _imageData;

}

@property (nonatomic,copy) NSString * userIdentifier;                                   //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * givenName;                                        //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                                       //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * phoneticGivenName;                                //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,copy) NSString * phoneticFamilyName;                               //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (nonatomic,copy) NSString * userSource;                                       //@synthesize userSource=_userSource - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                          //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)familyName;
-(NSString *)displayName;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)imageData;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSString *)userSource;
-(void)setUserSource:(NSString *)arg1 ;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(NSString *)givenName;
-(NSString *)phoneticFamilyName;
-(NSString *)phoneticGivenName;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(id)initWithUser:(id)arg1 ;
@end

