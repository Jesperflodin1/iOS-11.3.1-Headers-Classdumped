/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIViewController;

@interface _TVSearchResultCell : UICollectionViewCell {

	UIViewController* _viewController;
	/*^block*/id _didFocusBlock;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,copy) id didFocusBlock;                                 //@synthesize didFocusBlock=_didFocusBlock - In the implementation block
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)didFocusBlock;
-(void)setDidFocusBlock:(id)arg1 ;
@end
