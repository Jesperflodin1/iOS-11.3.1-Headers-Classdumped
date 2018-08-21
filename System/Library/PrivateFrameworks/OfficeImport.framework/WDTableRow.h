/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDTable, WDTableRowProperties, NSMutableArray;

@interface WDTableRow : NSObject {

	unsigned long long mIndex;
	WDTable* mTable;
	WDTableRowProperties* mProperties;
	NSMutableArray* mCells;

}
-(void)dealloc;
-(id)description;
-(id)table;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(id)properties;
-(unsigned long long)cellCount;
-(id)cellAt:(unsigned long long)arg1 ;
-(id)addCell;
-(id)initWithTable:(id)arg1 at:(unsigned long long)arg2 ;
-(id)cellIterator;
-(id)newCellIterator;
-(id)addCellWithIndex:(unsigned long long)arg1 ;
@end

