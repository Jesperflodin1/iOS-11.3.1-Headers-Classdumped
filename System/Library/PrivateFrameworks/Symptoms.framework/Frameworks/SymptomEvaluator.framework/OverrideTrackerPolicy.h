/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {

	NSMutableDictionary* _maxConnectionPolicyOverrides;
	NSMutableDictionary* _maxRRCTimePolicyOverrides;

}
+(id)sharedInstance;
-(id)init;
-(id)maxConnectionPolicyForTarget:(id)arg1 ;
-(id)maxRRCTimePolicyForTarget:(id)arg1 ;
@end
