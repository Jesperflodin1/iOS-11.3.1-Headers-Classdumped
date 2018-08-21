/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFSearchSuggestion.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFSearchSuggestion <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * suggestion; 
@property (nonatomic,copy) NSString * query; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSArray * duplicateSuggestions; 
@property (nonatomic,copy) NSString * topicIdentifier; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (assign,nonatomic) BOOL previouslyEngaged; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setQuery:(id)arg1;
-(void)setScore:(double)arg1;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(NSString *)query;
-(void)setType:(int)arg1;
-(int)type;
-(void)setIdentifier:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBundleIdentifier:(id)arg1;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(id)arg1;
-(NSString *)topicIdentifier;
-(BOOL)previouslyEngaged;
-(void)setPreviouslyEngaged:(BOOL)arg1;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(void)setTopicIdentifier:(id)arg1;
-(double)score;
-(NSString *)suggestion;
-(void)setSuggestion:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFSearchSuggestion : NSObject <SFSearchSuggestion, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	BOOL _previouslyEngaged;
	int _type;
	NSString* _identifier;
	NSString* _suggestion;
	NSString* _query;
	double _score;
	NSArray* _duplicateSuggestions;
	NSString* _topicIdentifier;
	NSString* _bundleIdentifier;
	NSString* _fbr;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * suggestion;                                    //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy) NSString * query;                                         //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) double score;                                           //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * duplicateSuggestions;                           //@synthesize duplicateSuggestions=_duplicateSuggestions - In the implementation block
@property (nonatomic,copy) NSString * topicIdentifier;                               //@synthesize topicIdentifier=_topicIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL previouslyEngaged;                                 //@synthesize previouslyEngaged=_previouslyEngaged - In the implementation block
@property (nonatomic,copy) NSString * fbr;                                           //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(void)setQuery:(NSString *)arg1 ;
-(BOOL)hasType;
-(void)setScore:(double)arg1 ;
-(BOOL)hasScore;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(NSString *)query;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(int)arg5 ;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(NSArray *)arg1 ;
-(NSString *)topicIdentifier;
-(BOOL)previouslyEngaged;
-(void)setPreviouslyEngaged:(BOOL)arg1 ;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(BOOL)hasPreviouslyEngaged;
-(id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 type:(int)arg4 ;
-(void)setTopicIdentifier:(NSString *)arg1 ;
-(double)score;
-(NSString *)suggestion;
-(void)setSuggestion:(NSString *)arg1 ;
-(NSData *)jsonData;
@end

