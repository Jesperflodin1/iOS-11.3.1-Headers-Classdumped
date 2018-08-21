/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:32:10 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/Files.axbundle/Files
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAccessibilityCustomAction.h>

@class UIDocumentBrowserAction, FPItem;

@interface AXDocumentCustomAction : UIAccessibilityCustomAction {

	UIDocumentBrowserAction* _documentAction;
	FPItem* _item;

}

@property (nonatomic,retain) UIDocumentBrowserAction * documentAction;              //@synthesize documentAction=_documentAction - In the implementation block
@property (nonatomic,retain) FPItem * item;                                         //@synthesize item=_item - In the implementation block
-(UIDocumentBrowserAction *)documentAction;
-(void)setDocumentAction:(UIDocumentBrowserAction *)arg1 ;
-(FPItem *)item;
-(void)setItem:(FPItem *)arg1 ;
@end

