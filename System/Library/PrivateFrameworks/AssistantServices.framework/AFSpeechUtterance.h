/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechUtterance : NSObject <NSSecureCoding> {

	NSArray* _interpretationIndices;
	long long _confidenceScore;
	long long _source;

}

@property (nonatomic,copy) NSArray * interpretationIndices;              //@synthesize interpretationIndices=_interpretationIndices - In the implementation block
@property (assign,nonatomic) long long confidenceScore;                  //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (assign,nonatomic) long long source;                           //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setConfidenceScore:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(long long)confidenceScore;
-(NSArray *)interpretationIndices;
-(void)setInterpretationIndices:(NSArray *)arg1 ;
-(id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2 ;
@end

