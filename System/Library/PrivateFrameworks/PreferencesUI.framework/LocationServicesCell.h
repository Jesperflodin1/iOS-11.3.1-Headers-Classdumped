/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSwitchTableCell.h>

@class LocationUsageMixin;

@interface LocationServicesCell : PSSwitchTableCell {

	LocationUsageMixin* _location;

}

@property (nonatomic,readonly) LocationUsageMixin * location;              //@synthesize location=_location - In the implementation block
-(void)layoutSubviews;
-(LocationUsageMixin *)location;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

