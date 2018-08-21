/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLCameraImportQueue : NSObject {

	NSMutableArray* _items;
	unsigned long long _index;

}
-(id)description;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(BOOL)isCompleted;
-(id)initWithItems:(id)arg1 ;
-(id)currentItem;
-(id)itemsNotCompleted;
-(id)completedItems;
-(void)didCompleteItem:(id)arg1 ;
@end

