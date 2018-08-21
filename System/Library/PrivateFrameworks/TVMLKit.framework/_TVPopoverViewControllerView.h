/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UITableView, UIButton;

@interface _TVPopoverViewControllerView : UIView {

	UITableView* _tableView;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UITableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(UIButton *)cancelButton;
-(void)_configureSubviews;
@end
