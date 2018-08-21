/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewItem;
@class NSURL;

@interface QLEditedItem : NSObject {

	id<QLPreviewItem> _item;
	NSURL* _editedFileURL;

}

@property (nonatomic,copy) id<QLPreviewItem> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSURL * editedFileURL;               //@synthesize editedFileURL=_editedFileURL - In the implementation block
-(id<QLPreviewItem>)item;
-(void)setItem:(id<QLPreviewItem>)arg1 ;
-(NSURL *)editedFileURL;
-(id)initWithItem:(id)arg1 editedFileURL:(id)arg2 ;
-(void)setEditedFileURL:(NSURL *)arg1 ;
@end

