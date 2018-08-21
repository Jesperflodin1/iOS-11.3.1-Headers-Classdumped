/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface TSUHTMLTable : NSObject {

	NSMutableDictionary* _columnAttributes;
	NSMutableDictionary* _rowClasses;
	NSMutableDictionary* _cellAttributes;
	NSMutableArray* _columnHeaders;
	NSMutableArray* _rows;
	unsigned long long _rowClassStride;

}

@property (nonatomic,readonly) unsigned long long lastRowIndex; 
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long rowClassStride;              //@synthesize rowClassStride=_rowClassStride - In the implementation block
+(id)_keyForCell:(unsigned long long)arg1 :(unsigned long long)arg2 ;
+(id)_attributesStringFromAttributes:(id)arg1 ;
+(id)htmlTable;
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(void)addRowWithCellMarkup:(id)arg1 ;
-(void)setClass:(id)arg1 ofColumnIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfColumnWithTitle:(id)arg1 ;
-(unsigned long long)lastRowIndex;
-(id)markup;
-(void)addRowWithCellText:(id)arg1 ;
-(void)setColumnClasses:(id)arg1 ;
-(void)setRowClass:(id)arg1 atRowIndex:(unsigned long long)arg2 ;
-(void)setColumnHeaders:(id)arg1 ;
-(void)setCellMarkup:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3 ;
-(void)setCellAttributes:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3 ;
-(void)deleteColumnWithTitle:(id)arg1 ;
-(unsigned long long)rowClassStride;
-(void)setRowClassStride:(unsigned long long)arg1 ;
@end

