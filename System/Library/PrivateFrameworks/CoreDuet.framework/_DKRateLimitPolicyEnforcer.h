/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _DKRateLimitPolicyEnforcer : NSObject {

	NSDictionary* _eventStreamRateLimiters;

}
+(id)rateLimitPolicyEnforcer;
-(id)init;
-(id)filterObjectsByEnforcingRateLimit:(id)arg1 ;
-(void)creditForDeletion:(id)arg1 ;
@end

