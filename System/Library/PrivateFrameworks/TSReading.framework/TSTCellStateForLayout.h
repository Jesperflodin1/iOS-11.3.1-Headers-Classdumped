/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSTCell, TSWPColumn, TSTLayoutContentCachedKey;

@interface TSTCellStateForLayout : NSObject {

	BOOL mCellPropsRowHeight;
	BOOL mCellWraps;
	BOOL mForDrawing;
	BOOL mInDynamicLayout;
	SCD_Struct_TS139 mModelCellID;
	unsigned mVerticalAlignment;
	int mLayoutCacheFlags;
	TSTCell* mCell;
	SCD_Struct_TS140 mMergedRange;
	TSWPColumn* mWPColumn;
	id mCellContents;
	TSTLayoutContentCachedKey* mKeyVal;
	unsigned long long mPageNumber;
	unsigned long long mPageCount;
	CGSize mMinSize;
	CGSize mMaxSize;
	UIEdgeInsets mPaddingInsets;

}

@property (assign,nonatomic) SCD_Struct_TS139 modelCellID; 
@property (nonatomic,copy) TSTCell * cell; 
@property (assign,nonatomic) SCD_Struct_TS141 mergedRange; 
@property (nonatomic,retain) id cellContents; 
@property (assign,nonatomic) CGSize minSize; 
@property (assign,nonatomic) CGSize maxSize; 
@property (assign,nonatomic) UIEdgeInsets paddingInsets; 
@property (assign,nonatomic) unsigned verticalAlignment; 
@property (assign,nonatomic) BOOL cellPropsRowHeight; 
@property (assign,nonatomic) BOOL cellWraps; 
@property (assign,nonatomic) BOOL forDrawing; 
@property (assign,nonatomic) BOOL inDynamicLayout; 
@property (assign,nonatomic) int layoutCacheFlags; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) TSTLayoutContentCachedKey * keyVal; 
@property (nonatomic,retain) TSWPColumn * wpColumn; 
@property (assign,nonatomic) unsigned long long pageNumber; 
@property (assign,nonatomic) unsigned long long pageCount; 
-(id)init;
-(void)dealloc;
-(TSTCell *)cell;
-(void)setCell:(TSTCell *)arg1 ;
-(CGSize)maxSize;
-(UIEdgeInsets)paddingInsets;
-(void)setPaddingInsets:(UIEdgeInsets)arg1 ;
-(CGSize)minSize;
-(BOOL)hasContent;
-(unsigned long long)pageCount;
-(unsigned)verticalAlignment;
-(void)setVerticalAlignment:(unsigned)arg1 ;
-(void)setPageCount:(unsigned long long)arg1 ;
-(unsigned long long)pageNumber;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setPageNumber:(unsigned long long)arg1 ;
-(void)setModelCellID:(SCD_Struct_TS139)arg1 ;
-(void)setCellPropsRowHeight:(BOOL)arg1 ;
-(void)setCellWraps:(BOOL)arg1 ;
-(void)setForDrawing:(BOOL)arg1 ;
-(void)setMergedRange:(SCD_Struct_TS141)arg1 ;
-(void)setInDynamicLayout:(BOOL)arg1 ;
-(void)setCellContents:(id)arg1 ;
-(void)setLayoutCacheFlags:(int)arg1 ;
-(TSWPColumn *)wpColumn;
-(TSTLayoutContentCachedKey *)keyVal;
-(int)layoutCacheFlags;
-(id)cellContents;
-(SCD_Struct_TS139)modelCellID;
-(BOOL)cellWraps;
-(void)setKeyVal:(TSTLayoutContentCachedKey *)arg1 ;
-(void)setWpColumn:(TSWPColumn *)arg1 ;
-(SCD_Struct_TS141)mergedRange;
-(BOOL)cellPropsRowHeight;
-(BOOL)forDrawing;
-(BOOL)inDynamicLayout;
@end

