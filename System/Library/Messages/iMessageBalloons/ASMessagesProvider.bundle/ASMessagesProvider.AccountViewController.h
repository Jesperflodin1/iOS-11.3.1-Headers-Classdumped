/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <ASMessagesProvider/ASMessagesProvider.StoreCollectionViewController.h>
#import <AppStoreKit/AppStoreKit.AccountPresenterView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class _TtC18ASMessagesProvider29CollectionViewTableFlowLayout, _TtC18ASMessagesProvider31AccountCollectionViewDataSource, _TtC18ASMessagesProvider29AccountCollectionViewDelegate, UITapGestureRecognizer;

@interface ASMessagesProvider.AccountViewController : ASMessagesProvider.StoreCollectionViewController <AppStoreKit.AccountPresenterView, UIGestureRecognizerDelegate> {

	 presenter;
	 accountCollectionViewLayout;
	 accountCollectionViewDataSource;
	 accountCollectionViewDelegate;
	 tapGestureRecognizer;
	 activityIndicator;
	 foregroundObserver;
	 authenticating;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider29CollectionViewTableFlowLayout * accountCollectionViewLayout; 
@property (retain,nonatomic) _TtC18ASMessagesProvider31AccountCollectionViewDataSource * accountCollectionViewDataSource; 
@property (retain,nonatomic) _TtC18ASMessagesProvider29AccountCollectionViewDelegate * accountCollectionViewDelegate; 
@property (retain,nonatomic) UITapGestureRecognizer * tapGestureRecognizer; 
@property (readonly,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (assign,nonatomic) BOOL authenticating; 
-(void)setAccountCollectionViewDelegate:(_TtC18ASMessagesProvider29AccountCollectionViewDelegate *)arg1 ;
-(_TtC18ASMessagesProvider31AccountCollectionViewDataSource *)accountCollectionViewDataSource;
-(void)setAccountCollectionViewDataSource:(_TtC18ASMessagesProvider31AccountCollectionViewDataSource *)arg1 ;
-(_TtC18ASMessagesProvider29AccountCollectionViewDelegate *)accountCollectionViewDelegate;
-(void)showSignInErrorText:(id)arg1 ;
-(BOOL)authenticating;
-(_TtC18ASMessagesProvider29CollectionViewTableFlowLayout *)accountCollectionViewLayout;
-(void)collectionViewTapped;
-(void)showWithNextPageError:(id)arg1 ;
-(void)hideLoading;
-(void)showWithUpdateError:(id)arg1 ;
-(void)performWithAction:(id)arg1 sender:(id)arg2 ;
-(void)reloadWithSection:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reloadData;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)showLoading;
-(void)setAuthenticating:(BOOL)arg1 ;
@end

