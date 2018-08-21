/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcess;
@class NSString, FBSProcessExecutionPolicy, BKSProcessAssertion;

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding> {

	NSString* _name;
	id<FBSProcess> _process;
	FBSProcessExecutionPolicy* _policy;
	unsigned long long _activationCount;
	BOOL _invalidated;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,retain,readonly) BKSProcessAssertion * assertion;                 //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,readonly) unsigned long long activationCount;                     //@synthesize activationCount=_activationCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcess> process;                          //@synthesize process=_process - In the implementation block
@property (nonatomic,retain,readonly) FBSProcessExecutionPolicy * policy;              //@synthesize policy=_policy - In the implementation block
@property (getter=isActivated,nonatomic,readonly) BOOL activated; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                  //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidateAssertion:(id)arg1 ;
-(id<FBSProcess>)process;
-(void)invalidate;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)deactivate;
-(void)activate;
-(BOOL)isInvalidated;
-(unsigned long long)activationCount;
-(BKSProcessAssertion *)assertion;
-(FBSProcessExecutionPolicy *)policy;
-(BOOL)isActivated;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

