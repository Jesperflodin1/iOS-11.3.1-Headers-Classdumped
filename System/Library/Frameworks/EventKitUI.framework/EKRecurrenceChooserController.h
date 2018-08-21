/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKRecurrenceChooserControllerDelegate;
@class UIColor, NSDate;

@interface EKRecurrenceChooserController : NSObject {

	id<EKRecurrenceChooserControllerDelegate> _delegate;
	UIColor* _backgroundColor;
	NSDate* _date;

}

@property (copy) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (__weak) id<EKRecurrenceChooserControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) long long frequency; 
+(int)dayFromNumber:(long long)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)notifyDelegate;
-(id<EKRecurrenceChooserControllerDelegate>)delegate;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<EKRecurrenceChooserControllerDelegate>)arg1 ;
-(NSDate *)date;
-(long long)numberOfRows;
-(long long)frequency;
-(void)setDate:(NSDate *)arg1 ;
-(id)startDateComponents:(unsigned long long)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(BOOL)drawBackgroundForRow:(long long)arg1 ;
-(void)rowTapped:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(id)cellForRow:(long long)arg1 ;
@end

