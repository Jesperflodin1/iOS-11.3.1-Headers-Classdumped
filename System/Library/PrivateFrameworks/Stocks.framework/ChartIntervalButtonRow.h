/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@protocol ChartIntervalButtonRowDelegate;
@class NSArray, ChartIntervalButton;

@interface ChartIntervalButtonRow : UIView {

	id<ChartIntervalButtonRowDelegate> _delegate;
	NSArray* _intervalButtons;
	ChartIntervalButton* _selectedButton;
	long long _maxChartInterval;

}

@property (assign,nonatomic,__weak) id<ChartIntervalButtonRowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * intervalButtons;                                       //@synthesize intervalButtons=_intervalButtons - In the implementation block
@property (assign,nonatomic,__weak) ChartIntervalButton * selectedButton;                     //@synthesize selectedButton=_selectedButton - In the implementation block
@property (assign,nonatomic) long long maxChartInterval;                                      //@synthesize maxChartInterval=_maxChartInterval - In the implementation block
-(void)layoutSubviews;
-(id<ChartIntervalButtonRowDelegate>)delegate;
-(void)setDelegate:(id<ChartIntervalButtonRowDelegate>)arg1 ;
-(ChartIntervalButton *)selectedButton;
-(void)setSelectedButton:(ChartIntervalButton *)arg1 ;
-(void)sizeToBoldLabels;
-(void)intervalButtonsTapped:(id)arg1 ;
-(long long)maxChartInterval;
-(long long)intervalForTouchLocation:(CGPoint)arg1 ;
-(NSArray *)intervalButtons;
-(void)selectChartIntervalButtonForInterval:(long long)arg1 ;
-(void)setMaxChartInterval:(long long)arg1 ;
-(id)initWithMaxChartInterval:(long long)arg1 chartIntervalButtonRowDelegate:(id)arg2 ;
-(void)updateMaxChartInterval:(long long)arg1 ;
-(void)setIntervalButtons:(NSArray *)arg1 ;
@end

