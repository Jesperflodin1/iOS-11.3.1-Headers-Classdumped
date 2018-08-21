/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDIndexer <CSSearchableIndexInterface>
@property (__weak) id<CSIndexExtensionDelegate> extensionDelegate; 
@optional
-(id<CSIndexExtensionDelegate>)extensionDelegate;
-(void)setExtensionDelegate:(id)arg1;
-(void)startQueryTask:(id)arg1;
-(id)taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 resultsHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(id)startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 resultsHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)startQuery:(id)arg1 withContext:(id)arg2 handler:(/*^block*/id)arg3;

@required
-(double)lastUpdateTime;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4;
-(void)clientDidCheckin:(id)arg1 protectionClass:(id)arg2 service:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)runMigration;

@end

