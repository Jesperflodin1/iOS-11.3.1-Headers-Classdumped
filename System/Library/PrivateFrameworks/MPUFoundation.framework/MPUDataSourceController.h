/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUDataSourceControllerDelegate;
@class MPUDataSource, MPUNotificationObserver;

@interface MPUDataSourceController : NSObject {

	BOOL _viewControllerIsVisible;
	BOOL _shouldReloadWhenViewControllerIsVisible;
	MPUDataSource* _dataSource;
	id<MPUDataSourceControllerDelegate> _delegate;
	MPUNotificationObserver* _willInvalidateObserver;
	MPUNotificationObserver* _didInvalidateObserver;

}

@property (nonatomic,retain) MPUNotificationObserver * willInvalidateObserver;                 //@synthesize willInvalidateObserver=_willInvalidateObserver - In the implementation block
@property (nonatomic,retain) MPUNotificationObserver * didInvalidateObserver;                  //@synthesize didInvalidateObserver=_didInvalidateObserver - In the implementation block
@property (assign,nonatomic) BOOL viewControllerIsVisible;                                     //@synthesize viewControllerIsVisible=_viewControllerIsVisible - In the implementation block
@property (assign,nonatomic) BOOL shouldReloadWhenViewControllerIsVisible;                     //@synthesize shouldReloadWhenViewControllerIsVisible=_shouldReloadWhenViewControllerIsVisible - In the implementation block
@property (nonatomic,readonly) MPUDataSource * dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MPUDataSourceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MPUDataSourceControllerDelegate>)delegate;
-(void)setDelegate:(id<MPUDataSourceControllerDelegate>)arg1 ;
-(MPUDataSource *)dataSource;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
-(void)_willInvalidate;
-(void)setViewControllerIsVisible:(BOOL)arg1 ;
-(BOOL)shouldReloadWhenViewControllerIsVisible;
-(void)setShouldReloadWhenViewControllerIsVisible:(BOOL)arg1 ;
-(BOOL)viewControllerIsVisible;
-(void)viewControllerDidAppear;
-(void)viewControllerDidDisappear;
-(MPUNotificationObserver *)willInvalidateObserver;
-(void)setWillInvalidateObserver:(MPUNotificationObserver *)arg1 ;
-(MPUNotificationObserver *)didInvalidateObserver;
-(void)setDidInvalidateObserver:(MPUNotificationObserver *)arg1 ;
-(void)_didInvalidate;
@end
