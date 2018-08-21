/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNContactDataSource.h>

@protocol CNCancelable, CNSchedulerProvider;
@class CNContactDataSourceSafeDelegate, CNContactFormatter, CNContactStore, CNContactStoreFilter, NSArray, CNPublishingSubject, NSMutableArray, NSString, NSDictionary, CNContactFilter;

@interface CNContactAsyncDataSource : NSObject <CNContactDataSource> {

	CNContactDataSourceSafeDelegate* _delegate;
	CNContactFormatter* _contactFormatter;
	CNContactStore* _store;
	CNContactStoreFilter* _filter;
	NSArray* _allKeysToFetchForTransientContacts;
	id<CNCancelable> _searchCancelationToken;
	id<CNSchedulerProvider> _reloadSchedulerProvider;
	CNPublishingSubject* _reloadStream;
	NSMutableArray* _resultingContacts;

}

@property (nonatomic,retain) CNContactStore * store;                                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<CNCancelable> searchCancelationToken;                                      //@synthesize searchCancelationToken=_searchCancelationToken - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> reloadSchedulerProvider;                              //@synthesize reloadSchedulerProvider=_reloadSchedulerProvider - In the implementation block
@property (nonatomic,retain) CNPublishingSubject * reloadStream;                                           //@synthesize reloadStream=_reloadStream - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultingContacts;                                           //@synthesize resultingContacts=_resultingContacts - In the implementation block
@property (nonatomic,copy) CNContactStoreFilter * filter;                                                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSArray * allKeysToFetchForTransientContacts;                                 //@synthesize allKeysToFetchForTransientContacts=_allKeysToFetchForTransientContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSDictionary * contactMatchInfos; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL canReload; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) CNContactFilter * effectiveFilter; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                        //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,readonly) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled; 
-(id)initWithStore:(id)arg1 ;
-(void)invalidate;
-(id<CNContactDataSourceDelegate>)delegate;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)reload;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CNContactStoreFilter *)filter;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(NSString *)displayName;
-(NSArray *)sections;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(id)indexPathForContact:(id)arg1 ;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3 ;
-(id)preferredForNameMeContactIdentifier;
-(void)setAllKeysToFetchForTransientContacts:(NSArray *)arg1 ;
-(BOOL)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
-(NSDictionary *)contactMatchInfos;
-(NSArray *)indexSections;
-(CNContactFilter *)effectiveFilter;
-(void)setResultingContacts:(NSMutableArray *)arg1 ;
-(void)setReloadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)setReloadStream:(CNPublishingSubject *)arg1 ;
-(CNPublishingSubject *)reloadStream;
-(id<CNSchedulerProvider>)reloadSchedulerProvider;
-(void)reloadWithRequest:(id)arg1 ;
-(NSMutableArray *)resultingContacts;
-(NSArray *)allKeysToFetchForTransientContacts;
-(void)invalidateSearch;
-(void)invalidateResults;
-(void)setSearchCancelationToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)searchCancelationToken;
-(CNContactStore *)store;
-(NSArray *)contacts;
-(BOOL)canReload;
-(void)setStore:(CNContactStore *)arg1 ;
@end

