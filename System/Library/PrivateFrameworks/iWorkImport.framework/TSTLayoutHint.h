/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDHint.h>

@class NSNumber, TSTLayout, NSString;

@interface TSTLayoutHint : NSObject <TSDHint> {

	BOOL mIsValid;
	BOOL mHorizontal;
	TSUCellRect mCellRange;
	TSUCellCoord mCacheHintID;
	NSNumber* mPartitioningPass;
	unsigned mPartitionPosition;
	CGSize mMaximumSize;
	CGSize mEffectiveSize;
	TSTLayout* mLayout;

}

@property (assign,nonatomic) BOOL isValid; 
@property (assign,nonatomic) TSUCellRect cellRange; 
@property (assign,nonatomic) TSUCellCoord cacheHintID; 
@property (nonatomic,retain) NSNumber * partitioningPass; 
@property (assign,nonatomic) unsigned partitionPosition; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (assign,nonatomic) CGSize effectiveSize; 
@property (assign,nonatomic) TSTLayout * layout; 
@property (assign,nonatomic) BOOL horizontal; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)archivedHintClass;
-(BOOL)overlapsWithSelectionPath:(id)arg1 ;
-(id)init;
-(oneway void)release;
-(void)invalidate;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isValid;
-(TSTLayout *)layout;
-(void)setLayout:(TSTLayout *)arg1 ;
-(CGSize)maximumSize;
-(void)setMaximumSize:(CGSize)arg1 ;
-(void)setHorizontal:(BOOL)arg1 ;
-(BOOL)horizontal;
-(void)saveToArchive:(LayoutHintArchive*)arg1 ;
-(void)offsetByDelta:(int)arg1 ;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;
-(BOOL)isFirstHint;
-(CGSize)effectiveSize;
-(TSUCellRect)cellRange;
-(void)setCellRange:(TSUCellRect)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(void)setCacheHintID:(TSUCellCoord)arg1 ;
-(void)setPartitionPosition:(unsigned)arg1 ;
-(TSUCellCoord)cacheHintID;
-(unsigned)partitionPosition;
-(void)setPartitioningPass:(NSNumber *)arg1 ;
-(NSNumber *)partitioningPass;
-(id)initWithRange:(TSUCellRect)arg1 hintId:(TSUCellCoord)arg2 partitionPosition:(unsigned)arg3 maximumSize:(CGSize)arg4 effectiveSize:(CGSize)arg5 layout:(id)arg6 validity:(BOOL)arg7 horizontal:(BOOL)arg8 ;
-(void)setEffectiveSize:(CGSize)arg1 ;
-(id)initWithArchive:(const LayoutHintArchive*)arg1 ;
@end

