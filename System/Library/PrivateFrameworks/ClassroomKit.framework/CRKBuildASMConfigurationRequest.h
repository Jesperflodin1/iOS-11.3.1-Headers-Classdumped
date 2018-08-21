/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSDictionary, DMFControlGroupIdentifier;

@interface CRKBuildASMConfigurationRequest : CATTaskRequest {

	NSDictionary* _existingASMConfiguration;
	DMFControlGroupIdentifier* _courseIdentifier;

}

@property (nonatomic,copy) NSDictionary * existingASMConfiguration;                     //@synthesize existingASMConfiguration=_existingASMConfiguration - In the implementation block
@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSDictionary *)existingASMConfiguration;
-(void)setExistingASMConfiguration:(NSDictionary *)arg1 ;
@end
