/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView {

	BOOL _performingLayout;

}

@property (assign,nonatomic) id<SKUIScrollingTabBarContentCollectionViewDelegate> delegate; 
@property (getter=isPerformingLayout,nonatomic,readonly) BOOL performingLayout;                          //@synthesize performingLayout=_performingLayout - In the implementation block
-(void)layoutSubviews;
-(void)_reuseCell:(id)arg1 ;
-(BOOL)isPerformingLayout;
@end

