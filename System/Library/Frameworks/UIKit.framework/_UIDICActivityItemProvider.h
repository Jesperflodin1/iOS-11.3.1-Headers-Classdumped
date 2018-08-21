/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider : UIActivityItemProvider {

	UIDocumentInteractionController* _documentInteractionController;

}

@property (nonatomic,__weak,readonly) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
-(id)item;
-(void)main;
-(id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(id)loadedURL;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2 ;
-(BOOL)_shouldExecuteItemOperationForActivity:(id)arg1 ;
@end

