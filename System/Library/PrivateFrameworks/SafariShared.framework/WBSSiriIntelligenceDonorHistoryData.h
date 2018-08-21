/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSDate;

@interface WBSSiriIntelligenceDonorHistoryData : NSObject {

	NSURL* _pageURL;
	NSString* _userVisibleURLString;
	NSString* _pageTitle;
	NSString* _fullPageText;
	NSString* _readerText;
	NSDate* _lastVisitedDate;
	unsigned long long _visitCount;

}

@property (nonatomic,copy) NSURL * pageURL;                              //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) NSString * userVisibleURLString;              //@synthesize userVisibleURLString=_userVisibleURLString - In the implementation block
@property (nonatomic,copy) NSString * pageTitle;                         //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,copy) NSString * fullPageText;                      //@synthesize fullPageText=_fullPageText - In the implementation block
@property (nonatomic,copy) NSString * readerText;                        //@synthesize readerText=_readerText - In the implementation block
@property (nonatomic,copy) NSDate * lastVisitedDate;                     //@synthesize lastVisitedDate=_lastVisitedDate - In the implementation block
@property (assign,nonatomic) unsigned long long visitCount;              //@synthesize visitCount=_visitCount - In the implementation block
-(void)setPageURL:(NSURL *)arg1 ;
-(NSURL *)pageURL;
-(NSString *)pageTitle;
-(NSString *)userVisibleURLString;
-(void)setUserVisibleURLString:(NSString *)arg1 ;
-(NSString *)fullPageText;
-(void)setFullPageText:(NSString *)arg1 ;
-(NSString *)readerText;
-(void)setReaderText:(NSString *)arg1 ;
-(void)setVisitCount:(unsigned long long)arg1 ;
-(void)setPageTitle:(NSString *)arg1 ;
-(NSDate *)lastVisitedDate;
-(void)setLastVisitedDate:(NSDate *)arg1 ;
-(unsigned long long)visitCount;
@end

