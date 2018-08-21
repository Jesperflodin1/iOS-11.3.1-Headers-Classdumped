/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivity.h>

@class _SFReloadOptionsController;

@interface _SFRequestDesktopSiteUIActivity : _SFActivity {

	_SFReloadOptionsController* _reloadOptionsController;

}

@property (nonatomic,readonly) _SFReloadOptionsController * reloadOptionsController;              //@synthesize reloadOptionsController=_reloadOptionsController - In the implementation block
-(id)init;
-(id)activityTitle;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(_SFReloadOptionsController *)reloadOptionsController;
-(id)initWithReloadOptionsController:(id)arg1 ;
-(void)performActivityWithCompletion:(/*^block*/id)arg1 ;
@end
