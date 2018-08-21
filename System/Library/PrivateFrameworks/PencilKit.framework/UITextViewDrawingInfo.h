/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITextViewDrawingDelegate;
@class UITextView, PKTiledView, UILongPressGestureRecognizer, NSString;

@interface UITextViewDrawingInfo : NSObject <UIGestureRecognizerDelegate> {

	BOOL _addBottomPadding;
	UITextView* _textView;
	PKTiledView* _tiledView;
	id<UITextViewDrawingDelegate> _delegate;
	UILongPressGestureRecognizer* _insertLongPressGestureRecognizer;

}

@property (assign,nonatomic,__weak) UITextView * textView;                                                 //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) BOOL addBottomPadding;                                                        //@synthesize addBottomPadding=_addBottomPadding - In the implementation block
@property (nonatomic,retain) PKTiledView * tiledView;                                                      //@synthesize tiledView=_tiledView - In the implementation block
@property (assign,nonatomic,__weak) id<UITextViewDrawingDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * insertLongPressGestureRecognizer;              //@synthesize insertLongPressGestureRecognizer=_insertLongPressGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UITextViewDrawingDelegate>)delegate;
-(void)setDelegate:(id<UITextViewDrawingDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
-(id)initForTextView:(id)arg1 ;
-(BOOL)addBottomPadding;
-(void)setAddBottomPadding:(BOOL)arg1 ;
-(PKTiledView *)tiledView;
-(void)setTiledView:(PKTiledView *)arg1 ;
-(UILongPressGestureRecognizer *)insertLongPressGestureRecognizer;
-(void)setInsertLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end

