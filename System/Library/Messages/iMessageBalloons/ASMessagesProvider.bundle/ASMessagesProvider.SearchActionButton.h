/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <ASMessagesProvider/ASMessagesProvider.DynamicTypeButton.h>

@class UIColor, _TtC18ASMessagesProvider11DividerView;

@interface ASMessagesProvider.SearchActionButton : ASMessagesProvider.DynamicTypeButton {

	 _highlightedBackgroundColor;
	 searchIconImageView;
	 showSearchIconImage;
	 divider;
	 dividerInsets;
	 showDivider;
	 selectionHandler;

}

@property (readonly,nonatomic) long long buttonType; 
@property (retain,nonatomic) UIColor * highlightedBackgroundColor; 
@property (assign,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL showSearchIconImage; 
@property (retain,nonatomic) _TtC18ASMessagesProvider11DividerView * divider; 
@property (assign,nonatomic) BOOL showDivider; 
@property (copy,nonatomic) id selectionHandler; 
+(CGSize)itemSizeFor:(id)arg1 showSearchIconImage:(BOOL)arg2 showDivider:(BOOL)arg3 layoutMargins:(UIEdgeInsets)arg4 fitting:(CGSize)arg5 in:(id)arg6 ;
-(void)setDivider:(_TtC18ASMessagesProvider11DividerView *)arg1 ;
-(BOOL)showSearchIconImage;
-(void)setShowSearchIconImage:(BOOL)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)buttonType;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)showDivider;
-(void)setShowDivider:(BOOL)arg1 ;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(void)handleTap;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(_TtC18ASMessagesProvider11DividerView *)divider;
@end
