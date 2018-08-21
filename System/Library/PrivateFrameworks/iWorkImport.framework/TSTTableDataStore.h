/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>

@protocol TSDContainerInfoTSWPStorageParent;
@class TSTTileIDKeyDict, TSTTableHeaderStorage, TSPLazyReference, TSTTableDataList, NSObject, TSKCustomFormatList, NSMutableDictionary, TSTMergeRegionMap;

@interface TSTTableDataStore : TSPContainedObject {

	TSTTableRBTreeNode_s* _columnTileIndex;
	TSTTableRBTreeNode_s* _rowTileIndex;
	TSTTileIDKeyDict* _tileStorage;
	TSTTableHeaderStorage* _rowHeaderStorage;
	TSPLazyReference* _columnHeaderStorageReference;
	TSPLazyReference* _conditionalStyleSetTableReference;
	TSPLazyReference* _stringTableReference;
	TSTTableDataList* _styleTableList;
	TSPLazyReference* _formulaTableReference;
	TSPLazyReference* _formulaErrorTableReference;
	TSPLazyReference* _richTextPayloadTableReference;
	TSPLazyReference* _formatTableReference;
	TSTTableDataList* _multipleChoiceListFormatTableList;
	TSPLazyReference* _commentStorageTableReference;
	TSPLazyReference* _importWarningSetTableReference;
	NSObject*<TSDContainerInfo>*<TSWPStorageParent> _richTextParentInfo;
	TSKCustomFormatList* _pasteboardCustomFormatList;
	NSMutableDictionary* _pasteboardCustomFormatMap;
	unsigned short _nextRowStripID;
	unsigned short _nextColumnStripID;
	TSTMergeRegionMap* _mergedCellRanges;
	unsigned _cellCount;
	BOOL _cellCountValid;
	unsigned char _storageVersion;
	BOOL _upgrading;

}

@property (assign) BOOL upgrading;                                                               //@synthesize upgrading=_upgrading - In the implementation block
@property (nonatomic,readonly) TSTTableDataList * conditionalStyleSetDataList; 
@property (nonatomic,readonly) TSTTableDataList * stringDataList; 
@property (nonatomic,readonly) TSTTableDataList * styleDataList; 
@property (nonatomic,readonly) TSTTableDataList * formulaDataList; 
@property (nonatomic,readonly) TSTTableDataList * formulaErrorDataList; 
@property (nonatomic,readonly) TSTTableDataList * richTextPayloadDataList; 
@property (nonatomic,readonly) TSTTableDataList * formatDataList; 
@property (nonatomic,readonly) TSTTableDataList * multipleChoiceListFormatDataList; 
@property (nonatomic,readonly) TSTTableDataList * commentStorageDataList; 
@property (nonatomic,readonly) TSTTableDataList * importWarningSetDataList; 
@property (nonatomic,readonly) BOOL hasPasteboardCustomFormats; 
-(void)setUpgrading:(BOOL)arg1 ;
-(BOOL)upgrading;
-(BOOL)hasPasteboardCustomFormats;
-(void)copyPasteboardCustomFormatsFromDataStore:(id)arg1 ;
-(void)enumerateCellStoragesRowByRowToMaxID:(TSUCellCoord)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)resetAlmostEverything;
-(BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(TSUCellCoord)arg1 result:(id*)arg2 ;
-(BOOL)auditDatalistDuplicationReturningResult:(id*)arg1 ;
-(BOOL)auditRowInfoCellCountsReturningResult:(id*)arg1 ;
-(BOOL)confirmRefCountsReturningResult:(id*)arg1 ;
-(TSTTableDataList *)conditionalStyleSetDataList;
-(id)initWithArchive:(const DataStore*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(void)saveToArchive:(DataStore*)arg1 archiver:(id)arg2 isInTheDocument:(BOOL)arg3 ;
-(BOOL)hasFormulaAtCellID:(TSUCellCoord)arg1 ;
-(TSTTableDataList *)commentStorageDataList;
-(id)indicesForValueOrCommentCellsInRange:(TSUCellRect)arg1 ;
-(TSTTableDataList *)richTextPayloadDataList;
-(void)replaceFormulasUsingBlock:(/*^block*/id)arg1 ;
-(void)replaceConditionalStyleSetsUsingBlock:(/*^block*/id)arg1 ;
-(TSTTableDataList *)formulaDataList;
-(id)addPasteboardCustomFormat:(id)arg1 toDocument:(id)arg2 updatingPasteboardFormat:(BOOL)arg3 ;
-(void)clearPasteboardCustomFormatMap;
-(TSTTableDataList *)formatDataList;
-(void)remapPasteboardCustomFormatKeys:(id)arg1 ;
-(TSTTableDataList *)importWarningSetDataList;
-(TSUCellCoord)cellIDForCellWithRichTextStorage:(id)arg1 inRange:(TSUCellRect)arg2 ;
-(void)enumerateTilesConcurrentlyUsingBlock:(/*^block*/id)arg1 andWaitForAsyncBlocks:(BOOL)arg2 ;
-(TSTTableDataList *)multipleChoiceListFormatDataList;
-(void)reorganizeValueForStorage:(TSTCellStorage*)arg1 outValue:(TSTCellReorganizeValue*)arg2 ;
-(void)enumerateTilesAtNode:(TSTTableRBTreeNode_s*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateCellStoragesInRange:(TSUCellRect)arg1 withBlock:(/*^block*/id)arg2 ;
-(TSTTableDataList *)styleDataList;
-(TSTTableDataList *)stringDataList;
-(TSTTableDataList *)formulaErrorDataList;
-(void)enumerateRowHeaderInfosWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateColumnHeaderInfosWithBlock:(/*^block*/id)arg1 ;
-(id)p_pasteboardCustomFormatList;
-(id)p_pasteboardCustomFormatMap;
-(multimap<TSUCellCoord, std::__1::tuple<unsigned short, unsigned short, TSTCellStorage *>, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, std::__1::tuple<unsigned short, unsigned short, TSTCellStorage *> > > >*)_makeCellMapFromTiles;
-(void)setRowHeaderStorage:(id)arg1 ;
-(void)setColumnHeaderStorage:(id)arg1 ;
-(void)enumerateTilesInRowRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)gatherReorganizeValuesForColumn:(unsigned char)arg1 rowRange:(NSRange)arg2 outValues:(TSTCellReorganizeValue*)arg3 ;
-(BOOL)verboseAuditTilesForRowOverlapAndExtensionPastTableBounds:(TSUCellCoord)arg1 ;
-(void)makePasteboardCustomFormatList;
-(id)setupEmptyPasteboardCustomFormatList;
-(void)dealloc;
-(void)validate;
-(id)initWithOwner:(id)arg1 ;
-(void)debugDump;
-(void)setStorageParentToInfo:(id)arg1 ;
-(void)p_updateTileStorageToCurrentVersion;
-(BOOL)needToUpgradeCellStorage;
-(void)upgradeDataStoreCellStorage;
@end
