/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSObject;

@interface PPScoredItem : NSObject <NSCopying> {

	NSObject*<NSCopying> _item;
	double _score;

}

@property (nonatomic,readonly) NSObject*<NSCopying> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) double score;                           //@synthesize score=_score - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSObject*<NSCopying>)item;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)score;
-(BOOL)isEqualToScoredItem:(id)arg1 ;
-(id)initWithItem:(id)arg1 score:(double)arg2 ;
@end
