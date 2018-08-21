/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, NSString;

@interface FBSceneDeactivationBand : NSObject <BSDescriptionProviding> {

	double _level;
	NSHashTable* _assertions;

}

@property (nonatomic,readonly) double level;                                   //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) unsigned long long assertionCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bandWithSceneLevel:(double)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(double)level;
-(unsigned long long)assertionCount;
-(void)addAssertion:(id)arg1 ;
-(id)initWithSceneLevel:(double)arg1 ;
-(unsigned long long)deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2 ;
-(void)removeAssertion:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end
