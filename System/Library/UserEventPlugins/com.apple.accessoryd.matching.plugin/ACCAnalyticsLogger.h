/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UserEventPlugins/com.apple.accessoryd.matching.plugin/com.apple.accessoryd.matching
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class ACCAnalyticsLoggerSQLiteStore, NSURL, NSString, NSObject, NSDictionary, NSArray;

@interface ACCAnalyticsLogger : NSObject <NSURLSessionDelegate> {

	ACCAnalyticsLoggerSQLiteStore* _database;
	NSURL* _splunkUploadURL;
	NSString* _splunkTopicName;
	NSURL* _splunkBagURL;
	NSObject*<OS_dispatch_queue> _queue;
	long long _secondsBetweenUploads;
	NSDictionary* _metricsBase;
	NSArray* _blacklistedFields;
	NSArray* _blacklistedEvents;
	unsigned _allowInsecureSplunkCert : 1;
	unsigned _disableLogging : 1;
	unsigned _disableUploads : 1;
	unsigned _ignoreServersMessagesTellingUsToGoAway : 1;

}

@property (readonly) NSObject*<OS_dispatch_queue> splunkLoggingQueue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) NSURL * splunkUploadURL;                                      //@synthesize splunkUploadURL=_splunkUploadURL - In the implementation block
@property (readonly) NSString * splunkTopicName;                                   //@synthesize splunkTopicName=_splunkTopicName - In the implementation block
@property (readonly) NSURL * splunkBagURL;                                         //@synthesize splunkBagURL=_splunkBagURL - In the implementation block
@property (readonly) BOOL allowsInsecureSplunkCert; 
@property (assign) BOOL ignoreServerDisablingMessages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addOSVersion:(id)arg1 ;
+(long long)fuzzyDaysSinceDate:(id)arg1 ;
+(id)databasePath;
+(id)logger;
-(void)resetUploadDate:(BOOL)arg1 ;
-(NSURL *)splunkBagURL;
-(NSURL *)splunkUploadURL;
-(id)eventDictForEventName:(id)arg1 withAttributes:(id)arg2 ;
-(BOOL)forceUploadWithError:(id*)arg1 ;
-(id)eventDictWithBlacklistedFieldsStrippedFrom:(id)arg1 ;
-(id)getLoggingJSON:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_onQueuePostJSON:(id)arg1 error:(id*)arg2 ;
-(void)logEventNamed:(id)arg1 withAttributes:(id)arg2 ;
-(void)setIgnoreServerDisablingMessages:(BOOL)arg1 ;
-(BOOL)ignoreServerDisablingMessages;
-(BOOL)allowsInsecureSplunkCert;
-(NSString *)splunkTopicName;
-(void)setAllowsInsecureSplunkCert:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)splunkLoggingQueue;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)datePropertyForKey:(id)arg1 ;
-(void)setDateProperty:(id)arg1 forKey:(id)arg2 ;
@end
