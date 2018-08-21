/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCInstallationWarningCell : UITableViewCell {

	UILabel* _warningLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) NSArray * constraints;               //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UILabel * warningLabel;              //@synthesize warningLabel=_warningLabel - In the implementation block
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)constraints;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)_setupConstraints;
-(void)_setup;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
@end

