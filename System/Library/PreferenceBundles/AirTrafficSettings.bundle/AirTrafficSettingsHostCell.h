/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficSettings/AirTrafficSettings-Structs.h>
#import <Preferences/PSTableCell.h>

@class UILabel, NSString;

@interface AirTrafficSettingsHostCell : PSTableCell {

	UILabel* _syncedClassesLabel;
	UILabel* _timestampLabel;
	NSString* _syncedClassesText;
	NSString* _timestampText;
	double _textWidth;
	CGRect _textRect;

}

@property (nonatomic,retain) NSString * syncedClassesText;              //@synthesize syncedClassesText=_syncedClassesText - In the implementation block
@property (nonatomic,retain) NSString * timestampText;                  //@synthesize timestampText=_timestampText - In the implementation block
@property (assign,nonatomic) CGRect textRect;                           //@synthesize textRect=_textRect - In the implementation block
@property (assign,nonatomic) double textWidth;                          //@synthesize textWidth=_textWidth - In the implementation block
-(void)setTextRect:(CGRect)arg1 ;
-(void)setSyncedClassesText:(NSString *)arg1 ;
-(void)setTimestampText:(NSString *)arg1 ;
-(NSString *)timestampText;
-(NSString *)syncedClassesText;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTextWidth:(double)arg1 ;
-(double)textWidth;
-(CGRect)textRect;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
@end
