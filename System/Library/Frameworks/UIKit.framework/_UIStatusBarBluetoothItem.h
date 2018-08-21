/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarImageView;

@interface _UIStatusBarBluetoothItem : _UIStatusBarIndicatorItem {

	_UIStatusBarImageView* _batteryImageView;

}

@property (nonatomic,retain) _UIStatusBarImageView * batteryImageView;              //@synthesize batteryImageView=_batteryImageView - In the implementation block
+(id)batteryDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)indicatorEntryKey;
-(id)imageNameForUpdate:(id)arg1 ;
-(id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2 ;
-(_UIStatusBarImageView *)batteryImageView;
-(void)setBatteryImageView:(_UIStatusBarImageView *)arg1 ;
@end
