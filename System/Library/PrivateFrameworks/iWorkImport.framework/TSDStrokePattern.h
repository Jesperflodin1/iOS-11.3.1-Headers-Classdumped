/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <iWorkImport/TSDMixing.h>

@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing> {

	double mPattern[6];
	unsigned long long mCount;
	double mPhase;
	int mType;

}

@property (nonatomic,readonly) int patternType; 
@property (nonatomic,readonly) double* pattern; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) double phase; 
@property (nonatomic,readonly) BOOL isDash; 
@property (nonatomic,readonly) BOOL isRoundDash; 
+(id)strokePatternWithPattern:(const double*)arg1 count:(unsigned long long)arg2 phase:(double)arg3 ;
+(id)solidPattern;
+(id)emptyPattern;
+(id)shortDashPattern;
+(id)mediumDashPattern;
+(id)longDashPattern;
+(id)roundDashPattern;
+(id)roundDashPatternWithSpacing:(double)arg1 ;
+(id)dashPatternWithSpacing:(double)arg1 ;
-(void)saveToArchive:(StrokePatternArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const StrokePatternArchive*)arg1 unarchiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)p_patternString;
-(id)p_typeString;
-(double)p_renderableLengthForUnclippedPatternWithLineWidth:(double)arg1 withinAvailableLength:(double)arg2 ;
-(unsigned long long)count;
-(double)phase;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double*)pattern;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)p_initWithType:(int)arg1 pattern:(const double*)arg2 count:(unsigned long long)arg3 phase:(double)arg4 ;
-(id)initWithPattern:(const double*)arg1 count:(unsigned long long)arg2 phase:(double)arg3 ;
-(int)patternType;
-(void)i_applyToContext:(CGContextRef)arg1 lineWidth:(double)arg2 capStyle:(unsigned long long*)arg3 ;
-(BOOL)isRoundDash;
-(void)p_applyToCAShapeLayer:(id)arg1 lineWidth:(double)arg2 ;
-(BOOL)isDash;
-(void)applyToContext:(CGContextRef)arg1 lineWidth:(double)arg2 ;
-(void)applyToCAShapeLayer:(id)arg1 ;
@end
