/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UITextInputMode, NSUUID;


@protocol UITextDocumentProxy <UIKeyInput>
@property (nonatomic,readonly) NSString * documentContextBeforeInput; 
@property (nonatomic,readonly) NSString * documentContextAfterInput; 
@property (nonatomic,readonly) NSString * selectedText; 
@property (nonatomic,readonly) UITextInputMode * documentInputMode; 
@property (nonatomic,copy,readonly) NSUUID * documentIdentifier; 
@required
-(NSString *)selectedText;
-(NSUUID *)documentIdentifier;
-(UITextInputMode *)documentInputMode;
-(void)adjustTextPositionByCharacterOffset:(long long)arg1;
-(NSString *)documentContextBeforeInput;
-(NSString *)documentContextAfterInput;

@end

