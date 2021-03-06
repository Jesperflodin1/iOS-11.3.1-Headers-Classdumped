/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface SKUISimpleCollectionViewCell : UICollectionViewCell {

	UIView* _contentChildView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIView * contentChildView;               //@synthesize contentChildView=_contentChildView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setContentChildView:(UIView *)arg1 ;
-(UIView *)contentChildView;
@end

