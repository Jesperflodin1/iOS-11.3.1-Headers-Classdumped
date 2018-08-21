/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIScrollView;

@interface SUStorePageView : UIView {

	UIView* _backdropView;
	UIView* _contentView;
	UIView* _headerView;
	UIScrollView* _headerScrollView;
	UIView* _previewOverlayView;
	UIEdgeInsets _contentViewInsets;

}

@property (nonatomic,retain) UIView * backdropView;                       //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * previewOverlayView;                 //@synthesize previewOverlayView=_previewOverlayView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentViewInsets;              //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)dealloc;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setBackdropView:(UIView *)arg1 ;
-(UIView *)backdropView;
-(UIEdgeInsets)contentViewInsets;
-(void)setPreviewOverlayView:(UIView *)arg1 ;
-(UIView *)previewOverlayView;
-(void)setContentViewInsets:(UIEdgeInsets)arg1 ;
@end

