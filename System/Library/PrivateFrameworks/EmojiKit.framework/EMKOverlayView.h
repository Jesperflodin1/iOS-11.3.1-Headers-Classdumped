/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmojiKit/EmojiKit-Structs.h>
#import <UIKit/UIView.h>

@class EMKEmojiTokenList;

@interface EMKOverlayView : UIView {

	unsigned long long _numEmojiToShow;
	EMKEmojiTokenList* _emojiTokenList;
	CGRect _overlayRect;
	unsigned long long _selectedIndex;
	/*^block*/id _selectionHandler;

}
-(void)drawRect:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)dismiss;
-(void)drawBackground:(CGRect)arg1 ;
-(void)drawForeground:(CGRect)arg1 ;
-(void)dismissWithSelectedEmojiToken:(id)arg1 ;
-(void)selectWithEvent:(id)arg1 ;
-(id)initWithView:(id)arg1 anchorRect:(CGRect)arg2 emojiTokenList:(id)arg3 selectionHandler:(/*^block*/id)arg4 ;
-(void)setView:(id)arg1 anchorRect:(CGRect)arg2 ;
@end

