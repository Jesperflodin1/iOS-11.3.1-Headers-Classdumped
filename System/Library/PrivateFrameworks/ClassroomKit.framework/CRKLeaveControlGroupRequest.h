/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray;

@interface CRKLeaveControlGroupRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _groupIdentifier;
	NSArray* _leaderIdentifiers;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * leaderIdentifiers;                                //@synthesize leaderIdentifiers=_leaderIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGroupIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(DMFControlGroupIdentifier *)groupIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)leaderIdentifiers;
-(void)setLeaderIdentifiers:(NSArray *)arg1 ;
@end

