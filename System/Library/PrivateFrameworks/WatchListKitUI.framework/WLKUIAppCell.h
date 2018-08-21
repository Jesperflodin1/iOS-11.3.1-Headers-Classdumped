/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIImage, NSString, UIImageView, UILabel;

@interface WLKUIAppCell : UICollectionViewCell {

	UIImage* _image;
	NSString* _title;
	BOOL _didLayout;
	UIImageView* _imageView;
	UILabel* _titleLabel;

}
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)updateConstraints;
@end
