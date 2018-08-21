/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class PUEditPlugin;

@interface PUEditPluginActivity : UIActivity {

	PUEditPlugin* _plugin;

}

@property (nonatomic,readonly) PUEditPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
+(long long)activityCategory;
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(PUEditPlugin *)plugin;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)initWithPlugin:(id)arg1 ;
-(BOOL)_isHiddenByDefault;
@end

