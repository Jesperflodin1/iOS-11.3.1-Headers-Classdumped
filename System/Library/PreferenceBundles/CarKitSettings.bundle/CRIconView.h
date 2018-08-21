/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CarKitSettings-Structs.h>
#import <UIKit/UIView.h>
#import <CarKitSettings/CRApplicationDisplayable.h>

@class CRApplicationIcon, UIImageView, UILabel, NSString;

@interface CRIconView : UIView <CRApplicationDisplayable> {

	UIImageView* _iconImageView;
	UILabel* _iconName;
	UIImageView* _editImage;
	CRApplicationIcon* _applicationIcon;

}

@property (nonatomic,readonly) UIImageView * iconImageView;                             //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) UILabel * iconName;                                      //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,readonly) UIImageView * editImage;                                 //@synthesize editImage=_editImage - In the implementation block
@property (nonatomic,__weak,readonly) CRApplicationIcon * applicationIcon;              //@synthesize applicationIcon=_applicationIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)_imageSizeForCellWidth:(double)arg1 ;
-(UIImageView *)editImage;
-(void)configureWithApplication:(id)arg1 visible:(BOOL)arg2 editImage:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)iconImageView;
-(UILabel *)iconName;
-(CRApplicationIcon *)applicationIcon;
-(void)setEditingEnabled:(BOOL)arg1 ;
@end
