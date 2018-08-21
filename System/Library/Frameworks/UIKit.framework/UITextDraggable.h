/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIDragInteraction;


@protocol UITextDraggable <UITextInput>
@property (assign,nonatomic,__weak) id<UITextDragDelegate> textDragDelegate; 
@property (nonatomic,readonly) UIDragInteraction * textDragInteraction; 
@property (getter=isTextDragActive,nonatomic,readonly) BOOL textDragActive; 
@property (assign,nonatomic) long long textDragOptions; 
@required
-(id<UITextDragDelegate>)textDragDelegate;
-(void)setTextDragDelegate:(id)arg1;
-(UIDragInteraction *)textDragInteraction;
-(BOOL)isTextDragActive;
-(long long)textDragOptions;
-(void)setTextDragOptions:(long long)arg1;

@end
