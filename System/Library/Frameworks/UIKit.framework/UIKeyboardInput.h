/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardInput <NSObject>
@optional
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(BOOL)keyboardInputShouldDelete:(id)arg1;
-(BOOL)keyboardInputChanged:(id)arg1;
-(void)keyboardInputChangedSelection:(id)arg1;

@end

