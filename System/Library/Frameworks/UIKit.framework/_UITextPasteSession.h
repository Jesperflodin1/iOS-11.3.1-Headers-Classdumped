/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextPasteSession.h>

@protocol UITextPasteSessionDelegate, _UITextPasteProgressSupport;
@class UITextRange, NSAttributedString, UITextPasteController, UITextPasteCoordinator, NSString;

@interface _UITextPasteSession : NSObject <UITextPasteSession> {

	BOOL _pastingBlocked;
	id<UITextPasteSessionDelegate> _delegate;
	UITextPasteController* _controller;
	UITextPasteCoordinator* _coordinator;
	UITextRange* _range;
	id<_UITextPasteProgressSupport> _progressSupport;
	NSAttributedString* _pasteResult;

}

@property (assign,nonatomic,__weak) UITextPasteController * controller;                    //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UITextPasteCoordinator * coordinator;                         //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) UITextRange * range;                                          //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) id<_UITextPasteProgressSupport> progressSupport;              //@synthesize progressSupport=_progressSupport - In the implementation block
@property (assign,getter=isPastingBlocked,nonatomic) BOOL pastingBlocked;                  //@synthesize pastingBlocked=_pastingBlocked - In the implementation block
@property (nonatomic,retain) NSAttributedString * pasteResult;                             //@synthesize pasteResult=_pasteResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<UITextPasteSessionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id<UITextPasteSessionDelegate>)delegate;
-(void)setDelegate:(id<UITextPasteSessionDelegate>)arg1 ;
-(UITextRange *)range;
-(void)setController:(UITextPasteController *)arg1 ;
-(void)setCoordinator:(UITextPasteCoordinator *)arg1 ;
-(void)setRange:(UITextRange *)arg1 ;
-(void)setProgressSupport:(id<_UITextPasteProgressSupport>)arg1 ;
-(void)setPastingBlocked:(BOOL)arg1 ;
-(void)setPasteResult:(NSAttributedString *)arg1 ;
-(BOOL)isPastingBlocked;
-(void)finishPastingIfUnblocked;
-(NSAttributedString *)pasteResult;
-(id<_UITextPasteProgressSupport>)progressSupport;
-(UITextPasteCoordinator *)coordinator;
-(void)finishPastingIfUnblockedWithAnimator:(id)arg1 ;
-(UITextPasteController *)controller;
-(void)pasteWithAnimator:(id)arg1 ;
-(id)positionedPasteResult;
@end

