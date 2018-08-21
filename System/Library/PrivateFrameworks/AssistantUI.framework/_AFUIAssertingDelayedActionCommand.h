/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SAUIDelayedActionCommand, BKSProcessAssertion;

@interface _AFUIAssertingDelayedActionCommand : NSObject {

	SAUIDelayedActionCommand* _command;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,readonly) SAUIDelayedActionCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BKSProcessAssertion * assertion;                 //@synthesize assertion=_assertion - In the implementation block
-(BKSProcessAssertion *)assertion;
-(SAUIDelayedActionCommand *)command;
-(id)initWithCommand:(id)arg1 assertion:(id)arg2 ;
@end

