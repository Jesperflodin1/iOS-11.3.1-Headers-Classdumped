/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSDMatchingAlgorithm : NSObject {

	long long* mCostMatrix;
	char* mMaskMatrix;
	BOOL* mIsStarInColumn;
	BOOL* mIsStarInRow;
	BOOL* mIsColCovered;
	BOOL* mIsRowCovered;
	id* mObjectMapping;
	long long mMatrixDimension;
	long long mZ0Row;
	long long mZ0Col;
	NSMutableArray* mResults;

}
+(id)bestMatchesFromArray:(id)arg1 ;
-(BOOL)p_step4FindAZeroAndReturnRow:(int*)arg1 column:(int*)arg2 ;
-(int)p_step4IndexOfStarredZeroInRow:(int)arg1 ;
-(void)p_allocateMatrices;
-(int)p_doStep1;
-(int)p_doStep2;
-(int)p_doStep3;
-(int)p_doStep4;
-(int)p_doStep5;
-(int)p_doStep6;
-(void)p_deallocateMatrices;
-(id)p_bestMatchesFromArray:(id)arg1 ;
@end

