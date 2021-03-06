/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, ACAccountStore;

@interface CalendarAccountsController : NSObject {

	NSMutableDictionary* _lastStoreListingRefreshDates;
	NSObject*<OS_dispatch_queue> _refreshQueue;
	ACAccountStore* _accountStore;

}
+(id)sharedInstance;
+(void)invalidate;
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)accountStore;
-(int)sortOrderForSourceType:(long long)arg1 ;
-(int)sortOrderForSource:(id)arg1 ;
-(BOOL)sourceIsManaged:(id)arg1 ;
-(id)_accountForAccountIdentifier:(id)arg1 ;
-(id)_displayAccountForAccountWithIdentifier:(id)arg1 ;
-(id)accountTypeTitleForSourceWithExternalId:(id)arg1 ;
-(id)_localizedTitleForLocalSourceUsedAtBeginningOfSentence:(BOOL)arg1 ;
-(id)titleForSource:(id)arg1 forBeginningOfSentence:(BOOL)arg2 ;
-(id)accountTypeTitleForSource:(id)arg1 ;
-(int)sortOrderForStoreType:(int)arg1 ;
-(BOOL)sourceListingNeedsRefresh:(id)arg1 ;
-(void)refreshListingForSource:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
@end

