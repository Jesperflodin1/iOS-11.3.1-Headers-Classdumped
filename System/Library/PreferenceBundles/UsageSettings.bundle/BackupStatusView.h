/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UIProgressView, UILabel, NSMutableSet, NSError, NSString, NSDateComponentsFormatter;

@interface BackupStatusView : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UIProgressView* _progressBar;
	UILabel* _statusLabel;
	UILabel* _timeRemainingLabel;
	UILabel* _backupIssueLabel;
	UILabel* _lastBackupLabel;
	double _backupProgress;
	int _animatingToState;
	BOOL _animatedToEnabled;
	NSMutableSet* _visibleSubviews;
	NSError* _backupError;
	NSString* _footerText;
	NSDateComponentsFormatter* _durationFormatter;

}

@property (nonatomic,retain) NSError * backupError;              //@synthesize backupError=_backupError - In the implementation block
@property (nonatomic,retain) NSString * footerText;              //@synthesize footerText=_footerText - In the implementation block
@property (assign,nonatomic) double backupProgress;              //@synthesize backupProgress=_backupProgress - In the implementation block
-(void)setLastBackupText:(id)arg1 ;
-(void)_sizeToFitWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setBackupError:(NSError *)arg1 ;
-(void)setBackupProgress:(double)arg1 timeIntervalRemaining:(double)arg2 ;
-(NSError *)backupError;
-(void)updateViewsForBackupState:(int)arg1 restoreState:(int)arg2 enabled:(BOOL)arg3 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)didMoveToSuperview;
-(double)progress;
-(double)backupProgress;
-(void)setBackupProgress:(double)arg1 ;
-(void)_layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(NSString *)footerText;
-(void)setFooterText:(NSString *)arg1 ;
@end
