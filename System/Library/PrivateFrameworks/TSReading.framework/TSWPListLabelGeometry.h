/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPListLabelGeometry : NSObject {

	double mScale;
	double mBaselineOffset;
	BOOL mScaleWithText;

}

@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double baselineOffset; 
@property (assign,nonatomic) BOOL scaleWithText; 
+(id)listLabelGeometry;
-(double)scale;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setScale:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(id)initWithScale:(double)arg1 scaleWithText:(BOOL)arg2 baselineOffset:(double)arg3 ;
-(BOOL)scaleWithText;
-(void)setScaleWithText:(BOOL)arg1 ;
@end

