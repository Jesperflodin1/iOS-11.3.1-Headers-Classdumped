/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSLock;

@interface SUScriptNotificationObserver : NSObject {

	NSLock* _lock;
	CFSetRef _receivers;

}
-(id)init;
-(void)dealloc;
-(void)_subscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)addEventReceiver:(id)arg1 ;
-(void)removeEventReceiver:(id)arg1 ;
-(void)_endObservingNotifications;
-(void)_beginObservingNotifications;
-(void)_dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(void)_dispatchEventWithDictionary:(id)arg1 forName:(id)arg2 ;
-(id)_safariQueryDictionaryFromURL:(id)arg1 ;
-(void)_dispatchSafariEventWithDictionary:(id)arg1 andIdentifier:(id)arg2 ;
-(void)_enumerateReceiversUsingBlock:(/*^block*/id)arg1 ;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)_audioSessionsChangedNotification:(id)arg1 ;
-(void)_storeBagDidChangeNotification:(id)arg1 ;
-(void)_safariViewControllerDataUpdate:(id)arg1 ;
-(void)_softwareMapChangedNotification:(id)arg1 ;
-(void)_accessibilityPerformScrollUp;
-(void)_accessibilityPerformScrollDown;
-(void)_accessibilityPerformScrollLeft;
-(void)_accessibilityPerformScrollRight;
-(void)_accessibilityPerformEscape;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)_purchaseRequestDidSucceedNotification:(id)arg1 ;
-(void)_memoryWarningNotification:(id)arg1 ;
@end

