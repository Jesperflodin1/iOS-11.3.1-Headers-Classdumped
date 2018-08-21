/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class ML3SpotlightNameCache, NSArray, NSString;

@interface ML3SpotlightMatchPredicate : ML3Predicate {

	ML3SpotlightNameCache* _names;
	NSArray* _searchProperties;
	NSString* _searchString;

}

@property (nonatomic,readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
+(id)predicateWithProperties:(id)arg1 searchString:(id)arg2 ;
-(void)dealloc;
-(NSString *)searchString;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)spotlightPredicate;
-(id)initWithSearchString:(id)arg1 matchingProperties:(id)arg2 ;
@end

