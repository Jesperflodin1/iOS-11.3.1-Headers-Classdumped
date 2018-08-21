/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUQuickControlItemUpdating.h>

@protocol HUQuickControlItemHosting;
@class HFSimpleItemManager, NSString;

@interface HUQuickControlSimpleItemUpdater : NSObject <HFItemManagerDelegate, HUQuickControlItemUpdating> {

	id<HUQuickControlItemHosting> _itemHost;
	HFSimpleItemManager* _itemManager;

}

@property (nonatomic,readonly) HFSimpleItemManager * itemManager;                          //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,__weak,readonly) id<HUQuickControlItemHosting> itemHost;              //@synthesize itemHost=_itemHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithItemHost:(id)arg1 ;
-(void)quickControlItemHost:(id)arg1 didUpdateVisibility:(BOOL)arg2 ;
-(HFSimpleItemManager *)itemManager;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(id<HUQuickControlItemHosting>)itemHost;
-(void)_setExternalItemManagerUpdatesDisabled:(BOOL)arg1 ;
@end

