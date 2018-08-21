/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MapsSettings.bundle/MapsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>
#import <MapsSettings/MapsTheming.h>

@class MapsTheme, NSString;

@interface MapsThemeTableViewCell : MKTableViewCell <MapsTheming> {

	MapsTheme* _mapsTheme;
	/*^block*/id _selectedBackgroundColorProvider;

}

@property (nonatomic,retain) MapsTheme * mapsTheme;                         //@synthesize mapsTheme=_mapsTheme - In the implementation block
@property (nonatomic,copy) id selectedBackgroundColorProvider;              //@synthesize selectedBackgroundColorProvider=_selectedBackgroundColorProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelectedBackgroundColorProvider:(id)arg1 ;
-(void)updateTheme;
-(id)selectedBackgroundColorProvider;
-(MapsTheme *)mapsTheme;
-(void)setMapsTheme:(MapsTheme *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateSelectedBackgroundColor;
@end
