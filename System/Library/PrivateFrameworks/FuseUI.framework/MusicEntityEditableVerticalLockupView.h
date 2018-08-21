/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicEntityVerticalLockupView.h>

@class UIView;

@interface MusicEntityEditableVerticalLockupView : MusicEntityVerticalLockupView {

	UIView* _artworkEditingOverlayView;
	BOOL _editing;

}

@property (assign,nonatomic,__weak) id<MusicEntityEditableVerticalLockupViewDelegate> delegate; 
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                  //@synthesize editing=_editing - In the implementation block
-(void)layoutSubviews;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)_layoutEditingSubviews;
-(void)_layoutEditingSubviewsForEditing:(BOOL)arg1 editingViewsAlpha:(double)arg2 ;
@end
