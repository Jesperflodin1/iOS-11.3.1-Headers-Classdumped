/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class CKConversation, MFComposeRecipientTextView, UIView, UIButton, _UIBackdropView;

@interface CKTranscriptGroupHeaderView : UIView {

	CKConversation* _conversation;
	MFComposeRecipientTextView* _textView;
	UIView* _separator;
	UIButton* _actionButton;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,retain) CKConversation * conversation;                      //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) MFComposeRecipientTextView * textView;              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * separator;                                 //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                            //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                     //@synthesize backdropView=_backdropView - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTextView:(MFComposeRecipientTextView *)arg1 ;
-(MFComposeRecipientTextView *)textView;
-(void)setSeparator:(UIView *)arg1 ;
-(UIView *)separator;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 conversation:(id)arg2 ;
@end

