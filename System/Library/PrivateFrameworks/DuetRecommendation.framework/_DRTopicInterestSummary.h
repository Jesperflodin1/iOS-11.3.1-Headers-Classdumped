/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetRecommendation/DuetRecommendation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DRTopicInterestSummary : NSObject <NSCoding, NSCopying> {

	unsigned long long _topicSelectionsCount;
	unsigned long long _topicPresentationsCount;

}

@property (assign) unsigned long long topicPresentationsCount;              //@synthesize topicPresentationsCount=_topicPresentationsCount - In the implementation block
@property (assign) unsigned long long topicSelectionsCount;                 //@synthesize topicSelectionsCount=_topicSelectionsCount - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPresentationsCount:(unsigned long long)arg1 selectionsCount:(unsigned long long)arg2 ;
-(unsigned long long)topicSelectionsCount;
-(unsigned long long)topicPresentationsCount;
-(void)setTopicPresentationsCount:(unsigned long long)arg1 ;
-(void)setTopicSelectionsCount:(unsigned long long)arg1 ;
@end

