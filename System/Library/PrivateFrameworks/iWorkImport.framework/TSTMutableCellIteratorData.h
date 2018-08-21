/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellIteratorData.h>

@class TSTCell, NSString;

@interface TSTMutableCellIteratorData : NSObject <TSTCellIteratorData> {

	BOOL _cellIDIsValid;
	BOOL _cellIsValid;
	BOOL _mergeRangeIsValid;
	TSUCellCoord _cellID;
	TSTCell* _cell;
	TSUCellRect _mergeRange;

}

@property (assign,nonatomic) BOOL cellIDIsValid;                          //@synthesize cellIDIsValid=_cellIDIsValid - In the implementation block
@property (assign,nonatomic) BOOL cellIsValid;                            //@synthesize cellIsValid=_cellIsValid - In the implementation block
@property (assign,nonatomic) BOOL mergeRangeIsValid;                      //@synthesize mergeRangeIsValid=_mergeRangeIsValid - In the implementation block
@property (assign,nonatomic) TSUCellCoord cellID;                         //@synthesize cellID=_cellID - In the implementation block
@property (nonatomic,retain) TSTCell * cell;                              //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) TSUCellRect mergeRange;                      //@synthesize mergeRange=_mergeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int cellValueType; 
@property (nonatomic,readonly) BOOL cellHasFormula; 
@property (nonatomic,readonly) BOOL cellHasConditionalStyle; 
@property (nonatomic,readonly) BOOL cellHasCustomFormat; 
@property (nonatomic,readonly) BOOL cellHasCommentStorage; 
@property (nonatomic,readonly) BOOL cellIsEmpty; 
-(BOOL)cellHasFormula;
-(int)cellValueType;
-(BOOL)cellIsEmpty;
-(BOOL)cellHasConditionalStyle;
-(void)setMergeRange:(TSUCellRect)arg1 ;
-(TSUCellRect)mergeRange;
-(BOOL)cellHasCustomFormat;
-(BOOL)cellHasCommentStorage;
-(BOOL)cellIDIsValid;
-(void)setCellIDIsValid:(BOOL)arg1 ;
-(BOOL)cellIsValid;
-(void)setCellIsValid:(BOOL)arg1 ;
-(BOOL)mergeRangeIsValid;
-(void)setMergeRangeIsValid:(BOOL)arg1 ;
-(id)init;
-(void)reset;
-(TSTCell *)cell;
-(void)setCell:(TSTCell *)arg1 ;
-(TSUCellCoord)cellID;
-(void)setCellID:(TSUCellCoord)arg1 ;
@end
