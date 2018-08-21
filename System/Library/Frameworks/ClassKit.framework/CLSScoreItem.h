/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSActivityItem.h>

@interface CLSScoreItem : CLSActivityItem {

	double __score;
	double __maxScore;

}

@property (assign,nonatomic) double _score;                 //@synthesize _score=__score - In the implementation block
@property (assign,nonatomic) double _maxScore;              //@synthesize _maxScore=__maxScore - In the implementation block
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) double maxScore; 
+(BOOL)supportsSecureCoding;
-(void)setScore:(double)arg1 ;
-(double)_maxScore;
-(double)_score;
-(double)maxScore;
-(void)setMaxScore:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
-(id)dictionaryRepresentation;
-(double)score;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 score:(double)arg3 maxScore:(double)arg4 ;
-(void)set_score:(double)arg1 ;
-(void)set_maxScore:(double)arg1 ;
@end

