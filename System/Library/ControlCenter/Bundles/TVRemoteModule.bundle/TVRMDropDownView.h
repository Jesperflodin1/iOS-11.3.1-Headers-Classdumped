/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/TVRemoteModule.bundle/TVRemoteModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteModule/TVRemoteModule-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TVRMDropDownViewDelegate;
@class NSArray, NSString, UIButton, UIView, UITableView;

@interface TVRMDropDownView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate> {

	BOOL _isExpanded;
	id<TVRMDropDownViewDelegate> _delegate;
	NSArray* _items;
	NSString* _title;
	UIButton* _accessoryButton;
	UIView* _titleView;
	UIButton* _titleButton;
	UITableView* _tableView;
	UIView* _tableViewTopSeperator;
	UIView* _tableViewBottomSeperator;
	NSArray* _accessoryLandscapeLayoutConstraints;
	NSArray* _accessoryPortraitLayoutConstraints;
	NSArray* _noAccessoryButtonConstraints;
	double _baseHeight;

}

@property (nonatomic,retain) UIView * titleView;                                         //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIButton * titleButton;                                     //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * tableViewTopSeperator;                             //@synthesize tableViewTopSeperator=_tableViewTopSeperator - In the implementation block
@property (nonatomic,retain) UIView * tableViewBottomSeperator;                          //@synthesize tableViewBottomSeperator=_tableViewBottomSeperator - In the implementation block
@property (nonatomic,retain) NSArray * accessoryLandscapeLayoutConstraints;              //@synthesize accessoryLandscapeLayoutConstraints=_accessoryLandscapeLayoutConstraints - In the implementation block
@property (nonatomic,retain) NSArray * accessoryPortraitLayoutConstraints;               //@synthesize accessoryPortraitLayoutConstraints=_accessoryPortraitLayoutConstraints - In the implementation block
@property (nonatomic,retain) NSArray * noAccessoryButtonConstraints;                     //@synthesize noAccessoryButtonConstraints=_noAccessoryButtonConstraints - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                            //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic) double baseHeight;                                          //@synthesize baseHeight=_baseHeight - In the implementation block
@property (assign,nonatomic,__weak) id<TVRMDropDownViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIButton * accessoryButton;                                 //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_toggleState;
-(double)_contentHeightForPreferredContentSizeCategory;
-(void)_updateAccessoryButtonLayoutForInterfaceOrientation:(long long)arg1 ;
-(BOOL)_accessibilityFontSizesEnabled;
-(void)_setupPortraitConstraints;
-(void)_setupLandscapeConstraints;
-(id)initWithBaseHeight:(double)arg1 ;
-(void)setAccessoryPortraitLayoutConstraints:(NSArray *)arg1 ;
-(NSArray *)accessoryPortraitLayoutConstraints;
-(NSArray *)accessoryLandscapeLayoutConstraints;
-(UIView *)tableViewTopSeperator;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(void)setTableViewTopSeperator:(UIView *)arg1 ;
-(void)setTableViewBottomSeperator:(UIView *)arg1 ;
-(void)setAccessoryLandscapeLayoutConstraints:(NSArray *)arg1 ;
-(UIButton *)accessoryButton;
-(void)setNoAccessoryButtonConstraints:(NSArray *)arg1 ;
-(NSArray *)noAccessoryButtonConstraints;
-(void)setBaseHeight:(double)arg1 ;
-(UIView *)tableViewBottomSeperator;
-(double)baseHeight;
-(void)layoutSubviews;
-(id<TVRMDropDownViewDelegate>)delegate;
-(void)setDelegate:(id<TVRMDropDownViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(NSString *)title;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setTitleView:(UIView *)arg1 ;
-(UIView *)titleView;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(UIButton *)titleButton;
-(void)setTitleButton:(UIButton *)arg1 ;
-(void)toggleState;
@end

