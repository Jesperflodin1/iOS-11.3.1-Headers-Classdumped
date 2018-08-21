/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {

	UIResponder*<UITextInput> _textView;

}

@property (assign) UIResponder*<UITextInput> textView;              //@synthesize textView=_textView - In the implementation block
-(void)invalidate;
-(void)setTextView:(UIResponder*<UITextInput>)arg1 ;
-(void)startTimer;
-(UIResponder*<UITextInput>)textView;
-(BOOL)isCloseToCaret;
@end

