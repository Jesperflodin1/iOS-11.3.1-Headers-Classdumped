/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSSiteMetadataImageCacheSettingsEntry.h>

@class NSString, NSDate, UIColor;

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry> {

	BOOL _lastRequestWasInUserLoadedWebpage;
	BOOL _iconInCache;
	BOOL _requestDidSucceed;
	BOOL _higherPriorityIconDownloadFailedDueToNetworkError;
	long long _databaseID;
	NSString* _host;
	NSDate* _lastRequestDate;
	long long _requestCount;
	UIColor* _extractedColor;
	long long _transparencyAnalysisResult;

}

@property (nonatomic,copy) NSString * host;                                                       //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSDate * lastRequestDate;                                            //@synthesize lastRequestDate=_lastRequestDate - In the implementation block
@property (assign,nonatomic) BOOL lastRequestWasInUserLoadedWebpage;                              //@synthesize lastRequestWasInUserLoadedWebpage=_lastRequestWasInUserLoadedWebpage - In the implementation block
@property (assign,nonatomic) long long requestCount;                                              //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,getter=isIconInCache,nonatomic) BOOL iconInCache;                               //@synthesize iconInCache=_iconInCache - In the implementation block
@property (assign,nonatomic) BOOL requestDidSucceed;                                              //@synthesize requestDidSucceed=_requestDidSucceed - In the implementation block
@property (nonatomic,retain) UIColor * extractedColor;                                            //@synthesize extractedColor=_extractedColor - In the implementation block
@property (assign,nonatomic) long long transparencyAnalysisResult;                                //@synthesize transparencyAnalysisResult=_transparencyAnalysisResult - In the implementation block
@property (assign,nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError;              //@synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadStatusFlags; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long databaseID;                                                //@synthesize databaseID=_databaseID - In the implementation block
+(id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg9 ;
-(void)setRequestCount:(long long)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)requestCount;
-(NSString *)host;
-(long long)databaseID;
-(void)setDatabaseID:(long long)arg1 ;
-(BOOL)isIconInCache;
-(BOOL)requestDidSucceed;
-(BOOL)higherPriorityIconDownloadFailedDueToNetworkError;
-(BOOL)lastRequestWasInUserLoadedWebpage;
-(id)initWithHost:(id)arg1 ;
-(void)setLastRequestWasInUserLoadedWebpage:(BOOL)arg1 ;
-(void)setIconInCache:(BOOL)arg1 ;
-(void)setRequestDidSucceed:(BOOL)arg1 ;
-(void)setHigherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg1 ;
-(id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg9 ;
-(UIColor *)extractedColor;
-(unsigned long long)downloadStatusFlags;
-(long long)transparencyAnalysisResult;
-(void)setExtractedColor:(UIColor *)arg1 ;
-(void)setTransparencyAnalysisResult:(long long)arg1 ;
-(id)initWithSQLiteRow:(id)arg1 ;
-(void)setLastRequestDate:(NSDate *)arg1 ;
-(NSDate *)lastRequestDate;
@end

