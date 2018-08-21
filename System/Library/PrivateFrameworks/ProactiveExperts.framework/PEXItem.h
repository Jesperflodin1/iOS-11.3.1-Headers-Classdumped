/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperts/ProactiveExperts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PEXItem : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _source;
	unsigned char _changeType;
	NSString* _identifier;
	double _score;
	NSString* _sourceIdentifier;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double score;                             //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned char source;                     //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned char changeType;                 //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)itemWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 changeType:(unsigned char)arg4 ;
+(id)itemWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 ;
-(void)setScore:(double)arg1 ;
-(NSString *)sourceIdentifier;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setSource:(unsigned char)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)source;
-(double)score;
-(id)initWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 changeType:(unsigned char)arg4 ;
-(id)initWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 ;
-(BOOL)hasScoreSimilarToItem:(id)arg1 ;
-(unsigned char)changeType;
-(BOOL)isEqualToItem:(id)arg1 ;
-(void)setChangeType:(unsigned char)arg1 ;
@end

