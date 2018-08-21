/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface TSTCoordinateArray : NSObject {

	unsigned mOffset;
	unsigned mCount;
	double* mCoordinates;
	double mAverage;
	NSMutableIndexSet* mVisibleIndices;
	BOOL mLayoutDirectionIsLeftToRight;
	double mTableWidth;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)hasRightToLeftOrderingWithWidth:(double)arg1 ;
-(id)initWithCount:(unsigned)arg1 atOffset:(unsigned)arg2 ;
@end

