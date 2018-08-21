/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSNumber;

@interface MLClassifierLabelWithProbability : NSObject {

	id<NSCopying> _label;
	NSNumber* _probability;

}

@property (nonatomic,retain) id<NSCopying> label;                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSNumber * probability;              //@synthesize probability=_probability - In the implementation block
-(long long)compare:(id)arg1 ;
-(id<NSCopying>)label;
-(void)setLabel:(id<NSCopying>)arg1 ;
-(id)initWithLabel:(id)arg1 probability:(id)arg2 ;
-(NSNumber *)probability;
-(void)setProbability:(NSNumber *)arg1 ;
@end
