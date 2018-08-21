/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/CRObject.h>
#import <libobjc.A.dylib/CRUndoDelegate.h>

@protocol CRUndoDelegate;
@class CRDocument, NSObject, NSString, CRTombstoneOrderedSet, CRDictionary;

@interface CRTable : CRObject <CRUndoDelegate> {

	CRDocument* _document;
	NSObject*<CRUndoDelegate> _delegate;

}

@property (nonatomic,retain) NSString * columnDirection; 
@property (nonatomic,readonly) CRTombstoneOrderedSet * crColumns; 
@property (nonatomic,readonly) CRTombstoneOrderedSet * crRows; 
@property (nonatomic,readonly) CRDictionary * cellColumns; 
@property (nonatomic,__weak,readonly) CRDocument * document;                         //@synthesize document=_document - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CRUndoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) unsigned long long rowCount; 
@property (nonatomic,readonly) BOOL isRightToLeft; 
@property (nonatomic,readonly) BOOL isLeftToRight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerWithCRCoder;
+(id)CRProperties;
-(unsigned long long)rowCount;
-(NSObject*<CRUndoDelegate>)delegate;
-(void)setDelegate:(NSObject*<CRUndoDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)identity;
-(CRDocument *)document;
-(id)initWithDocument:(id)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(id)insertColumnAtIndex:(unsigned long long)arg1 ;
-(id)initWithIdentity:(id)arg1 fields:(id)arg2 ;
-(void)addUndoCommandsForObject:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)columnIndexesForIdentifiers:(id)arg1 ;
-(id)rowIndexesForIdentifiers:(id)arg1 ;
-(id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3 ;
-(id)initWithDocument:(id)arg1 isRightToLeft:(BOOL)arg2 ;
-(id)initWithDocument:(id)arg1 columnDirection:(id)arg2 ;
-(id)initWithDocument:(id)arg1 columnDirection:(id)arg2 crColumns:(id)arg3 crRows:(id)arg4 cellColumns:(id)arg5 ;
-(CRTombstoneOrderedSet *)crColumns;
-(CRTombstoneOrderedSet *)crRows;
-(id)crTableColumnDirection;
-(NSString *)columnDirection;
-(void)setColumnDirection:(NSString *)arg1 ;
-(id)identifierForRowAtIndex:(unsigned long long)arg1 ;
-(id)identifierForColumnAtIndex:(unsigned long long)arg1 ;
-(void)undoablyInsertContents:(id)arg1 atRow:(id)arg2 ;
-(void)undoablyInsertContents:(id)arg1 atColumn:(id)arg2 ;
-(void)undoablyRemoveContentsOfRow:(id)arg1 ;
-(CRDictionary *)cellColumns;
-(void)setObject:(id)arg1 columnID:(id)arg2 rowID:(id)arg3 ;
-(void)undoablyRemoveContentsOfColumn:(id)arg1 ;
-(id)objectForColumnID:(id)arg1 rowID:(id)arg2 ;
-(id)columnsIntersectingWithColumns:(id)arg1 ;
-(id)rowsIntersectingWithRows:(id)arg1 ;
-(id)identifiersForRowIndexes:(id)arg1 ;
-(id)identifiersForColumnIndexes:(id)arg1 ;
-(BOOL)containsColumn:(id)arg1 ;
-(id)insertRows:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertColumns:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeRowAtIndex:(unsigned long long)arg1 ;
-(void)removeColumnAtIndex:(unsigned long long)arg1 ;
-(void)moveRowAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)moveColumnAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)isLeftToRight;
-(void)reverseColumnDirection;
-(void)enumerateColumnsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)countOfPopulatedCells;
-(unsigned long long)columnCount;
-(unsigned long long)rowIndexForIdentifier:(id)arg1 ;
-(BOOL)containsRow:(id)arg1 ;
-(BOOL)wantsUndoCommands;
-(unsigned long long)columnIndexForIdentifier:(id)arg1 ;
-(id)objectForColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2 ;
-(void)setObject:(id)arg1 columnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 ;
-(void)enumerateCellObjectsInCellSelectionContainingColumnIndices:(id)arg1 rowIndices:(id)arg2 copyItems:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)isRightToLeft;
-(id)insertRowAtIndex:(unsigned long long)arg1 ;
@end

