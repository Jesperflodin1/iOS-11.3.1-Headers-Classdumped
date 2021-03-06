/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSURegressionModel.h>

@class NSMutableArray;

@interface TSUPolynomialRegressionModel : TSURegressionModel {

	double* mCoefficients;
	int mNumCoefficients;
	BOOL mAffine;
	double mIntercept;
	double mRSquared;
	int mNumSuperscriptRanges;
	NSMutableArray* mSuperscriptRangesArray;

}
-(void)dealloc;
-(int)regressionType;
-(int)numCoefficients;
-(double)coefficientAtIndex:(int)arg1 ;
-(double)rSquared;
-(double)estimateForX:(double*)arg1 ;
-(id)getEquationStringAndBuildSuperscriptRangesArray;
-(int)numSuperscriptRanges;
-(NSRange)superscriptRangeAtIndex:(int)arg1 ;
-(id)initWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xOrder:(int)arg4 makeAffine:(BOOL)arg5 desiredIntercept:(double)arg6 ;
-(double)estimateFor1DX:(double)arg1 ;
-(id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xOrder:(int)arg4 ;
-(id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xOrder:(int)arg4 desiredIntercept:(double)arg5 ;
@end

