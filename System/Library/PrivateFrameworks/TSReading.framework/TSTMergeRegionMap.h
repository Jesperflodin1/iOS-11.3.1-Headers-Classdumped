/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>

@interface TSTMergeRegionMap : TSPObject {

	hash_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >* mCellIDToMergeRegionTopLeft;
	hash_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowSize> > >* mMergeRegionTopLeftToMergeRegionSize;
	SCD_Struct_TS140 mUnionedMergeRange;

}
+(id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(SCD_Struct_TS141)arg2 ;
-(unsigned long long)count;
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(SCD_Struct_TS141)mergedRangeForCellID:(SCD_Struct_TS139)arg1 ;
-(id)iterator;
-(BOOL)partiallyIntersectsCellRange:(SCD_Struct_TS141)arg1 ;
-(BOOL)remove:(SCD_Struct_TS141)arg1 ;
-(BOOL)insert:(SCD_Struct_TS141)arg1 ;
-(id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2 ;
-(SCD_Struct_TS141)unionedMergeRange;
-(id)mergedGridIndicesForDimension:(int)arg1 ;
-(id)initRegionMapFromMap:(id)arg1 intersectingRange:(SCD_Struct_TS141)arg2 ;
-(BOOL)find:(SCD_Struct_TS141)arg1 ;
-(BOOL)partiallyIntersectsCellRegion:(id)arg1 ;
-(BOOL)hasRangeSpanningRows;
@end

