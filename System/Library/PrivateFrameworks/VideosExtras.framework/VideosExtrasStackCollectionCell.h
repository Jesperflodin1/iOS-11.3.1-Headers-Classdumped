/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class NSArray, VideosExtrasStackTemplateViewController, VideosExtrasGridElementViewController, VideosExtrasGridSectionHeaderStyle;

@interface VideosExtrasStackCollectionCell : UICollectionViewCell {

	NSArray* _fitConstraints;
	BOOL _needsViewWillAppear;
	VideosExtrasStackTemplateViewController* _parentViewController;
	VideosExtrasGridElementViewController* _viewController;
	VideosExtrasGridSectionHeaderStyle* _sectionStyle;

}

@property (nonatomic,retain) VideosExtrasStackTemplateViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) VideosExtrasGridElementViewController * viewController;                      //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) VideosExtrasGridSectionHeaderStyle * sectionStyle;                         //@synthesize sectionStyle=_sectionStyle - In the implementation block
-(VideosExtrasStackTemplateViewController *)parentViewController;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setViewController:(VideosExtrasGridElementViewController *)arg1 ;
-(VideosExtrasGridElementViewController *)viewController;
-(void)setParentViewController:(VideosExtrasStackTemplateViewController *)arg1 ;
-(VideosExtrasGridSectionHeaderStyle *)sectionStyle;
@end

