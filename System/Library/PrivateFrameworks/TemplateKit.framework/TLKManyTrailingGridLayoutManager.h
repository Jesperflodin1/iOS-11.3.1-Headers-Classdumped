/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKGridLayoutManager.h>

@interface TLKManyTrailingGridLayoutManager : TLKGridLayoutManager {

	NSRange _ignoreRange;

}

@property (assign) NSRange ignoreRange;              //@synthesize ignoreRange=_ignoreRange - In the implementation block
+(id)computeTruncationForAlignments:(id)arg1 indexForFirstTrailingColumn:(unsigned long long)arg2 totalEqualColumns:(unsigned long long)arg3 ;
-(CGSize)sizeForFittingSize:(CGSize)arg1 forRow:(id)arg2 ;
-(double)gridArrangement:(id)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double*)arg3 ;
-(void)setIgnoreRange:(NSRange)arg1 ;
-(NSRange)ignoreRange;
@end

