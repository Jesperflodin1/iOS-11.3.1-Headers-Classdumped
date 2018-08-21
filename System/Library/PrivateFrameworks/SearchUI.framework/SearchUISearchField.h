/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <MessageUI/MFAtomTextView.h>

@class SearchUIKeyboardableTableViewController, NSString;

@interface SearchUISearchField : MFAtomTextView {

	SearchUIKeyboardableTableViewController* _tableViewController;

}

@property (__weak) SearchUIKeyboardableTableViewController * tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
@property (readonly) NSString * searchText; 
-(CGSize)intrinsicContentSize;
-(id)nextResponder;
-(id)text;
-(void)setText:(id)arg1 ;
-(NSString *)searchText;
-(NSRange)_markedTextNSRange;
-(void)setTableViewController:(SearchUIKeyboardableTableViewController *)arg1 ;
-(SearchUIKeyboardableTableViewController *)tableViewController;
-(id)textFromMarkedTextRange:(NSRange)arg1 markedTextReplacement:(id)arg2 ;
@end

