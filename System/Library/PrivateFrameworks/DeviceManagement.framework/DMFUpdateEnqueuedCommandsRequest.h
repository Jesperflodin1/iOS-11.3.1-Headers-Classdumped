/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSArray;

@interface DMFUpdateEnqueuedCommandsRequest : CATTaskRequest {

	NSString* _organizationIdentifier;
	NSArray* _addCommands;
	NSArray* _removeCommands;

}

@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * addCommands;                          //@synthesize addCommands=_addCommands - In the implementation block
@property (nonatomic,copy) NSArray * removeCommands;                       //@synthesize removeCommands=_removeCommands - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSArray *)addCommands;
-(NSArray *)removeCommands;
-(void)setAddCommands:(NSArray *)arg1 ;
-(void)setRemoveCommands:(NSArray *)arg1 ;
@end
