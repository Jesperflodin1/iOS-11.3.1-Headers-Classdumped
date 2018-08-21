/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKSelection.h>

@class TSAGalleryItem, NSOrderedSet;

@interface TSAGalleryItemSelection : TSKSelection {

	TSAGalleryItem* _displayedItem;
	NSOrderedSet* _items;

}

@property (nonatomic,readonly) TSAGalleryItem * displayedItem;              //@synthesize displayedItem=_displayedItem - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * items;                        //@synthesize items=_items - In the implementation block
+(Class)archivedSelectionClass;
-(id)initWithItems:(id)arg1 displayedItem:(id)arg2 ;
-(TSAGalleryItem *)displayedItem;
-(id)UUIDDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSOrderedSet *)items;
@end

