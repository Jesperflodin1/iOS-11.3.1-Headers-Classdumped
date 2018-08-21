/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSString;

@interface FAAddFamilyMemberRequest : FAFamilyCircleRequest {

	BOOL _memberIsUnder13;
	NSString* _memberAppleID;
	NSString* _memberPassword;

}

@property (copy,readonly) NSString * memberAppleID;               //@synthesize memberAppleID=_memberAppleID - In the implementation block
@property (copy,readonly) NSString * memberPassword;              //@synthesize memberPassword=_memberPassword - In the implementation block
@property (readonly) BOOL memberIsUnder13;                        //@synthesize memberIsUnder13=_memberIsUnder13 - In the implementation block
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)memberAppleID;
-(NSString *)memberPassword;
-(BOOL)memberIsUnder13;
-(id)initWithFamilyMemberAppleID:(id)arg1 password:(id)arg2 isUnder13:(BOOL)arg3 ;
@end

