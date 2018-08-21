/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <Foundation/NSExtensionContext.h>

@class _NCWidgetViewController;

@interface _NCWidgetExtensionContext : NSExtensionContext {

	CGSize _maxCompactSize;
	CGSize _maxExpandedSize;
	_NCWidgetViewController* _hostViewController;
	long long _activeDisplayMode;
	long long _largestAvailableDisplayMode;

}

@property (assign,setter=_setHostViewController:,getter=_hostViewController,nonatomic,__weak) _NCWidgetViewController * hostViewController;                  //@synthesize hostViewController=_hostViewController - In the implementation block
@property (assign,setter=_setActiveDisplayMode:,getter=_activeDisplayMode,nonatomic) long long activeDisplayMode;                                            //@synthesize activeDisplayMode=_activeDisplayMode - In the implementation block
@property (assign,setter=_setLargestAvailableDisplayMode:,getter=_largestAvailableDisplayMode,nonatomic) long long largestAvailableDisplayMode;              //@synthesize largestAvailableDisplayMode=_largestAvailableDisplayMode - In the implementation block
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)_largestAvailableDisplayMode;
-(long long)_activeDisplayMode;
-(CGSize)_maximumSizeForDisplayMode:(long long)arg1 ;
-(long long)widgetLargestAvailableDisplayMode;
-(void)setWidgetLargestAvailableDisplayMode:(long long)arg1 ;
-(long long)widgetActiveDisplayMode;
-(CGSize)widgetMaximumSizeForDisplayMode:(long long)arg1 ;
-(void)_setActiveDisplayMode:(long long)arg1 ;
-(void)_setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2 ;
-(void)_setLargestAvailableDisplayMode:(long long)arg1 ;
-(void)_setHostViewController:(id)arg1 ;
-(id)_hostViewController;
-(BOOL)widgetIsForeground;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

