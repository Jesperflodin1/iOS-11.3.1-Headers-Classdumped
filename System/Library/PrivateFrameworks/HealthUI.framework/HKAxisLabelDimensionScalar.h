/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKAxisLabelDimension.h>

@class NSNumberFormatter, NSString;

@interface HKAxisLabelDimensionScalar : NSObject <HKAxisLabelDimension> {

	NSNumberFormatter* _formatter;
	NSString* _negativeZeroString;

}

@property (nonatomic,retain) NSNumberFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) NSString * negativeZeroString;              //@synthesize negativeZeroString=_negativeZeroString - In the implementation block
+(long long)_fractionDigitsForStep:(double)arg1 ;
-(NSNumberFormatter *)formatter;
-(void)setFormatter:(NSNumberFormatter *)arg1 ;
-(id)init;
-(double)niceStepSizeLargerThan:(double)arg1 ;
-(double)ticksPerStepSize:(double)arg1 ;
-(void)setStepSizeForLabels:(double)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(NSString *)negativeZeroString;
-(void)setNegativeZeroString:(NSString *)arg1 ;
@end

