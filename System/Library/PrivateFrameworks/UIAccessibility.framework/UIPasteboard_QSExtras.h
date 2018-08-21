/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/__UIPasteboard_QSExtras_super.h>

@interface UIPasteboard_QSExtras : __UIPasteboard_QSExtras_super
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)pasteboardWithUniqueName;
+(id)safeCategoryTargetClassName;
+(BOOL)_accessibilityUseQuickSpeakPasteBoard;
+(id)_accessibilityQuickSpeakPasteboard;
+(void)_accessibilitySetUseQuickSpeakPasteBoard:(BOOL)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)image;
-(long long)changeCount;
-(id)string;
-(id)images;
-(id)pasteboardTypes;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(long long)numberOfItems;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(id)URL;
-(id)color;
-(id)strings;
-(void)setStrings:(id)arg1 ;
-(id)URLs;
-(id)colors;
-(BOOL)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;
@end

