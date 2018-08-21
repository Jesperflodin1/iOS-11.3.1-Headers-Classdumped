/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UICollectionViewDropItem.h>

@protocol _UICollectionViewDropItem <UICollectionViewDropItem>
@end


@class UIDragItem, NSIndexPath, NSString;

@interface _UICollectionViewDropItem : NSObject <_UICollectionViewDropItem> {

	UIDragItem* _dragItem;
	NSIndexPath* _sourceIndexPath;
	CGSize _previewSize;

}

@property (nonatomic,retain) UIDragItem * dragItem;                      //@synthesize dragItem=_dragItem - In the implementation block
@property (assign,nonatomic) CGSize previewSize;                         //@synthesize previewSize=_previewSize - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceIndexPath;              //@synthesize sourceIndexPath=_sourceIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(UIDragItem *)dragItem;
-(void)setDragItem:(UIDragItem *)arg1 ;
-(NSIndexPath *)sourceIndexPath;
-(id)initWithDragItem:(id)arg1 previewSize:(CGSize)arg2 sourceIndexPath:(id)arg3 ;
-(CGSize)previewSize;
-(void)setPreviewSize:(CGSize)arg1 ;
-(void)setSourceIndexPath:(NSIndexPath *)arg1 ;
@end

