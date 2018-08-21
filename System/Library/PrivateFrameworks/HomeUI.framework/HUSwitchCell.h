/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol HUSwitchCellDelegate;
@class HFItem, NSString;

@interface HUSwitchCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	HFItem* _item;
	id<HUSwitchCellDelegate> _delegate;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (assign,nonatomic,__weak) id<HUSwitchCellDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
-(HFItem *)item;
-(id<HUSwitchCellDelegate>)delegate;
-(void)setDelegate:(id<HUSwitchCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(BOOL)isDisabled;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(id)_switch;
-(void)_toggleOn:(id)arg1 ;
@end
