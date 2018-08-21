/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSControlTableCell.h>

@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell {

	NSArray* _values;
	NSDictionary* _titleDict;

}
-(void)layoutSubviews;
-(id)titleLabel;
-(void)setValue:(id)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(void)prepareForReuse;
-(id)newControl;
-(id)controlValue;
-(void)setValues:(id)arg1 titleDictionary:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
@end

