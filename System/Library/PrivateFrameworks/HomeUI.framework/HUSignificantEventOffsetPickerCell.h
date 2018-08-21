/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@protocol HUSignificantEventOffsetPickerDelegate;
@class NSString, NSDateComponents, UIPickerView, NSArray;

@interface HUSignificantEventOffsetPickerCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource> {

	NSString* _significantEvent;
	NSDateComponents* _currentOffset;
	id<HUSignificantEventOffsetPickerDelegate> _delegate;
	NSDateComponents* _selectedOffset;
	UIPickerView* _pickerView;
	NSArray* _offsetDateComponentOptions;

}

@property (nonatomic,readonly) UIPickerView * pickerView;                                             //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,retain) NSArray * offsetDateComponentOptions;                                    //@synthesize offsetDateComponentOptions=_offsetDateComponentOptions - In the implementation block
@property (nonatomic,retain) NSString * significantEvent;                                             //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,retain) NSDateComponents * currentOffset;                                        //@synthesize currentOffset=_currentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<HUSignificantEventOffsetPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDateComponents * selectedOffset;                                       //@synthesize selectedOffset=_selectedOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultOffsetDateComponentOptions;
-(id<HUSignificantEventOffsetPickerDelegate>)delegate;
-(UIPickerView *)pickerView;
-(void)setDelegate:(id<HUSignificantEventOffsetPickerDelegate>)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSDateComponents *)currentOffset;
-(void)_updateOffsetDateComponentOptions;
-(NSArray *)offsetDateComponentOptions;
-(void)setOffsetDateComponentOptions:(NSArray *)arg1 ;
-(id)_titleForOffsetComponents:(id)arg1 ;
-(NSDateComponents *)selectedOffset;
-(void)setCurrentOffset:(NSDateComponents *)arg1 ;
-(void)setSelectedOffset:(NSDateComponents *)arg1 ;
-(NSString *)significantEvent;
-(void)setSignificantEvent:(NSString *)arg1 ;
@end
