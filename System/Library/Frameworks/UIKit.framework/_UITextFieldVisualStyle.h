/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextFieldVisualStyleSubject;
@interface _UITextFieldVisualStyle : NSObject {

	id<_UITextFieldVisualStyleSubject> _styleSubject;

}

@property (assign,nonatomic,__weak) id<_UITextFieldVisualStyleSubject> styleSubject;              //@synthesize styleSubject=_styleSubject - In the implementation block
+(id)inferredVisualStyleWithStyleSubject:(id)arg1 ;
-(id)defaultTextColorForKeyboardAppearance;
-(id)defaultTextColor;
-(id<_UITextFieldVisualStyleSubject>)styleSubject;
-(BOOL)textShouldUseVibrancy;
-(id)defaultFocusedTextColor;
-(id)placeholderColor;
-(id)parentViewForTextContentView;
-(void)handleTextVibrancy;
-(id)initWithStyleSubject:(id)arg1 ;
-(id)overrideAttributesForEditing;
-(id)fieldEditorTextAttributes:(id)arg1 storingOriginalAttributes:(id)arg2 ;
-(void)setStyleSubject:(id<_UITextFieldVisualStyleSubject>)arg1 ;
@end

