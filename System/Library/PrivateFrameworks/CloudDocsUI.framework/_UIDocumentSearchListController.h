/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/_UIDocumentListController.h>

@class _UIDocumentPickerSearchContainerModel, NSString;

@interface _UIDocumentSearchListController : _UIDocumentListController {

	_UIDocumentPickerSearchContainerModel* _model;

}

@property (nonatomic,retain) NSString * queryString; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(id)init;
-(BOOL)hideSearchField;
-(Class)_classForChildren;
-(void)itemsOrSelectionDidChange:(BOOL)arg1 ;
-(id)initWithModel:(id)arg1 ;
@end
