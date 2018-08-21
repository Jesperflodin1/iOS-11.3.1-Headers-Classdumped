/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/Frameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol DOCServiceBrowserViewControllerProxy, DOCServiceTransitionProtocol;
@class NSURL, FPItem, UIView, NSOperationQueue, NSProgress, NSString;

@interface UIDocumentBrowserTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {

	NSURL* _itemURL;
	FPItem* _item;
	id<DOCServiceBrowserViewControllerProxy> _serviceBrowserProxy;
	UIView* _referenceView;
	BOOL _transitionDidFinish;
	id<DOCServiceTransitionProtocol> _transitionController;
	NSOperationQueue* _transitionControllerQueue;
	NSProgress* _loadingProgress;
	UIView* _targetView;

}

@property (nonatomic,retain) NSProgress * loadingProgress;              //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (assign,nonatomic,__weak) UIView * targetView;                //@synthesize targetView=_targetView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItemURL:(id)arg1 browserProxy:(id)arg2 referenceView:(id)arg3 ;
-(id)initWithItem:(id)arg1 browserProxy:(id)arg2 referenceView:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)_commonInit;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)loadingProgress;
-(void)setLoadingProgress:(NSProgress *)arg1 ;
@end
