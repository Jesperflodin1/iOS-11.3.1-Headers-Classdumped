/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <ASMessagesProvider/ASMessagesProvider.StoreCollectionViewController.h>

@class _TtC11AppStoreKit7Artwork, UIView;

@interface ASMessagesProvider.UberedCollectionViewController : ASMessagesProvider.StoreCollectionViewController {

	 artworkLoader;
	 uber;
	 statusBarStyle;
	 contentInsetsInvalid;
	 uberHeaderView;
	 uberScrollCoordinator;

}

@property (readonly,nonatomic) BOOL prefersLargeTitleInNavigationBar; 
@property (retain,nonatomic) _TtC11AppStoreKit7Artwork * uber; 
@property (retain,nonatomic) UIView * overlayView; 
@property (assign,nonatomic) long long statusBarStyle; 
@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) BOOL invalidatesContentInsetsWhenSafeAreaInsetsChange; 
@property (readonly,nonatomic) BOOL hasUber; 
@property (readonly,nonatomic) double currentUberHeight; 
-(BOOL)hasUber;
-(BOOL)prefersLargeTitleInNavigationBar;
-(void)displayWithAccessoryView:(id)arg1 ;
-(BOOL)invalidatesContentInsetsWhenSafeAreaInsetsChange;
-(double)currentUberHeight;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setStatusBarStyle:(long long)arg1 ;
-(long long)statusBarStyle;
-(long long)preferredStatusBarStyle;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)invalidateContentInsets;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(UIView *)overlayView;
-(void)setUber:(_TtC11AppStoreKit7Artwork *)arg1 ;
-(_TtC11AppStoreKit7Artwork *)uber;
-(void)adjustContentInsets;
@end

