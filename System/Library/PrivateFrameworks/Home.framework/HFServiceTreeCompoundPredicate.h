/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFServiceTreeMatching.h>

@protocol HFServiceTreeMatching;
@class NSArray, NSString;

@interface HFServiceTreeCompoundPredicate : NSObject <HFServiceTreeMatching> {

	id<HFServiceTreeMatching> _rootServicePredicate;
	NSArray* _childServicePredicates;

}

@property (nonatomic,readonly) id<HFServiceTreeMatching> rootServicePredicate;              //@synthesize rootServicePredicate=_rootServicePredicate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childServicePredicates;                       //@synthesize childServicePredicates=_childServicePredicates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithRootServicePredicate:(id)arg1 childServicePredicates:(id)arg2 ;
-(id)matchingServicesForRootService:(id)arg1 ;
-(id<HFServiceTreeMatching>)rootServicePredicate;
-(NSArray *)childServicePredicates;
@end

